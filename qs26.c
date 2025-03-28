/*
3. Store and Print Details of Multiple Employees
○ Problem: Define a structure Employee with members name, id, and salary.
Write a program to input and print the details of 3 employees.
○ Input:
■ Employee 1: "Alice", 101, 50000
■ Employee 2: "Bob", 102, 55000
■ Employee 3: "Charlie", 103, 60000
○ Output:
■ "Employee 1: Name: Alice, ID: 101, Salary: 50000"
■ "Employee 2: Name: Bob, ID: 102, Salary: 55000"
■ "Employee 3: Name: Charlie, ID: 103, Salary: 60000"
*/
#include <stdio.h>
#include<string.h>
typedef struct
{
  char name[20];
  int id;
  int salary;
} employee;

employee inputs()
{
  employee emp;
  printf("Enter Name: ");
  fgets(emp.name, 20, stdin);
  emp.name[strcspn(emp.name, "\n")] = '\0';

  printf("Enter id: ");
  scanf("%d", &emp.id);

  printf("Enter salary: ");
  scanf("%d", &emp.salary);

  getchar();

  return emp;
}

void outputsDetails(employee emp)
{
  printf("Name: %s, ID: %d, Salary: %d\n", emp.name, emp.id, emp.salary);

}

int main()
{
  employee emp1 = inputs();
  employee emp2 = inputs();
  employee emp3 = inputs();

  printf("\nEmployee Details:\n");
  outputsDetails(emp1);
  outputsDetails(emp2);
  outputsDetails(emp3);


  return 0;
}