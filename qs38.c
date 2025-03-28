/*
Find the Oldest and Youngest Person
● Problem: Define a structure Person with members name, age, and address. Write a
program to input the details of n people and determine the oldest and youngest person.
● Input:
○ Number of People: 3
○ Person 1: "John", 28, "123 Maple St"
○ Person 2: "Doe", 34, "456 Oak St"
○ Person 3: "Anna", 22, "789 Pine St"
● Output:
○ "Oldest Person: Doe, Age: 34"
○ "Youngest Person: Anna, Age: 22"
*/

#include <stdio.h>
#include<string.h>
struct person
{
  char name[20];
  int age;
  char add[40];
};

struct person inputs(){
  struct person p;
  printf("Enter name: ");
  scanf("%19s",p.name);

  printf("Enter Age: ");
  scanf("%d",&p.age);
  getchar();

  printf("Enter Address: ");
  fgets(p.add,40,stdin);
  p.add[strcspn(p.add, "\n")] = '\0';

  return p;
}

int main()
{
 int n;
 printf("Enter the number of person: ");
 scanf("%d",&n);

 struct person p[n];
 for(int i = 0; i < n; i++){
  printf("\nDetails of Person %d:\n",i+1);
  p[i] = inputs();
 }

 // // Finding oldest and youngest person:
 int  youngest = 0, oldest = 0;
 for(int i = 0; i < n; i++){
  if(p[i].age > p[oldest].age){
    oldest = i;
  }
  if(p[i].age < p[youngest].age){
    youngest = i;
  }
 }

 printf("OUTPUTS:\n");
 printf("\nOldest Person:\n");
 printf("Name: %s, Age: %d, Address: %s\n",p[oldest].name,p[oldest].age,p[oldest].add);
 printf("\nYoungest Person:\n");
 printf("Name: %s, Age: %d, Address: %s\n",p[youngest].name,p[youngest].age,p[youngest].add);


  return 0;
}