#include <stdio.h>

int main(){
    int num1, num2;

    int max=1, min=1;
    int count;
    int flag = 1;
    printf("두 개의 자연수를 입력하세요: \n");
    scanf("%d %d", &num1, &num2);

   

    int gcd(int a, int b) {
        int tmp, n;

        if (a < b) {
            tmp = a;
            a = b;
            b = tmp;
        }

        while (b != 0) {
            n = a % b;
            a = b;
            b = n;
        }
        return a;
    }


    min = gcd(num1, num2);
    if (num1 > num2) {
        max = num2 * min;
    }
    else {
        max = num1 * min;
    }

    printf("최대공약수: %d\n", max);

    printf("최소공배수: %d\n", min);
}