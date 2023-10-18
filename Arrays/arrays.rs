use std::time::Instant;

// Testing: https://www.programiz.com/rust/online-compiler/

fn main() {
  // Creación de un array de un millón de enteros
  let arr: [i32; 1000000] = [0; 1000000];
  for (i, elem) in arr.iter().enumerate() {
    let _ = elem + i as i32;
  }

  let start_time = Instant::now();
  for i in 0..1000000 {
    let _ = arr[i];
  }
  let elapsed_time = start_time.elapsed().as_millis();

  println!("Tiempo de acceso: {} ms", elapsed_time);
}
