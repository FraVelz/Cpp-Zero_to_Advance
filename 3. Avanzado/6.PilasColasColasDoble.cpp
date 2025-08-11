#include <cstdio>

class Stack {
public:
    template<typename... Args>
    Stack(int size = 100, Args... args) {
        T data[size];

        for (int i = 0; i < sizeof...(args); ++i) {
            data[i] = args[i];
        }
    };
    
    ~Stack() {};
}; 

class Queue {
public:
    Queue() {};
    ~Queue() {};
}; 

class Dequeue {
public:
    Dequeue() {};
    ~Dequeue() {};
}; 


int main () {

    Stack pila = Stack(10, 20, "hello world!", 'a');
    return 0;
}