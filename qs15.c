/*
Q11: Calculate the Distance Between Two Points
Define a Point structure with x and y coordinates. Create a function to calculate
the distance between two points.
Example Input:
Point1: (2, 3)
Point2: (5, 7)
Example Output:
Distance: 5.0
*/

#include <stdio.h>
#include <math.h>
struct coordinates
{
  int x, y;
};

struct coordinates inputsPoint()
{
  struct coordinates p;
  printf("Enter the value of x: ");
  scanf("%d", &p.x);

  printf("Enter the value of y: ");
  scanf("%d", &p.y);
  return p;
}

int FindDistance(struct coordinates p1, struct coordinates p2)
{
  int diffX = p2.x - p1.x;
  int diffY = p2.y - p1.y;

  return (diffX * diffX) + (diffY * diffY);
}

int main()
{

  struct coordinates p1, p2;

  printf("Enter the value for point 1:\n");
  p1 = inputsPoint(); // Storing returned structure

  printf("Enter the value for Point 2:\n");
  p2 = inputsPoint(); // Storing returned structure


  double distance = sqrt(FindDistance(p1, p2));
  printf("%.2f", distance);

  return 0;
}