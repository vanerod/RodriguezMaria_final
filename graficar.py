import numpy as np
import matplotlib.pyplot as plt


datost=np.genfromtxt("datos.dat" , usecols= 0)
datosx=np.genfromtxt("datos.dat" , usecols= 1)
datosy=np.genfromtxt("datos.dat" , usecols= 2)



plt.plot(datosx , datosy)
plt.savefig("RodriguezMaria_final_15.pdf")
