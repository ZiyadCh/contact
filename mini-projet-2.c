#include <stdio.h>
#include <string.h>

struct contact
{
    int num;
    char nom[10];
    char email[10];
};

struct contact ajouter(){
    struct contact p;
    printf("--------------------------------\n");
    printf("         Nouveau Contact        \n");
    printf("--------------------------------\n");
    printf("-Entrer le numero de telephone:\n");
    printf("212+:");
    scanf("%d", &p.num);
    printf("-Entrer le nom du contact:\n");
    scanf("%s", p.nom);
    printf("-Entrer l'email du contact:\n");
    scanf("%s", p.email);
    return p;
};

void afficher(struct contact persone[], int count)
{
    for (int i = 1; i <= count; i++)
    {
        printf("---------------------------\n");
        printf("numero : 0%d\n", persone[i].num);
        printf("Nom    : %s\n", persone[i].nom);
        printf("Email  : %s\n", persone[i].email);
    }
};

// SEARCH+++++++++++++++++++++++++++++++++++++++
void search(struct contact persone[], int count){
    char n[10];
    int exist = 0;
    printf("Nom du contact:\n");
    scanf("%s", n);
    for (int i = 0; i <= count; i++)
    {
        if (strcmp(n, persone[i].nom) == 0)
        {
            printf("Nom    : %s\n", persone[i].nom);
            printf("numero : 0%d\n", persone[i].num);
            printf("Email  : %s\n", persone[i].email);
            exist = 1;
        }
    }
    if (exist == 0)
    {
        printf("Ce contact n'exist pas\n");
    }
}
//MOIFIER*************************************
void modifier(struct contact persone[], int count){
    char n[10],n2[10],m2[10];
    int exist = 0,num;

    printf("Nom du contact pour modifier:\n");
    scanf("%s", n);
    for (int i = 0; i <= count; i++)
    {
        if (strcmp(n, persone[i].nom) == 0)
        {
            printf("Nom    : %s\n", persone[i].nom);
            printf("numero : 0%d\n", persone[i].num);
            printf("Email  : %s\n", persone[i].email);
            printf("+============================================+\n");
            printf("Entrer les nouvelle informtions:\n");
            printf("Nom    : ");
            scanf("%s",n2);
            printf("numero : \n212+:");
            scanf("%d",&num);
            printf("Email  : ");
            scanf("%s",m2);
            exist = 1;
            //replace-------------
            strcpy(persone[i].nom,n2);
            strcpy(persone[i].email,m2);
            persone[i].num = num;
        }
     
  }
 if (exist == 0)
    {
        printf("Ce contact n'exist pas\n");
    } 
}
//SUPPRIMER**********************************************
void supprimer(struct contact persone[], int count){
char n[10];
    int exist = 0;
    printf("Nom du contact:\n");
    scanf("%s", n);
    for (int i = 0; i <= count; i++)
    {
        if (strcmp(n, persone[i].nom) == 0)
        {

          strcpy(persone[i].nom,persone[i +1].nom);
          strcpy(persone[i].email,persone[i +1].email);
          persone[i].num = persone[i+1].num;
          printf("Contact Supprime avec Succes\n");

          exist = 1;
        }
    }
    if (exist == 0)
    {
        printf("Ce contact n'exist pas\n");
    }
}

int main()
{

    struct contact personne[99];
    int option = 0, count = 0;

    while (option != 6)
    {
        printf("+============================================+\n");
        printf("|                    Contact                 |\n");
        printf("+============================================+\n");
        printf("|1-Ajouter un contacts                       |\n");
        printf("|2-Afficher touts les contacts               |\n");
        printf("|3-Modifier un contact.                      |\n");
        printf("|4-Supprimer un contact.                     |\n");
        printf("|5-Rechercher un contact.                    |\n");
        printf("|6-Quitter                                   |\n");
        printf("+============================================+\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1: // AJOUTER------------------
            count++;
            personne[count] = ajouter();
            break;
        case 2: // AFFICHER---------------
            afficher(personne, count);
            break;
        case 3: // modifier-----------
            modifier(personne,count);
            break;
        case 4: // SUPPRIMER =-=======================
            supprimer(personne,count);
            count--;
            break;
        case 5: // RECHERCHER=========================
            search(personne, count);
            break;
        case 6:
            printf("Au Revoir.");
            break;
        default:
            printf("Choisi un nombre entre 1-5!");
            break;
        }
    }

    return 0;
}
