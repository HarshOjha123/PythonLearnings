import numpy as np
array1d=np.array([x for x in range(0,12)])
array2d=np.arange(12)
print(array1d)
print(array2d)
print(np.add(array1d,array2d))
print(np.subtract(array1d,array2d))
print(np.multiply(array2d,array1d))
print(np.divide(array2d,array1d))
print(np.power(array1d,2))