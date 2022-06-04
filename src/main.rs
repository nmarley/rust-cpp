use std::process;

fn main() {
    if let Err(e) = rust_cpp::run() {
        eprintln!("Application error: {}", e);
        process::exit(1);
    }
}
