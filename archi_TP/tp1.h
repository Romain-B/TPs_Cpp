#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float euro2franc(float e);

float franc2euro(float f);

float ask();

void show(float cval, char u);

void start();

void dates();

void lendemain(int jj, int mm, int aaaa);

bool verif_date(int jj, int mm);

void tableaux();

void pr_normal(int tab[], int len);

void pr_inverse(int tab[], int len);

void pr_1sur2(int tab[], int len);

int sum(int tab[], int len);

void tracking();

int nb_exec();
