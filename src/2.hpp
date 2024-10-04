// Exercicio 02, execute somente o main.cpp

#pragma once
#ifndef __2_h__
#define __2_h__

/* Inclusões */
#include <stdio.h>

/* Constantes */
#define VERDADEIRO	(1 == 1)
#define FALSO		(!VERDADEIRO)

/* Funções */
int NNumeroFibonacci(int n)
{
	if (n == 0) return 0;			// A posição 1 é 0
	if (n == 1 || n == 2) return 1; // As posições 2 e 3 da sequência são 1
	
	return NNumeroFibonacci(n-2) + NNumeroFibonacci(n-1);
	// a_n = a_(n-2) + a_(n-1)
}

int ex02()
{
	int n;

	printf("Insira o numero a ser conferido: ");
	scanf("%d", &n);

	int i = 0;
	while(NNumeroFibonacci(i) <= n){
		if(NNumeroFibonacci(i) == n) return VERDADEIRO;
		i++;
	}
	
	return FALSO;
}

#endif