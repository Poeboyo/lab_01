//Jeffrey Poe 
//Assignment 2
// 7/3/2020
// COP2220
#include <stdio.h>
#include <math.h>

//User made function 1
void light(){
int lumens, watts;
printf("Please enter a Wattage for Lumen Conversion \n");
scanf("%i", &watts);

  switch(watts){
    case 15:
    lumens =125;
        printf("%i Lumens\n", lumens);
        break;

    
    case 25:
    lumens = 215;
        printf("%i Lumens\n", lumens);
        break;


    case 40:
    lumens = 500;
        printf("%i Lumens\n", lumens);
        break;


    case 60:
    lumens = 880;
        printf("%i Lumens\n", lumens);
        break;


    case 75:
    lumens = 1000;
        printf("%i Lumens\n", lumens);
        break;


    case 100:
    lumens = 1675;
    printf("%i Lumens\n", lumens);
    break;

    default:
    lumens = -1;
        printf("%i Lumens\n", lumens);
        break;
  };
};

//User made function 2 
float bodyMass(){
  float weight, height;
    printf("\nPlease enter your weight in pounds! \n");
    scanf("%f", &weight);
    printf("Please enter your height in inches! \n");
    scanf("%f", &height);
    float bmi = 703*weight/(height*height);
    printf("Your BMI is %.2f \n", bmi);
    
      if(bmi < 18.5){
      printf("You are underweight!");}
      else if(bmi > 18.5 && bmi < 24.9)
      {printf("You are normal!");}
      else if(bmi > 25.0 && bmi < 29.9)
      {printf("You are overweight!");}
      else if(bmi > 30){
      printf("You are obese!");}
};

//User made function 3

void plane(){
  float xcord, ycord;
  printf("\nWhich quadrant does your point lie? \nPlease enter an x coordinate\n");
  scanf("%f", &xcord);
  printf("Please enter a Y coordinate\n");
  scanf("%f", &ycord);

  if(xcord > 0 && ycord > 0){
    printf("The point lies in Q2\n");
  }else if(xcord < 0 && ycord > 0){
  printf("The point lies in Q1\n");
  }else if(xcord > 0 && ycord < 0){
  printf("The point lies in Q4\n");
  }else if(xcord < 0 && ycord < 0){
  printf("The point lies in Q3\n");
  }else if(xcord == 0 && ycord != 0){
    printf("The point lies on the x axis\n");
  }else if(xcord != 0 && ycord == 0){
  printf("The point lies on the y axis\n");
  }else if(xcord == 0 && ycord == 0){
    printf("The point lies at the origin (0,0)\n");
  };
};

//User made function 4
void molecule(){
  int quarts;
  float sciNote, grams;

  printf("\nPlease enter an amount of water in quarts.\n");
  scanf("%i", &quarts);
  grams = 3 * pow(10.0, -23.0);
  quarts = 950*quarts;
  grams = grams*quarts;  
  printf("3 X 10^%d\n", quarts);

};

int main(void) {
  light();
  bodyMass();
  plane();
  molecule();


};