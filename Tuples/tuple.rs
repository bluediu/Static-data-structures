use std::time::Instant;

fn main() {
    // Creación de la tupla
    let tup = (123, 456.789, "Hello, World!");

    // Medición de tiempo de acceso
    let start_time = Instant::now();
    for _ in 0..1000000 {
        let _ = tup.0;
        let _ = tup.1;
        let _ = tup.2;
    }
    let elapsed_time = start_time.elapsed().as_millis();
    println!("Tiempo de acceso: {} ms", elapsed_time);
}
