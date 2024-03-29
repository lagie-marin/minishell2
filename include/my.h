/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday07-marin.lagie
** File description:
** my.h
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#ifndef MY
    #define MY
    #define RETURN(cond) if (cond) return
    #define FREE(str) if (str != NULL) free(str)
    #define LEN(str) my_strlen(str)
    #define PUT_ERROR(str) write(2, str, LEN(str))
    #define IS_CARACT(ch) (ch >= '!' && ch <= '~' && ch != ' ')
typedef const char cc;

/**
 * @brief pemret de mettre à la puissance un nombre
 * @param nb le nombre qui sera à multiplier
 * @param power l'exposant
 * @return int
 */
int my_compute_power_rec(int nb, int power);

/**
 * @brief permet de calculer la racine carre
 * @param nb le nombre
 * @return int
 */
int my_compute_square_root(int nb);

/**
 * @brief permet de récupérer le nombre premier le plus proche
 * @param nb le nombre
 * @return int
 */
int my_find_prime_sup(int nb);

/**
 * @brief permet de tester si le nombre est un nombre premier où non
 * @param nb nombre à tester
 * @return int 0 s'il n'est pas premier et 1 s'il est premier
 */
int my_is_prime(int nb);

/**
 * @brief permet d'afficher un entier dans le terminal
 * @param nb le nom à afficher
 * @return int
 */
int my_put_nbr(int nb);

/**
 * @brief permet d'afficher un caractère dans le terminal
 * @param c le caractère à afficher
 */
void my_putchar(char c);

/**
 * @brief permet d'afficher un str dans le terminal
 * @param str le str à afficher
 * @return int
 */
int my_putstr(char const *str);

/**
 * @brief permet d'afficher un nombre à partir d'une base donner en argument
 * la base 2 sera des 0 et 1, ect...
 * @param nbr le nombre qu'on veux afficher
 * @param base la base du nombre base 2, base 8, ect "01" "01234567"
 * @return int
 */
int my_putnbr_base(int nbr, char *base);

/**
 * @brief permet d'inverser un str
 * @param dest la destination où sera appliquée la modification
 * @param src la chaine à inverser
 * @return char* chaine returner
 */
char *my_revstr(char *dest, char const *src);

/**
 * @brief permet de trier une liste d'entier dans l'ordre croissant
 * @param array la liste à trier
 * @param size la taille de la liste
 */
void my_sort_int_array(int *array, int size);

/**
 * @brief permet de vérifier si le str est composé de lettre de l'alphabet
 * @param str str à tester
 * @return int 0 | 1 si c'est vrai
 */
int my_str_isalpha(char const *str);

/**
 * @brief permet de vérifier si le str est composé de lettre minuscule
 * @param str str à tester
 * @return int 0 | 1 si c'est vrai
 */
int my_str_islower(char const *str);

/**
 * @brief permet de vérifier si le str est un entier
 * @param str str à tester
 * @return int 0 | 1 si c'est vrai
 */
int my_str_isnum(char *str);

/**
 * @brief permet de vérifier si les caractères sont affichables
 * @param str str à tester
 * @return int 0 | 1 si c'est vrai
 */
int my_str_isprintable(char *str);

/**
 * @brief permet de tester si les caractères sont en majuscules
 * @param str str à tester
 * @return int 0 | 1 su c'est vrai
 */
int my_str_isupper(char *str);

/**
 * @brief permet de mettre tout les premier caractères des mots serons
 * en majuscules
 * @param str le str à modifer
 * @return char* retourne la chaine modifier
 */
char *my_strcapitalize(char *str);

/**
 * @brief permet de concatener un str avec un autre
 * @param dest la destination où sera ajouter la source
 * @param src la source
 * @return char* retourne le str une fois la concaténation terminée
 */
char *my_strcat(char *dest, char const *src);

/**
 * @brief permet de comparer 2 chaine de caractères entre elle
 * @param s1 1ère chaine de caractère
 * @param s2 2è chaine de caractère
 * @return int renvoie 0 si elle sont identiques où leurs différences
 */
int my_strcmp(char const *s1, char const *s2);

/**
 * @brief permet de copier un str
 * @param dest destination où sera copié le str
 * @param src le str à copier
 * @return char* renvoie le str copie
 */
char *my_strcpy(char *dest, char const *src);

/**
 * @brief permet de récupérer la taille du str
 * @param str le str à parcourir
 * @return int retourne la taille du str
 */
int my_strlen(char const *str);

/**
 * @brief permet de mettre tout les caractères en minuscules
 * @param str le str à modifier
 * @return char* renvoie le str modifie
 */
char *my_strlowcase(char *str);

/**
 * @brief permet de concatener un str avec un autres jusqu'à une certaine
 * limite
 * @param dest déstination où sera concatener le str
 * @param src le str à concatener
 * @param nb limite de caractères à concatener
 * @return char* renvoie le str à concatener
 */
char *my_strncat(char *dest, char const *src, int nb);

/**
 * @brief permet de comparer 2 str entre eu jusqu'à une certaine limite.
 * @param s1 1e str
 * @param s2 2è str
 * @param n limite de caractères à tester
 * @return int renvoie 0 si elle sont identiques où leurs différences
 */
int my_strncmp(char const *s1, char const *s2, int n);

/**
 * @brief permet de copier un str jusqu'à une certaine limite.
 * @param dest déstination où sera copié le str
 * @param src le str à copie
 * @param n la limite de la copie
 * @return char* retourne le str copie
 */
char *my_strncpy(char *dest, char const *src, int n);

/**
 * @brief permet de récupérer le début du str où se trouve le mot
 * rechercher
 * @param str le str à parcourir
 * @param to_find le mot à chercher dans le str
 * @return char* retourne le pointeur vers la lettre du mot rechercher
 */
char *my_strstr(char *str, char const *to_find);

/**
 * @brief permet de mettre tout les caractères en majuscules
 * @param str le str à modifier
 * @return char* renvoie le str modife
 */
char *my_strupcase(char *str);

/**
 * @brief permet d'inverer 2 entier entre eux
 * @param a 1er enier
 * @param b 2è entier
 */
void my_swap(int *a, int *b);

/**
 * @brief permet de récuperer la position de la valeur la plus petite dans
 * la liste
 * @param this position
 * @param array la list d'entier à parcourir
 * @param size la taille de la liste
 * @return int retourne le plus petit élément de la liste
 */
int is_smaller(int this, int *array, int size);

/**
 * @brief permet de récuperer la racine du nombre
 * @param start il faut mettre 1
 * @param nb le nombre à tester
 * @return int retourne la racine
 */
int my_sqrt(int start, int nb);

/**
 * @brief permet de récuperer le nombre premier
 * @param i il faut mettre 1;
 * @param nb nombre à tester
 * @return int
 */
int search(int i, int nb);

/**
 * @brief permet d'afficher la liste de mots
 * @param tab la liste à parcourir
 * @return int
 */
int my_show_word_array(char **tab);

/**
 * @brief permet de split chaque mot de la phase
 * @param str la chaine à split
 * @return char**
 */
char **my_str_to_word_array(const char *str);

/**
 * @brief permet de dupliquer un str
 * @param src le str à dupliquer
 * @return char* retourne le str dupliquée
 */
char *my_strdup(char const *src);

/**
 * @brief permet de vérifier si le caractère est en minuscule
 * @param args le caractère à tester
 * @return int 0 | 1 si c'est vrai
 */
int my_isletter_islow(char args);

/**
 * @brief permet de vérifier si le caractère est en majuscule
 * @param args le caractère à tester
 * @return int 0 | 1 si c'est vrai
 */
int my_isletter_isupper(char args);

/**
 * @brief permet de vérifier si le caractère est une lettre
 * @param args le caractère à tester
 * @return int 0 | 1 si c'est vrai
 */
int my_isletter(char args);

/**
 * @brief permet de récuperer la taille de l'entier
 * @param value l'entier à parcourir
 * @return int renvoie la taille de l'entier
 */
int my_intlen(int value);

/**
 * @brief permet de vérifier si le caractère est un entier
 * @param i le caractère à tester
 * @return int 0 | 1 si c'est vrai
 */
int my_isnum(char i);

/**
 * @brief permet d'afficher un float dans le terminal
 * @param number le float à afficher
 * @param ndigit le nombre d'entier à afficher
 */
void my_put_float(double number, int ndigit);

/**
 * @brief permet de changer de place 2 str entre eux
 * @param a 1e str
 * @param b 2e str
 */
void my_swap_str(char **a, char **b);

/**
 * @brief permet de convertir un int en str
 * @param value la valeur à convertir
 * @param buffer le buffeur qui contiendra la valeur convertie
 */
void my_itoa(int value, char *buffer);

/**
 * @brief permet de changer de base l'entier, passer de base 2 à base 10, ect
 * @param nbr le nombre
 * @param base la base final du nombre
 * @return int 0 | 1 si ça à fonctionner
 */
int my_putnbr_base_long(long nbr, char *base);

/**
 * @brief permet d'afficher toutes les valeurs dans le terminal
 * @param format le type de format %s, ect
 * @param ... les valeurs qui vont remplacer les format
 * @return int
 */
int my_printf(const char *format, ...);

/**
 * @brief permet de vérifier le caractère se trouve dans le str
 * @param str le str à parcourir
 * @param ch le caractère à chercher dans le str
 * @return int 0 | 1 s'il se trouve dans le str
 */
int ch_into_str(char *str, char ch);

/**
 * @brief permet de convertir une chaine de caractères qui contient
 * un entier en int
 * @param str la chaine à convertir
 * @return int l'entier convertie
 */
int my_atoi(char const *str);

/**
 * @brief permet de changer de place 2 caractères entre eux
 * @param a 1e caractère
 * @param b 2e caractère
 */
void my_swap_char(char *a, char *b);

/**
 * @brief permet de libérer l'espace de la liste de str en parcourant la
 * liste
 * @param word_array la liste à parcourir
 * @return int retourne 1 une fois les tâche réaliser
 */
int free_strarray(char **word_array);

/**
 * @brief permet de split un str à partir d'un délimiteur
 * @param str la chaine à split
 * @param delim le caractère qui permettra de split
 * @return char** retourne une liste qui contient le str split
 */
char **my_strtok(const char *str, cc delim);

/**
 * @brief permet de récuperer la taille de la liste
 * @param src la liste à parcourir
 * @return int la taille de la liste
 */
int str_arraylen(char **src);

/**
 * @brief permet de copier la liste
 * @param dest la destination où se trouvera la liste copie
 * @param src la liste qui sera copie
 * @return char** retourne la liste copie
 */
char **str_arraycpy(char **dest, char **src);

/**
 * @brief permet de dupliquer la liste
 * @param src duplique la liste
 * @return char** retourne la liste dupliquer
 */
char **str_arraydup(char **src);

/**
 * @brief permet d'allouer de l'espace mémoire pour le str tout en
 * le remplissant du caractère choisi
 * @param str la chaine à allouer
 * @param ch le caractère de remplissage
 * @param length la taille à allouer
 * @return char* retourne la chaine allouer
 */
char *my_memset(char *str, char ch, int length);

/**
 * @brief permet de récuperer l'entier dans le float
 * @param fl le float
 * @return int
 */
int get_int(float fl);
void my_nitoa(int value, char *buffer);
int power(int n, int p);
char *my_gcvt(double number, int ndigit, char *buf);
int is_alphanumeric(char args);
int my_isspace(char arg);
int my_str_is_alphanumeric(char *str);
#endif
