#include <iostream>
#include <thread>
#include <pthread>
#include <unistd>

void recall(int date)
{
    r = (rand() % 5) + 1 sleep(r)
     std::cout << date << '\n';
}

int main()
{
    pthread_t thread1;
    pthread_t thread2;
    pthread_create(&thread1, NULL, recall, 2045);
    pthread_create(&thread2, NULL, recall, 2046);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    cout << "We're done!";

    return 0;
}