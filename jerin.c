#include <stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Enter your size number:");
	scanf("%d",&n);
	printf("Number\tSquare\tCube\n");
	int i=0;
	while(i<=n){
		printf("%d \t %d \t %d \n",i,i*i,i*i*i);
		i++;
	}
	return 0;
}