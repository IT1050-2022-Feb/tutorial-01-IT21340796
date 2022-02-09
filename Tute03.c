/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int n;// 'n' value
  int x=1;
  int sum=1;//summation

  printf("Enter value of 'n': ");
  scanf("%d",&n);//store the keyboard input
  
  while(n!=x)//while loop
  {
      x++;
      sum=sum+x;//calculate summation 
  }
  printf("Sum is %d",sum);//print summation

  return 0;
}

