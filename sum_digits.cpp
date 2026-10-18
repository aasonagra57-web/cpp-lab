#include <iostream>
using namespace std;
int main (){
    int n,sum=0;

    cout<<"Enter n :";
    cin>>n;
    if(n<0)
        cout<<"Enter positive number";
    
    
    while(n>0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    cout<<"Sum of the digits are:"<<sum;
    return 0;
}