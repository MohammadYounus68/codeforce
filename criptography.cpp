#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int main()
{
    string s;
    char arr[]={"abcdefghijklmnopqrstuvwxyz"};
    int i,j;
    cin>>s;
    for(j=0;j<s.length();j++){
       for(i=0;i<26;i++){
         if(s[j]==arr[i]){
            cout<<arr[i+3];
         }
        
       }

          if(s[j]=='x'){
                 cout<<'a';
                 }
             if(s[j]=='y'){
                cout<<'b';
            }
            if(s[j]=='z'){
                cout<<'c';
            }  
        
    }


   
    return 0;
}



//  1 String chriptography


/*#include<iostream>
using namespace std;

int main(){

        int i,Encryiption=0;
        char arr[26]={'A','B', 'C','D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        char n,decription;
        char arr2[26];
        cin>>n;

        arr[0]='A';
        arr[1]='B';
        arr[2]='C';
        arr[3]='D';
        arr[4]='E';
        arr[5]='F';
        arr[6]='G';
        arr[7]='H';
        arr[8]='I';
        arr[9]='J';
        arr[10]='K';
        arr[11]='L';
        arr[12]='M';
        arr[13]='N';
        arr[14]='O';
        arr[15]='P';
        arr[16]='Q';
        arr[17]='R';
        arr[18]='S';
        arr[19]='T';
        arr[20]='U';
        arr[21]='V';
        arr[22]='W';
        arr[23]='X';
        arr[24]='Y';
        arr[25]='Z';
        
        for(i=0;i<26;i++){
            if(n==arr[i]){
                cout<<arr[i+3];
            }


        }

    
        

        

        
        
        return 0;
}*/