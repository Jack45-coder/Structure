/*
Q2: Find the Student with the Highest Marks
Modify the above program to find and display the student who has the highest
marks.
Example Output:
Highest Scorer: Alice (Roll No: 102) - Marks: 90
*/
#include <stdio.h>
struct student
{
  char name[20];
  int roll_No;
  int marks;
};

void inputs(struct student st[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("\nEnter details for student %d:\n", i + 1);

    printf("Enter name: ");
    scanf("%s",&st[i].name);

    printf("Enter Roll.No: ");
    scanf("%d",&st[i].roll_No);

    printf("Enter Marks: ");
    scanf("%d",&st[i].marks);
  }
}

void findMaxMarks(struct student st[],int n){
  int max = 0;
  for(int i = 0; i< n; i++){
    if(st[i].marks > st[max].marks){
        max = i;
    }
  }
  printf("\n--- Student with Highest Marks ---\n");
  printf("Name: %s\n", st[max].name);
  printf("Roll No: %d\n", st[max].roll_No);
  printf("Marks: %d\n", st[max].marks);
}
int main()
{
  int n;
  printf("Enter the number of students: ");
  scanf("%d",&n);

  struct student st[n];
  inputs(st,n);
  findMaxMarks(st,n);


  return 0;
}