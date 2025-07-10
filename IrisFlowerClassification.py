import numpy as np
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import OneHotEncoder
from sklearn.metrics import confusion_matrix, accuracy_score, precision_score, recall_score, f1_score

# 1. Load dataset
iris = load_iris()
X = iris.data
y = iris.target.reshape(-1, 1)  # Make y a column vector

# 2. One-hot encode labels for multiclass logistic regression
encoder = OneHotEncoder(sparse_output=False)
y_encoded = encoder.fit_transform(y)

# 3. Train-test split
X_train, X_test, y_train, y_test = train_test_split(X, y_encoded, test_size=0.2, random_state=42)

# 4. Add bias term to X
def add_bias(X):
    return np.c_[np.ones((X.shape[0], 1)), X]

X_train_bias = add_bias(X_train)
X_test_bias = add_bias(X_test)

# 5. Initialize weights
n_classes = y_encoded.shape[1]
n_features = X_train_bias.shape[1]
weights = np.zeros((n_features, n_classes))

# 6. Softmax function
def softmax(z):
    exp = np.exp(z - np.max(z, axis=1, keepdims=True))
    return exp / np.sum(exp, axis=1, keepdims=True)

# 7. Training using gradient descent
def train(X, y, weights, lr=0.01, epochs=5000):
    for epoch in range(epochs):
        scores = np.dot(X, weights)
        probs = softmax(scores)
        loss = -np.mean(np.sum(y * np.log(probs + 1e-9), axis=1))
        
        gradient = np.dot(X.T, (probs - y)) / X.shape[0]
        weights -= lr * gradient

        if epoch % 500 == 0:
            print(f"Epoch {epoch}, Loss: {loss:.4f}")

    return weights

weights = train(X_train_bias, y_train, weights)

# 8. Make predictions
def predict(X, weights):
    scores = np.dot(X, weights)
    probs = softmax(scores)
    return np.argmax(probs, axis=1)

y_pred = predict(X_test_bias, weights)
y_test_labels = np.argmax(y_test, axis=1)

# 9. Compute metrics
cm = confusion_matrix(y_test_labels, y_pred)
accuracy = accuracy_score(y_test_labels, y_pred)
precision = precision_score(y_test_labels, y_pred, average=None)
recall = recall_score(y_test_labels, y_pred, average=None)
f1 = f1_score(y_test_labels, y_pred, average=None)

print("\nConfusion Matrix:")
print(cm)
print(f"\nAccuracy: {accuracy:.4f}")
print(f"Precision per class: {precision}")
print(f"Recall per class: {recall}")
print(f"F1-score per class: {f1}")
