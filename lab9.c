#include <stdio.h>
int abs(int a) {
    if (a >= 0) {
        return a;
    }
    else {
        return a * (-1);
    }
}
int max(int a, int b) {
    if ( a > b) {
        return a;
    }
    else {
        return b;
    }
}
int min( int a, int b) {
    if (a < b) {
        return a;
    }else {
        return b;
    }
}
int sign(int a) {
    if (a>0) {
        return 1;
    }
    else {
        return -1;
    }
}
int main() {
    int i = 13;
    int j = 19;
    int l = 14;
    int chek = 0;
    for (int m = 1; m <= 50; ++m) {
        int ist = i;
        int jst = j;
        int lst = l;
        int mst = m-1;
        i = sign(ist + 1) * abs(abs(mst - jst) - abs(ist-lst));
        j = jst % 20 + max(ist % 20 , min(jst - mst, lst - mst))-10;
        l = mst * (ist + 1) * (jst + 2) * (lst + 3) % 20;

        if (i + j <= -10 && i + j >= -20 && chek == 0) {
            printf("Point reached the destanation\n");
            printf("%d\n", i);
            printf("%d\n", j);
            printf("%d\n", m);
            chek = 1;
        }

    }

    if (chek ==0) {
        printf("Point  didnt reach the destanation\n");
    }
    printf("Last parameters of the point is:\n");
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", l);
}