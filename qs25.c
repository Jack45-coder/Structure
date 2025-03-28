/*
2. Calculate the Area of a Rectangle Using a Structure
○ Problem: Define a structure Rectangle with members length and width.
Write a program to input the dimensions of the rectangle and calculate its area.
○ Input:
■ Length: 10
■ Width: 5
○ Output:
■ "Area of Rectangle: 50"
*/
#include <stdio.h>
struct rectangle
{
  float length;
  float width;
};

struct rectangle inputs()
{
  struct rectangle r;
  printf("Enter the size of length: ");
  scanf("%f", &r.length);

  printf("Enter the size of width: ");
  scanf("%f", &r.width);

  return r;
}

int areaOfRectangle(struct rectangle *r)
{

  float area = r->length * r->width;

  printf("%.2f", area);
  return area;
}

int main()
{
  struct rectangle r = inputs();
  struct rectangle *ptr = &r;
  areaOfRectangle(ptr);

  return 0;
}