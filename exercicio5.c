#include <stdio.h>

int reverse(int num) {
    static int reverternum = 0;
    static int basePos = 1;
    
    if (num != 0) {
        reverse(num / 10);
        reverternum += (num % 10) * basePos;
        basePos *= 10;
    }

    return reverternum;
}

int main() {
    int num, reverter;
    printf("Digite um número: ");
    scanf("%d", &num);
    
    reverter = reverse(num);
    
    printf("O número revertido é: %d\n", reverter);

    return 0;
}