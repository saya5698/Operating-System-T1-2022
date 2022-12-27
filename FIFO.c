#include <stdio.h>

int main()
{

//variable declaration//
int string_length;
int reference_string[40];
int frame;
int count=0;
int pf=0;

//for loop variable declaration..
int i;
int m[30];
int k;
int j;

//user inquiries section//

//section 1: To obtain the length of the reference string length//
printf("Please enter the length of the reference string:\n");
scanf("%d", &string_length);


printf("\nPlease key in the reference string. Please bear in mind that the maximum string length is: %d\n",string_length);


//to collect input of the reference string//
for(i=0;i<string_length;i++)
{
    scanf("%d",&reference_string[i]);
}


//to collect the amount of frame//

printf("\nPlease key in the amount of frame/cache:\n");
scanf("%d",&frame);


//short summary of the input//
printf("=======SUMMARY==================");

printf("\nThe length of the reference string is: %d\n",string_length);


printf("\nThis is the refence string you had key in:\n");

for(i=0;i<string_length;i++)
{
    printf("%d\t",reference_string[i]);
}

printf("\nthe frame you have key in is:%d\n",frame);


//============================FIFO=======================================//

for(i<0;i<frame;i++)
{
    m[i]=-1;
}

printf("\nThe replacement process is--\n");

 
 for(i=0;i<string_length;i++) 
 { 
    for(k=0;k<frame;k++) 
    { 
        if(m[k]==reference_string[i]) 
        break; 
    } 
 if(k==frame) 
 { 
 m[count++]=reference_string[i];
 pf++; 
  } 

 for(j=0;j<frame;j++)
 {
    printf("\t%d",m[j]); 
 }
 
 if(k==frame) 
 {
    printf("\tPF No. %d",pf); 
 }
 
 printf("\n");

 if(count==frame) 
 {
    count=0; 
 }
 

 } 
 printf("\n The number of Page Faults using FIFO are %d",pf); 




 
    return 0;
}
