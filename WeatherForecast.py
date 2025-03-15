import numpy as np
import pandas as pd

df = pd.read_csv()
print("Size of weather data frame is :",df.shape)

print(df[0:5])

print(df.count().sort_values())
