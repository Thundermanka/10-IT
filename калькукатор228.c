#include <stdio.h>
int main(void) {
    double a = 0, b = 0;
    char mmm;
    printf("Введите что надо сделать!\n");
    while(1){
        scanf("%lg%c%lg", &a, &mmm, &b);
        switch(mmm){
         case '+' :
         printf("%lg", a + b);
         break;
        case '-' :
         printf("%lg", a - b);
         break;
        case '*' :
         printf("%lg", a * b);
         break;
        case 'x' :
         return 0;
         break;   
        }
    }
    
}