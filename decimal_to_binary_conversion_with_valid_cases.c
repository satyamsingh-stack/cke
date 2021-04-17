#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isvalid(char *st){
	int i,valid=1;
	while(st[i]){
		if(!isdigit(st[i])){
			valid=0;
			break;
		}
		i++;
	}
	return valid;
}
int dtob(int n){
	if(n>1){
		dtob(n/2);
	}
	printf("%d ",n%2);
}
int main(){
	char st[21];
	gets(st);
	if(isvalid(st)){
		int c=atoi(st);
		dtob(c);
	}
	else{
		printf("Invalid input...");
	}
	return 0;
}
