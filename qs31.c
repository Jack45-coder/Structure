/*
4. Union for Temperature Conversion
○ Problem: Define a union Temperature with members celsius (float) and
fahrenheit (float). Write a program that allows the user to input a temperature
in Celsius or Fahrenheit and converts it to the other scale.
○ Input:
■ Celsius: 25
○ Output:
■ "Fahrenheit: 77"
○ Input:
■ Fahrenheit: 77
○ Output:
■ "Celsius: 25"
*/

#include<stdio.h>
typedef union{
  float celus;
  float faheit;

}Temp;
int main(){

Temp t;
printf("Enter Celsius: ");
scanf("%f",&t.celus);

float faharenheit = (t.celus*9/5)+32;
printf("%.2f\n",faharenheit);

printf("Enter faharenheit: ");
scanf("%f",&t.faheit);

float calcius = (t.faheit-32)*5/9;
printf("%.2f",calcius);



  return 0;
}