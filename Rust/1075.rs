use std::io;

fn main(){
	let mut input = String::new();

	struct Bar {
	    value: i32,
	}

	fn get_value<'a>(my_bar: &'a Bar) -> &'a i32 {
	    &my_bar.value
	}


}