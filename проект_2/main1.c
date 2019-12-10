#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
  printf("The number of command line arguments: %d \n", argc);
  printf("Programm name: %s\n", argv[0]);

  for (int i=1; i<=agrc; i++){
  if(!strcmp(argv[i], "FUNCTION")){ //парсим Function
  }
if(!strcmp(argv[i], "SET")){ //парсим SET
}
else printf("error: неправильный аргумент")
}
return 0;
}
