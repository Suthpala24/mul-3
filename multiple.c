//multiple of 3
#include<stdio.h>
int mul(int n);
void main(){
	int num;
	printf("Enter the number what you want to know :");
	scanf("%d",&num);
	printf("the %dth multiple of 3=%d",num,mul(num));
}
int mul(int n){
	if(n==1)
		return 3;
	else
		return 3+mul(n-1);
}
