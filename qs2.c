#include <stdio.h>
struct teacher
{
  char name[20];
  int age;
  float salary;
};

int main()
{
  struct teacher t1;
  printf("Entet the name: ");
  scanf("%s", &t1.name);

  printf("Enter the age: ");
  scanf("%d", &t1.age);

  printf("Enter the salary: ");
  scanf("%f", &t1.salary);

  printf("Teacher Details:\n");
  printf("Name:- %s\nAge:- %d\nSalary:- %.2f", t1.name, t1.age, t1.salary);

  return 0;
}