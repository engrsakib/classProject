#include <stdio.h>
#include <math.h>
// Manue Based Calculator Using Function && Switch.
// Md. Nazmus Sakib CSE-104 Roll: 21
// Function Declaration start
int summation(int, int);
int substraction(int, int);
int multiplication(int, int);
int quotient(int, int);
int modulas(int, int);
int power(int, int);
int sqr(int);
// Function Declaration End
// Void Declaretion
void developer(char name[], int roll, int batch)
{
    printf("\n%s compose this progroam. His batch is CSE- %d && roll: %d ", name, batch, roll);
}
// Main Function Start
int main()
{
    int n;
    // Menue Items On
    printf("\t1 Summation \n");
    printf("\t2 Substraction \n");
    printf("\t3 Multiplication \n");
    printf("\t4 Quotient \n");
    printf("\t5 Modulas \n");
    printf("\t6 Power \n");
    printf("\t7 Root Squre \n");
    printf("Please Select a Menue: ");
    scanf("%d", &n);
    // Menue Items off
    // Switch & Case
    switch (n)
    {
    case 1:
        /* constant-expression */
        {
            int a, b;
            printf("Please Enter two Integer: ");
            scanf("%d %d", &a, &b);
            int sum = summation(a, b);
            printf("The Summation is: %d", sum);
            break;
        }
    case 2:
        /* constant-expression */
        {
            int a, b;
            printf("Please Enter two Integer: ");
            scanf("%d %d", &a, &b);
            int sub = substraction(a, b);
            printf("The Substraction is: %d", sub);
            break;
        }
    case 3:
        /* constant-expression */
        {
            int a, b;
            printf("Please Enter two Integer: ");
            scanf("%d %d", &a, &b);
            int mux = multiplication(a, b);
            printf("The Substraction is: %d", mux);
            break;
        }
    case 4:
        /* constant-expression */
        {
            int a, b;
            printf("Please Enter two Integer: ");
            scanf("%d %d", &a, &b);
            int mux = quotient(a, b);
            printf("The Quotient is: %d", mux);
            break;
        }
    case 5:
        /* constant-expression */
        {
            int a, b;
            printf("Please Enter two Integer: ");
            scanf("%d %d", &a, &b);
            int mux = modulas(a, b);
            printf("The Modulas is: %d", mux);
            break;
        }
    case 6:
        /* constant-expression */
        {
            int a, b;
            printf("Please Enter two Integer: ");
            scanf("%d %d", &a, &b);
            int mux = power(a, b);
            printf("The Power is: %d", mux);
            break;
        }
    case 7:
        /* constant-expression */
        {
            int a;
            printf("Please Enter A Integer: ");
            scanf("%d", &a);
            int mux = sqr(a);
            printf("The SQR is: %d", mux);
            break;
        }
    default:
        printf("You Select wrong Menue!!!\n");
        break;
    }
    developer("Md. Nazmus Sakib", 21, 104);
}
// Main Function End
// Self make Function start
// Summation
int summation(int x, int y)
{
    return x + y;
}
// sunstraction
int substraction(int x, int z)
{
    return x - z;
}
// Multiplication
int multiplication(int x, int y)
{
    return x * y;
}
// Quotient
int quotient(int x, int y)
{
    return x / y;
}
// Modulas
int modulas(int x, int z)
{
    return x % z;
}
// power
int power(int x, int z)
{
    return pow(x, z);
}
// sqrt
int sqr(int x)
{
    return sqrt(x);
}
//  Salf make Functoion end
// Programe Creater Information
