#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "parseSet.c"
#include "parseFunction.c"

int main (int ARGC, char* ARGV[]){
char valSet[80];
char varSet[80];
char* tmpVarSet;
int* tmpValSet;
int countArg=0;

int* funcValK;
int* funcValB;
char* funcVarY;
char* funcVarX;
char* functSign;

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
                printf ("error, капец ты тупой");
        }
    return 0;
} 
for (int i=1; i<=ARGC;i++){
if (!strncmp ("FUNCTION", ARGV[i],8)){
parseFunction (&ARGV[i], countArg, &funcValK, &funcValB, &funcVarY, &funcVarX, &functSign);
printf ("Çàäàíà ôóíêöèÿ îòíîñèòåëüíî %ñ/n", *funcVarY);
printf ("Íåçàâèñèìàÿ ïåðåìåííàÿ: %c", *funcVarX);
printf ("k = %d , b = %d/n", *funcValK, *funcValB);
printf ("Ôóíêöèÿ: %s/n", ARGV[i]);
}
if (!strncmp ("SET", ARGV[i],3)){
parseSet (&ARGV[i], &tmpVarSet, &tmpValSet);
printf("SET ¹ %d : %s/n Ïåðåìåííàÿ %c ðàâíà %d", i, ARGV[i], *tmpVarSet, *tmpValSet);
valSet[countArg]=*tmpValSet;
varSet[countArg]=*tmpVarSet;
countArg++;
}
}
printf ("Âû÷èñëåíèå ôóíêöèè:/n");
int valB=*funcValB;
int valK=*funcValK;
for (int i=0; i<=countArg;i++){
int res;
if (funcVarY != varSet[i]){
if (funcVarX != varSet[i]){
printf ("Íåïðàâèëüíî çàäàíà íåçàâèñèìàÿ ïåðåìåííàÿ");
continue;
}
else{
if (functSign == "-"){
res = (valSet[i]*valK)-valB;
}
if (functSign == "+"){
res = (valSet[i]*valK)+valB;
}
}
printf ("%c(%d) = %d", *funcVarY, valSet[i],res);
}
else{
printf ("умножение или деление");
continue;
}
}
return 0;
}
