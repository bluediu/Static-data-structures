import time

# Creación de la tupla
tup = (123, 456.789, "Hello, World!")

# Medición de tiempo de acceso
start_time = time.time()
for _ in range(1000000):
    _ = tup[0]
    _ = tup[1]
    _ = tup[2]

elapsed_time = (time.time() - start_time) * 1000  # Convertir a milisegundos
print(f"Tiempo de acceso: {elapsed_time:.2f} ms")
