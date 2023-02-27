unsigned char chiffre = 3; // 256 
unsigned int grosChiffre = 23984; // 65 535
unsigned long tresGrosChiffre = 193783; // 4 294 967 295

//unsigned float decimale = 24.2; // 2074

char chiffreNeg = 3; // 127 
int grosChiffreNeg = 23984; // 32 767
long tresGrosChiffreNeg = 193783; // 2 147 483 647

float decimaleNeg = 2.2; // 1 x1037
double decimaleDoubleNeg = 2.2; // 1 x1037

const int CONSTANTE = 5;

int function(int groshiffr){
    groshiffr = groshiffr - 1;

    // Afficher un message
    
    printf("Ceci est un integer : %d !",  chiffreNeg);
    printf("Ceci est un integer positif : %u !",  grosChiffre);
    printf("Ceci est un long integer : %ld !",  tresGrosChiffreNeg);
    printf("Ceci est un floaty ou double : %f !",  decimaleNeg);

    printf("Je peux aussi, %d en afficher plusieurs %d", chiffreNeg, groshiffr);

    return groshiffr;
}

int getScore(){
      int score = 0; // On initialise la variable à 0
  
  printf("Quel score avez-vous ? ");
  scanf("%d", &score); // On demande d'entrer le score avec scanf
  printf("Ah ! Vous avez donc %d points !\n\n", score);
       
  return 0;
}

int increment(int base ){
    //L'incrementation
    base++;
    //la decrementation = 
    base--;

    //on observe aussi les methodes suivantes
    int nombre = 2;

    nombre += 4; // nombre vaut 6...
    nombre -= 3; // ... nombre vaut maintenant 3
    nombre *= 5; // ... nombre vaut 15
    nombre /= 3; // ... nombre vaut 5
    nombre %= 3; // ... nombre vaut 2 (car 5 = 1 * 3 + 2)


    return base;
}

int arythmetique(int base){

    /*
    Avec la bibliotheque suivante : 
    #include <math.h>

    Nous pouvons utiliser une multitude de fonctions supplémentaires soit : 
    */

    // Renvoie la valeur absolue (donc toujours positive) (renvoie un double)
    double absolue = fabs(base);

    //Renvoie l'arrondi supérieur (en double)
    double arrondiDessus = ceil(base);

     //Renvoie l'arrondi inférieur (en double)
    double arrondiDessous = floor(base);

    //Met en puissance le nombre par le parametre 2
    double puissance = pow(base, 4); // base^4
    
    //La racine carrée
    double carrée = sqrt(puissance);


    // Sin, cos, tan prennent un radian, et renvoient un double
    double sinus = sin(base);
    double cosinus = cos(base);
    double tangente = tan(base);
     // et leur inverses, renvoient un double
    double asinus = asin(base);
    double acosinus = acos(base);
    double atangente = atan(base);
    
    //renvoit l'exponentielle d'un nombre
    double exponentielle = exp(base);

    //Renvoie le logarithme népurien d'un nombre
    double ln = log(exponentielle);

    //Renvoie le logarithme népurien d'un nombre
    double ln10 = log10(exponentielle);


    return 0;
}



int structureComplexes(int chiffre){
    switch (chiffre)
    {
    case 2:
    printf("Deux");
    break;
    case 6:
    printf("Six");
    break;
    default:
    printf("Je n'ai aucune reponse pour ton age");
    break;
    }



    int ternary = (chiffre) ? 1 : 0;



    return 0;
}
