//static MAX_VALUE: u128 = 28123;
static MAX_VALUE: u128 = 125;
fn main() {
    for value in 1..MAX_VALUE {
        if divisors_sum(value) > value {
            println!("Abundunt number {} found", value);
        } //value is abundant
    }
}

fn divisors_sum(value: u128) -> u128 {
    let mut values: Vec<u128> = vec![];
    for check in 1..((value / 2) + 1) {
        if value % check == 0 {
            values.push(check);
        }
    }
    values.iter().sum()
}
