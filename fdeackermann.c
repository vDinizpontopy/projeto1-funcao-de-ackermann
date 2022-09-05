#include <stdio.h>

unsigned long int fack (unsigned long int m,unsigned long int n){
    if(m == 0){
        return n + 1;
    }else if (n == 0){
        return fack (m - 1, 1);
    } else {
        return fack(m - 1, fack(m, n - 1));
    }
}

int main (){
    int unsigned long m, n;
    scanf("%lu", &m);
    scanf("%lu", &n);

    printf("\n %lu", fack(m, n));

    return 0;
}