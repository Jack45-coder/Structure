#include<stdio.h>
struct student{
  char name[20];
  int marks;
};
int main(){

  struct student s1;
  printf("Enter the name:- ");
  scanf("%s",&s1.name);

  printf("Enter the marks:- ");
  scanf("%d",&s1.marks);

 struct student s2;
 printf("Enter the name:- ");
 scanf("%s",&s2.name);

 printf("Enter the marks:- ");
 scanf("%d",&s2.marks);

 struct student s3;
 printf("Enter the name:- ");
 scanf("%s",&s3.name);

 printf("Enter the marks:- ");
 scanf("%d",&s3.marks);

 printf("1. Name:- %s, Marks:- %d\n",s1.name,s1.marks);
 printf("2. Name:- %s, Marks:- %d\n",s2.name,s2.marks);
 printf("3. Name:- %s, Marks:- %d\n",s3.name,s3.marks);


  return 0;
}