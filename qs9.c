/*
Q5: Store and Display Car Details Using a Pointer
Write a program to store details of a car (brand, model, price) using a structure
pointer and display the details.
Example Input:
Toyota, Corolla, 15000
Example Output:
Car: Toyota Corolla - Price: 15000
*/
#include <stdio.h>
typedef struct
{
  char carBrand[20];
  char model[20];
  float price;
} car;

void inputs(car *cr, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("\nEnter Car Details:\n");

    printf("Enter Car Brand: ");
    scanf("%s", cr[i].carBrand);

    printf("Enter the Car model: ");
    scanf( "%s", &cr[i].model);

    printf("Enter the Price of car: ");
    scanf("%f", &cr[i].price);
  }
}

void Display(car *cr, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("\n---%d Car List ---\n",i+1);
    printf("%s %s, price: RS%.2f\n", cr[i].carBrand, cr[i].model, cr[i].price);
  }
}
int main()
{
  int n;
  printf("Enter the number of total car: ");
  scanf("%d", &n);
  car cr[n];
  inputs(cr, n);
  Display(cr, n);

  return 0;
}