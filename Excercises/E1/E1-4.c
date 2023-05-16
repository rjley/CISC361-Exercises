#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#define MAX_NO_OF_ELEMENTS 100000000
static long long int sum;
static int arr[MAX_NO_OF_ELEMENTS];
int main()
{
int sum = 0;
double start = clock();
for (int i = 0; i < MAX_NO_OF_ELEMENTS; i++){
    arr[i] = i + 1;
    sum = sum + arr[i];
}
double end = clock();
//Setup timing
double cpu_time_taken;
cpu_time_taken = (end-start)/CLOCKS_PER_SEC;
printf("Total sum: %lld\n", sum);
printf("Time taken to sum all the numbers are %lf\n", cpu_time_taken);
return 0;
}