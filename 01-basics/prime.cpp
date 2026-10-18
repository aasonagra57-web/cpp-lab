#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Prime number between 1 and "<<n<<" are ";
    for(int i=2;i<=n;i++){
        int isprime=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                isprime=1;
                break;
            }
        }
        if(isprime==0){
            cout<<i<<" ";
        }
    }
    return 0;
}