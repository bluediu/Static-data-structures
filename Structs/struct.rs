use std::time::Instant;

struct Persona {
    nombre: String,
    edad: u32,
    id: u32,
}

fn main() {
    // Creación del array
    let personas: Vec<Persona> = (0..1000000)
        .map(|i| Persona {
            nombre: "Juan".to_string(),
            edad: 25,
            id: i,
        })
        .collect();

    // Medición de tiempo de acceso
    let start_time = Instant::now();
    for persona in &personas {
        let _ = &persona.nombre;
        let _ = persona.edad;
        let _ = persona.id;
    }
    let elapsed_time = start_time.elapsed().as_millis();
    println!("Tiempo de acceso: {} ms", elapsed_time);
}
