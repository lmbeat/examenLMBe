Examen de Principes algorithmiques et programmation
Question 1 :
Ecrire un programme permettant de trier par ordre alphabétique une liste de noms de personnes. Le nombre de personnes ainsi que les noms des personnes sont fournis par l’utilisateur au cours de l’exécution du programme. Les noms de personnes sont uniquement constitués de lettres majuscules non accentuées ; tout autre caractère étant proscrit. Dans le cas d’une saisie incorrecte, le programme veillera à avertir l’utilisateur et l’invitera à effectuer une nouvelle saisie. Les noms de personnes sont stockés, au fur et à mesure de la saisie, dans un tableau dans l’ordre de saisie de ceux-ci. Une fois la saisie terminée, le programme affichera la liste des noms de personne dans l’ordre de saisie de ceux-ci. Une fois le tri effectué, le programme affichera la liste des noms de personnes par ordre alphabétique des noms de personnes. Le programme utilisera des fonctions.
Par exemple, si l’utilisateur saisit successivement les 7 noms de personnes suivantes :
Personne n°1 : nom : VANBUYTEN
Personne n°2 : nom : VANDENBROEK
Personne n°3 : nom : DUSCHMURZ
Personne n°4 : nom : DUPONTEL
Personne n°5 : nom : VANBOMMEL
Personne n°6 : nom : DUPONT
Personne n°7 : nom : VANBASCO
Après le tri, le programme affichera les noms de personnes dans l’ordre suivant :
Personne n°1 : nom : DUPONT
Personne n°2 : nom : DUPONTEL
Personne n°3 : nom : DUSCHMURZ
Personne n°4 : nom : VANBASCO
Personne n°5 : nom : VANBOMMEL
Personne n°6 : nom : VANBUYTEN
Personne n°7 : nom : VANDENBROEK

Question 2 :
Une entreprise de mécanique fabrique des disques de roulements de différents calibres. Ces disques sont directement expédiés vers leur client dès la fin de leur fabrication et ce, pour limiter les frais de stockage. Néanmoins, la société entrepose un disque de chaque type sur un site prévu à cet effet et ce, afin de pouvoir dépanner un client important en cas de problèmes sur la ligne de production. Ces disques de différents calibres sont stockés les uns sur les autres mais de telle manière qu’un disque de plus grand diamètre ne peut en aucun cas se trouver au-dessus d’un disque de plus petit diamètre et ce, pour éviter des déformations mécaniques dues à la force de gravité. En règle générale, les disques sont stockés sur une seule colonne prévue à cet effet mais la société dispose de deux autres colonnes de stockage qui restent la plupart du temps vide. Néanmoins, des entretiens de maintenance de la colonne de stockage requièrent le déplacement des disques vers une des deux autres colonnes de stockage. Les manipulations nécessaires à l’entreposage de ces disques s’effectuent à l’aide d’un clark. La liste des manipulations à effectuer avec le clark pour déplacer l’ensemble des disques d’une colonne vers une autre sans les endommager doit être bien évidemment limitée au maximum.
Ecrire un programme permettant d’afficher les manipulations strictement nécessaires pour déplacer n disques (n est un nombre entier saisi par l’utilisateur) depuis une colonne donnée vers une autre et ce, en utilisant la troisième colonne et, en sachant qu’il est interdit de placer un disque de plus grand diamètre sur un disque de plus petit diamètre.
Le programme devra utiliser une fonction récursive.
Question 3 :
Ecrire un programme permettant de rechercher si le nom d’une personne donnée se trouve parmi une liste de noms de personnes triée par ordre alphabétique. Le nombre de personnes de la liste ainsi que les noms des personnes sont fournis par l’utilisateur au cours de l’exécution du programme. Les noms de personnes sont uniquement constitués de lettres majuscules non accentuées ; tout autre caractère étant proscrit. Dans le cas d’une saisie incorrecte, le programme veillera à avertir l’utilisateur et l’invitera à effectuer une nouvelle saisie. Pour faciliter la réalisation de votre programme, on supposera que la saisie, par l’utilisateur, des noms de personnes de la liste se fait dans l’ordre alphabétique (autrement dit, on supposera que l’utilisateur ne saisit jamais un nom de personne qui précède, dans l’ordre alphabétique, le nom de la personne de la précédente saisie). Les noms de personnes de la liste sont donc ainsi stockés par ordre alphabétique dans un tableau. Une fois la saisie des noms de la liste terminée, le programme demande à l’utilisateur d’entrer le nom de la personne que l’on recherche dans la liste. Le programme doit prévenir ensuite l’utilisateur si le nom cherché se trouve dans la liste ou pas. Le programme utilisera des fonctions (notamment une fonction de recherche dichotomique).
Question 4 :
Écrire un programme qui demande à l'utilisateur de saisir le numéro de client, le nom et le prénom et l’âge de n clients où n est un nombre entier positif saisi par l’utilisateur au cours de l’exécution du programme. Le programme stocke ces informations dans un tableau de structures personne. Une structure personne sera définie de la manière suivante :
struct personne
{
char nom [31];
char prenom [31];
int num;
};
Le programme doit ensuite écrire, dans un fichier nommé « data », les informations contenues dans le tableau de structures.
Dans la deuxième partie du programme, celui-ci doit lire, à partir du fichier nommé « data », les informations concernant les m premiers clients (où m est un nombre entier positif inférieur ou égal à n introduit par l’utilisateur au cours de l’exécution du programme). Les informations recueillies, à partir du fichier nommé « data », sont stockées dans un tableau de structures personne et sont ensuite affichées à l’écran.
