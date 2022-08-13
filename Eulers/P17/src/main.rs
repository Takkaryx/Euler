/*
 * If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19
 * letters used in total.
 *
 * If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

 * NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115
 * (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance
 * with British usage.
*/

fn main() {
    let ones_string = ["", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"];
    let teens_string = ["ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"];
    let tens_string = ["", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"];

    let max = 1000;
    let mut count = 0;
    let mut num_letters_count = 0;

    while count < max
    {
        let ones = count % 10;
        let tens = ((count % 100) - ones) / 10;
        let hundreds = ((count - ones) - tens * 10) / 100;
        let mut number_count = 0;

        if hundreds != 0 {
            number_count += ones_string[hundreds].chars().count();
            number_count += "hundred".chars().count();
            if ones > 0 || tens > 0 {
                number_count += "and".chars().count();
            }
        }
        if tens == 1 {
            number_count += teens_string[ones].chars().count();
        }
        else{
            number_count += tens_string[tens].chars().count();
            number_count += ones_string[ones].chars().count();
        }
        num_letters_count += number_count;
        count += 1;
    }
    if count >= 1000{
        num_letters_count += "onethousand".chars().count();
    }
    println!("Num of letters used in {}, is {}", max, num_letters_count);
}
