/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>

int main() 
{
  int mark1,mark2;
  int total=0;
  float average=0;

  printf("Enter student mark 1: ");
  scanf("%d",&mark1);//store mark 1
  printf("Enter student mark 2: ");
  scanf("%d",&mark2);//store mark 2

  total=mark1+mark2;//calculate total
  average=(float)total/2;//calculate average

  printf("The Average of two marks: %.2f",average);//print the average
  
  return 0;
}

