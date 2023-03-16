use std::io;

fn main(){

	let mut num_str = String::new();
	io::stdin().read_line(&mut num_str)
		.unwrap();

	let mut list = num_str.split_whitespace();
		
	let a : f64= list.next().unwrap().parse().unwrap();
	let b : f64= list.next().unwrap().parse().unwrap();

	println!("{:.9}", a/b);
}