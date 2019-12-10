// argc_argv.cpp: определяет точку входа для консольного приложения.
 
#include "stdio.h"
int main(int argc, char* argv[])
{
       if (argc > 1)// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
       {
            printf(argv[1]);// вывод второй строки из массива указателей на строки(нумерация в строках начинается с 0 )
       } else
               {
                printf("Not arguments");
               }
       system("pause");
       return 0;
} 