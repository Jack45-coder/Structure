/*
Manage Product Stock
● Problem: Define a structure Product with members product_name, product_id,
and quantity. Write a program to input the details of n products and find the product
with the highest quantity.
● Input:
○ Number of Products: 3
○ Product 1: "Sugar", 101, 50
○ Product 2: "Rice", 102, 120
○ Product 3: "Wheat", 103, 90
● Output:
○ "Product with Highest Quantity: Rice, Quantity: 120"
*/
#include <stdio.h>
struct product
{
  char name[20];
  int Pid;
  float price;

};

struct product inputs(struct product *p){
  printf("Enter Product Name: ");
  scanf("%19s",p->name);

  printf("Enter product ID: ");
  scanf("%d",&p->Pid);

  printf("Enter Product price: ");
  scanf("%f",&p->price);

  return *p;
}

int main()
{
  int n;
  printf("Enter Number of Products: ");
  scanf("%d", &n);
  struct product p[n];

  for(int i = 0; i < n; i++){
    printf("\nEnter Details Of Products %d:\n",i+1);
    p[i] = inputs(&p[i]);
  }


  int maxIndex = 0;
  float maxprice = p[0].price;
  for(int i = 0; i < n; i++){
    if(p[i].price > maxprice){
      maxprice = p[i].price;
      maxIndex = i;
    }
  }

  printf("Product With Highest Quantity:\n");
  printf("Product Name: %s, Item_Code: %d, Price: %.2f\n",p[maxIndex].name, p[maxIndex].Pid,p[maxIndex].price);



  return 0;
}