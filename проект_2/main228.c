
// argc_argv.cpp: определяет точку входа для консольного приложения.
 
#include "stdio.h"
int main(int argc, char* argv[]) {
        printf("The number of command line arguments: %d \n", argc);
            for(int i = 0; i <= argc; i++) {
                printf(argv[i]);// вывод всех строк из массива указателей на строки(нумерация в строках начинается с 0 )
            }
       return 0;
} 
