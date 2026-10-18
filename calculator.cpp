#include<iostream>
using namespace std;
int main(){

    int n1,n2;
    char op;

    cout<<"Enter n1 and n2"<<endl;
    cin>>n1>>n2;
    cout<<"Enter operator";
    cin>>op;

    switch(op){
        case '+':
            cout<<n1<<"+"<<n2<<"="<<n1+n2;
            break;
        case '-':
            cout<<n1<<"-"<<n2<<"="<<n1-n2;
            break;
        case '*':
            cout<<n1<<"*"<<n2<<"="<<n1*n2;
            break;
        case '/':
            cout<<n1<<"/"<<n2<<"="<<n1/n2;
            break;
    }
    return 0;
}