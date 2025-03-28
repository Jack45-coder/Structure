/*
3. Function and Structure
Q9: Take Student Details through a Function and Display Them
Write a function to take student details (name, roll number, marks) and return a
structure. Display the details in the main function.
Example Input:
John, 101, 85
Example Output:
Student: John (Roll No: 101) - Marks: 85
*/

#include<stdio.h>
struct student{
  int roll_No;
  char name[20];
  float marks;
};

void inputsDetails(struct student *s){
  printf("\nEnter Student Details:\n");
  printf("Enter Roll.N0: ");
  scanf("%d", &s->roll_No);

  printf("Enter Name: ");
  scanf("%s", s->name);

  printf("Enter Marks: ");
  scanf("%f", &s->marks);
}

void DisplayDetails(struct student *s){
  printf("\n\nDetails of Students:\n");
  printf("Roll.N0: %d\n",s->roll_No);
  printf("Name: %s\n",s->name);
  printf("Marks: %.2f",s->marks);
}

int main(){
struct student s;
struct student *ptr = &s;
inputsDetails(ptr);
DisplayDetails(ptr);

  return 0;
}