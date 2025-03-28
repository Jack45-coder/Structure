#include <stdio.h>
struct student
{
  char name;
  int roll;
  float marks;
};

int main()
{
  struct student s1;
  s1.roll = 10;
  s1.name = 'J';
  s1.marks = 98.87;

  struct student s2;
  s2.roll = 14;
  s2.name = 'k';
  s2.marks = 88.87;

  printf("Name - %c\n", s1.name);
  printf("Roll - %d\n", s1.roll);
  printf("Marks - %.2f\n", s1.marks);

  printf("Name - %c\n", s2.name);
  printf("Roll - %d\n", s2.roll);
  printf("marks - %.2f", s2.marks);

  return 0;
}