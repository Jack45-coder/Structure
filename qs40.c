/*
Manage Library Book Records
● Problem: Define a structure Book with members title, author, and price. Write a
program to input the details of n books and print the details of books authored by a
specific author.
● Input:
○ Number of Books: 4
○ Book 1: "Book A", "Author 1", 300
○ Book 2: "Book B", "Author 2", 450
○ Book 3: "Book C", "Author 1", 500
○ Book 4: "Book D", "Author 3", 250
○ Author to Search: "Author 1"
● Output:
○ "Book A, Author: Author 1, Price: 300"
○ "Book C, Author: Author 1, Price: 500"
*/

#include <stdio.h>
#include<string.h>
struct Book
{
  char title[20];
  char Author[30];
  float price;
};

struct Book inputs()
{
  struct Book b;
  getchar();
  printf("Enter Title: ");
  fgets(b.title,20,stdin);
  b.title[strcspn(b.title, "\n")] = '\0';

  printf("Enter Author Name: ");
  fgets(b.Author,20,stdin);
  b.Author[strcspn(b.Author, "\n")] = '\0';

  printf("Enter Price: ");
  scanf("%f", &b.price);

  return b;
}

int main()
{
  int n;
  printf("Enter Number of Books: ");
  scanf("%d", &n);

  struct Book b[n];

  for (int i = 0; i < n; i++)
  {
    printf("\nEnter details for book %d:\n", i + 1);
    b[i] = inputs();
  }

  char serchAuthor[30];
  getchar();
  printf("\nEnter author name to search: ");
  fgets(serchAuthor, 30, stdin);
  serchAuthor[strcspn(serchAuthor, "\n")] = '\0';

  // Display books by the searched author
  int found = 0;
  for (int i = 0; i < n; i++)
  {
    if (strcmp(b[i].Author, serchAuthor) == 0)
    {
      printf("Title: %s, Price: %.2f\n", b[i].title, b[i].price);
      found = 1;
    }
  }

  if (!found) {
    printf("No books found by '%s'\n", serchAuthor);
}

  return 0;
}