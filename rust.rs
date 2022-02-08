fn main() {
    use std::io::{stdin,stdout,Write};
    let mut s=String::new();
    print!("What is your age? ");
    let _=stdout().flush();
    stdin().read_line(&mut s).expect("Invalid input");
    if s.trim().parse::<i32>().unwrap() < 15 {
      println!("Sorry, you cannot watch this film")
    } else {
      println!("You are old enough to watch this film!")
    }
}
