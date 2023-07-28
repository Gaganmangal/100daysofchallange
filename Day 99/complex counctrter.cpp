#include <iostream>
using namespace std;

class Complex
{
    int rear;
    int imge;

public:
    Complex()
    {
        rear = 0;
        imge = 0;
    }
    Complex(int i)
    {
        rear = imge = i;
    }
    Complex(int r, int i)
    {
        rear = r;
        imge = i;
    }
    void show()
    {
        cout << rear << " + " << imge << "i" << endl;
    }
    void sum(Complex o1, Complex o2)
    {
        rear = o1.rear + o2.rear;
        imge = o1.imge + o2.imge;
    }
};

int main()
{
    Complex c1(1, 2);
    Complex c2(2, 3);
    Complex c3;
    c3.sum(c1, c2);
    c1.show();
    c2.show();
    c3.show();

    return 0;
}
