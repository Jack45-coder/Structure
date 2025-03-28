#include <stdio.h>
struct add
{
  char dist;
  int pin;
};

struct student
{
  char name;
  int marks;
  struct add ads;
};
int main()
{
  struct student s1;
  s1.name = 'J';
  s1.marks = 98;

  s1.ads.dist = 'p';
  s1.ads.pin = 813209;

  printf("Student: %c %d\n",s1.name,s1.marks);
  printf("Student ads: %c %d",s1.ads.dist,s1.ads.pin);

  return 0;
}