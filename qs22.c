/*
Q15: Demonstrate Memory Sharing in a Union
Create a union Data that holds an integer, float, and character. Assign values and
observe the last stored value.
Example Input:
int: 5, float: 4.2, char: 'A'
Example Output:
Only 'A' is retained due to memory sharing.
*/

#include<stdio.h>
#include<string.h>
union Data{
  int a;
  float b;
  char c[20];
};

int main(){
union Data d;
union Data *ptr = &d;

// ptr->a = 5;
ptr->b = 2.4;
// strcpy(ptr->c, "Hello");
// printf("Value of c: %s\n", ptr->c);

printf("%.2f\n",ptr->b);
printf("%d\n",sizeof(ptr->a));

printf("Addres of a: %p\n",&ptr->a);

printf("Addres of b: %p\n",&ptr->b);

printf("Addres of c: %p\n",&ptr->c);

  return 0;
}