#include <stdio.h>

int main() {
  char men[30];
  if (scanf("%s", men) != '\0'){
    printf("Hello, %s!", men);
  }else{
    printf("Hello, nameless!");
  }
  return 0;
}
