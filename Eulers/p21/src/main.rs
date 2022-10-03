fn main() {
    let mut total_sum = 0;
    let mut i = 1;
    let mut known_amicable: Vec<i64> = Vec::new();
    while i < 10000 {
        let value = i;
        i = i + 1;
        if known_amicable.contains(&value) {
            continue;
        }
        let answer = sum_divisors(value);
        let amicable = sum_divisors(answer);
        if value == amicable && answer != amicable {
            total_sum = total_sum + answer + amicable;
        }
        known_amicable.push(answer);
        known_amicable.push(amicable);
    }
    print!("the sum of divisors is: {}\n", total_sum);
}

fn sum_divisors(value: i64) -> i64 {
    let mut sum = 0;
    let mut i = 1;
    while i <= value / 2 {
        if is_divisor(value, i) {
            sum = sum + i;
        }
        i = i + 1;
    }
    return sum;
}

fn is_divisor(value: i64, test: i64) -> bool {
    if value % test == 0 {
        return true;
    }
    return false;
}
