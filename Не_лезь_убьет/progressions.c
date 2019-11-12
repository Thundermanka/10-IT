#include <math.h> 
double Computearifmprogr(double a, double b){
    double n, sum=0, mult = 1;
    scanf ("%lg", &n);
    printf ("%lg\n", a);
        for (int i=0; i<n; i++){
            printf ("The %d number of the sequence is %lg\n", i, a=a+b);
            sum = sum + a;
            mult = mult * a;
        }
        printf ("The sum is %lg\nThe multiplication is %lg", sum, mult);
        return 0;
} 

/*функция геометрической прогрессии,
принимает double a,
выводит все члены последовательности, их сумму и произведение,
возвращает 0*/
double computegeomprogr(double a, double b){
    double n, sum=0, mult = 1;
    scanf ("%lg", &n);
    printf ("%lg\n", a);
    for (int i=0; i<n; i++){
        printf ("The %d number of the sequence is %lg\n", i, a=a*b);
        sum = sum + a;
        mult = mult * a;
    }
        printf ("The sum is %lg\nThe multiplication is %lg", sum, mult);
        return 0;
}
