#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X_EGP , X_USD;
    printf("Please Enter The Amount Number (EG) That you want To Convert it to USD : ");
    scanf("%f",&X_EGP);
    X_USD = X_EGP * 0.064;
    printf("%0.3f in EGP = %0.3f in USD " , X_EGP , X_USD);
    return 0;
}
