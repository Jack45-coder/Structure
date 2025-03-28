/*
Store and Display Employee Details
● Problem: Define a structure Employee with members name, id, and salary. Write a
program to input the details of n employees and print the details of employees whose
salary is above a specified amount.
● Input:
○ Number of Employees: 4
○ Employee 1: "John", 1001, 45000
○ Employee 2: "Jane", 1002, 55000
○ Employee 3: "Mike", 1003, 40000
○ Employee 4: "Lucy", 1004, 60000
○ Minimum Salary to Display: 50000
● Output:
○ "Employee 2: Jane, ID: 1002, Salary: 55000"
○ "Employee 4: Lucy, ID: 1004, Salary: 60000"
*/

#include <stdio.h>
struct Employee
{
  char name[20];
  int id;
  float salary;
};

struct Employee inputs()
{
  struct Employee emp;
  printf("Enter name: ");
  scanf("%19s", emp.name);

  printf("Enter Id: ");
  scanf("%d", &emp.id);

  printf("Enter salary: ");
  scanf("%f", &emp.salary);

  return emp;
}


int main()
{
  int n;
  printf("Enter the number of employee: ");
  scanf("%d",&n);
  struct Employee emp[n];
    for(int i = 0; i < n; i++){
    printf("Details of Employee %d\n",i+1);
    emp[i] = inputs();
  }

  float minsal;
  printf("\nEnter minimum salary to display: ");
  scanf("%f",&minsal);
  for(int i = 0; i < n; i++){
    if(emp[i].salary > minsal){
      printf("Employee: %d: Name: %s, Id: %d, Salary: %.2f\n",i+1,emp[i].name, emp[i].id, emp[i].salary);
    }
  }

  return 0;
}