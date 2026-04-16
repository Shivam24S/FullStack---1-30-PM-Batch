

#include <stdio.h>

int main()
{

    float baseSalary, HRA, DA, TA, grossSalary;

    printf("\nenter base salary\n ");

    scanf("%f", &baseSalary);

    printf("\n enter House rent allowance Percentage\n");

    scanf("%f", &HRA);

    printf("\n enter Dearness allowance Percentage\n");

    scanf("%f", &DA);

    printf("\n enter TRavel Allowance\n");

    scanf("%f", &TA);

    // float hraPercentage, DaPercentage, TaPercentage;

    // hraPercentage = 100 * HRA / 100;
    // DaPercentage = 100 * DA / 100;
    // TaPercentage = 100 * TA / 100;

    // grossSalary = baseSalary + hraPercentage + DaPercentage + TaPercentage;

    grossSalary = baseSalary * (1 + (HRA + DA + TA) / 100);

    printf("\n Gross salary is %.2f", grossSalary);

    return 0;
}