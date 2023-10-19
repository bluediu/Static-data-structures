import time
from collections import namedtuple

# Definición de la estructura
Persona = namedtuple("Persona", ["nombre", "edad", "id"])

# Creación de la tupla/struct
personas = [Persona(nombre="Josue", edad=22, id=i) for i in range(1_000_000)]

# Medición de tiempo de acceso
start_time = time.time()
for persona in personas:
    _ = persona.nombre
    _ = persona.edad
    _ = persona.id

elapsed_time = (time.time() - start_time) * 1000
print(f"Tiempo de acceso: {elapsed_time:.2f} ms")
