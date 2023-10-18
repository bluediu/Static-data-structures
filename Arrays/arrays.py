"""
Arrays en Python:

Doc: https://www.geeksforgeeks.org/python-arrays/
Alternativas NumPy: https://numpy.org/doc/stable/reference/generated/numpy.array.html
"""
import time
from array import array

# Creación de un array de un millón de enteros
arr = array("l", [i for i in range(1000000)])

# Medición del tiempo de acceso
start_time = time.time()
for i in range(1000000):
    _ = arr[i]

# Convertir a milisegundos
elapsed_time = (time.time() - start_time) * 1000

print(f"Tiempo de acceso: {elapsed_time:.2f} ms")
