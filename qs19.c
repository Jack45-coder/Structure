/*
Q20: Use Typedef for Time Addition
Create a Time structure using typedef and add two time values.
Example Input:
Time1: 2h 45m 30s
Time2: 1h 20m 40s
Example Output:
Total Time: 4h 6m 10s
*/

#include<stdio.h>
typedef struct{
  int h;
  int m;
  int s;
} Time;

Time inputsTime(){
  Time t;
  printf("Enter the time (HH:MM:SS): ");
  scanf("%d:%d:%d",&t.h, &t.m, &t.s);

  return t;
}

Time AddTime(Time t1, Time t2){
  Time sum;

  sum.s = t1.s + t2.s;
  sum.m = t1.m + t2.m + (sum.s / 60);
  sum.s = sum.s % 60;

  sum.h = t1.h + t2.h + (sum.m / 60);
  sum.m = sum.m/60;

  return sum;
}

void DisplayTime(Time t){
  printf("%d:%d:%d",t.h, t.m, t.s);
}

int main(){
  Time t1, t2, total;

  printf("Enter Time 1:\n");
  t1 = inputsTime();

  printf("Enter Time 2:\n");
  t2 = inputsTime();

  total = AddTime(t1, t2);
  DisplayTime(total);

  return 0;
}