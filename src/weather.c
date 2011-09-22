

   /* file: weather.cpp */
   /* This is a program to demonstrate reading from a file*/

            #include <stdio.h>
            #include <stdlib.h>

            int main(void)
            {
                int k, day, num=10;
                double l_temp, h_temp, sum_l=0.0, sum_h=0.0;
                FILE *myfile;

                myfile=fopen("weather.txt", "r");

                if (myfile==NULL)
                    printf("Error in opening file\n\n");
                else
                {
                    for (k=1; k<=num; k++)
                    {
                        fscanf(myfile, "%i %lf %lf", &day, &l_temp, &h_temp);
                        sum_l = sum_l + l_temp;
                        sum_h = sum_h + h_temp;
                    }

                    printf("The average low temp was %.1f\n\n", sum_l/num);
                    printf("The average high temp was %.1f\n\n", sum_h/num);
                }
                fclose(myfile);
                system("PAUSE");
                return(0);
            }



                /* OUTPUT

                The average low temp was 38.1

                The average high temp was 45.2





                The data file weather.txt (note: this file was made with the
                Borland editor by choosing new, text, and then saveas and new
                name) 

                1  32.2  44.4
                2  34.4  50.6
                3  29.4  32.2
                4  35.5  43.1
                5  45.3  56.7
                6  50.0  51.9
                7  46.9  49.5
                8  46.1  48.0
                9  30.0  35.3
                10 31.1  40.3


                */


