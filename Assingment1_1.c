#include<stdio.h>
#define n 10
void input(int *arr){
	int i=0;
	printf("Input Values are : ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void sum_values(int *arr){
	int i=0,s=0;
	for(i=0;i<n;i++){
		s=s+arr[i];
	}
	printf("Sum of values is : %d\n",s);
}
int max_min(int *arr,int *max,int *min){
	int i;
	*max=*min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>*max){
			*max=arr[i];
		}
		else if(arr[i]<*min){
			*min=arr[i];
		}
	}
}
void even(int *arr){
	int i;
	printf("Even Numbers are : ");
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
}
int prime(int *arr){
	int i,c,j;
	printf("Prime Numbers are : ");
	for(i=0;i<n;i++){
		c=0;
		for(j=2;j<arr[i];j++){
			if(arr[i]%j==0){
				c=1;
				break;
			}
		}
		if(c==0){
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
}
int main(){
	int i,arr[n],max,min,ans;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	input(arr);
	sum_values(arr);
	ans=max_min(arr,&max,&min);
	printf("Max is : %d\nMin is : %d\n",max,min);
	even(arr);
	prime(arr);
	return 0;
}
