/*
Calculate Total and Average Marks for a Class
● Problem: Define a structure Student with members name, roll_number, and marks.
Write a program to input the details of n students and calculate the total and average
marks of the class.
● Input:
○ Number of Students: 3
○ Student 1: "Alice", 101, 88.5
○ Student 2: "Bob", 102, 79.0
○ Student 3: "Charlie", 103, 92.3
● Output:
○ "Total Marks: 259.8"
○ "Average Marks: 86.6"
*/

#include <stdio.h>
struct student
{
  char name[20];
  int rno;
  float m;
};

struct student inputs(struct student *s)
{
  printf("Enter Details:\n");
  printf("Enter Name: ");
  scanf("%s", s->name);

  printf("Enter RollNo: ");
  scanf("%d", &s->rno);

  printf("Enter Marks: ");
  scanf("%f", &s->m);

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

  float Tmarks = 0;
  printf("Average Marks:\n");
  for(int i = 0; i < n; i++){
    Tmarks += s[i].m;
  }
  float avg = Tmarks/n;

  printf("Total marks: %.2f\n",Tmarks);
  printf("Average: %.2f",avg);


  return 0;
}