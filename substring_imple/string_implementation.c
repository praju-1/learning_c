//C program to implement substring function.

#include<stdio.h>

int substring(char *source, int from, int n, char *target)
{
    int length,i;

    //get string length 
    for(length=0;source[length]!='\0';length++);
     
    if(from>length){
        printf("Starting index is invalid.\n");
        return 1;
    }
     
    if((from+n)>length){
        //get substring till end
        n=(length-from);
    }
     
    //get substring in target
    for(i=0;i<n;i++){
        target[i]=source[from+i];
    }
    target[i]='\0'; //assign null at last
     
    return 0;    
}
 
int main()
{
    char str[100],targetString[100];
    int from,n;
     
    printf("Enter any string:");
    gets(str);
     
    printf("Enter from index (count from 0): ");
    scanf("%d",&from);
     
    printf("Enter number of characters: ");
    scanf("%d",&n);
     
    if(substring(str,from,n,targetString)==0)
    {
        printf("Substring is: %s\n",targetString);
    }
     
    return 0;
}
