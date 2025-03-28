/*
2. Union and Memory Sharing
○ Problem: Define a union Number with members int_num (int) and float_num
(float). Write a program to input an integer, print it, then input a float and print
both values to show how the union shares memory.
○ Input:
■ Integer: 42
■ Float: 3.14
○ Output:
■ "Integer: 42"
■ "Float (after assigning to union): 3.14
*/

#include <stdio.h>
union Number
{
  int int_num;
  float float_num;
};

int main()
{
  union Number num;
  num.int_num = 42;
  printf("Integer num: %d\n",num.int_num);

  num.float_num = 3.14;
  printf("Float (after assigning to union): %.2f\n",num.float_num);

  printf("Integer (after assigning float): %d\n", num.int_num);

  return 0;
}