/*
3. Store Multiple Data Types Using Union
○ Problem: Define a union Value that can store an integer, a float, or a character.
Write a program to store and print an integer, then store and print a character,
and finally store and print a float.
○ Input:
■ Integer: 100
■ Character: 'B'
■ Float: 23.45
○ Output:
■ "Stored Integer: 100"
■ "Stored Character: B"
■ "Stored Float: 23.45"
*/

#include <stdio.h>
typedef union
{
  int i;
  char c;
  float f;
} Datas;

int main()
{
  Datas d;
  printf("Enter integer Value: ");
  scanf("%d",&d.i);
  printf("Integer value: %d\n",d.i);

  printf("Enter character: ");
  scanf(" %C",&d.c);
  printf("Character %c\n",d.c);

  printf("Enter float value: ");
  scanf("%f",&d.f);
  printf("float: %.2f\n",d.f);

  return 0;
}