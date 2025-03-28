/*
1. Define and Print a Structure
○ Problem: Define a structure Student with members name (string), age (int),
and marks (float). Write a program to input the details of a student and print
them.
○ Input:
■ Name: "John"
■ Age: 20
■ Marks: 85.5
○ Output:
■ "Name: John"
■ "Age: 20"
■ "Marks: 85.50"
*/


#include<stdio.h>
#include<string.h>
struct student{
  char name[30];
  int age;
  float marks;

};

struct student inputsDetails(){
  struct student s;
  printf("Enter Name: ");
  fgets(s.name,20,stdin);
  s.name[strcspn(s.name, "\n")] = '\0';
  printf("Enter age: ");
  scanf("%d",&s.age);
  printf("Enter marks: ");
  scanf("%f",&s.marks);

  return s;
}
int main(){

struct student s1 = inputsDetails();

printf("Details of student:\n");
puts(s1.name);
printf("Age: %d\n",s1.age);
printf("%.2f",s1.marks);

  return 0;
}