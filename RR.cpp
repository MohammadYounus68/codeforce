#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
  int n,cnt=0;
  string arr;
  cin>>arr;
  /*for(int i=1;i<=arr.size();i++){
    cin>>arr[i];
  }*/

  // sort(arr,arr);

  for(int i=0;i<=arr.size();i+=2){
    for(int j=1;j<=arr.size();j+=1){
      if(arr[i]==arr[j]){
       cnt++;
      }
      
    }
    if(cnt>0){
      cout<<"true";
      break;
    }
    else{
      cout<<"false";
      break;
    }
    
  }
  

  return 0;
}

//1 2 3 4 5 6 7 8
