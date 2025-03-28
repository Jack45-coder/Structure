/*
 Problem: Define a structure Student with members name, roll_number, and marks.
Write a program to input the details of n students and sort them based on their marks in
descending order.
● Input:
○ Number of Students: 3
○ Student 1: "Alice", 101, 88.5
○ Student 2: "Bob", 102, 79.0
○ Student 3: "Charlie", 103, 92.3
● Output:
○ "Student 3: Charlie, Marks: 92.3"
○ "Student 1: Alice, Marks: 88.5"
○ "Student 2: Bob, Marks: 79.0"
*/

#include <stdio.h>
#include <string.h>
struct student
{
  char name[20];
  int rno;
  float marks;
};

struct student inputs(struct student *s)
{
  // printf("Enter Details of Details:\n");
  printf("Enter name: ");
  scanf("%19s", s->name);

  printf("Enter RollNo: ");
  scanf("%d", &s->rno);

  printf("Enter Marks: ");
  scanf("%f", &s->marks);

  return *s;
}

int main()
{
  int n;
  printf("Number of Student: ");
  scanf("%d", &n);

  struct student s[n];
  struct student *ptr = &s[n];

  for (int i = 0; i < n; i++)
  {
    printf("Enter Details for Student %d:\n", i + 1);
    s[i] = inputs(ptr);
  }

  // descending Order:
  for(int i = 0; i < n; i++){
    
  }


  return 0;
}