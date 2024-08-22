#include <stdio.h>

int main(){
    double a, b, media;
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    a = 3.5 * a;
    b = 7.5 * b;
    
    media = (a+b)/11;
    
    printf("MEDIA = %.5lf\n", media);
    return 0;
}
