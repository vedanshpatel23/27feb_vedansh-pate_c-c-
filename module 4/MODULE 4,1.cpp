#include<stdio.h>
main()
{
  FILE *fp;
  fp=fopen("temp.txt","w");
  printf("File is created!");
  fclose(fp);
}