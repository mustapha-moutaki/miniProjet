
#include<stdio.h>
#include<string.h>
struct livre{
    char titre[50];
    char auteur[50];
    float prix;
    int quantite;
};
int nLivre = 0;
struct livre N[40];
int choix;
char nameTitre[50];
char nomlivre[50];
int Majour;
int reponse;

void affg(){
        printf("\
------------------LE MENU:--------------------------\n \
1- Ajouter un liver\n \
2- Afficher tous les livres disponibles\n \
3- Rechercher un livre par son titre.\n \
4- Mettre a jour la quantite d'un livre.\n \
5- Supprimer un livre du stock.\n \
6- Afficher le nombre total de livres en stock.\n");
printf("-----------choisir un nombre--------------------\n");
scanf("%d", &choix);
}
void ajouterLivre(){
  printf("\n---combiene de livre tu choisie---:\n");
                    scanf("%d", &nLivre);
                    for (int i = 0; i < nLivre; i++){
                        printf("----------------------\n");
                        printf("++le livre N%d++: \n", i+1);
                        printf("le titre: \t");
                        scanf(" %[^\n]s", N[i].titre);
                        printf("l'auteur: \t");
                        scanf(" %[^\n]s", N[i].auteur);
                        printf("le prix: \t");
                        scanf("%f", &N[i].prix);
                        printf("la quantite: \t");
                        scanf("%d", &N[i].quantite);
                    };
}
void livresDisponible(){
        printf("\n----------------------\n");
        printf("==>tous les livres disponibles:\n");
        for (int i = 0; i < nLivre; i++){
        printf("----------------------\n");               
        printf("le titre: %s\n", N[i].titre);
        printf("le auteur: %s\n", N[i].auteur);
        printf("le prix:  %.2f DH\n", N[i].prix);
        printf("le quantitr:  %d\n", N[i].quantite);
        printf("\n----------------------\n");
        };

}
void rechercherLivre(){
        printf("----------------------\n");
        printf("==>Rechercher un livre:\n");
        printf("\n----------------------\n");
        printf("tapez le titre: \t");
        scanf(" %[^\n]s", &nameTitre);
        //int result = strcmp(N[40].titre, nameAuteur);
        for (int i = 0; i < nLivre; i++){
        if (strcmp(nameTitre, N[i].titre) == 0)/*result == 0*/{
        printf("--------------------------\n");
        printf(" |le titre: \" %s \" -le prix: %.2f DH\n", N[i].titre, N[i].prix);
        printf("--------------------------\n");
        break;
    }             
};
}
void mettreAjour(){
        printf("----------------------\n");
        printf("==>mettre a jour la quantite de livre:\n");
        printf("\n----------------------\n");
        printf("entrer l'auteur: \t");
        scanf(" %[^\n]s", &nameTitre);
        //int result = strcmp(N[40].titre, nameAuteur);
        for (int i = 0; i < nLivre; i++){
        if (strcmp(nameTitre, N[i].auteur) == 0)/*result == 0*/{
        printf("--------------------------\n");
        printf("modifier la quantite:\t");
        scanf("%d", &Majour);
        N[i].quantite += Majour;
        break;
}
};

}
void suprimerLivre(){
        printf("----------------------\n");
        printf("==>suprimer un livre:\n");
        printf("\n----------------------\n");
        printf("entre le nom de livre: \t");
        scanf(" %[^\n]s", &nomlivre);
        //int result = strcmp(N[40].titre, nameAuteur);
        for (int i = 0; i < nLivre; i++){
        if (strcmp(nomlivre, N[i].titre) == 0)/*result == 0*/{
        printf("--------------------------\n");
        printf(" |le titre \" %s \" -le prix: %.2f DH\n", N[i].titre, N[i].prix);
        printf(" (1)supremer\n");
        scanf("%d", &reponse);
        if (reponse == 1){
            //*N[] = false;
             //here is the problem
            int i = *N[i].titre;
            for ( i = *N[i].titre; i < nLivre -  1; i++){
            N[i] = N[i+1];
                
        }
        nLivre--;
        }
        else
        printf("Oops!!");
                
                
        };
            
            }

}
void totalLivre(){
        printf("-----------------------\n");
        printf("\n==>la quantite d'un livre: || %d ||\n", nLivre);
        printf("\n----------------------\n");
}

int main(){
do{
            affg();

            switch (choix){
            case 1:{
                    ajouterLivre();
                    }
            break;

            case 2:{
                    livresDisponible();
                    }
            break;

            case 3:{
                    rechercherLivre();
                    }
            break;

            case 4:{
                    mettreAjour();
                    }
            break;

            case 5:{
                    suprimerLivre();                  
                    }
            break;

            case 6:{
                    totalLivre();
                    }
            break;
                
            default:
                    printf("try again");
            break;
                }
}while(choix != 7);
    
    return 0;
}
