# irisClassificationUsingSVM.py
# This script performs classification on the Iris dataset using Support Vector Machine (SVM).
# It includes data loading, preprocessing, model training, evaluation, and prediction.
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns


from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.svm import SVC
from sklearn.metrics import classification_report, confusion_matrix, accuracy_score


# Load Iris dataset
iris = load_iris()
df = pd.DataFrame(data=iris.data, columns=iris.feature_names)
df['species'] = iris.target
df['species_name'] = df['species'].map({i: name for i, name in enumerate(iris.target_names)})

print(df.head())


sns.pairplot(df, hue='species_name')
plt.show()

X = df[iris.feature_names]
y = df['species']

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=1)

scaler = StandardScaler()
X_train_scaled = scaler.fit_transform(X_train)
X_test_scaled = scaler.transform(X_test)


# Create SVM model with linear kernel
model = SVC(kernel='linear')  # try 'rbf' or 'poly' for other kernels
model.fit(X_train_scaled, y_train)


y_pred = model.predict(X_test_scaled)

print("Accuracy:", accuracy_score(y_test, y_pred))
print("\nClassification Report:\n", classification_report(y_test, y_pred))
print("\nConfusion Matrix:\n", confusion_matrix(y_test, y_pred))


sample = np.array([[5.8, 3.0, 4.9, 1.8]])  # Example values
sample_scaled = scaler.transform(sample)
prediction = model.predict(sample_scaled)
print("Predicted Species:", iris.target_names[prediction[0]])