#Step 1: Import Required Libraries
import numpy as np
import tensorflow as tf
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense



#Step 2: Prepare the Dataset
from tensorflow.keras.datasets import mnist
from tensorflow.keras.utils import to_categorical

# Load dataset
(X_train, y_train), (X_test, y_test) = mnist.load_data()

# Normalize the pixel values
X_train = X_train.reshape(-1, 28*28).astype('float32') / 255
X_test = X_test.reshape(-1, 28*28).astype('float32') / 255

# One-hot encode labels
y_train = to_categorical(y_train)
y_test = to_categorical(y_test)


#Step 3: Build the Model
model = Sequential()
model.add(Dense(128, activation='relu', input_shape=(784,)))
model.add(Dense(64, activation='relu'))
model.add(Dense(10, activation='softmax'))  # 10 classes in MNIST


 #Step 4: Compile the Model
model.compile(optimizer='adam',
              loss='categorical_crossentropy',
              metrics=['accuracy'])
model.fit(X_train, y_train, epochs=10, batch_size=32, validation_data=(X_test, y_test))

#Step 6: Evaluate the Model
loss, accuracy = model.evaluate(X_test, y_test)
print(f"Test Accuracy: {accuracy * 100:.2f}%")

predictions = model.predict(X_test)
predicted_classes = np.argmax(predictions, axis=1)
# Print first 5 predictions
print(predicted_classes[:5])

#Predict for new data
from tensorflow.keras.preprocessing import image
import matplotlib.pyplot as plt

# Load your new image as a numpy array (example)
new_img = X_test[0]  # Simulating new data for demo
plt.imshow(new_img.reshape(28,28), cmap='gray')
plt.title("New Input Image")
plt.show()

# Reshape and normalize
new_img = new_img.reshape(1, 784).astype('float32')  # Reshape to match model input

# Predict
new_prediction = model.predict(new_img)
predicted_class = np.argmax(new_prediction)

print(f"Predicted Digit: {predicted_class}")

model.save('my_model.h5')  # Save
new_model = tf.keras.models.load_model('my_model.h5')  # Load

