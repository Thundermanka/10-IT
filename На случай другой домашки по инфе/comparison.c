#include <stdio.h>

int main(void) {
    int a, b, c, d;
    int min = 0;
    scanf("%d%d%d%d", &a, &b, &c, &d);
        if(a <= b)
            min = a;
        else
            min = b;
    
        if(min >= c)
            min = c;
    
        if(min >= d)
            min = d;
    
    printf("%d", min);
    return 0;
}
