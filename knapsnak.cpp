#include<iostream>
using namespace std;


 float w[100];
 float p[100];
 float u[100];
 int obj[100];
 float m,U;
 float x[100];
 int n,i;


void swap(int xp, int yp)
{

    float temp = u[xp];

    u[xp] = u[yp];

    u[yp] = temp;

    temp = w[xp];

    w[xp] = w[yp];

    w[yp] = temp;

    temp = p[xp];

    p[xp] = p[yp];

    p[yp] = temp;

    temp = x[xp];

    x[xp] = x[yp];

    x[yp] = temp;

    int tmp = obj[xp];

    obj[xp] = obj[yp];

    obj[yp] = tmp;



}


void sort()
{

    int i, j, min_idx;


    for (i = 0; i < n - 1; i++) {


        min_idx = i;

        for (j = i + 1; j < n; j++)

            if (u[j] > u[min_idx])

                min_idx = j;

        swap(min_idx,i);

    }
}

int main()
{

 cout<<"Enter number of objects:";
 cin>>n;
 cout<<"Enter size of knapsack:";
 cin>>m;
cout<<"Enter profits:";
 for(i=0; i<n ; i++){
     cin>>p[i];
     x[i] = 0;
     obj[i] = i;
 }
    cout<<"Enter weights:";
 for(i=0; i<n ; i++){
    cin>>w[i];
     u[i] = p[i]/w[i];
 }
  for(i=0; i<n ; i++){
     cin>>w[i]>> p[i]>> u[i]>>obj[i];
 }

 sort();

 cout<<"After sort:";

 for(i=0; i<n ; i++){
     cin>>w[i]>>p[i]>>u[i]>> obj[i];
 }


 float max_profit=0;

 U=m;
 for(i=0;i<n;i++)
 {
 if(w[i]>U)
 break;
 else
 {
 x[i]=1.0;
 U=U-w[i];
 }
 }
 if(i<3)
 x[i]=U/w[i];
 for(i=0;i<n;i++)
 {
 cout<<"\nof object"<<x[i]<<obj[i];
 max_profit=max_profit+x[i]*p[i];
 }
 cout<<"\nMaximum profit is:"<<max_profit;
}