#if !defined(_STACK_H_)
#define _STACK_H
// #include<iostream>
class stack
{
    int top;

public:
    int max;
    int array_stk[200];
    stack()
    {
        std::cout << "enter maximum element=" << std::endl;
        std::cin >> max;
        top = -1;
    }

    stack(int max1) : max{max1}
    {
        top = -1;
    }
    void push();
    void pop();
    void peek();
    void dispay()
    {
        std::cout << "[";
        for (int i = 0; i <= top; i++)
        {
            std::cout << array_stk[i] << " , ";
        }
        std::cout << "]" << std::endl;
    }
    ~stack()
    {
        std::cout << "stack has been deleted";
    }
};
void stack::push()
{
    if (top < max - 1)
    {
        top++;
        std::cout << "enter element which you want to add in array::--";
        int a;
        std::cin >> a;
        array_stk[top] = a;
    }
    else
    {
        std::cout << "over flow condition" << std::endl;
    }
}
void stack::pop()
{
    if (top > -1)
    {

        std::cout << "the element which is delete" << array_stk[top] << std::endl;
        top--;
    }
    else
    {
        std::cout << "under flow condition" << std::endl;
    }
}
void stack::peek()
{
    std::cout << "top value is :" << top << std::endl;
}

class stack01 : public stack
{
public:
    int maxa{0};
    int topa{0};
    int topb{0};
    stack01()
    {
        std::cout << "enter maximum length of first stack(should be less than max" << std::endl;
        std::cin >> maxa;
        topb = maxa + 1;
        topa = -1;
    }
    void display_stack_a();
    void display_stack_b();
    bool push_stack_a(int i);
    bool pop_stack_a();
    int peek_a();
    int peek_b();
    bool pop_stack_b();
    bool push_stack_b(int i);
    ~stack01();
};
void stack01::display_stack_a()
{
    if (topa == -1)
    {
        std::cout << "stack is emoty" << std::endl;
    }
    else
    {
        std::cout << "[";
        for (int i{0}; i <= topa; i++)
        {
            std::cout << array_stk[i];
        }
        std::cout << "]" << std::endl;
    }
}
void stack01::display_stack_b()
{
    if (topb == max)
    {
        std::cout << "stack is empty//undreflow condition" << std::endl;
    }
    else
    {
        std::cout << "[";
        for (int i{max}; i <= topb; i--)
        {
            std::cout << array_stk[i];
        }
        std::cout << "]" << std::endl;
    }
}

bool stack01::push_stack_a(int i)
{
    if (topa == maxa + 1)
    {
        return 0;
    }
    else
    {
        topa = topa + 1;
        array_stk[topa] = i;
        return 1;
    }
}
bool stack01::push_stack_b(int i)
{
    if (topb == maxa)
    {
        return 0;
    }
    else
    {
        topb = topb - 1;
        array_stk[topb] = i;
        return 1;
    }
}
bool stack01::pop_stack_a()
{
    if (topa == -1)
    {
        return 0;
    }
    else
    {
        std::cout << "popp operation sucessfull \n element which is remove :" << array_stk[topa];
        topa--;
        return 1;
    }
}
bool stack01::pop_stack_b()
{
    if (topb == max)
    {
        return 0;
    }
    else
    {
        std::cout << "pop operation sucessfull \n element which is remove :" << array_stk[topb];
        topb++;
        return 1;
    }
}
int stack01::peek_b()
{

    if (topb == max)
    {
        return 0;
    }
    else
    {
        return array_stk[topb];
    }
}
int stack01::peek_a()
{

    if (topa == -1)
    {
        return 0;
    }
    else
    {
        return array_stk[topb];
    }
}
#endif // STACK