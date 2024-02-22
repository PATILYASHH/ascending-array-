#include<stdio.h>

int main() {
    int num[] = {978, 654, 2645, 5687, 2453, 9678};
    int temp;

    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 6; j++) {
            if(num[i] > num[j]) {
                // Swap the elements
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for(int i = 0; i < 6; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}
