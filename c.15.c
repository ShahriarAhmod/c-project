#include <stdio.h>
int main()
{
    int integer = 9876;
    float decimal =987.6543;

    // Prints the number right justified with 6 columns
    printf("4 digit inter right justified to 6 colimns : %6\n", integer);
    // Tries to print number right justified to 3 digits but the number
    printf("4 digit integer right justified to 3 columns: %3\n",integer);
    // Rounds to two digit places
    printf("Floating point number rounded to 2 digits: %.2f\n", decimal);
    //Rounds to 0 digit places
    printf("Floating point number rounded to 0 digits: %.f\n", 987.6543);
    // Prints the number in exponential notation(scientfic notation)
    printf("Floating point number in exponential from : %e\n",987.6543);
    return 0;
}
