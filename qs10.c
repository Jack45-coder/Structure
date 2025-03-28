#include <stdio.h>
typedef struct
{
  int idnum;
  char name[20];
  int price;
} product;

void inputs(product *pd, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("Enter the details for products %d:\n", i + 1);

    printf("Enter the Id number: ");
    scanf("%d", &(pd + i)->idnum);

    printf("Enter the product's name: ");
    scanf("%s", (pd + i)->name);

    printf("Enter the product's price: ");
    scanf("%d", &(pd + i)->price);
  }
}

void Display(product *pd, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("\n---%d Product List ---\n", i + 1);
    printf("Product name: %s\nProduct Id: %d\nProduct Price: %dRs\n", (pd + i)->name, (pd + i)->idnum, (pd + i)->price);
  }
}

int main()
{
  int n;
  printf("Enter the number of products: ");
  scanf("%d", &n);

  product pd[n];
  inputs(pd, n);
  Display(pd, n);

  return 0;
}