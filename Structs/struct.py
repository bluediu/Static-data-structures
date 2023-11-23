import time
from collections import namedtuple

# Definición de la estructura
Persona = namedtuple("Persona", ["nombre", "edad", "id"])

# Creación de la tupla/struct
personas = [Persona(nombre="Josue", edad=22, id=i) for i in range(2_000_000)]

# Medición de tiempo de acceso
start_time = time.time()
for persona in personas:
    _ = persona.nombre
    _ = persona.edad
    _ = persona.id

elapsed_time = (time.time() - start_time) * 1000
print("         /^\\/^\\")
print("       _|__|  O|")
print("\\/    /~     \\_/ \\")
print(" \\____|__________/  \\")
print("        \\_______      \\")
print("                `\\     \\                 \\")
print("                  |     |                  \\")
print("                 /      /                    \\")
print("                /     /                       \\\\")
print("              /      /                         \\ \\")
print("             /     /                            \\  \\")
print("           /     /             _----_            \\   \\")
print("          /     /           _-~      ~-_         |   |")
print("         (      (        _-~    _--_    ~-_     _/   |")
print(f"          \\      ~-____-~    _-~    ~-_    ~-_-~    /")
print(f"            ~-_           _-~          ~-_       _-~")
print(f"               ~--______-~                ~-___-~")
print("             ╔═════════════════════════════╗")
print("             ║    Structs en Python 󰌠      ║")
print("             ║-----------------------------║")
print(f"             ║ Tiempo de acceso: {elapsed_time:.2f} ms ║")
print("             ╚═════════════════════════════╝")
