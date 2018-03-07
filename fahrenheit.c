//operators problem 1

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float temp_c = get_float("Enter current temperature (Celsius)? ");
    float temp_f = ((temp_c * 9) / 5) + 32;
    printf("C: %.0f\n", temp_c);
    printf("F: %.1f\n", temp_f);
}
