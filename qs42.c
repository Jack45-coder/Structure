/*
Store and Display Car Details
● Problem: Define a structure Car with members brand, model, and price. Write a
program to input the details of n cars and display the details of all cars whose price is
below a given amount.
● Input:
○ Number of Cars: 3
○ Car 1: "Toyota", "Camry", 30000
○ Car 2: "Honda", "Accord", 28000
○ Car 3: "BMW", "X5", 50000
○ Maximum Price: 35000
● Output:
○ "Car 1: Toyota Camry, Price: 30000"
○ "Car 2: Honda Accord, Price: 28000"
*/

#include <stdio.h>
#include <string.h>
struct car
{
  char brand[30];
  char model[15];
 int price;
};

struct car inputs(struct car *c)
{
  getchar();
  printf("Enter Brand: ");
  fgets(c->brand, 30, stdin);
  c->brand[strcspn(c->brand, "\n")] = '\0';

  printf("Enter Modle: ");
  fgets(c->model, 15, stdin);
  c->model[strcspn(c->model, "\n")] = '\0';

  printf("Enter price: ");
  scanf("%d", &c->price);


  return *c;
}

int main()
{

  int n;
  printf("Enter Number of car: ");
  scanf("%d", &n);

  struct car c[n];

  for(int i = 0; i < n; i++){
    printf("\nEnter car details %d:\n",i+1);
    inputs(&c[i]);
  }

  int MxP;
  printf("Enter maximum price: ");
  scanf("%d",&MxP);

  printf("\nCars with price below %d:\n", MxP);
  int found = 0;
  for(int i = 0; i < n; i++){
    if(c[i].price <= MxP){
      printf("Brand: %s, Model: %s, Price: %d\n",c[i].brand, c[i].model, c[i].price);
     found = 1;
    }
  }
  if (!found) {
    printf("No cars found within the given price range.\n");
}

  return 0;
}