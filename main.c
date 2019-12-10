#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "parseSet.c"
#include "parseFunction.c"

int main (int ARGC, char* ARGV[]){
    int var = 0;
    int val = 0;
    char Var, Val; //Var отвечает за переменную, а Val за значение
printf ("введите строку вида ./calc FUNCTION(y=b*x+c) SET(x=...),\n где в FUNCTION укажите b и c, а в SET укажите x \n");
printf ("Аргументов: %d", ARGC);
    if(ARGV<3) {
    printf ("Что-то не то\n");\
    }
printf ("Название программы %s", ARGV[0]); //выводит название программы
    for (int i=1; i<=ARGC; i++){
        if (!strncmp ("FUNCTION", ARGV[i], 8))
        parseFUNCTION (ARGV[i], &Var, &Val);
        // сравнивает первые 8 символов ARGV[i] со словом FUNCTION и отправляет этот аргумент в соответствующую функцию
            else if (!strncmp ("SET", ARGV[i], 3))
            parseSET (ARGV[i], &Var, &Val);
            // сравнивает первые 3 символов ARGV[i] со словом SET и отправляет этот аргумент в соответствующую функцию
                else {
                printf ("error, братец");
        }
    return 0;
}
