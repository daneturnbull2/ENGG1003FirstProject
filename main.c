#include <stdio.h>

int main (){
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x);// Note change of %d to %f
    y = 9*x+32;// Complete the y = line below
    printf("y: %f\n", y);
    return 0;
}
