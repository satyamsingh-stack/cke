#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int sum(long c){
	int r,s=0;
	while(c>0){
		r=c%10;
		s=s+r;
		c=c/10;
	}
	return s;
}
int mynumeric(char *st){
    int i=0,valid=1;
    while(st[i]){
        if(!isdigit(st[i])){
            valid=0;
            break;    
        }    
        i++;
    }
    return valid;
}
int main(){
	char st[21];
	gets(st);
	if(mynumeric(st)){
		long c=atoi(st);
		printf("Sum is :%d",sum(c));
	}
	else{
		printf("Invalid Input...");
	}
	return 0;
}
