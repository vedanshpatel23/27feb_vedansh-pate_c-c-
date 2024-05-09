#include<stdio.h>
main()
{
    FILE *fp;
    char ch;
    fp=fopen("temp.txt","w");
    printf("Enter any Character: ");
    scanf("%c",&ch);
    putc(ch,fp); 
}