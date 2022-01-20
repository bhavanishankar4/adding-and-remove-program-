/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 
    int i,p,num,key; 

    int a[50]={10,20,30,40,50,60,70,80,90,100};  

    printf("Enter position to insert "); 

    scanf("%d",&p); 

   printf("Enter number to insert"); 

   scanf("%d",&num); 

  for(i=9;i>=p;i--) 

   {  

     a[i+1]=a[i]; 

    } 

   a[p]=num; 

for(i=0;i<11;i++) 

{ 

       printf(" %d",a[i]); 

   } 

   printf("\nEnter position to delete"); 

   scanf("%d",&p); 

   for(i=p;i<10;i++) 

   { 

       a[i]=a[i+1]; 

   } 

   for(i=0;i<10;i++) 

   {       printf(" %d",a[i]);   } 

         return 0; 

 } 

    