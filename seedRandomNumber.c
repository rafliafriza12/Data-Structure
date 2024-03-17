#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000000

// void bubbleSort(unsigned * data);
void seedRandomNumber(int data[], int n);

int main(int argc, char *argv[])
{
    FILE * fp;
    fp = fopen("data_random.txt", "w");

    if(fp == NULL){
        printf("error opening file");
        exit(0);
    }

    int * data = malloc(sizeof(int) * SIZE);

    seedRandomNumber(data, SIZE);

    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    {
        fprintf(fp,"%d\n",data[i]);
        printf("data : %d tertuliske file\n", data[i]);
    }

    printf("Success\n");
    fclose(fp);
    return 0;
}

void seedRandomNumber(int data[], int n)
{
    
    int i = 0;

    while (i < n)
    {   
        int assignment = 1;
        int check = 1;
        int randomNumber = (rand() % 1000000) + 1;
        int j = 0;

        if (i != 0) {
            while (check && j < i) {
                if (data[j] == randomNumber) {
                    check = 0;
                    assignment = 0;
                }
                j++;
            }
        }

        if (assignment) {
            printf("haloo %d\n",i);
            data[i] = randomNumber;
            i++;
        }
    }
}
