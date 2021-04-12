#include<stdio.h>
#include<string.h>
#include<process.h>
struct Menu{
	char st[101];
};
struct Menu m;
void SetenceCase(){
	system("cls");
	int i;
	printf("Enter String : ");
	scanf(" %[^\n]",&m.st);
	for(i=0;i<strlen(m.st);i++){
		if(i==0){
			m.st[i]=toupper(m.st[i]);
		}
		else if(m.st[i]=='.'){
			m.st[i+2]=toupper(m.st[i+2]);
		}
	}
	printf("%s\n",m.st);
	system("pause");
}
void LowerCase(){
	system("cls");
	printf("Enter String : ");
	scanf(" %[^\n]",m.st);
	int i;
	for(i=0;i<strlen(m.st);i++){
		m.st[i]=tolower(m.st[i]);
	}
	printf("%s\n",m.st);
	system("pause");
}
void UpperCase(){
	system("cls");
	printf("Enter String : ");
	int i;
	scanf(" %[^\n]",&m.st);
	for(i=0;i<strlen(m.st);i++){
		m.st[i]=toupper(m.st[i]);
	}
	printf("%s\n",m.st);
	system("pause");
}
void Capitalize(){
	system("cls");
	int i;
	printf("Enter String : ");
	scanf(" %[^\n]",&m.st);
	for(i=0;i<strlen(m.st);i++){
		if(i==0){
			m.st[i]=toupper(m.st[i]);
		}
		else if(m.st[i]==' '){
			m.st[i+1]=toupper(m.st[i+1]);
		}
	}
	printf("%s\n",m.st);
	system("pause");
}
void tOGGLE(){
	system("cls");
	int i;
	printf("Enter String : ");
	scanf(" %[^\n]",&m.st);
	for(i=0;i<strlen(m.st);i++){
		if(islower(m.st[i])){
			m.st[i]=toupper(m.st[i]);
		}
		else if(isupper(m.st[i])){
			m.st[i]=tolower(m.st[i]);
		}
	}
	printf("%s\n",m.st);
	system("pause");
}
int main(){
	for(;;){
		int choice;
		system("cls");
		printf("1 : Sentence Case\n");
		printf("2 : Lower Case\n");
		printf("3 : Upper Case\n");
		printf("4 : Capitalize Each Word\n");
		printf("5 : tOGGLE Case\n");
		printf("6 : Quit\n");
		printf("Enter Your Choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1: SetenceCase();break;
			case 2: LowerCase();break;
			case 3: UpperCase();break;
			case 4: Capitalize();break;
			case 5: tOGGLE();break;
			case 6: exit(1);
			default: printf("Invalid Choice...\n");system("cls");
		}
	}
	return 0;
}
