#include <stdio.h>

// ***********Enumeration for taxed type***********
enum TaxType 
{
    SOCIAL_SECURITY,
    FEDERAL_INCOME,
    STATE_INCOME,
    UNION_DUES,
    HEALTH_INSURANCE
};

// Function to calculate overtime pay
double calculateOvertimePay(double hoursWorked) 
{
    const double hourlyRate = 9.73;
    const double overtimeRate = 1.5;
    const double regularHours = 40.0;

    if (hoursWorked <= regularHours) 
    {
        return hoursWorked * hourlyRate;
    } 
    else 
    {
        double regularPay = regularHours * hourlyRate;
        double overtimePay = (hoursWorked - regularHours) * overtimeRate * hourlyRate;
        return regularPay + overtimePay;
    }
}

// ***********Function to calculate withholding amounts***********
double calculateWithholding(double grossPay, enum TaxType taxType, int dependents) 
{
    const double socialSecurityRate = 0.06;
    const double federalIncomeRate = 0.14;
    const double stateIncomeRate = 0.05;
    const double unionDues = 6.0;
    const double extraHealthInsurance = 10.0;

    double withholding = 0.0;

    switch (taxType) 
    {
        case SOCIAL_SECURITY:
            withholding = grossPay * socialSecurityRate;
            break;
        case FEDERAL_INCOME:
            withholding = grossPay * federalIncomeRate;
            break;
        case STATE_INCOME:
            withholding = grossPay * stateIncomeRate;
            break;
        case UNION_DUES:
            withholding = unionDues;
            break;
        case HEALTH_INSURANCE:
            if (dependents >= 3) {
                withholding = extraHealthInsurance;
            }
            break;
    }

    return withholding;
}

// Function to calculate net take-home pay
double calculateNetPay(double grossPay, double withholdings) {
    return grossPay - withholdings;
}

// ************Main Body****************
int main() {
    double hoursWorked;
    int dependents;

    printf("Enter the number of hours worked in a week: ");
    scanf("%lf", &hoursWorked);

    printf("Enter the number of dependents: ");
    scanf("%d", &dependents);

    // Calculate gross pay
    double grossPay = calculateOvertimePay(hoursWorked);

    // Calculate and display withholdings
    printf("\nGross Pay: $%.2f\n", grossPay);
    printf("Withholdings:\n");

    for (int taxType = SOCIAL_SECURITY; taxType <= HEALTH_INSURANCE; taxType++) {
        double withholding = calculateWithholding(grossPay, taxType, dependents);
        printf("- ");
        switch (taxType) {
            case SOCIAL_SECURITY:
                printf("Social Security Tax: $%.2f\n", withholding);
                break;
            case FEDERAL_INCOME:
                printf("Federal Income Tax: $%.2f\n", withholding);
                break;
            case STATE_INCOME:
                printf("State Income Tax: $%.2f\n", withholding);
                break;
            case UNION_DUES:
                printf("Union Dues: $%.2f\n", withholding);
                break;
            case HEALTH_INSURANCE:
                printf("Health Insurance: $%.2f\n", withholding);
                break;
        }
    }

    double totalWithholdings = 0.0;
    for (int taxType = SOCIAL_SECURITY; taxType <= HEALTH_INSURANCE; taxType++) 
    {
        totalWithholdings += calculateWithholding(grossPay, taxType, dependents);
    }

    double netPay = calculateNetPay(grossPay, totalWithholdings);
    printf("\nNet Take-Home Pay: $%.2f\n", netPay);

    return 0;
}
