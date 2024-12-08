#include <stdio.h>


void read_values(int *a, int *b) {

    scanf("%d %d",a, b);

}


int power(int a, int b) {
    int i, prod = 1;

    for(i=0; i<b; i++) {
        prod *= a;
    }

    return prod;
}


int main() {

    int a, b, c;

    read_values(&a, &b);

    c = power(a, b);

    printf("%d\n",c);

    return 0;
}





