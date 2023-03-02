#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100
#define MAX_SIZE_TAB 200

typedef struct {
    char title[MAX_SIZE];
    int price;
    int quantity;

} Item;
Item items[MAX_SIZE_TAB];

int main(){

    char response = 'y';
    int total = 0;
    int i = 0;

    while (response == 'y') {
        printf("Indiquer le titre : \n");
        fgets(items[i].title, MAX_SIZE, stdin);
        strtok(items[i].title, "\n");
        printf("Indiquer le prix par unité : \n");
        scanf("%d", &items[i].price);
        printf("indiquer la quantité : \n");
        scanf("%d", &items[i].quantity);
        i++;
        for (int j = 0; j < i; j++)
        {
            printf("| %s | %d €/u | %d | %d € |\n", items[j].title, items[j].price, items[j].quantity, items[j].price*items[j].quantity);

        }

        printf("Voulez vous continuez ? (y/n) \n");
        scanf(" %c", &response);
        getchar();
    }

    for (int b = 0; b < i; b++) {
        total += items[b].price*items[b].quantity;
    }
    printf(" | Total | %d € |", total);
    return 0;

}