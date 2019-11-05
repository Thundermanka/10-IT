#include <stdio.h>
/* это фу-ия модуля, берет double, a, затем выводит double */
double module(double a) { 
    if(a > 0)
    return a;
    if(a < 0)
    return -a;
    if(a == 0)
    return a;
}
/*фу-ия деления со взятием частного, берет int a, b, выводит int, ошика при b == 0, тогда меняем и выводим код ошибки*/
int div(int a, int b, int* ErrorCode) {
    if(b != 0)
        return a / b;
    if(b == 0)
        *ErrorCode = -1;
    return 0;
}
/*фу-ия деления со взятием остатка, берет int a, b, выводит int, ошика при b == 0, тогда меняем и выводим код ошибки*/
int mod(int a, int b, int* ErrorCode){
    if(b != 0)
        return a % b;
    if(b == 0)
        *ErrorCode = -1;
        return 0;
}
/*фу-ия деления берет double a, b, выводит double, ошика при b == 0, тогда меняем и выводим код ошибки*/
double division(double a, double b, int* ErrorCode) {
    if(b != 0)
        return a / b;
    if(b == 0)
        *ErrorCode = -1;
    return 0;
}
/*главная фу-ия, сканирует a, b, ну она какбэ главная и управляет строем и у нее есть крутая переменная ErrorCode, ну и она сама крутая, вопщемб все */
int main(void) {
    double a = 0, b = 0, result = 0;
    int ErrorCode = 0;
    char mmm;
    while(1){
        printf("Введите что надо сделать!\n");
        scanf("%lg%c%lg", &a, &mmm, &b);
        switch(mmm){
            case '+' :
                printf("%lg\n", a + b);
                break;
            case '-' :
                printf("%lg\n", a - b);
                break;
            case '*' :
                printf("%lg\n", a * b);
                break;
            case '/' :
                result = division(a, b, /* о, а это кажись указатель */ &ErrorCode);
                if(ErrorCode == 0)
                    printf("%lg\n", result);
                if(ErrorCode != 0)
                    printf("ай ай ай нинада так\n");
                ErrorCode = 0;
                break;
            case '%':
                result = mod(a, b, &ErrorCode);
                if(ErrorCode == 0)
                    printf("%lg\n", result);
                if(ErrorCode != 0)
                    printf("ай ай ай нинада так\n");
                ErrorCode = 0;
                break;
            case 'D':
                result = div(a, b, &ErrorCode);
                if(ErrorCode == 0)
                    printf("%lg\n", result);
                if(ErrorCode != 0)
                    printf("ай ай ай нинада так\n");
                ErrorCode = 0;
                break;
            case 'M':
                result = module(a);
                    printf("%lg\n", result);
                break;
            case 'x' :
                return 0;
                break;
            
        }
    }
}
