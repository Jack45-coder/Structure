/*
Q19: Use Typedef for a Movie Database
Store and display a movie’s title, director, and year using typedef .
Example Input:
Inception, Christopher Nolan, 2010
Example Output:
Movie: Inception - Director: Christopher Nolan - Released: 2010
*/

#include <stdio.h>
#include <string.h>
typedef struct
{
  char name[20];
  char direct[25];
  int relsDate;

} movies;

void inputsDetails(movies *m)
{
  printf("Enter Movie name: ");
  fgets(m->name, 100, stdin);

  printf("Enter Director name: ");
  fgets(m->direct, 100, stdin);

  printf("Enter Released Date: ");
  scanf("%d", &m->relsDate);
}

void DisplayDetails(movies *m)
{
  printf("Name: %s  Director: %s Released: %d", m->name, m->direct, m->relsDate);
}

int main()
{

  movies m;
  movies *ptr = &m;
  inputsDetails(ptr);
  DisplayDetails(ptr);

  return 0;
}