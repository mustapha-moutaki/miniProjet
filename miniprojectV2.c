#include<stdio.h>
#include<string.h>

struct livre{
    char titre[40];
    char auteur[40];
    float prix;
    int quantite;
};
struct livre tabl[400];
int nLivre = 0 ;
char nameTitre[50];
char nomlivre[50];
int Majour;
int reponse;



void ajouterLivre(int nLivre){
                        printf("----------------------\n");
                        printf("le titre: \t");
                        scanf(" %[^\n]s", tabl[nLivre].titre);
                        printf("l'auteur: \t");
                        scanf(" %[^\n]s", tabl[nLivre].auteur);
                        printf("le prix: \t");
                        scanf("%f", &tabl[nLivre].prix);
                        printf("la quantite: \t");
                        scanf("%d", &tabl[nLivre].quantite);
}

void livresDisponible(){

    struct livre tmp;


    for(int i = 0 ; i < nLivre - 1 ; i++){
        for (int j = 0; j < nLivre - i - 1; j++)
        {
            if (tabl[j].prix > tabl[j + 1].prix)
            {
                tmp = tabl[j] ;
                tabl[j] = tabl[j + 1] ;
                tabl[j + 1] = tmp ;
            }
            
        }
        
    }

    for(int j = 0; j < nLivre; j++){
        printf("----------|| le livre %d --------\n", j + 1);               
        printf("le titre: %s\n", tabl[j].titre);
        printf("le auteur: %s\n", tabl[j].auteur);
        printf("le prix:  %.2f DH\n", tabl[j].prix);
        printf("le quantitr:  %d\n", tabl[j].quantite);
        printf("----------------------\n");
        }
}
//-----------------------
void rechercherLivre(){
        printf("----------------------\n");
        printf("==>Rechercher un livre:\n");
        printf("\n----------------------\n");
        printf("tapez le titre: \t");
        scanf(" %[^\n]s", &nameTitre);
        //int result = strcmp(N[40].titre, nameAuteur);
        for (int i = 0; i < nLivre; i++){
        if (strcmp(nameTitre, tabl[i].titre) == 0)/*result == 0*/{
        printf("--------------------------\n");
        printf(" |le titre: \" %s \" -le prix: %.2f DH\n", tabl[i].titre, tabl[i].prix);
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
        if (strcmp(nameTitre, tabl[i].auteur) == 0)/*result == 0*/{
        printf("--------------------------\n");
        printf("modifier la quantite:\t");
        scanf("%d", &Majour);
        tabl[i].quantite += Majour;
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
        if (strcmp(nomlivre, tabl[i].titre) == 0)/*result == 0*/{
        printf("--------------------------\n");
        printf(" |le titre \" %s \" -le prix: %.2f DH\n", tabl[i].titre, tabl[i].prix);

            int i = *tabl[i].titre;
            for ( i = *tabl[i].titre; i < nLivre -  1; i++){

            tabl[i] = tabl[i+1];
        nLivre--;
        }
        
        // else
        // printf("Oops!!");
                
                
        };
            
            }
            }
void totalLivre(){
printf("-----------------------\n");
printf("\n==>la quantite d'un livre: || %d ||\n", nLivre);
printf("\n----------------------\n");
}
///------------


int main(){
int choix;
    while (1){
       
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

            switch (choix){
            case 1:{
                    ajouterLivre(nLivre);
                    nLivre++ ;
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
    }
    


    return 0;
}