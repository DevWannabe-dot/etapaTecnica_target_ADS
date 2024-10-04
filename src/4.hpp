// Exercicio 04, execute somente o main.cpp

#pragma once
#ifndef __4_h__
#define __4_h__

/* Inclusões */
#include <iostream>

/* Constantes */

/* Funções */
void ex04(float SP, float RJ, float MG, float ES, float outros){
    float total = (SP + RJ + MG + ES + outros);

    std::cout << std::setprecision(2) <<
    "\n\tSP - " << 100*(SP/total)<< "%" << std::endl <<
    "\tRJ - " << 100*(RJ/total)<< "%" << std::endl <<
    "\tMG - " << 100*(MG/total)<< "%" << std::endl <<
    "\tES - " << 100*(ES/total)<< "%" << std::endl <<
    "\tOutros - " << 100*(outros/total)<< "%" << std::endl;

}

#endif