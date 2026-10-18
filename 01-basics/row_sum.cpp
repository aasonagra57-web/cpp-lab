#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter no. of elements:";
    cin>>n;
    int arr[n][n];
    cout<<"Enter elemnts";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
int sum_row=0;
    for(i=0;i<n;i++){
        
        for(j=0;j<n;j++){
            sum_row=sum_row+arr[i][j];
        }
    }

    cout<<"Sum of rows is :"<<sum_row;
    return 0;
}