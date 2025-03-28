/*
Q8: Modify Person Details Using Pointers
Create a Person structure with fields for name and age. Modify the age value using
a pointer.
Example Input:
Original: Alice, 25
Modified: Alice, 30
Example Output:
Updated Age: 30
*/

// #include <stdio.h>
// struct person
// {
//   char name[20];
//   int age;
// };

// void inputs(struct person *p)
// {
//   printf("Enter Name: ");
//   scanf("%s", p->name);

//   printf("Enter Age: ");
//   scanf("%d", &p->age);
// }

// void modifyAge(struct person *p, int newAge)
// {
//   p->age = newAge;
// }

// void DisplayPerson(struct person *p)
// {
//   printf("\nPerson Details:\n");
//   printf("%s\n", p->name);
//   printf("%d", p->age);
// }

// int main()
// {
//   struct person p;
//   struct person *ptr = &p;

//   inputs(ptr);
//   DisplayPerson(ptr);

//   int newAge;
//   printf("\nEnter new age: ");
//   scanf("%d", &newAge);
//   modifyAge(ptr, newAge);

//   DisplayPerson(ptr);

//   return 0;
// }

#include<stdio.h>
typedef struct{
  char name[20];
  int age;
} student;

int main(){
student s;
student *ptr = &s;
char name[20];
int age;
printf("Enter name: ");
scanf("%s",ptr->name);

printf("Enter age : ");
scanf("%d",&ptr->age);

printf("\nPerson Details:\n");
printf("Name: %s\n",ptr->name);
printf("Age : %d\n",ptr->age);

printf("Enter NewAge:");
scanf("%d",&ptr->age);
printf("\nUpdated Person Details:\n");
printf("Name: %s\n",ptr->name);
printf("Age : %d\n",ptr->age);

  return 0;
}