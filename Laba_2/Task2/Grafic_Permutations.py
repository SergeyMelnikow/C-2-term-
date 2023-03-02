import numpy as np
from matplotlib import pyplot as plt
import pandas as pd
f = pd.read_csv("PERMUTATIONS(N).csv")

x = f["Number"]
y = np.array(f["Microseconds"])
err = np.array(x)
plt.scatter(f["Number"],(f["Microseconds"]),s=5,c='r',label = 'Число перестановок (от предварительного шага)')



plt.xlabel("STEP")
plt.ylabel("Microseconds")
plt.grid()
plt.minorticks_on()
plt.legend()
plt.show()