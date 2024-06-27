#include <stdio.h>
#include <time.h>

// linear congruential generator is used
int rollDice(long seed, int mul, int inc, int lc) {
    for (int i = 0; i < lc; i++) {
        seed = (mul * seed + inc) % 6;
    }
    return (seed + 1);
}

int dice() {
    time_t t;
    time(&t);
    return rollDice(t, 13, 0, 10);
}

int main() {
    int num = dice();
    printf("random dice num: %d\n", num);
    return 0;
}

