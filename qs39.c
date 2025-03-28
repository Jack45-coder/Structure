/*
Inventory Management
● Problem: Define a structure Item with members item_name, item_code, and price.
Write a program to input the details of n items in a store and display the details of the
most expensive item.
● Input:
○ Number of Items: 3
○ Item 1: "Laptop", 101, 75000
○ Item 2: "Phone", 102, 25000
○ Item 3: "Tablet", 103, 30000
● Output:
○ "Most Expensive Item: Laptop, Price: 75000"
*/

#include<stdio.h>
struct Item{
  char It_Name[20];
  int It_Code;
  float It_price;

};

struct Item inputs(struct Item *It){
  printf("Enter Item Name: ");
  scanf("%19s",It->It_Name);

  printf("Enter Item Code: ");
  scanf("%d",&It->It_Code);
  getchar();

  printf("Enter Item price: ");
  scanf("%f",&It->It_price);

  return *It;
}
int main(){

int n;
printf("Enter Number of Items: ");
scanf("%d",&n);

struct Item It[n];
struct Item *ptr = It;

for(int i = 0; i < n; i++){
  printf("\nEnter details for item %d:\n", i + 1);
  It[i] = inputs(&It[i]);
}

int maxIndex = 0;
float maxPrice = It[0].It_price;
for(int i = 0; i < n ;i++){
  if(It[i].It_price > maxPrice){
    maxPrice = It[i].It_price;
    maxIndex = i;
  }
}
// Display the most expensive item
printf("\nMost Expensive Item:\n");
printf("Item_Name: %s, Item_Code: %d, Item_Price: %.2f\n",It[maxIndex].It_Name, It[maxIndex].It_Code, It[maxIndex].It_price);


  return 0;
}