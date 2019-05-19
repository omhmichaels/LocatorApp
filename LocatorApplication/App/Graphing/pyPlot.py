

import pandas as pd
import matplotlib.pyplot as plt


# Read dataset into pandas dataframe
df = pd.read_csv("data.csv")

# Show first five rows of data
#df.head()

# Raw plot with pandas 
#df.plot()


# matplotlib scatter plot
plt.scatter(df["x"], df["y"])

# matplotlib line plot
plt.plot(df["x"], df["y"])

# Save figure 
plt.savefig("fig1.png")


