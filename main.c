#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "useless.h"
struct Prestation
{
    char title[100];
    int price;
    int quantity;
};


typedef enum {
    VRAI, FAUX
} Booleen; 
 
typedef enum {
    XS = 130, S = 150, M = 170, L = 180, XL = 200, XXL
}Taille;

typedef struct Prestation Prestation;


int main(){
    Prestation nouvellePrestation;
    scanf("%s", nouvellePrestation.title);
    scanf("%d", &nouvellePrestation.price);
    scanf("%d", &nouvellePrestation.quantity);
    //
    Prestation encoreUnePresta;
    Prestation *pointeurPrestation = &encoreUnePresta;
    pointeurPrestation->quantity = 23; 
    direBonchouranh(1, 1);
    
    Booleen process = VRAI;
    Taille  alexandre = 201; // = XXL

    if(process == VRAI){

    }
    if(alexandre == XL){
        printf("T'as repris du dessert mon salal");
    }
    system("pause");
    
    return 0;
}