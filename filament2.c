#include<stdio.h>
#include<string.h>
main(){
	
	char a[50];
	printf("Enter a word :");
	scanf("%s",a);
	
	char b[50];
	strcpy(b,a);
	
	strrev(b);
	printf("\nThe reverse of the word is :%s",b);
	int c =strcmp(b,a);
	
	if(c==0){
		printf("\nIt is a palindrome word");
	}else{
		printf(" \nIt is not a palindrome word");
	}
}
	
