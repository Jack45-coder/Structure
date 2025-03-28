// WAP to calculate the area of a rectangle using a structure

#include <stdio.h>
struct Rectangle
{
  float length;
  float width;
};
int main()
{
  struct Rectangle rect;
  printf("Enter length of the rectangle: ");
  scanf("%f", &rect.length);

  printf("Enter width of the rectangle: ");
  scanf("%f", &rect.width);

  float area = rect.length * rect.width;
  printf("Area of a rectangle:- %.2f", area);

  return 0;
}