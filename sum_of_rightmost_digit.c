#include<stdio.h>
#define N 10
int main(){
	int i,s=0,r,a;
	for(i=0;i<N;i++){
		scanf("%d",&a);
		r=a%10;
		s=s+r;
	}
	printf("%d",s);
}
