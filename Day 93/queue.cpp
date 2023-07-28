#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define max 50
class queue
{
private:
    int Q[max];
    int i;
    int front = -1, rear = -1;

public:
    void equeue(void);
    int dequeue(void);
    int peek(void);
    int display(void);
};
void queue ::equeue(void)
{

    if (rear == max - 1)
    {
        std::cout << "overflow";
    }
    else
    {
        if (front == -1)
        {
            front++;
            rear++;
            std::cin >> Q[rear];
        }
        else
        {
            std::cin >> Q[rear];
            rear++;
        }
    }
}
int queue ::dequeue(void)
{

    if (front == -1 || front > rear)
    {
        std::cout << "underflow";
    }
    else
    {
        std::cout << Q[front];
        front++;
    }
}
int queue ::peek(void)
{
    if (front == -1 || front > rear)
    {
        std::cout << "underflow";
    }
    else
    {
        std::cout << Q[front] << std::endl;
    }
}
int queue ::display(void)
{
    if (front == -1 || front > rear)
    {
        std::cout << "underflow";
    }
    else
    {
        for (i = front; i <= rear; i++)
            std::cout << Q[i] << std::endl;
    }
}
int main()
{
    int ch;
    queue q;
    while (1)
    {
        std::cout << "\n1.equeue\n2.dequeue\n3.peek\n4.display\n"
                  << std::endl;
        std::cin >> ch;
        switch (ch)
        {
        case 1:
            q.equeue();
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.peek();
            break;

        case 4:
            q.display();
            break;
        }
    }
    return 0;
}
