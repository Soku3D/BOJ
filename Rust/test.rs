use std::io;
struct Box{
	width : i32,
	hight : i32
}
fn area(w : i32, h : i32) -> i32 {
	w*h
}
fn main(){
	let mut num_str = String::new();

	io::stdin().read_line(&mut num_str)
		.unwrap();

	let values : Vec<i32> = num_str
		.split_whitespace()
		.map(|x| x.parse::<i32>().unwrap())
		.collect();

	let result : i32 = num_str
		.split_whitespace()
		.map(|x| x.parse::<i32>().unwrap())
		.product::<i32>();

	let a = values[0];
	let b = values[1];

	
	println!("{}", a+b);

	println!("{}", result);

}