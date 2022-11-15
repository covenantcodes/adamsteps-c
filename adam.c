// NAME: POPOOLA COVENANT IFEOLUWA
// MATRIC NO: 230926
// COURSE: OBJECT ORIENTED PROGRAMMING
// LECTURER: DR. BABATUNDE AYINLA

#include <stdio.h>
#include <string.h>

int main () 
{
    int numTrials;
    char EveryStep[100];
    FILE *input;
 
    input = fopen("adam.txt", "r");
    fscanf(input,  "%d", &numTrials);

    for (int i = 1; i <= numTrials;){
            int steps= 0;
            fscanf(input, "%s", EveryStep);

            for (int j = 0; j < 100;){
                    if (EveryStep[j] == 'U')
                    {
                        steps ++;
                        j++;
                    }
                    else if (EveryStep[j] == 'D'){
                            printf("The number of steps taken by Adam:  %d\n", steps);
                            j =100;
                            i++;
                            break;
                    }
                    else{
                        printf("You have entered an invalid string");
                        j = 100;
                    }
            } 
    }

    return 0;
}