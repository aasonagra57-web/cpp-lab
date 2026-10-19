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
            cout<<"Number is : "<<x;
        }
        NUM operator+(NUM n){
            NUM temp;
            temp.x=x+n.x;
            return temp;
        }
};
int main(){

    NUM n1(3),n2(4);
    NUM n3;
    n3 = n1 + n2;
    n3.display();

    return 0;
}