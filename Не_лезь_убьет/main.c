#include <stdio.h>
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
