use std::collections::HashMap;

fn main() {
    let mut database = Database::new().expect("could not read database");
    database.sort();
    let final_value = database.find_name_value();
    println!("the final total is: {}", final_value);
}

struct Database {
    name_list: Vec<String>,
    map: HashMap<char, u128>,
}

impl Database {
    fn new() -> Result<Database, std::io::Error> {
        //allocate the memory for the name_list.
        let mut name_list = Vec::new();
        let mut map = HashMap::new();

        //read the database file
        let contents = std::fs::read_to_string("src/p022_names.csv")?;
        //read each line of the file given, as each line is an entry
        let full_list = contents.split("\",\"");
        for name in full_list {
            name_list.push(name.to_owned());
        }

        map.insert('a', 1);
        map.insert('b', 2);
        map.insert('c', 3);
        map.insert('d', 4);
        map.insert('e', 5);
        map.insert('f', 6);
        map.insert('g', 7);
        map.insert('h', 8);
        map.insert('i', 9);
        map.insert('j', 10);
        map.insert('k', 11);
        map.insert('l', 12);
        map.insert('m', 13);
        map.insert('n', 14);
        map.insert('o', 15);
        map.insert('p', 16);
        map.insert('q', 17);
        map.insert('r', 18);
        map.insert('s', 19);
        map.insert('t', 20);
        map.insert('u', 21);
        map.insert('v', 22);
        map.insert('w', 23);
        map.insert('x', 24);
        map.insert('y', 25);
        map.insert('z', 26);
        map.insert('"', 0);

        Ok(Database { name_list, map })
    }
    fn insert(&mut self, key: String) {
        self.name_list.push(key);
    }
    fn sort(&mut self) {
        self.name_list.sort();
    }
    fn print(&self) {
        for name in &self.name_list {
            println!("{}", name);
        }
    }
    fn find_name_value(&self) -> u128 {
        let mut index = 0;
        let mut sum: u128 = 0;
        for name in &self.name_list {
            let value = self.name_value(&name) * index;
            sum = sum + value;
            index = index + 1;
        }
        sum
    }
    fn name_value(&self, name: &String) -> u128 {
        let mut value: u128 = 0;
        for ch in name.chars() {
            value = value + self.letter_value(&ch.to_ascii_lowercase());
        }
        value
    }
    fn letter_value(&self, letter: &char) -> u128 {
        let value = self.map.get(letter).unwrap();
        value.to_owned()
    }
}
