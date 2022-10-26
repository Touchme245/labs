#include <stdio.h>
int Getn() {
    int c;
    c = getchar();
    int per = 0;
    while( 1 == 1) {
        if (c == '\n' || c == ' ') {
            break;
        }
        else {
            per = per *10 + (c - '0');
            c = getchar();
        }

    }
    return per;
}

/* Функция считывающая число в троичной сс и переводящая в 10 сс как выяснилось позже она не понадобилась для решения поставленной задачи
int Getint() {

    int c;
    c = getchar();
    int per = 0;
    int k1=0;
    while (1==1) {
        if (c == '\n' || c == ' ') {
            break;
        }
        else if (c == '-') {
            if (per != 0) {
                printf("incorrect data");
                return 0;
                break;
            }
            k1 = 1;
            c = getchar();
        }
        else {
        per = per * 3 + (c - '0');
        c = getchar();
        }
    }
    if (k1 == 1) {
        per = per * (-1);
    }
    return per;
    
    
} */
int main() {
    int n,ch;
    n = Getn();
    for (int i = 0; i < n; ++i) {
        ch = Getn();
        if (ch % 10 == 0) {
            printf("%d\n", ch);
        }
    }
}