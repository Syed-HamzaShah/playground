#Import the required libraries
import numpy as np #linear algebra
import pandas as pd #data processing, CSV file I/O (e.g. pd.read_csv)

#Load the csv files as data frame.
df = pd.read_csv('C://Users//NeelTemp//Desktop//weatherAUS.csv')
print("Size of weather data frame is :",df.shape)

#Display data
print(df[0:5])

# Checking null values
print(df.count().sort_values())

# As we can see that the columns with more than 30% of missing values are not useful for us. So we can drop them.
df = df.drop(columns=['Sunshine','Evaporation','Cloud3pm','Cloud9am','Location','RISK_MM','Date'],axis=1)
print(df.shape)

# Let us get rid of the rows with missing values.
df = df.dropna(how='any')
print(df.shape)

#Its time to remove the outliers. We will use Z-score to detect and remove the outliers.
from scipy import stats
z = np.abs(stats.zscore(df._get_numeric_data()))
print(z)
df= df[(z < 3).all(axis=1)]
print(df.shape)

#Lets deal with the categorical columns now.
#simply convert yes to 1 and no to 0.
df['RainToday'].replace({'No': 0, 'Yes': 1},inplace = True)
df['RainTomorrow'].replace({'No': 0, 'Yes': 1},inplace = True)

#see unique values and convert them to int using get_dummies
categorical_columns = ['WindGustDir', 'WindDir3pm', 'WindDir9am']
for col in categorical_columns:
    print(np.unique(df[col]))
#transform the categorical columns
df = pd.get_dummies(df, columns=categorical_columns)
print(df.iloc[4:9])

#next step is to normalize the data
#normalize the data
from sklearn import preprocessing
scaler = preprocessing.MinMaxScaler()
scaler.fit(df)
df = pd.DataFrame(scaler.transform(df), index=df.index, columns=df.columns)
print(df.iloc[4:10])

#split the data into training and testing set
from sklearn.feature_selection import SelectKBest, chi2
x = df.loc[:,df.columns!='RainTomorrow']
y = df[['RainTomorrow']]
selector = SelectKBest(chi2, k=3)
selector.fit(x, y)
x_new = selector.transform(x)
print(x.columns[selector.get_support(indices=True)]) #top 3 columns

#lets get hold of the important features and assign them as x
df = df[['Humidity3pm', 'Rainfall', 'RainToday', 'RainTomorrow']]
x = df[['Humidity3pm']] 
y = df[['RainTomorrow']]

#data modeling
#logistic regression
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score
import time

#calculating the accuracy and time taken by logistic regression model
t0 = time.time()
#data splicing
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.25)
clf_rf = RandomForestClassifier(n_estimators=100, max_depth=4, random_state=0)

#building the model using training data
clf_rf.fit(x_train, y_train)

#Evaluating the model using testing data
y_pred = clf_rf.predict(x_test)
score = accuracy_score(y_test, y_pred)
print('Accuracy :', score)
print('Accuracy using random forest:', score)
print('Time taken :' , time.time()-t0)

#Decision tree
from sklearn.tree import DecisionTreeClassifier
from sklearn.model_selection import train_test_split

#calculating the accuracy and time taken by decision tree model
t0 = time.time()
#data splicing
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.25)
clf_svc = svm.SVC(kernel='linear')

#building the model using training data
clf_svc.fit(x_train, y_train)

#Evaluating the model using testing data
y_pred = clf_svc.predict(x_test)
score = accuracy_score(y_test, y_pred)

print('Accuracy using SVM:', score)
print('Time taken :' , time.time()-t0)
