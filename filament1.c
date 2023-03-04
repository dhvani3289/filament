#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[100];  
    int  i,j,count=0;
 
    printf("Enter  the string : ");
    gets(s);
     
    int len = strlen(s);
//    int len = sizeof(s) / sizeof(s[0]);
	printf(" frequency count character in string:\n");

    for(i=0;i<len;i++)  
    {//wellcome 
     	count=1;
    	if(s[i] != '\0')
    	{
		
 		  for(j=i+1;j<len;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
//                 s[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",s[i],count);
       }
 	} 
 	 
    return 0;
}


