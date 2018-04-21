#include <stdio.h>
#define KM_PER_MILE 1.609
#define PINT_PER_GALLON 3.785
int main(void){
    float driven_distance;
    float gas;
    float pint_per_hundred_km;
    float mile_per_gallon;
    
    printf("How much distance have you traveled in kilometer:\n");
    scanf("%f", &driven_distance);

    printf("How much gas have you used in pint:\n");
    scanf("%f", &gas);

    pint_per_hundred_km = gas / driven_distance * 100;
    mile_per_gallon = (driven_distance / KM_PER_MILE) / (gas / PINT_PER_GALLON);

    printf("Fuel consumptions:%f pint/100km or %f mile/gallon.\n", pint_per_hundred_km, mile_per_gallon);
    
    return 0; 
}
