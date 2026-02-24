#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]) {
    // Проверка корректности ввода
    if (argc != 2) {
        fprintf(stderr, "Error. format: %s <number>\n", argv[0]);
        return 1;
    }

    char *endptr;
    double x = strtod(argv[1], &endptr);
    
    // Проверка аргументов
    if (*endptr != '\0' || endptr == argv[1]) {
        fprintf(stderr, "Error. The argument must be a number.\n");
        return 1;
    }

    printf("--------------------\nMath calculation for x = %g\n--------------------\n", x);
    double sqrt_x = sqrt(x);
    double log_x = log(x);
    double pow_x4 = pow(x, 4);
    double abs_x = fabs(x);
    double ceil_x = ceil(x);
    double floor_x = floor(x);

    if (x>=0)
        printf("sqrt(x)\t\t= %g\n", sqrt_x);
    else 
        fprintf(stderr, "Warning: the square root is defined only for x >= 0.\n");
    if (x>0)
        printf("log(x)\t\t= %g\n", log_x);
    else
        fprintf(stderr, "Warning: the logarithm is defined only for x > 0.\n");
    printf("x^4\t\t= %g\n", pow_x4);
    printf("abs(x)\t\t= %g\n", abs_x);
    printf("ceil(x)\t\t= %g\n", ceil_x);
    printf("floor(x)\t= %g\n", floor_x);
    
    return 0;
}