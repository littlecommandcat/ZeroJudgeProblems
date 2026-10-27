use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("err");

    let mut parts = input.split_whitespace();
    let a: i64 = parts.next().unwrap_or("0").parse().expect("err");
    let b: i64 = parts.next().unwrap_or("0").parse().expect("err");
    println!("{}", a + b);
}
