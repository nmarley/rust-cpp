# rust-cpp

> Example of calling C++ from Rust

Currently only tested on MacOS Catalina (10.15.7).

## Usage

1. Build cpplib:

```sh
(cd cpplib && make install)
```

2. Build Rust lib and run:

```sh
cargo run
```

## Notes

<https://blog.rust-lang.org/2015/04/24/Rust-Once-Run-Everywhere.html>

<https://doc.rust-lang.org/std/ffi/index.html>

<https://doc.rust-lang.org/std/ffi/struct.CString.html#method.from_raw>

<https://users.rust-lang.org/t/correct-way-to-implement-a-function-which-returns-a-c-string/315>

## License

[ISC](LICENSE)
