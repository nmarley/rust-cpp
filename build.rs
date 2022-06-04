// build.rs

fn main() {
    println!("cargo:rustc-link-lib=cpplib");
    println!("cargo:rustc-link-lib=c++");
    println!("cargo:rustc-link-search=./cpplib/lib");
}
