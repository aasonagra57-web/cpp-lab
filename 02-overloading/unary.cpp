#include <iostream>
using namespace std;

class NUM{
    int x;
    public:
        NUM(){
            x=0;
        }
        NUM(int n){
            x=n;
        }
        void display(){
            cout<< "Number is : "<<x<<endl;
        }
        void operator++(){
            ++x;
        }
        void operator--(){
            --x;
        }
};

int main(){
    NUM n1(4);
    cout<<"Before increment"<<endl;
    n1.display();
    ++n1;
    cout << "After increment"<<endl;
    n1.display();
    --n1;
    cout << "After decrement"<<endl;
    n1.display();
    return 0;
}