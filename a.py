import numpy as np 
from time import time 


n,k = 10000,100
A = np.random.random((n,n))
b = np.random.random((n,k))
c = np.zeros((n,k))
print('*'*20)
print(A)
print('*'*20)
print(b)
print('*'*20)
t = time()
for j in range(k):
    for i in range(n):
        c[i,j] = A[i,:] @ b[:,j]
print("Time for nested loops: ", time()-t)
t = time()
c = A @ b
print('Time by blas: ', time()-t)