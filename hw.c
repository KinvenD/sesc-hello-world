#include <stdio.h>

int main() {
  char string[30];
  if (scanf("%s", string) != "\0"){
    printf("Hello, %s!", string);
  }else{
    printf("Hello, nameless!");
  }
  return 0;
}
