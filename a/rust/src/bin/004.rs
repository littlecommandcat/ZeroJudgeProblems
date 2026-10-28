use std::io;

fn main() {
    let mut input = String::new();

    while io::stdin().read_line(&mut input).expect("error") > 0 {
        let year: i16 = match input.trim().parse() {
            Ok(num) => num,
            Err(_) => {
                input.clear();
                continue;
            }
        };

        if (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 {
            println!("閏年");
        } else {
            println!("平年");
        }
        input.clear();
    }
}
