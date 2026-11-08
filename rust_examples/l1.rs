use std::sync::atomic::{AtomicUsize, Ordering};

static ID: AtomicUsize = AtomicUsize::new(0);

fn proximo_id() -> usize {
    ID.fetch_add(1, Ordering::Relaxed) + 1
}

fn main() {
    print!("{} ", proximo_id());
    print!("{} ", proximo_id());
    print!("{} ", proximo_id());
    print!("{} ", proximo_id());
    print!("{} ", proximo_id());

    println!();
}
