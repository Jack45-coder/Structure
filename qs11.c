/*
Q7: Calculate the Area of a Rectangle Using a Pointer
Define a Rectangle structure with fields for length and width. Use a pointer to store
values and compute the area.
Example Input:
Length: 10, Width: 5
Example Output:
Area: 50
*/

#include <stdio.h>
typedef struct
{
  float length, width;
} rectangle;

int AreaofRectangle(rectangle *rect)
{
  printf("The area of the rectangle is: %.2f\n",rect->length * rect->width);
  return rect->length * rect->width;
}

int main()
{
  rectangle rect; // Normal structure variable
  rectangle *ptr; // Pointer to structure

  ptr = &rect; // Pointer को structure के address पर point किया

  printf("Enter the length of rectangle: ");
  scanf("%f", &ptr->length);

  printf("Enter the width of rectangle: ");
  scanf("%f", &ptr->width);

  AreaofRectangle(ptr);

  return 0;
}