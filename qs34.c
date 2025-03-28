/*
Store and Display Details of Multiple Students
● Problem: Define a structure Student with members name, roll_number, and marks.
Write a program to input the details of n students and print them.
● Input:
○ Number of Students: 3
○ Student 1: "Alice", 101, 88.5
○ Student 2: "Bob", 102, 79.0
○ Student 3: "Charlie", 103, 92.3
● Output:
○ "Student 1: Name: Alice, Roll Number: 101, Marks: 88.5"
○ "Student 2: Name: Bob, Roll Number: 102, Marks: 79.0"
○ "Student 3: Name: Charlie, Roll Number: 103, Marks: 92.3"
*/

#include <stdio.h>
#include <string.h>
struct student
{
  char name[20];
  int rno;
  float m;
};

struct student inputs()
{
  struct student s;
  getchar();
  printf("Enter Name: ");
  fgets(s.name, 20, stdin);
  s.name[strcspn(s.name, "\n")] = '\0';

  printf("Enter RollNo: ");
  scanf("%d", &s.rno);

  printf("Enter Marks: ");
  scanf("%f", &s.m);

  return s;
}

int main()
{
  int n;
  printf("Enter the number of student: ");
  scanf("%d", &n);

  struct student s[n];
  for (int i = 0; i < n; i++)
  {
    printf("\nEnter Details for Student %d:\n", i + 1);
    s[i] = inputs();
  }

  printf("\nDetails of Students:\n");
  for(int i = 0; i < n; i++){
    printf("Student %d: Name: %s, Roll: %d, Marks: %.2f\n", i + 1, s[i].name, s[i].rno, s[i].m);
  }
  return 0;
}