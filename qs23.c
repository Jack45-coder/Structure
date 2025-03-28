/*
Q16: Use a Union for Vehicle Types
Create a Vehicle union that can store either a car model or a bike model but not
both at the same time.
Example Input:
Vehicle: Car, Model: BMW
Example Output:
Vehicle Type: Car, Model: BMW
*/

#include<stdio.h>
#include<string.h>
union vehicle
{
  int id;
  char name[20];
};


int main(){




  return 0;
}