/*
Submitter: Taylor Lookabaugh
Program: #11
file: weather.cpp
Purpose: This is a program to demonstrate reading from a file
Feature added: print max/min tempurature and respected day
Apply: while loop
 */

            #include <stdio.h>
            #include <stdlib.h>

            int main(void)
            {
                int k, day, max_day, min_day, num=0;
                double l_temp, h_temp, sum_l=0.0, sum_h=0.0, max=0.0, min=999999.0;
                FILE *myfile;

                myfile=fopen("weather.txt", "r");

                if (myfile==NULL)
                    printf("Error in opening file\n\n");
                else
                {
                    /* Instead of hardcoding num, gets end of file value */
                    while (!feof(myfile))
                    {
                        if(fscanf(myfile, "%i %lf %lf\n", &day, &l_temp, &h_temp) != 3) 
                            break;
                        sum_l = sum_l + l_temp;
                        sum_h = sum_h + h_temp;
                        if (max<h_temp)
                        {
                            max_day = day;
                            max = h_temp;
                        }
                        if (min>l_temp)
                        {
                            min_day = day;
                            min=l_temp;
                        }
                        num++;
                    }

                    printf("The maximum temp: %.1f occured on day %i\n\n", max, max_day);
                    printf("The mimimum temp: %.1f  occured on day %i\n\n", min, min_day);
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

                /* OUTPUT with feature added

                The maximum temp: 56.7 occured on day 5

                The mimimum temp: 29.4  occured on day 3

                The average low temp was 38.1

                The average high temp was 45.2

                */
