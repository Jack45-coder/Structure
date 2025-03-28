/*
4. Calculate Total and Average Marks of a Student
Problem: Define a structure Student with members name, roll_number, and
an array marks[5] for 5 subjects. Write a program to input the marks and
calculate the total and average marks.
Input:
■ Name: "David"
■ Roll Number: 10
■ Marks: 85, 90, 78, 88, 92
○ Output:
■ "Total Marks: 433"
■ "Average Marks: 86.60"
*/
#include <stdio.h>
#include <string.h>
struct student{
  char name[20];
  int rollNum;
 float marks[5];
};

struct student inputs(){
  struct student s;
  printf("Enter Name: ");
  fgets(s.name,20,stdin);
  s.name[strcspn(s.name, "\n")] = '\0';

  printf("Enter Roll N0: ");
  scanf("%d",&s.rollNum);

  printf("Enter Marks:\n");
  for(int i = 0; i < 5; i++){
    printf("Subject %d: ", i+1);
    scanf("%f",&s.marks[i]);
  }

  getchar();

  return s;
}

void outputAVG(struct student *s){
  printf("Name: %s, Roll No: %d\n",s->name,s->rollNum);
  float tMarks = 0;
  for(int i = 0; i < 5; i++){
    tMarks += s->marks[i];
  }
  float avg = tMarks/5;
  printf("Total Marks: %.2f\n",tMarks);
  printf("Average Marks: %.2f\n", avg);
}

int main()
{
  struct student s = inputs();
  struct student *ptr = &s;
  outputAVG(ptr);

  return 0;
}