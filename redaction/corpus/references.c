int date = 2046;      // `date` refers to the literal value of the number 2046
int *pointer = &date; // `pointer` refers to the address where the value of `date` is stored, e.g. 0x5621
*pointer = 1996;      // this accesses the value located at the memory address held by `pointer` (0x5621) and sets it to 1996
std::cout << date;    // prints the literal value of date, at the address 0x5621: 1996