#include <iostream>
#include "MyQueue.h"

int main() {
    MyQueue<int> q;

    // Push elements to the queue
    q.push(1);
    q.push(2);
    q.push(3);

    std::cout << "Front element: " << q.front() << std::endl;
    std::cout << "Back element: " << q.back() << std::endl;
    std::cout << "Queue size: " << q.size() << std::endl;

    // Pop elements from the queue
    q.pop();
    std::cout << "After pop, front element: " << q.front() << std::endl;
    std::cout << "Queue size: " << q.size() << std::endl;

    return 0;
}