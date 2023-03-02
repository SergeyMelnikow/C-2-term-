import numpy as np
from matplotlib import pyplot as plt
import pandas as pd
f = pd.read_csv("linear_sum_finder.csv")

x = np.array(f["Number"])
y = np.array(f["Microseconds"])
plt.scatter(x,y,s=10,c='r',label = 'линейный алгоритм')


k=(((y*x).mean())/((x*x).mean()))
print(k,"\n")
x=np.linspace(0,200000,1000)
y=np.array([k*i for i in x])
plt.plot(x,y,'g',linestyle = '--',label = 'по МНК')


plt.xlabel("Number")
plt.ylabel("Microseconds")
plt.grid()
plt.minorticks_on()
plt.legend()
plt.show()