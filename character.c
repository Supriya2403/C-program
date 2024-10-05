#include<stdio.h>
int main()
{
    char ch;
    printf("\n enter the character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
    printf("\n vowel");
    }
    else{
    printf("\n constant");
    }
}