use std::fs::File;
use std::io::{BufRead, BufReader};
use std::cmp;

fn main() {
    let f = BufReader::new(File::open("triangleData.txt").unwrap());

    let mut triangle: Vec<Vec<i32>> = f.lines()
    .map(|l| l.unwrap().split(char::is_whitespace)
         .map(|number| number.parse().unwrap())
         .collect())
    .collect();

    let num_lines = triangle.len();

    let mut i = num_lines - 2;
    while i >= 0 {
        let mut j = 0;
        while j <= i {
                triangle[i][j] += cmp::max(triangle[i+1][j], triangle[i+1][j+1]);
            j += 1;
        }
        if i == 0 {
            break;
        }
        i -= 1;
    }
    println!("max total value: {}", triangle[0][0]);
}

