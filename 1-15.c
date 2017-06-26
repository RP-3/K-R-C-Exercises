#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

double celsiusFromFahrenheit(int fahr);

double celsiusFromFahrenheit(int fahr){

    return (5.0/9.0)*(fahr-32);
}

int main () 
{
    int fahr;

    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
        printf("%3d %6.1f\n", fahr, celsiusFromFahrenheit(fahr) );
    }

    return 0;
}
