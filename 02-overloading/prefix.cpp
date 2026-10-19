#include <iostream>
using namespace std;

class COMPLEX{
    int real, imag;
public:
    COMPLEX(){
        real = 0;
        imag = 0;
    }

    COMPLEX(int r, int i){
        real = r;
        imag = i;
    }

    void operator++(){
        ++real;
    }

    void operator++(int){
        ++imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    COMPLEX c1(2,3);
    COMPLEX c2(2,3);

    cout << "Original complex number: ";
    c1.display();

    c1++;

    cout << "After postfix ++: ";
    c1.display();

    ++c2;
    
    cout << "After prefix ++: ";
    c2.display();

    return 0;
}