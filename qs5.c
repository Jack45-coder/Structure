/*
Q1: Store and Display Student Details
Write a C program to store details of multiple students, including their name, roll
number, and marks, using an array of structures. Then, display all student details.
Example Input:
John, 101, 85
Alice, 102, 90
Bob, 103, 78
Example Output:
John (Roll No: 101) - Marks: 85
Alice (Roll No: 102) - Marks: 90
Bob (Roll No: 103) - Marks: 78
*/

#include <stdio.h>
struct student
{
  char name[20];
  int roll_N0;
  float marks;
};

void inputs(struct student students[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("\nEnter details for student %d:\n", i + 1);

    printf("Enter name: ");
    scanf("%s", &students[i].name);

    printf("Enter roll number: ");
    scanf(" %d", &students[i].roll_N0);

    printf("Enter marks: ");
    scanf("%f", &students[i].marks);
  }
}

void Display(struct student students[], int n){
  printf("\n--- Student Details ---\n");
  for(int i = 0; i < n; i++){
    printf("\nStudent %d\n",i+1);
    printf("Name: %s\n",students[i].name);
    printf("Roll.N0: %d\n",students[i].roll_N0);
    printf("Marks: %.2f\n", students[i].marks);
  }
}
int main()
{
  int n;
  printf("Enter the number of students: ");
  scanf("%d", &n);
  struct student students[n];
  inputs(students,n);
  Display(students,n);

  return 0;
}