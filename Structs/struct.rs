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
            nombre: "Josue".to_string(),
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
    println!("            _______  ");
    println!("          _/       \\_");
    println!("         / |       | \\");
    println!("        /  |__   __|  \\");
    println!("       |__/((o| |o))\\__|");
    println!("       |      | |      |");
    println!("       |\\     |_|     /|");
    println!("       | \\           / |");
    println!("        \\| /  ___  \\ |/");
    println!("         \\ | / _ \\ | /");
    println!("          \\_________/");
    println!("           _|_____|_");
    println!("      ____|_________|____");
    println!("     /                   \\"); 
    println!("╔═════════════════════════════╗");
    println!("║     Structs en Rust 🦀      ║");
    println!("║-----------------------------║");
    println!("║ Tiempo de compilación: {:.2}ms  ║", elapsed_time);
    println!("╚═════════════════════════════╝");
  
}
