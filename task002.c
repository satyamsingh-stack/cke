//task002_2019b311172
//Satyam Singh
#include<stdio.h>
#include<process.h>
void fact_using_for(int n){
	int f=1,i;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	printf("Factorial of this number is : %d\n",f);
	system("pause");
}
void fact_using_while(int n){
	int f=1;
	while(n>0){
		f=f*n;
		n--;
	}
	printf("Factorial of the Number is : %d\n",f);
	system("pause");
}
int fact_using_rec(int n){
	if(n==1||n==0){
		return 1;
	}
	return n*fact_using_rec(n-1);
}
void sum_series1(int n){
	int s=0,i;
	long f=1;
	for(i=1;i<=n;i++){
		f=f*i;
		s=s+f;
	}
	printf("Sum of this series is : %d\n",s);
	system("pause");
}
void sum_series2(int n){
	int i;
	float sum=0.0,f=1;
	for(i=1;i<=n;i++){
		f=f*i;
		sum=sum+((i+1)/f);
	}
	printf("Sum of this series is : %.2f\n",(sum+1));
	system("pause");
}
int main(){
	for(;;){
		system("cls");
		int choice;
		printf("<<<<Main Menu>>>>");
		printf("\n\n");
		printf("1. Factorial of a number using for loop\n");
		printf("2. Factorial of a number using while loop\n");
		printf("3. Factorial of a number using Recursion\n");
		printf("4. Sum of the series for n steps 1+2+6+24+120...\n");
		printf("5. Sum of the series for n steps 1/1+2/1+3/2+4/6...\n");
		printf("6. Quit\n");
		printf("Enter Your Choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				int n;
				system("cls");
				printf("Enter the Number : ");	
				scanf("%d",&n);
				fact_using_for(n);
				break;
			}
			case 2:{
				int n;
				system("cls");
				printf("Enter the Number : ");	
				scanf("%d",&n);
				fact_using_while(n);
				break;
			}
			case 3:{
				int n,ans;
				system("cls");
				printf("Enter the Number : ");	
				scanf("%d",&n);
				ans=fact_using_rec(n);
				printf("Factorial of the Number is : %d\n",ans);
				system("pause");
				break;
			}
			case 4:{
				int n;
				system("cls");
				printf("Enter the value of n : ");	
				scanf("%d",&n);
				sum_series1(n);
				break;
			}
			case 5:{
				int n,k;
				system("cls");
				printf("Enter the value of n : ");	
				scanf("%d",&n);
				k=n-1;
				sum_series2(k);
				break;
			}
			case 6: exit(1);
			default : printf("Invalid Input...");
			system("cls");
		}		
	}
	return 0;
}
