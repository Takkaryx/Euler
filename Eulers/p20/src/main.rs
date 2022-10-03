use num_bigint::BigUint;
use num_traits::{One};

fn main() {
    let value = BigUint::parse_bytes(b"100", 10).unwrap();
    let result = factorial(value);
    let mut i = 0;
    let mut full_sum = 0;
    let result_string = result.to_str_radix(10);
    while i < result_string.len() {
        let ch = result_string.chars().nth(i).unwrap();
        let result: i32 = ch.to_string().parse().unwrap();
        full_sum = full_sum + result;
        i = i + 1;
    }
    print!("{}\n", full_sum);
}

fn factorial(mut number: BigUint) -> BigUint {
    let mut result = BigUint::one();
    let one = BigUint::one();

    while number > one {
        result *= &number;
        number -= &one;
    }

    result
}