// Exercicio 05, execute somente o main.cpp

#pragma once
#ifndef __5__h__
#define __5__h__

/* Inclusões */
#include <iostream>
#include <cstdlib>
#include <string>

/* Funções */
void ex05(std::string str)
{
    long len = str.length();    // rechar *__str = (char*)calloc(strlen(str), sizeof(char));duz a complexidade de tempo dos loops de O(n + O_{strlen}(n)) para O(n), evitando chamadas repetitivas de strlen()
    std::string __str = str;

    for(int i = 0; i < len; i++)
    {
        __str[i] = str[len-(i+1)];  // (i+1) pula o lugar do \0
    }

    std::cout << "\n\t<" << str << "> -> <" << __str << ">\t";
}

#endif