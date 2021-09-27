#include <stdio.h>

int main() {
/*EXERCICE1*/
/*    int a, b;
    printf("saisissez a : \n");
    scanf ("%d", &a);
    printf("saisissez b : \n");
    scanf("%d", &b);
    if (a<b)
    {
        printf("le plus grand est %d.\n", b );
    }
    else {
        printf("le plus grand est %d.\n", a);}
        */

/*EXERCICE2

    int longueur, largeur, perimetre, aire;
    printf("saisissez longueur : \n");
    scanf("%d", &longueur);
    printf("saisissez largeur : \n");
    scanf("%d", &largeur);
    printf("le perimetre vaut : %d  ", longueur*2 + largeur * 2);
    printf("et l'aire vaut : %d", longueur* largeur);*/

/*EXERCICE3

    int n, multiple;
    printf("saisissez un nombre : \n");
    scanf("%d", &n);
    printf("saisissez un multiple : \n");
    scanf("%d", &multiple);
    if (n % multiple==0 && n<10)
    {
        printf("ce nombre est divisible par %d et est plus petit que 10",multiple);
        scanf("%d",&multiple);
    }
    else if (n%multiple!=0 && n<10)
    {
        printf("ce nombe n'est pas divisible par : %d mais est plus petit que 10",multiple);
        scanf("%d",&multiple);
    }
    else if (n%multiple==0 && n>10)
    {
        printf("ce nombre est divisible par : %d et est plus grand que 10",multiple);
        scanf("%d",&multiple);
    }
    else
    {
        printf("ce nombre n'est pas divisible par : %d et est plus grand que 10",multiple);
        scanf("%d",&multiple);
    }
    */

    /*EXERCICE4

    int age;
    int etudiant = 1;
    printf("saisissez votre age :\n");
    scanf("%d", &age);
    printf("etudiant ? saisissez 1 si oui et 0 sinon.\n");
    scanf("%d", &etudiant);
    if (age < 12)
    {
        printf("la place coute 4 euros");
    }
    else if (age>=12 && age<17 || etudiant == 1 && age <27 || age> 65)
    {
        printf("la place coute 6 euros");
    }
    else
    {
        printf("la place coute 9 euros");
    }
*/

/*EXERCICE 5

    int boisson;
    printf("saisissez votre numero boisson:\n");
    scanf("%d", &boisson);
    switch (boisson)
    {
        case 1:
        {
            printf("vous avez choisi un fanta.\n");
            break;
        }
        case 2:
        {
            printf("vous avez choisi de l'eau.\n");
            break;
        }
        case 3:
        {
            printf("vous avez choisi un orangina.\n");
            break;
        }
        case 10:
        {
            printf("vous avez choisi un the.\n");
            break;
        }
        case 11:
        {
            printf("vous avez choisi un chocolat.\n");
            break;
        }
        default:
        {
            printf("veuillez saisir un numero valide.\n");
            break;
        }
    }
*/

/*EXERCICE6

    float note1, note2, note3, moyenne;
    printf("saisir note1 :\n");
    scanf("%f", &note1);
    printf("saisir note2 :\n");
    scanf("%f", &note2);
    printf("saisir note3 :\n");
    scanf("%f", &note3);
    if (note1<0 || note1>20)
    {
        printf("saisir note1 valable:\n");
        scanf("%f", &note1);
    }
    if (note2<0 || note2>20)
    {
        printf("saisir note2 valable:\n");
        scanf("%f", &note2);
    }
    if (note3<0 || note3>20)
    {
        printf("saisir note3 valable:\n");
        scanf("%f", &note3);
    }
    moyenne= (note1+ note2+ note3)/3;
    printf("la moyenne vaut : %f", moyenne);
    */

/*EXERCICE7

    int nbrClasses=0, j=1, nbrElevesDeLaClasse=0, total=0;
    printf("saisissez le nombre de classe:\n");
    scanf("%d", &nbrClasses);
    for (j =1; j<=nbrClasses; j++)
    {
        printf("saisissez le nombre d'eleves dans la classe %d :", j);
        scanf("%d", &nbrElevesDeLaClasse);
        total = total + nbrElevesDeLaClasse;
    }
    printf("le nombre total d'eleves est : %d", total);
    */

/*EXERCICE8

    int nombre=0;
    printf("saisissez nombre : \n");
    scanf("%d", &nombre);
    while (!(nombre%2==0 && nombre%7==0))
    {
        printf("saisissez un autre nombre : \n");
        scanf("%d", &nombre);
    }
*/

/* EXERCICE9*/

    int nbrPierres=0, nbrEtages=0, i=1;
    printf("saisir nombre de pierres:\n");
    scanf("%d", &nbrPierres);
    while (nbrPierres>0);
    {
        for (i=1; i<nbrPierres; i++)
        {
            nbrPierres= nbrPierres - i*i;
            nbrEtages++;
        }
    }
    printf("Le nombre d'etages vaut : %d", nbrEtages);

/*Je n'ai pas eu le temps d'améliorer l'exercice 9, c'est la première ébauche mais boucle inf*/

return 0;
}