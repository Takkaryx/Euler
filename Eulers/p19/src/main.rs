fn main() {
    let months = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    // 1 Jan 1900 is a Monday, so 1 Jan 1901 is a tuesday, manually calculated.
    let mut day = 2;
    let mut month = 0;
    let mut year = 1901;
    let mut sundays = 0;

    while year < 2001 {
        if day == 0{
            sundays += 1;
        }
        if is_leap_year(year) && month == 1 {
            day += 29;
        }
        else {
            day += months[month];
        }
        day=day % 7;
        month = (month + 1) % 12;
        if month == 0 {
            year += 1;
        }
    }
    println!("Number of Sundays on first of the month: {}", sundays);
}

fn is_leap_year(year: i32) -> bool{
    let mut ret = false;
    if year % 4 == 0{
        if year % 100 == 0 && year % 400 != 0 {
            ret = false;
        }
        else {
            ret = true;
        }
    }
    return ret;
}
