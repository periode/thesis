#include <iostream>
#include <thread>

void recall(int date)
{
    std::cout << date << '\n';
}

int main()
{
    std::thread thread(recall, 2046);

    thread.join();

    cout << "We're done!";

    return 0;
}