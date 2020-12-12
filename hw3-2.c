#include <stdio.h>

int main(int argc, char** argv)
{
    int max = 0;
    int min = 999999;

    int points[10] = { 7000, 11000, 24000, 16000, 17000, 3000, 5000, 3000, 12000, 45000 };

    int prevMinTime = 0;

    for(int x = 0; x < 3; x++) {

        int minTime = 9999999;
        for(int i = 0; i < 10; i++) {
            if(points[i] < minTime && points[i] > prevMinTime) {
                minTime = points[i];
            }
        }
        prevMinTime = minTime;

        for(int i = 0; i < 10; i++) {
            if(points[i] == minTime) {
                printf("place:%d, time:%d, sportsman:%d\n", x + 1, minTime, i);
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        if(points[i] > max) {
            max = points[i];
        }
    }

    for(int i = 0; i < 10; i++) {
        if(points[i] < min) {
            min = points[i];
        }
    }

    int S = max - min;
    printf("max-min=%d\n", S);

    return 0;
}
