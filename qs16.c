/*
Q12: Calculate Employee Bonus Based on Experience
Write a function to calculate an employee’s bonus (20% of salary if experience is
more than 10 years).
Example Input:
Alice, 60000, 12 years
Example Output:
Bonus: 12000
*/
#include<stdio.h>
struct employee{
  char name[20];
  int salary;
  int exp;
};

void calculateBonus(struct employee emp){
  if(emp.exp >= 10){
    int bonus = emp.salary*20/100;
    printf("%d",bonus);
  }
  else{
    printf("Your bonus is not Avilable");
  }
}
int main(){
  struct employee emp;
  printf("Enter name: ");
  scanf("%s",emp.name);

  printf("Enter Salary: ");
  scanf("%d",&emp.salary);

  printf("Enter experience: ");
  scanf("%d",&emp.exp);
  calculateBonus(emp);




  return 0;
}