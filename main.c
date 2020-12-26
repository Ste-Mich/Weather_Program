#include <stdio.h>
#include <stdbool.h>

int main()
{
    float inputWeather[5][12] = {
        {25.2, 22.4, 22.4, 52.2, 66.6, 38.0, 28.1, 22.9, 38.0, 41.2, 32.8, 45.7},
        {26.2, 23.4, 23.4, 53.2, 67.6, 39.0, 29.1, 23.9, 39.0, 42.2, 33.8, 46.7},
        {27.2, 24.4, 24.4, 54.2, 68.6, 40.0, 30.1, 24.9, 40.0, 43.2, 34.8, 47.7},
        {28.2, 25.4, 25.4, 55.2, 69.6, 41.0, 31.1, 25.9, 41.0, 44.2, 35.8, 48.7},
        {29.2, 26.4, 26.4, 56.2, 69.6, 42.0, 32.1, 26.9, 42.0, 45.2, 36.8, 49.7}};
    float yearlyAvg;
    float yearlySum;
    float fiveYearSum = 0.0;
    float monthlySum;

    printf("YEAR      RAINFALL (inches) \n");
    for (size_t i = 0; i < 5; i++)
    {
        yearlyAvg = 0.0;
        yearlySum = 0.0;
        for (size_t j = 0; j < 12; j++)
        {
            yearlySum += inputWeather[i][j];
        }
        yearlyAvg = yearlySum / 12.0;
        fiveYearSum += yearlyAvg;
        printf("%i       %.2f \n", i + 2010, yearlyAvg);
    }

    printf("\nThe yearly average is %.2f inches \n", fiveYearSum / 5.0);
    printf("\nMONTHLY AVERAGES: \n");

    printf("Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n");
    for (size_t i = 0; i < 12; i++)
    {
        monthlySum = 0.0;
        for (size_t j = 0; j < 5; j++)
        {
            monthlySum += inputWeather[j][i];
        }
        printf("%.2f ", monthlySum / 5.0);
    }

    return 0;
}