use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("err");

    let mut parts = input.split_whitespace();
    let m: i64 = parts.next().unwrap_or("0").parse().expect("err");
    let d: i64 = parts.next().unwrap_or("0").parse().expect("err");

    let s: i64 = (m * 2 + d) % 3;
    let ans = ["普通", "吉", "大吉"];
    println!("{}", ans[s as usize]);
}
