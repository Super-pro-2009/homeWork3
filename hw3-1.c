#include <stdio.h>

int main(int argc, char** argv)
{
    int max = 0;
    int min = 999999;

    int points[24] = { 7, 11, 24, 16, 17, 3, 5, 3, 12, 45, 45, 23, 13, 21, 37, 40, 27, 38, 14, 30, 45, 22, 24, 3 };
    int point25 = 0;

    for(int i = 0; i < 24; i++) {
        if(points[i] > max) {
            max = points[i];
        }

        if(points[i] < min) {
            min = points[i];
        }

        if(points[i] > 25) {
            point25++;
        }
    }

    for(int i = 0; i < 24; i++) {
        if(points[i] == min) {
            printf("Hour:%d,min:%d\n", i, min);
        }
        if(points[i] == max) {
            printf("Hour:%d,max:%d\n", i, max);
        }
    }

    printf("%d times", point25);
    return 0;
}
