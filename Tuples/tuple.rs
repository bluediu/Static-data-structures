use std::time::Instant;

fn main() {
    // Creación de la tupla
    let tup = (123, 456.789, "Hello, World!");

    // Medición de tiempo de acceso
    let start_time = Instant::now();
    for _ in 0..2000000 {
        let _ = tup.0;
        let _ = tup.1;
        let _ = tup.2;
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
    println!("║     Tuplas en Rust 🦀       ║");
    println!("║-----------------------------║");
    println!("║ Tiempo de compilación: {:.2}ms  ║", elapsed_time);
    println!("╚═════════════════════════════╝");
}
