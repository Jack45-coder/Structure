/*
4. Nested Structure and Union
Q13: Store Student Date of Birth Using a Nested Structure
Define a nested structure Student with DOB as a substructure (day, month, year).
Take input and display the birth date.
Example Input:
John, 15, 8, 2000
Example Output:
John - DOB: 15/08/2000
*/

#include<stdio.h>
struct DOB{
 int day;
 int month;
 int year;
};

struct student{
  char name[20];
  int age;
  struct DOB dob;
};

struct student inputs(){
  struct student s;
  printf("Enter Your Details:\n");
  printf("Enter Name: ");
  scanf("%s",s.name);

  printf("Enter Age: ");
  scanf("%d",&s.age);

  printf("Enter Date Of Birth (DD MM YYYY): ");
  scanf("%d %d %d",&s.dob.day, &s.dob.month, &s.dob.year);

  return s;
}

void DisplayDetails(struct student s){
  printf("\n-----Student Details-----\n");
  printf("%s\n",s.name);
  printf("%d\n",s.age);
  printf("Date of Birth: %02d-%02d-%04d\n", s.dob.day, s.dob.month, s.dob.year);
}

int main(){
  struct DOB dob;
  struct student s;

  s = inputs();
  DisplayDetails(s);



  return 0;
}