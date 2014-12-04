/*Question 1 */
#include <stdio.h>  /* permet d'utiliser printf, scanf*/
#include <stdlib.h>  /* permet d'utiliser la fonction rand */
#define VRAI 1
#define FAUX 0
#define N 10 /* N est le nombre maximum de noms de personne du tableau de noms de personne */
#define LONGMAX 20 /* nombre de caractères maximum pour le nom d'une personne */

int charlong (char *tab)//Cette fonction renvoie le nbre de caractères (sans le \0) du tableau de caractères dont tab contient l'adresse
{
    int cpt =0;
    while ( tab[cpt] != '\0')//tant que l'on est pas au caractère de fin de chaîne
          cpt++;//on incrémente cpt
    return cpt;//cpt est donc égal au nombre de caractères (sans le \0)
}

void strcopy(char *tab1,char *tab2)//fonction qui copie le contenu du tableau dont tab1 contient l'adresse dans le tableau dont tab2 contient l'adresse
{
    int i=0;
    while(tab1[i]!='\0')//tant que l'on est pas au caractère de fin
    {
        tab2[i]=tab1[i];//on copie chaque élément de tab1 dans tab2
        i++;
    }
    tab2[i]='\0';//on ajoute le caractère de fin de chaîne
}

int strcomp(char *tab1,char *tab2)//fonction de comparaison de 2 chaînes de caractères
/*
   Cette fonction renvoie 1 si tab1 précède tab2.
   Elle renvoie -1 si tab2 précède tab1
   Elle renvoie 0 si les 2 chaînes sont identiques
*/{
    int i=0;
    while(tab1[i]!='\0'&&tab2[i]!='\0')//tant que l'on n'est pas arrivé au caractère de fin de chaîne dans tab1 et dans tab2
    {
        if((int)tab1[i]<(int)tab2[i])//si le caractère en cours de tab1 précède le caractère en cours de tab2
            return 1; //on renvoie 1 car tab1 précède tab2
        else
        {
            if((int)tab1[i]>(int)tab2[i])//si le caractère en cours de tab2 précède le caractère en cours de tab1
                return -1;//on renvoie 1 car tab2 précède tab1
            else
                i++; //jusqu'à présent les caractères sont identique -> on passe au caractère suivant
        }
    }
    // on a quitté la boucle while car on est tombé sur une marque de fin de chaîne, soit dans tab1, soit dans tab2, soit dans les 2
    if(tab1[i]==tab2[i])//si les caractères sont identiques, alors il s'agit forcément de la marque de fin de chaîne
        return 0;//on renvoie 0 car les 2 chaînes sont identiques
    else
    {
        if(tab1[i]=='\0')// on est arrivé à la fin de tab1 mais pas à la fin de tab2 -> tab1 précède tab2
            return 1;
        else
            return -1; // sinon on est arrivé à la fin de tab2 mais pas à la fin de tab1-> tab2 précède tab1
    }
}

int verif(char *tab) //fonction qui vérifie si on encode uniquement des lettres majuscules et qui vérifie qu'on a bien saisi quelquechose 
{
    int i=0;
    int verifok = VRAI;
    if(tab[0]!='\0') //si le tableau n'est pas vide
    {
        while(verifok == VRAI && tab[i]!='\0') //tant que verifok est vrai et que l'on n'est pas arrivé à la marque de fin de chaîne
        {
            if((int)tab[i]>=65&&(int)tab[i]<=90) //si le caractère est une lettre majuscule
                i++;//on vérifie le caractère suivant
            else
                verifok=FAUX; //sinon verifok = faux
        }
    }
    else
        verifok = FAUX; //si la tableau est vide verifok = faux
    return verifok; //on retourne la valeur de verifok
}

void trier(char tab[N][LONGMAX],int taille)//fonction qui trie par ordre alphabétique les noms de personne
{
    int i,pasfini=VRAI,limite=taille-1,pos;
    char temp[LONGMAX];

    while(pasfini==VRAI)//tant que pasfini est vrai
    {
        pasfini=FAUX;

        for(i=0;i<limite;i++)
        {
            if(strcomp(tab[i],tab[i+1])==-1)//si la fonction de comparaison strcomp renvoie -1, c'est donc qu'il faut inverser les tableaux de caractères
            {
                strcopy(tab[i],temp);
                strcopy(tab[i+1],tab[i]);
                strcopy(temp,tab[i+1]);
                pasfini=VRAI;
                pos=i;
            }
        }
        limite=pos;
    }
}

void remplissage(char tab[N][LONGMAX],int taille) /* taille = nombre de cellules réellement utilisées du tableau */
{
	int i;
	char temp[10*LONGMAX];
	for (i=0; i<=taille-1;i=i+1)   /* les cellules sont numérotées de 0 à taille-1 */
	{
		printf("Entrez le nom de la personne num%cro %d :\n",130,i+1);
        printf("1 caract%cre minimum, %d caract%cres maximum et uniquement des lettres majuscules\n",138,LONGMAX,138);
        fflush(stdin);
        gets(temp); 
        while ( !(charlong(temp)<=LONGMAX && verif(temp)== VRAI) )
        {
              printf("Saisie incorrecte.\n");
              printf("Entrez le nom de la personne num%cro %d :\n",130,i+1);
              printf("1 caract%cre minimum, %d caract%cres maximum et uniquement des lettres majuscules\n",138,LONGMAX,138);
              fflush(stdin);
              gets(temp);
        }
        //copie du contenu de temp dans tab[i]
        strcopy(temp,tab[i]);
	}
}

void afficher(char tab[N][LONGMAX] , int taille) /* taille = nombre de noms de personne encodés dans le tableau */
{
	int i;
	printf("\n");
	for (i=0; i<=taille-1;i=i+1)  /* les cellules sont numérotées de 0 à taille-1 */ 
	{
		printf("Nom de la personne num%cro %d :  %s\n",130,i+1,tab[i]); 
	}
	system("pause");
}


main ()
{
	char tableau [N][LONGMAX];
	int nombrepers;
	//saisie du nombre de noms de personnes
	printf("Entrer le nombre de personnes dont vous voulez encoder le nom (nombre >0 et <= %d):\n",N);
	scanf("%d",&nombrepers);
	while(!(nombrepers>0&&nombrepers<=N))
	{
       printf("Saisie incorrecte:\n");
       printf("Entrer le nombre de personnes dont vous voulez encoder le nom (nombre >0 et <= %d):\n",N);
	   scanf("%d",&nombrepers);
    }
    //remplissage du tableau de noms de personne
	printf("Remplissage des %d cellules du tableau.\n",nombrepers);
    remplissage(tableau,nombrepers);
    system("cls");
    //affichage ds noms de personne dans l'ordre de saisie
	printf("Affichage des noms de personnes dans l'ordre de saisie.\n");
    afficher(tableau,nombrepers);
    //tri du tableau
	trier(tableau,nombrepers);
	printf("Le tri a %ct%c effectu%c.\n",130,130,130);
	//affichage du tableau trié
    printf("Affichage par ordre alphab%ctique des noms de personnes.\n",130);
    afficher(tableau,nombrepers);
}
