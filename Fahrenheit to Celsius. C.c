#include<stdio.h>
#include<conio.h>
  int main()
  {  float fahrenheit, calsius;
  printf("Temprature in Fahrenheit:");
  scanf("%f", &fahrenheit );
  calsius = (fahrenheit - 32) * 5 / 9;
  printf("Temprature in Calsius is: %2f", calsius);
  getch();
  }