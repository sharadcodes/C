#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int i,n,j,sum=0;
    char s1[20],s2[20];
    printf("Enter the String to check if it is palindrome :\n");
    gets(s1);
    n=strlen(s1);
    for(i=n-1,j=0;i>=0;i--,j++)
    {
       s2[j]=s1[i];
    }
    for(i=0;i<strlen(s1);i++)
    {
    if(s1[i]==s2[i])
    sum++;
    }
    if(sum==n)
    {
    printf("\n%s is Palindrome",s1);
    }
    else
    {
        printf("\n%s is not Palindrome",s1);
    }
getch();
}
