/*
Q4: Sort Books by Price in Ascending Order
Define a Book structure with fields for title, author, and price. Store book details in
an array and display them sorted by price in ascending order.
Example Input:
Book A - 500
Book B - 300
Book C - 700
Example Output:
Book B - 300
Book A - 500
Book C - 700
*/
#include<stdio.h>
struct Book {
   char bookName[20];
   int price;
};

void inputs(struct Book bk[], int n){
  for(int i = 0; i < n; i++){
    printf("\nEnter the details For book %d\n",i+1);

    printf("Enter the name of book: ");
    scanf("%s",&bk[i].bookName);

    printf("Enter the price of book: ");
    scanf("%d",&bk[i].price);
  }
}

void Ascending_price(struct Book bk[], int n){
  for(int i = 0; i < n-1; i++){
    for(int j = 0; j < n-i-1;j++){
      if(bk[j].price > bk[j+1].price){
        struct Book temp = bk[j];
        bk[j] = bk[j+1];
        bk[j+1] = temp;
      }
    }
  }
}

void DisplayAscendingOrder(struct Book bk[], int n){
  printf("\n--- Books Sorted by Price ---\n");
  for(int i = 0; i < n; i++){
    printf("Book Name: %s\n", bk[i].bookName);
    printf("Price: %d\n", bk[i].price);
  }
}
int main(){
  int n;
  printf("Enter the number of total Book: ");
  scanf("%d", &n);
  struct Book bk[n];
  inputs(bk,n);
  Ascending_price(bk,n);
  DisplayAscendingOrder(bk,n);





  return 0;
}