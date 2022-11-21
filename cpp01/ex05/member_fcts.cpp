/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   member_fcts.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:00:45 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/20 21:00:47 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  /* Autorise l'emploi de scanf et de printf. */

/* Définit plusieurs fonctions travaillant sur des entiers : */

int somme(int i, int j)
{
    return i+j;
}

int multiplication(int i, int j)
{
    return i*j;
}

int quotient(int i, int j)
{
    return i/j;
}

int modulo(int i, int j)
{
    return i%j;
}

typedef int (*fptr)(int, int);
fptr ftab[4];

int main(void)
{
    int i,j,n;
    ftab[0]=&somme;          /* Initialise le tableau de pointeur */
    ftab[1]=&multiplication; /* de fonctions. */
    ftab[2]=&quotient;
    ftab[3]=&modulo;
    printf("Entrez le premier entier : ");
    scanf("%u",&i);          /* Demande les deux entiers i et j. */
    printf("\nEntrez le deuxième entier : ");
    scanf("%u",&j);
    printf("\nEntrez la fonction : ");
    scanf("%u",&n);          /* Demande la fonction à appeler. */
    if (n < 4 && n >= 0)
        printf("\nRésultat : %u.\n", (*(ftab[n]))(i,j) );
    else
        printf("\nMauvais numéro de fonction.\n");
    return 0;
}