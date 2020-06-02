//Jeffrey Poe 
//Lab 01
//Monday, June 1st, 2020
#include <stdio.h>
#include <stdlib.h>

int main(){
//Defining Directive with #define 
#define RATE 1.50;
//Initializing Month as an INT variable and assignment
int month = 3;
//Initializing Day as an INT variable and assignment
int day = 11;
//Initializing dumpster1
int dumpster1;
//Initializing dumpster as a DOUBLE variable
double dumpster2;
//Assigning initial as a CHAR variable and assigning it a value
char initial = 'p';


month = month + 12;
day = day + 30;
dumpster1 = day/month;
dumpster2 = day%month;
dumpster1 = dumpster1/RATE ; 
dumpster2 = dumpster2*RATE;
//Prints value of Month
printf("Month:");
printf("%i", month);
printf("\n");
//Prints value of Initial
printf("Initial:");
printf("%c", initial);
printf("\n");
//Prints value of Dumpster 1 
printf("Dumpster1:");
printf("%i", dumpster1);
printf("\n");
//Prints value of Dumpster 1 
printf("Dumpster2:");
printf("%f", dumpster2);
};