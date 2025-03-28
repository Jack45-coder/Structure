/*
Q14: Store Book Publisher Details Using a Nested Structure
Define a Book structure with Publisher as a nested structure (name, year). Display
book details.
Example Input:
Title: C Programming, Publisher: McGraw, 2020
Example Output:
C Programming - McGraw (2020)
*/

#include <stdio.h>
struct Book
{
  char bookname[20];
};

struct Publisher
{
  char name[20];
  int date;
  struct Book book;
};

struct Publisher inputs(){
  struct Publisher p;
  printf("Enter Book Details:\n");

  printf("Enter Publisher Name: ");
  scanf("%s",p.name);

  printf("Enter publishing Year: ");
  scanf("%d",&p.date);

  printf("Enter book Name: ");
  scanf("%s",p.book.bookname);

  return p;
}

void display(struct Publisher p){
  printf("\n%s - %s (%d)\n",p.book.bookname, p.name, p.date);
}

int main()
{
  struct Publisher p = inputs();
  display(p);

  return 0;
}