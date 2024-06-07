#ifndef MYQUEUE_H
#define MYQUEUE_H

#include <deque>
#include <stdexcept>

template <typename T>
class MyQueue {
public:
    MyQueue();
    
    // 队列操作
    void push(const T& value);
    void pop();
    T& front();
    const T& front() const;
    T& back();
    const T& back() const;
    
    // 容量操作
    bool empty() const;
    size_t size() const;

private:
    std::deque<T> container;
};

// 实现部分
template <typename T>
MyQueue<T>::MyQueue() : container() {}

template <typename T>
void MyQueue<T>::push(const T& value) {
    container.push_back(value);
}

template <typename T>
void MyQueue<T>::pop() {
    if (empty()) {
        throw std::out_of_range("Queue is empty");
    }
    container.pop_front();
}

template <typename T>
T& MyQueue<T>::front() {
    if (empty()) {
        throw std::out_of_range("Queue is empty");
    }
    return container.front();
}

template <typename T>
const T& MyQueue<T>::front() const {
    if (empty()) {
        throw std::out_of_range("Queue is empty");
    }
    return container.front();
}

template <typename T>
T& MyQueue<T>::back() {
    if (empty()) {
        throw std::out_of_range("Queue is empty");
    }
    return container.back();
}

template <typename T>
const T& MyQueue<T>::back() const {
    if (empty()) {
        throw std::out_of_range("Queue is empty");
    }
    return container.back();
}

template <typename T>
bool MyQueue<T>::empty() const {
    return container.empty();
}

template <typename T>
size_t MyQueue<T>::size() const {
    return container.size();
}

#endif // MYQUEUE_H