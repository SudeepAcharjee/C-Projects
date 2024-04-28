#include <stdio.h>

int main() {
  int myAge;
  int votingAge = 18;

    printf("Enter Your Age: ");
    scanf("%d",&myAge);

  if (myAge >= votingAge) {
    printf("Old enough to vote!");
  } else {
    printf("Not old enough to vote.");
  }
  
  return 0;
}