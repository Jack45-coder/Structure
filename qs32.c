/*
5. Union for Storing Employee Information
○ Problem: Define a union EmployeeData with members employee_id (int),
salary (float), and department (char[20]). Write a program to store and print
employee data for different types of input.
○ Input:
■ Employee ID: 105
■ Salary: 45000.50
■ Department: "HR"
○ Output:
■ "Employee ID: 105"
■ "Salary: 45000.50"
■ "Department: HR"
*/

#include<stdio.h>
#include<string.h>
typedef union{
  int Id;
  float salary;
  char department[20];

}Employee;

Employee inputs(Employee *emp){
  printf("Enter Id: ");
  scanf("%d",&emp->Id);

  printf("Enter salary: ");
  scanf("%f",&emp->salary);

  printf("Enter Department: ");
  scanf("%19s",emp->department);

  return *emp;
}

void OP_Details(Employee *emp){
  printf("Employee ID: %d\n",emp->Id);

  printf("Salary: %.2f\n",emp->salary);

  printf("Department: %s",emp->department);
}
int main(){

Employee emp;
Employee *ptr = &emp;
inputs(ptr);
OP_Details(ptr);


  return 0;
}