#include<stdio.h>
void inputsArray(int *n, int arr[]){
  printf("Enter %d elements:\n",n);
  for(int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }
}
int main(){
int n;
printf("Enter the size of Array: ");
scanf("%d",&n);
int *ptr = &n;

int arr[n];
inputsArray(n,arr);

  return 0;
}