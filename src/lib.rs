#[link(name = "cpplib")]
extern "C" {
    fn CPointFromXY(x: i64, y: i64) -> *mut u8;
    fn CPointPrint(pPtr: *mut u8);
    fn CPointFree(pPtr: *mut u8);
}

pub fn run() -> Result<(), Box<dyn std::error::Error>> {
    let x: i64 = -7;
    let y: i64 = 5;
    let point = unsafe { CPointFromXY(x, y) };
    unsafe { CPointPrint(point) };
    unsafe { CPointFree(point) };

    Ok(())
}
