/**
 * @file    main.cpp
 * @brief   Arquivo mestre com as questões do desafio Target Sistemas
 * @author  Pedro H. Oliveira
 * @date    2024-10-01
*/

/* Inclusões */
    // Bibliotecas
#include <iostream>
#include <string>
    // Exercícios
#include "src/2.hpp"
#include "src/3.hpp"
#include "src/4.hpp"
#include "src/5.hpp"
using namespace std;
/* Constantes */
#define SUCESSO     (0)

/* Tipos */

/* Funções */
int main(int argc, char * argv[])
{
    string str("subi no onibus");

    cout << "\n1) \t";  printf("91");
    cout << "\n2) \t";  printf("\t\tO numero inserido%s pertence a sequencia de Fibonacci.", (ex02() ? "" : " nao"));
    cout << "\n3) \t";  ex03();
    cout << "\n4) \t";  ex04(67836.43, 36678.66, 29229.88, 27165.48, 19849.53);
    cout << "\n5) \t";  ex05(str);
    puts("");

    // Se chegou até aqui, tudo deu certo
    return SUCESSO;
}