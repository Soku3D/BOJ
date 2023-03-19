use std::io;
use itertools::Itertools;
fn main(){
	let mut n = Default::default();
	io::stdin().read_line(&mut n).unwrap();
	let n: i32= n.trim().parse().unwrap();
	let mut count = 0;
	loop{
		
		if count == n{
			break;
		}
		let mut anagram_str = String::new();
		io::stdin().read_line(&mut anagram_str).unwrap();
		let anagram_str : Vec<&str> = anagram_str.split_whitespace().collect();
		println!("{} & {} are",anagram_str[0], anagram_str[1] );
		let s = anagram_str[0].chars().sorted().rev().collect::<String>();
		println!("{}", s);
		

		count += 1;
	}
	
}
