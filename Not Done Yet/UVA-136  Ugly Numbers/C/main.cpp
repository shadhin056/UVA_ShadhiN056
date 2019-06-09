#include<stdio.h>
#include<iostream>
using namespace std;

int ugly_number_check(int selected_number) {
    int result;
    while (selected_number > 0) {
        if ((selected_number % 2) == 0) {
            selected_number = selected_number / 2;
            if (selected_number == 1) {
                result = 1;
                break;
            } else if (selected_number < 0) {
                result = 2;
                break;
            }

        } else if ((selected_number % 3) == 0) {
            selected_number = selected_number / 3;
            if (selected_number == 1) {
                result = 1;
                break;
            } else if (selected_number < 0) {
                result = 2;
                break;
            }
        } else if ((selected_number % 5) == 0) {
            selected_number = selected_number / 5;
            if (selected_number == 1) {
                result = 1;
                break;
            } else if (selected_number < 0) {
                result = 2;
                break;
            }
        } else {
            result = 2;
            break;
        }
    }
    return result;
}

int main() {
    int selected_number = 869963392;
    int counter=1;
    for (int i = 2; i < selected_number; i++) {

        if(counter==1500){
            printf("The 1500'th ugly number is %d.\n",i-1);
            break;
        } else if(ugly_number_check(i) == 1) {
            counter++;
        }
    }
    return 0;
}
