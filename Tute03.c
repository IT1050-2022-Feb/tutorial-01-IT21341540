/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int number, sum, counter;
  counter = 0;
  printf(“Enter number, -1 to end :”);
  scanf(“%d”,&number);
  while(number != -1){ 
sum = sum + number;
counter = counter + 1;
// get next grade from user
printf(“Enter number, -1 to end :”);
scanf(“%d”,&number;
} //end while

  
  
  return 0;
}

