#include <stdio.h>
double division(double a, double b, int* ErrorCode) {
    if(b != 0)
        return a / b;
    if(b == 0)
        *ErrorCode = -1;
}
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
                result = division(a, b, &ErrorCode);
                if(ErrorCode == 0)
                    printf("%lg\n", result);
                if(ErrorCode != 0)
                    printf("ай ай ай нинада так\n");
                ErrorCode = 0;
                break;
            case 'x' :
                return 0;
                break;
            
        }
    }
    
}
