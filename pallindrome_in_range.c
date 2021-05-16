#include<stdio.h>
void pallindrome(int n){
	int i,r,s=0,k=n;
	while(n){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==k){
		printf("%d ",s);
	}
}
int main(){
	int a,b,i,ans;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++){
		pallindrome(i);
	}
}
