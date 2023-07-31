class Person {
    int age;
    String name;
    Interest[] interests;

    void greet(){
        System.out.println("hi, my name is "+name+"!")
    }
}

class Interest {
    int priority;
    String name;
}