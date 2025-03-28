/*
Basic Input and Output Questions for Unions
1. Define and Print a Union
○ Problem: Define a union Data that can hold an integer, a float, and a character.
Write a program to assign and print each member of the union.
○ Input:
■ Integer: 10
■ Float: 15.75
■ Character: 'A'
○ Output:
■ "Integer: 10"
■ "Float: 15.75"
■ "Character: A"
*/

#include <stdio.h>
union Data{
  int integer;
  float Float;
  char Chrctr;
};

int main(){

union Data data;
data.integer = 10;
printf("Integer: %d\n",data.integer);

data.Float = 12.345;
printf("Float: %.2f\n",data.Float);

data.Chrctr = 'A';
printf("Character: %c",data.Chrctr);


  return 0;
}