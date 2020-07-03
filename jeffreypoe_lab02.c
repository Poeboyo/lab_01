#include <stdio.h>

//User made function 1
void light(){
int lumens, watts;

  switch(watts){
    case 15:
    lumens =125;
    
    case 25:
    lumens = 215;

    case 40:
    lumens = 500;

    case 60:
    lumens = 880;

    case 75:
    lumens = 1000;

    case 100:
    lumens = 1675;

    default:
    lumens = -1;
  };
};

int main(void) {
  printf("Hello World \n");
  return 0;
};;