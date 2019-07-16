#include<stdio.h>
 void main()
 {
     FILE *fptr;
     char name[15];
     int age;
     int salary;
     fptr =fopen("C:\\abul.bin","w");
    if(fptr==NULL)
    {
        printf("File does not exist");
        return ;
    }
    printf("Enter the name\n");
    gets(name);
    fprintf(fptr, "Name =%s\n" ,name);
    printf("Enter the age\n");
    scanf("%d",&age);
    fprintf(fptr, "Age  =%d\n" ,age);
    printf("Enter the salary\n");
    scanf("%d",&salary);
    fprintf(fptr, "salary  =%d\n", salary);
    fclose(fptr);
 }

