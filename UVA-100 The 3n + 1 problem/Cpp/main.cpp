#include <iostream>
#include<stdio.h>
int check(int a);
int main() {

    int a;
    int b;
    int max;
    int min;
    int sum = 0;
    int big_value = 0;

    while (scanf("%d%d", &a, &b) != EOF) {
        if(a>b){
            max=a;
            min=b;
        } else{
            max=b;
            min=a;
        }

            for (int i = min; i <= max; i++) {
                sum = check(i);
                if (big_value <= sum) {
                    big_value = sum;
                }
            }
            printf("%d %d %d\n", a, b, big_value);
            big_value = 0;

    }
    return 0;

}

int check(int a) {
    int count = 0;
    repeat:
    if (a == 1) {
        count++;
        return count;
    } else if (a % 2 == 1) {
        count++;
        a = a * 3 + 1;
    } else {
        count++;
        a = a / 2;
    }
    goto repeat;
}
