//
//  main.c
//  simple-calc
//
//  Created by Peter Rodriguez.
//
/*

'^' basically does: first operand cubed

'$' basically does: first to the power of second which means
 
 
 */
#include <stdio.h>
#include <math.h>

int main() {

    char op;
    double first, second;
    
    printf("Enter an operator (+, -, *, /, ^, $): ");
    scanf("%c", &op);
    
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);
    
    switch(op) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
            break;
        case '^':
            printf("%.1lf ^ 3 = %.1lf", first, pow(first,3));
            break;
        case '$':
            printf("%.1lf ^ %.1lf = %.1lf ", first, second, pow(first, second));
            break;
        default:
            printf("ERROR! operator is not correct");
            break;
    }
    printf("\n");
    
    return 0;
}


