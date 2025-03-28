/*
Q10: Compare Two Employees' Salaries Using a Function
Write a function that takes two employee structures as arguments and compares
their salaries. Display who earns more.
Example Input:
John, 45000
Alice, 60000
Example Output:
Alice has a higher salary.
*/

#include <stdio.h>
typedef struct
{
  char name[20];
  int salary;
} employee;

void compareSalaries(employee emp1, employee emp2)
{
  if (emp1.salary > emp2.salary)
  {
    printf("%s has a higher salary.\n", emp1.name);
  }

  else if (emp2.salary > emp1.salary)
  {
    printf("%s has a higher salary.\n", emp2.name);
  }

  else
  {
    printf("Both employees have the same salary.\n");
  }
}

int main()
{
  employee emp1,emp2;
  printf("Enter Employee 1 name: ");
  scanf("%s",emp1.name);

  printf("Enter Empolyee 1 salary: ");
  scanf( "%d",&emp1.salary);

  printf("Enter Employee 2 name: ");
  scanf("%s",emp2.name);

  printf("Enter Empolyee 2 salary: ");
  scanf( "%d",&emp2.salary);

  compareSalaries(emp1,emp2);
  return 0;
}