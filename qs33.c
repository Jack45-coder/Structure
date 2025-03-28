/*
5. Input and Output Complex Numbers
○ Problem: Define a structure Complex with members real and imaginary.
Write a program to input two complex numbers and print their sum.
○ Input:
■ Complex Number 1: 2 + 3i
■ Complex Number 2: 4 + 5i
○ Output:
■ "Sum: 6 + 8i"
*/

#include <stdio.h>
typedef struct
{
  float rNum;
  float imgNum;
} complex;


int main()
{
  complex num1, num2, sum;
  printf("Enter Real and imaginary number:\n");
  scanf("%f %f",&num1.rNum,&num1.imgNum);

  printf("Enter Real And imaginary Number:\n");
  scanf("%f %f",&num2.rNum,&num2.imgNum);

  sum.rNum = num1.rNum + num2.rNum;
  sum.imgNum = num1.imgNum + num2.imgNum;

  printf("%.2f + %.2fi",sum.rNum,sum.imgNum);

  return 0;
}