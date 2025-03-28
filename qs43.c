/*
Manage Student Grades
● Problem: Define a structure Student with members name, roll_number, and an
array grades[3] for 3 subjects. Write a program to input the details of n students and
display the student with the highest total marks.
● Input:
○ Number of Students: 3
○ Student 1: "Alice", 101, {85, 90, 78}
○ Student 2: "Bob", 102, {88, 79, 85}
○ Student 3: "Charlie", 103, {90, 92, 89}
● Output:
○ "Top Scorer: Charlie, Total Marks: 271"
*/
#include <stdio.h>
#include <string.h>
struct student
{
  char name[20];
  int rno;
  int marks[3];
};

struct student inputs()
{
  struct student s;
  getchar();
  printf("Enter Name: ");
  fgets(s.name, 20, stdin);
  s.name[strcspn(s.name, "\n")] = '\0';

  printf("Enter Roll No: ");
  scanf("%d", &s.rno);
  ;

  printf("Enter marks 3 subjects:\n");
  for (int i = 0; i < 3; i++)
  {
    printf("Subject %d: ", i + 1);
    scanf("%d", &s.marks);
  }
}

int main()
{
  int n;
  printf("Enter Number of students: ");
  scanf("%d", &n);

  struct student s[n];
  for (int i = 0; i < n; i++)
  {
    printf("\nDetails of Student %d:\n", i + 1);
    s[i] = inputs();
  }

  int maxindex = 0, maxmarks = 0;
  for (int i = 0; i < n; i++)
  {
    int total = 0;
    for (int j = 0; j < 3; j++)
    {
      total += s[i].marks[j];
    }
    if (total > maxmarks)
    {
      maxmarks = total;
      maxindex = i;
    }
  }
  printf("\nTopper Student:\n");
  printf("Name: %s, Roll No: %d, Total Marks: %d\n", s[maxindex].name, s[maxindex].rno, maxmarks);
  printf("\nTopper Student:\n");

  return 0;
}
