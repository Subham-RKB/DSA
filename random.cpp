#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <omp.h>
#define sizeOfArray 10
#define NoOfThreads 5
int main(int argc, char *argv[])
{
    int *Vector1, *Vector2, *Result;
    Vector1 = (int *)malloc(sizeof(int) * n);
    Vector2 = (int *)malloc(sizeof(int) * n);
    Result = (int *)malloc(sizeof(int) * n);
    int n = sizeOfArray;
    double time, startTime, endTime;
    int n_per_thread;
    int totalThreads = NoOfThreads;
    int i;
    startTime = omp_get_wtime();
    for (i = 0; i < n; i++)
    {
        Vector1[i] = rand() % 10;
    }
    for (i = 0; i < n; i++)
    {
        Vector2[i] = rand() % 10;
    }
    omp_set_num_threads(totalThreads);
    n_per_thread = n / totalThreads;
#pragma omp parallel for shared(Vector1, Vector2, Result) private(i) schedule(static, n_per_thread)
    for (i = 0; i < n; i++)
    {
        Result[i] = Vector1[i] + Vector2[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t%d\t+\t%d\t=\t%d\n", i, Vector1[i], Vector2[i], Result[i]);
    }
    endTime = omp_get_wtime();
    time = endTime - startTime;
    printf("Total time taken f: %lf \n ", time);
    free(Vector1);
    free(Vector2);
    free(Result);
    return 0;
}