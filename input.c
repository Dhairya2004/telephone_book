#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char name[20];
   char number[20];
   char email[50];

   FILE *fptr;

   fptr = fopen("data.txt","a");

   printf("Enter Name: "); 
   scanf("%s",name);

   printf("Enter Mobile Number: "); 
   scanf("%s",number);

   printf("Enter Email: "); 
   scanf("%s",email);


   fprintf(fptr,"%s,%s,%s\n",name,number,email);
   fclose(fptr);

   return 0;
}