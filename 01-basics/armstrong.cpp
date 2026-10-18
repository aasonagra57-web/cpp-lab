#include <iostream>
using namespace std;
int main(){
    int num, original_num, rem, result=0,n=0;
    cout<<"Enter number:";
    cin>>num;

    original_num=num;

    while(original_num!=0){
        original_num/=10;
        n++;
    }
    original_num=num;

    while(original_num!=0){
        rem=original_num%10;
        int power=1;
        for(int i=1;i<=n;i++){
            power*=rem;
        }
        result+=power;
        original_num/=10;
    }
    cout<<"Result: "<<result<<endl;
    if(result == num){
        cout<<"It is an armstrong number";
    }
    else{
        cout<<"It is not an armstrong number";
    }
    return 0;
}