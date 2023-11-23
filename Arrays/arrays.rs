use std::time::Instant;

// Testing: https://www.programiz.com/rust/online-compiler/

fn main() {
  // Creación de un array de un millón de enteros
  let arr: [i32; 2000000] = [0; 2000000];
  for (i, elem) in arr.iter().enumerate() {
    let _ = elem + i as i32;
  }

  let start_time = Instant::now();
  for i in 0..2000000 {
    let _ = arr[i];
  }
  
  // Convertir a milisegundos
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
  println!("║     Arrays en Rust 🦀       ║");
  println!("║-----------------------------║");
  println!("║ Tiempo de compilación: {:.2}ms ║", elapsed_time);
  println!("╚═════════════════════════════╝");

}
