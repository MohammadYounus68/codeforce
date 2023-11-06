#include<iostream>
using namespace std;


int main(){
    int n,i;
    //int arr[100];
    cin>>n;
    int arr=n;
    for(i=n;i>0;i--){
        arr=(arr-n);
        cout<<arr<<endl;
    }

    
}