#include <iostream>
#include <random>
#include <stdlib.h>

int main(){
  int i;
  
  float x=0;
  float y=0;
  float dx;
  float dy;
  float pi = 3.14159265359;
  float angulo;
  srand48(42);

  for (i=0;i<1000;i++){ 
      
    std::cout << x << " " << y << std::endl;
      
    angulo = drand48()*2*pi;
    dx= x + cos(angulo);
       x = dx;
    dy= y + sin(angulo);
       y = dy;
    
    
    }
 
  
  return 0;
}

