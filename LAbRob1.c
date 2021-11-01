#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main()
    {
        int variant;
        int num = 1;
        double X1, X2, Y;
            unsigned char N;
                const double power = 5;
                    double cos(double (X));
                    double sqrt(double (X));
                    double pow(double(X),  double(power));
                    double delta = (X2 - X1) / (N-1);
        printf("Hello\n");
            do
                {
                    printf("Select the option for entering the initial data, the first or the second.");
                    printf("\nWrite \"1\" if you want to choose the first option.");
                    printf("\nWrite \"2\" if you want to choose the second option.");
                    printf("\nYour choose:");
                    scanf("%d", &variant);
                }   while ((variant < 1) || (variant > 2));
        printf("You have chosen the option number \"%d\"", variant);
            if(variant == 1)
                {
                    do
                        {
                            printf("\n\nYou must enter the starting, ending x value, and the number of points in the table.\nThe starting x value must be less than the ending value.The number of points in the table must be more than 10");
                            printf("\n1.Enter the initial x value: ");
                            scanf("%lf", &X1);
                              printf("\nInitial x value: ");
                              printf("%.2lf", X1);
                                printf("\n2.Enter the final x value: ");
                                scanf("%lf", &X2);
                                printf("\nFinal x value: %.2lf", X2);
                                  printf("\n3.Enter the number of points in the table: ");
                                  scanf("%hhu", &N);
                                  printf("Number of points in the table: %hhu", N);
                            delta = (X2 - X1)/(N-1);
                        } while(X1 >= X2 ) ;
                    printf("\nThe step of changing x: %.2lf", delta);
                    Y = 2*cos(X1) + sqrt(pow(X1, power));
                    system("cls");
                    printf("\t    X1=%lf       X2=%lf       N=%i\n", X1, X2, N);
                    printf("\t************************************************\n");
                    printf("\t*  N  *        X         *         F(X)        *\n");
                    printf("\t************************************************\n");
                    printf("\t+-----+-------------------+--------------------+\n");
                    printf("\t|%5d|%19.2lf|%20.2lf|\n", num, X1, Y);
                    printf("\t+-----+-------------------+--------------------+\n");
                    for(num=2; num<=N; num++)
                        {
                            X1 = X1 + delta;
                            delta = (X2 - X1)/(N-1);
                            Y = 2*cos(X1) + sqrt(pow(X1, power));
                            printf("\t|%5d|%19.2lf|%20.2lf|\n", num, X1, Y);
                            printf("\t+-----+-------------------+--------------------+\n");
                                if (num%8 == 1)
                                    {
                                        printf("\t");
                                        printf("Press enter to continue table:\r");
                                        getch();
                                    }
                         }   
                }
            if(variant == 2)
                {
                    do
                        {
                            printf("\n\nYou must enter the starting, ending x value, and x step.\nThe starting x value must be less than the ending value.");
                            printf("\n1.Enter the initial x value: ");
                            scanf("%lf", &X1);
                              printf("\nInitial x value: ");
                              printf("%.2lf", X1);
                                printf("\n2.Enter the final x value: ");
                                scanf("%lf", &X2);
                                printf("\nFinal x value: %.2lf", X2);
                                  printf("\n3.Enter the step of changing the x: ");
                                  scanf("%lf", &delta);
                            N = ( (X2-X1) / delta ) - 1;
                            printf("\nNumber of points in the table: %hhu", N);
                        } while(X1 >= X2 );
                            system("cls");
                            Y = 2*cos(X1) + sqrt(pow(X1, power));
                            printf("\t    X1=%.2lf       X2=%.2lf       N=%i\n", X1, X2, N);
                            printf("\t************************************************\n");
                            printf("\t*  N  *        X         *         F(X)        *\n");
                            printf("\t************************************************\n");
                            printf("\t+-----+-------------------+--------------------+\n");
                            printf("\t|%5d|%19.2lf|%20.2lf|\n", num, X1, Y);
                            printf("\t+-----+-------------------+--------------------+\n");
                            for(num=2;num<=N; num++)
                                {
                                    Y = 2*cos(X1) + sqrt(pow(X1, power));
                                    X1 = X1 + delta;
                                    printf("\t|%5d|%19.2lf|%20.2lf|\n", num, X1, Y);
                                    printf("\t+-----+-------------------+--------------------+\n");
                                    if (num%8 == 1)
                                        {
                                            printf("\t");
                                            printf("Press enter to continue table:\r");
                                            getch();
                                        }
                                }
                        }
    return 0;
  }
