# Step : 1 : Import Libraries
import pandas as pd
import numpy as np
import matplotlib.pyplot as p
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error, r2_score

#Create a simple dataset
data = {
    'Hour': [1, 2, 3, 4, 5, 6, 7, 8, 9, 10],
    'Scores': [10, 20, 30, 40, 50, 60, 65, 75, 85, 95]
}
df = pd.DataFrame(data)

# Step 2: Visualize Data
p.scatter(df['Hour'], df['Scores'], color='red')
p.title('Study Hours vs Scores')
p.xlabel('Study Hours')
p.ylabel('Scores')
p.grid()
p.show()

# Step 4: Prepare Data
x = df[['Hour']] #Feature
y = df['Scores'] #Target

#Split the data into training and testing sets
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2, random_state=42)

# Step 5: Train the model
model = LinearRegression()
model.fit(x_train, y_train)

# Step 6: Make Predictions
y_pred = model.predict(x_test)

# Step 7: Evaluate the model
print("Mean Squared Error:", mean_squared_error(y_test, y_pred))
print("R-squared:", r2_score(y_test, y_pred))

# Step 8: Visualize Predictions
p.scatter(x_test, y_test, color='blue', label='Actual Scores')
p.scatter(x_test, y_pred, color='green', label='Predicted Scores')
p.plot(x_test, y_pred, color='black', linewidth=2, label='Regression Line')
p.title('Actual vs Predicted Scores')
p.xlabel('Study Hours')
p.ylabel('Scores')
p.legend()
p.grid()
p.show()

# Step 9: Predict for new data
hours = 10
predicted_score = model.predict([[hours]])
print(f"Predicted score for {hours} hours of study: {predicted_score[0]}")
