#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000000

int main(int argc, char *argv[])
{
    FILE *fp;
    FILE *sorting;
    FILE *sortTime;
    int arr[SIZE];
    int batas = 100000;
    sortTime = fopen("waktu_sorting.txt", "w");
    sorting = fopen("data_sorting.txt", "w");
    fp = fopen("data_random.txt", "r");

    if (fp == NULL || sorting == NULL || sortTime == NULL)
    {
        printf("error open file");
        exit(0);
    }

    for (int i = 1; i <= batas; i++)
    {
        fscanf(fp, "%d\n", &arr[i - 1]);
        if (i % batas == 0)
        {
            printf("bubble sort start\n");
            clock_t start = clock();
            for (int j = 0; j < batas - 1; j++)
            {
                for (int k = 0; k < batas - j - 1; k++)
                {
                    if (arr[k] > arr[k + 1])
                    {
                        int temp = arr[k];
                        arr[k] = arr[k + 1];
                        arr[k + 1] = temp;
                    }
                }
            }
            clock_t end = clock();
            double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("Waktu eksekusi bubblesort (jlh data: %d): %f detik\n",batas,cpu_time_used);

            fprintf(sortTime,"Waktu eksekusi bubblesort (jlh data: %d): %f detik\n",batas,cpu_time_used);

            if (batas == SIZE)
            {
                for (int j = 0; j < batas; j++)
                {
                    fprintf(sorting, "%d\n", arr[j]);
                }
            }

            i = 0;
            fseek(fp, SEEK_SET, 0);
            if (batas == SIZE)
            {
                break;
            }
            batas += 100000;
            printf("\n");
        }
    }

    batas = 100000;

    for (int i = 1; i <= batas; i++)
    {
        fscanf(fp, "%d\n", &arr[i - 1]);
        if (i % batas == 0)
        {
            printf("selection sort start\n");
            clock_t start = clock();

            for (int j = 0; j < batas - 1; j++)
            {
                int min_idx = j;
                for (int k = j + 1; k < batas; k++)
                {
                    if (arr[k] < arr[min_idx])
                    {
                        min_idx = k;
                    }
                }
                int temp = arr[min_idx];
                arr[min_idx] = arr[j];
                arr[j] = temp;
            }

            clock_t end = clock();
            double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("Waktu eksekusi selection sort (jlh data: %d): %f detik\n", batas, cpu_time_used);
            fprintf(sortTime, "Waktu eksekusi selection sort (jlh data: %d): %f detik\n", batas, cpu_time_used);
            i = 0;
            fseek(fp, SEEK_SET, 0);
            if (batas == SIZE)
            {
                break;
            }
            batas += 100000;
            printf("\n");
        }
    }

    batas = 100000;

    for (int i = 1; i <= batas; i++)
    {
        fscanf(fp, "%d\n", &arr[i - 1]);
        if (i % batas == 0)
        {
            printf("insertion sort start\n");
            clock_t start = clock();

            for (int j = 1; j < batas; j++)
            {
                int key = arr[j];
                int k = j - 1;
                // Pindahkan elemen yang lebih besar dari key satu posisi ke depan
                // dari posisi mereka saat ini
                while (k >= 0 && arr[k] > key)
                {
                    arr[k + 1] = arr[k];
                    k = k - 1;
                }
                arr[k + 1] = key;
            }

            clock_t end = clock();
            double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("Waktu eksekusi insertion sort (jlh data: %d): %f detik\n", batas, cpu_time_used);

            fprintf(sortTime, "Waktu eksekusi insertion sort (jlh data: %d): %f detik\n", batas, cpu_time_used);

            i = 0;
            fseek(fp, SEEK_SET, 0);
            if (batas == SIZE)
            {
                break;
            }
            batas += 100000;
            printf("\n");
        }
    }

    fclose(fp);
    fclose(sorting);
    fclose(sortTime);
    return 0;
}
