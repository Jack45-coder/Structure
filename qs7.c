/*
Q3: Filter Employees by Salary
Create an Employee structure with fields for employee ID, name, and salary. Store
multiple employee records in an array and display only those employees whose
salary is greater than 50,000.
Example Input:
John, 1001, 45000
Alice, 1002, 60000
Bob, 1003, 55000
Example Output:
Alice (ID: 1002) - Salary: 60000
Bob (ID: 1003) - Salary: 55000
*/

#include <stdio.h>
typedef struct
{
  int id;
  char name[25];
  int salary;
} employee;

void inputs(employee emp[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("\nEnter details for emoloyee %d:\n", i + 1);

    printf("Please enter your Id number: ");
    scanf("%d", &emp[i].id);

    printf("Enter your name: ");
    scanf("%s", &emp[i].name);

    printf("Enter Salary: ");
    scanf("%d", &emp[i].salary);
  }
}

void targetSalaray(employee emp[], int n)
{
  int found = 0;
  for (int i = 0; i < n; i++)
  {
    if (emp[i].salary > 50000)
    {
      printf("\nEmployee ID: %d\n", emp[i].id);
      printf("Name: %s\n", emp[i].name);
      printf("Salary: %d", emp[i].salary);
      found = 1;
    }
  }
  if (!found)
  {
    printf("\nNo employees have a salary greater than 50,000.\n");
  }
}
int main()
{
  int n;
  printf("Enter the number of total Employee: ");
  scanf("%d", &n);

  employee emp[n];
  inputs(emp, n);
  targetSalaray(emp, n);

  return 0;
}
