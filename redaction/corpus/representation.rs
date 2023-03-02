struct Person{
    age: i8,
    name: String,
    interests: Vector<Interest>,
}

struct Interest{
    priority: usize,
    name: String,
}