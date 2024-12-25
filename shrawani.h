#include<stdio.h>

void convertLength() {
    int unitChoice;
    double value;

    printf("\nChoose input unit for length:\n");
    printf("1. Meters\n");
    printf("2. Kilometers\n");
    printf("3. Centimeters\n");
    printf("4. Inches\n");
    printf("5. Feet\n");
    printf("Enter your choice: ");
    scanf("%d", &unitChoice);

    printf("Enter the value: ");
    scanf("%lf", &value);

    // Convert input to meters
    double meters;
    switch (unitChoice) {
        case 1: meters = value; break;
        case 2: meters = value * 1000; break;
        case 3: meters = value / 100; break;
        case 4: meters = value / 39.3701; break;
        case 5: meters = value / 3.28084; break;
        default:
            printf("Invalid unit choice.\n");
            return;
    }

    // Display conversions
    printf("Length in meters: %.2lf m\n", meters);
    printf("Length in kilometers: %.3lf km\n", meters / 1000);
    printf("Length in centimeters: %.2lf cm\n", meters * 100);
    printf("Length in inches: %.2lf inches\n", meters * 39.3701);
    printf("Length in feet: %.2lf feet\n", meters * 3.28084);
}



void convertMass() {
    int unitChoice;
    double value;

    printf("\nChoose input unit for mass:\n");
    printf("1. Kilograms\n");
    printf("2. Grams\n");
    printf("3. Pounds\n");
    printf("4. Ounces\n");
    printf("Enter your choice: ");
    scanf("%d", &unitChoice);

    printf("Enter the value: ");
    scanf("%lf", &value);

    // Convert input to kilograms
    double kilograms;
    switch (unitChoice) {
        case 1: kilograms = value; break;
        case 2: kilograms = value / 1000; break;
        case 3: kilograms = value / 2.20462; break;
        case 4: kilograms = value / 35.274; break;
        default:
            printf("Invalid unit choice.\n");
            return;
    }

    // Display conversions
    printf("Mass in kilograms: %.2lf kg\n", kilograms);
    printf("Mass in grams: %.2lf g\n", kilograms * 1000);
    printf("Mass in pounds: %.2lf lbs\n", kilograms * 2.20462);
    printf("Mass in ounces: %.2lf oz\n", kilograms * 35.274);
}

void convertTime() {
    int unitChoice;
    double value;

    printf("\nChoose input unit for time:\n");
    printf("1. Seconds\n");
    printf("2. Minutes\n");
    printf("3. Hours\n");
    printf("4. Days\n");
    printf("Enter your choice: ");
    scanf("%d", &unitChoice);

    printf("Enter the value: ");
    scanf("%lf", &value);

    // Convert input to seconds
    double seconds;
    switch (unitChoice) {
        case 1: seconds = value; break;
        case 2: seconds = value * 60; break;
        case 3: seconds = value * 3600; break;
        case 4: seconds = value * 86400; break;
        default:
            printf("Invalid unit choice.\n");
            return;
    }

    // Display conversions
    printf("Time in seconds: %.2lf s\n", seconds);
    printf("Time in minutes: %.2lf min\n", seconds / 60);
    printf("Time in hours: %.2lf hr\n", seconds / 3600);
    printf("Time in days: %.2lf days\n", seconds / 86400);
}
//total 12 units
