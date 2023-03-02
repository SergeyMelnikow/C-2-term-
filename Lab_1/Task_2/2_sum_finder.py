import numpy as np
from matplotlib import pyplot as plt
import pandas as pd
f = pd.read_csv("2_sum.csv")

x = np.array(f["Number"])
y = np.array(f["Microseconds"])
x = x*x
plt.scatter(x,y,s=10,c='r',label = 'квадратичный алгоритм (линеаризовано по оси x как x^2)')

x=x[1:10]
y=y[1:10]
k=(((y*x).mean()-(x).mean()*(y.mean()))/((x*x).mean()-(x).mean()**2))
b=y.mean()-k*(x).mean()
dk = (1/(103**(1/2)))*(((y**2).mean()-(y.mean())**2)/((x**2).mean()-(x.mean())**2)-k**2)**0.5
print(k,dk,"\n")
x=np.linspace(0,40100**2,1000)
y=np.array([k*i+b for i in x])
plt.plot(x,y,'g',linestyle = '--',label = 'по МНК')


plt.xlabel("Number")
plt.ylabel("Microseconds")
plt.grid()
plt.minorticks_on()
plt.legend()
plt.show()