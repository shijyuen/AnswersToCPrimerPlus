#include <stdio.h>
#define KM_PER_MILE 1.609
#define PINT_PER_GALLON 3.785
int main(void){
    float driven_distance;
    float gas;
    float gallon_per_hundred_km;
    float mile_per_gallon;
    
    printf("enter distance you have traveled in kilometer:\n");
    scanf("%f", &driven_distance);

    printf("enter gas you have used in gallon:\n");
    scanf("%f", &gas);

    gallon_per_hundred_km = gas / driven_distance * 100;
    mile_per_gallon = (driven_distance / KM_PER_MILE) / (gas / GALLON_PER_GALLON);

    printf("%f gallon/100km or %f mile/gallon.\n", pint_per_hundred_km, mile_per_gallon);
    
    return 0; 
}
