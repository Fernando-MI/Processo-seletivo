#import <stdio.h>
#import <cs50.h>

int main (void){
    int num = get_int("digite um numero natural: ");
    int a = 0;
    int b = 1;
    int c = 0;

    while (num > a){
        // printf("%d\n", c);
        if (num == c){
            printf("Esse número esta na sequencia!\n");
        }
        c = a + b;
        a = b;
        b = c;
    }

}
