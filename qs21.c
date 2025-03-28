/*
Q18: Use Typedef for Circle Area Calculation
Structures and Unions in C 7
Define a Circle structure using typedef and calculate the area.
Example Input:
Radius: 7
Example Output:
Area: 153.94
*/

#include <stdio.h>
typedef struct
{
  float radios;
} circle;

int main()
{
  circle c;
  printf("Enter the radios of circle: ");
  scanf("%f",&c.radios);

  printf("Area of a circle: %.2f",c.radios*c.radios);
  return 0;
}