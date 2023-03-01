#include<stdio.h>
#include<string.h>
main(){
	
	char gmail[]="abcd@gmail.com";
    char pass[]="abcd";
	
	char user_gmail[50];
	printf("Enter a mail :");
	scanf("%s",user_gmail);
	
	char user_pass[50];
	printf("Enter your password :");
	scanf("%s",user_pass);
		
	
	int x= strcmp(gmail,user_gmail);
	int y= strcmp(pass,user_pass);
	
	
	if(x==0){
		printf("login success");
	}
	else{
		printf("login fail");
	}
	
	if(y==0){
		printf("\ncorrect password");
	}
	else{
		printf("\nwrong password");
	}
}
