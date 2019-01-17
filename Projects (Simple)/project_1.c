
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// value of PI is defined
#define PI 3.14

// macro for argument in radians
#define RAD 1.0

// macro for argument in degrees
#define DEG PI / 180

// declaration of 'factorial' function
long factorial(int number);

// declaration of 'integral' function
void integral(double *, double *);

// declaration of 'trigonometric' function
void trigonometric();

// structure made for 'trigonometric' function
struct trig_data
{
    double argument;  // 'argument' stores the value entered by user
    double sin_value; // 'sin_value' stores value of sine function
    double cos_value; // 'cos_value' stores value of cosine function
    double tan_value; // 'tan_value' stores value of tangent function
} trig;

// declaration of 'odd_even' function
void odd_even(unsigned int);

// structure made for 'odd_even' function
struct bit_check
{ // bit field is made for purpose to save the memory
    // in fact in this program it is not necessary
    unsigned int k : 1;
} bit;

int main()
{
    int task; // 'task' stores number of task to be done
    do
    {
        // user's menu which allows to choose the task to be done
        printf("\n ***** List of tasks to be done ***** \n");
        printf(" 1. Factorial calculator.\n 2. Integral calculator.\n 3. Trigonometric functions calculator.\n 4. Check if value is odd or even.\n 5. End\n");
        printf("\n Enter number of task: ");
        scanf(" %d", &task);

        // task nr.1 is going to be done
        if (task == 1)
        {
            int n; // 'n' stores the number entered by the user

            // user enters a number to calculate its factorial
            do
            {
                printf("\n Enter a number to calculate its factorial: ");
                scanf(" %d", &n);

                if (n < 0)
                    printf("\n It is not possible to calculate factorial from negative number!!!\n");
                // 'do_while' controls whether entered number is correct
            } while (n < 0);
            printf(" Factorial of %d is equal to: %ld\n\n", n, factorial(n));
        }
        // task nr.2 is going to be done
        else if (task == 2)
        { // two arrays: 'square' with initialized signal; 'output' which wait for integration process
            double square[10] = {0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
            double output[10];

            // 'integral' function is called
            integral(square, output);

            // integral in the form of vector is printed into console
            printf("\n Signal of the integral of a square function: ");
            for (int i = 0; i < 10; i++)
            {
                printf(" [%d] = %.2f; ", i, output[i]);
            }
            printf("\n\n");
        }
        // task nr.3 is going to be done
        else if (task == 3)
        { // 'trigonometric' function is called
            trigonometric();
        }
        // task nr.4 is going to be done
        else if (task == 4)
        { // 'value' stores decimal number entered by the user
            unsigned int value;
            printf("\n Enter the value to check whether is odd or even: ");
            scanf(" %d", &value);
            // 'odd_even' function is called with the 'value' as an argument
            odd_even(value);
        }
        // 'do_while' controls the user choices
    } while (task != 5);

    printf("\n Program has been closed... Thank You!\n\n");

    // signal to operating system that program ran fine
    return 0;
}

// 'factorial' function for calculating factorial on any value (not negative)
long factorial(int n)
{
    long val = 1;

    if (n == 0)
        return 1;
    else
    {
        for (int i = 1; i <= n; i++)
            val *= i;
        return val;
    }
}

// 'integral' function which calculate the integral of given signal
void integral(double *x, double *y)
{ // first element of the array is initialized with 0
    y[0] = 0;
    // 'for' loop calculates the integral value and stores output in the vector form
    for (int i = 1; i < 10; i++)
    {
        y[i] = y[i - 1] + x[i];
    }
}

// 'trigonometric' function which calculates values of the trigonometric functions
void trigonometric()
{
// preprocessing macro for calculating trig functions with argument in degrees
#ifdef DEG
    printf("\n Enter the value of the argument in degrees: ");
    scanf(" %lf", &trig.argument);
    // trigonometric functions are calculated
    trig.sin_value = sin(DEG * trig.argument);
    trig.cos_value = cos(DEG * trig.argument);
    trig.tan_value = tan(DEG * trig.argument);
    // for 90 and 270 degrees, tangent is undefined
    if (trig.argument == 90 || trig.argument == 270)
    {
        printf("\n Value of sin(%.2lf) = %5.2lf", trig.argument, trig.sin_value);
        printf("\n Value of cos(%.2lf) = %5.2lf", trig.argument, trig.cos_value);
        printf("\n Value of tan(%.2lf) = UNDEFINED", trig.argument);
        printf("\n");
    }
    // the case in which argument is different from 90 or 270 degrees
    else
    {
        printf("\n Value of sin(%.2lf) = %5.2lf", trig.argument, trig.sin_value);
        printf("\n Value of cos(%.2lf) = %5.2lf", trig.argument, trig.cos_value);
        printf("\n Value of tan(%.2lf) = %5.2lf", trig.argument, trig.tan_value);
        printf("\n");
    }
#endif

// analogical preprocessing macro for argument in radians
#ifdef RAD
    printf("\n Enter the value of the argument in radians: ");
    scanf(" %lf", &trig.argument);

    trig.sin_value = sin(RAD * trig.argument);
    trig.cos_value = cos(RAD * trig.argument);
    trig.tan_value = tan(RAD * trig.argument);

    if (trig.argument == 1.57 || trig.argument == 2.35)
    {
        printf("\n Value of sin(%.2lf) = %5.2lf", trig.argument, trig.sin_value);
        printf("\n Value of cos(%.2lf) = %5.2lf", trig.argument, trig.cos_value);
        printf("\n Value of tan(%.2lf) = UNDEFINED", trig.argument);
        printf("\n");
    }
    else
    {
        printf("\n Value of sin(%.2lf) = %5.2lf", trig.argument, trig.sin_value);
        printf("\n Value of cos(%.2lf) = %5.2lf", trig.argument, trig.cos_value);
        printf("\n Value of tan(%.2lf) = %5.2lf", trig.argument, trig.tan_value);
        printf("\n");
    }
#endif
}

// 'odd'even' checks whether entered value is odd or even
void odd_even(unsigned int value)
{ // 'bit.k' is a bit field which can be assigned only with 0 or 1
    bit.k = 1;
    // binary 'AND' is performed, it checks only the 0th bit
    // if 0th bit is 1 - entered value is odd, if 0th bit is 0 - entered value is even
    if ((value & bit.k) == bit.k)
        printf("\n %d is odd\n", value);
    else
        printf("\n %d is even\n", value);
}