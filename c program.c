#include <math.h>
#include<stdio.h>
#include <string.h>
// int sum(int n,int m);
void fibo(int number){
	int first=1,secound=1,result;
	if(number == 1){
		printf("%d",first);
	}
	else if(number == 2){
		printf("%d %d",first,secound);
	}
	else{
		printf("%d %d",first,secound);
		for(int i=2;i<number;i++){
			result=first+secound;
			printf(" %d",result);
			first=secound;
			secound=result;
		}
	}
}
int main(){
	int n;
	printf("Enter your number:\n");
	scanf("%d",&n);
	fibo(n);
	return 0;
}
