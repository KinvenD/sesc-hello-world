#include <stdio.h> 

int main() { 
  char yee[30]; 
  if (scanf("%s", yee) != EOF){ 
    printf("Hello, %s!", yee); 
  }else{ 
    printf("Hello, nameless!"); 
  } 
  return 0; 
}
