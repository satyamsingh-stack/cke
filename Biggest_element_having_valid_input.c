#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int valid(char *st){
	int i,valid=0;
	while(st[i]){
		if(isdigit(st[i])){
			valid=1;
			break;
		}
		i++;
	}
	return valid;
}
int biggest(int a,int b,int c){
	int max;
	max=a>b && a>c ? a: b>c ? b:c;
	return max;
}
void main(){
	char st1[21],st2[21],st3[21];
	gets(st1);
	gets(st2);
	gets(st3);
	if(valid(st1) && valid(st2) && valid(st3)){
		int a,b,c;
		a=atoi(st1);
		b=atoi(st2);
		c=atoi(st3);
		printf("Biggest Element is : %d",biggest(a,b,c));
	}
	else{
		printf("Invalid Input...");
	}
}
