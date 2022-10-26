#include <stdio.h>

int mpow(int a, int b) {
    int res = 1;
    for (int i = 0; i <b; ++i){
        res = res * a;
    }
    return res;
}

/*int firstnum(int n){
    int num;
    while (n > 0) {
        num = n % 10;
        n /= 10;   Сначала я думал сделать отдельные функции под считывание первой и последней цифры но потом придумакл более интересное решение
    }
    return num;
}
int lastnum(int n){
    int num;
    num = n % 10;
    return num;
} */

int numlength(int n) {
    int k = 0;
    while (n > 0) {
        k += 1;
        n /= 10;
    }
    return k;
}

int readnum() {
    int c;
    int firstc = 0;
    int flag = 0;
    int k1 = 0;
    int num = 0;
    c = getchar();
    while (1==1) {
        if (c =='\n' || c ==' ') {
            break;
        }
        else if(c == '-') {
           k1 = 1;
           c = getchar(); 
        }
        else {
            if (flag == 0){
                firstc = (c - '0');
                c = getchar();
                flag = 1;
            }
            else {
                num = num * 10 + (c - '0');
                c = getchar();
            }
            
        }
    }
    if (k1 == 1) {
        num = num * (-1);
    }
    num = num * 10 + firstc;
    return num;
}


int main() {
    int ch, fc, lc,d;
    ch = readnum();
    fc = ch % 10;
    ch = ch / 10;
    lc = ch % 10;
    ch = ch /10;
    d = numlength(ch)+1;
    int res;
    res = lc * mpow(10,d) + ch * 10 + fc;
    printf("%d\n", res);
}