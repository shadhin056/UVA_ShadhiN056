#include <iostream>
#include<stdio.h>
#include <cstring>

int main() {
    char c[20];
    int i=0;
    while (strcmp(gets(c), "*")!=0) {
        i++;
        if (strcmp(c, "Hajj")==0) {
            printf("Case %d: Hajj-e-Akbar\n",i);
        } else if (strcmp(c, "Umrah")==0) {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
    }
}