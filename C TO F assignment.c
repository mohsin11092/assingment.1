#include<stdio.h>
#include<conio.h>
 int main()
 {
 	float  celcius, fahrenheit;
 	printf("Enter temprature in Celcius:");
 	scanf("%f", &celcius);
 	
 	fahrenheit = ( celcius*9/5) + 32;
 	printf("Temp: in Fahrenheit is: %f",fahrenheit);
getch();
 	return 0;
 	
 	
 }
    