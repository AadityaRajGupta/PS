#include <stdio.h>
/*
Write a C program to read temperature in centigrade and display a suitable message according to temperature state below : Go to the editor
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/
int weather_by_temperature()
{
    int degree;
    // printf("ENTER THR TEMPERATURE IN CENTIGRADE(*C):");
    scanf("%d", &degree);

    if (degree < 0)
        printf("FREEZING WEATHER\n");
    else if (degree >= 0 && degree < 10)
        printf("VERY COLD WEATHER\n");
    else if (degree >= 10 && degree < 20)
        printf("COLD WEATHER\n");
    else if (degree >= 20 && degree < 30)
        printf("NORMAL IN TEMP\n");
    else if (degree >= 30 && degree < 40)
        printf("ITS HOT\n");
    else
        printf("ITS VERY HOT\n");

    return 0;
}
