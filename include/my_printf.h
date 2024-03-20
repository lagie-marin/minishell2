/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** my_printf.h
*/

#include "./my.h"
#ifndef MY_PRINTF
    #define MY_PRINTF

int isflags(char ch);
int precision(const char **format);
int width(const char **format);
void print_long(int length, long value);
char *flags(const char **format);
int print_address(long long n);
char *my_getnbr_base(int nbr, char const *base);
void sign(double *value, char **p);
void integer_part(double *value, char **p);
void precisions(double *value, char **p, int precision, char *buffer_end);
void print_longlong(long long value);

typedef int priority_f;
typedef struct format_s format_t;

extern priority_f priority[256];
struct format_s {
    char *flags;
    int width;
    int precision;
    char specifier;
};

typedef int (*flags_f)(format_t *list, char flags, char flags2, ...);
extern flags_f flags_e[256];
int print_num(format_t *list, va_list ap);
int print_char(format_t *list, va_list ap);
int print_float(format_t *list, double value);
int print_scientific(format_t *list, va_list ap);
int print_hexa(va_list ap, char specifier);
int print_s(format_t *list, va_list ap);
#endif
