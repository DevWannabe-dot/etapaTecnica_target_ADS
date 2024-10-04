// Exercicio 03, execute somente o main.cpp

#pragma once
#ifndef __3_h__
#define __3_h__

/* Inclusões */
#include <json/json.h>  
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <limits>

/* Constantes */

/* Tipos */
typedef struct dia_valor_s {
    unsigned int dia;
    float valor;
} dia_valor_t;

/* Funções */
float get_min_valor(const std::vector<dia_valor_t>& dados)
{
    float valor_min = std::numeric_limits<float>::max();

    for(const auto& entrada : dados){
        valor_min = (entrada.valor < valor_min ? entrada.valor : valor_min);
    }

    return valor_min;
}

float get_max_valor(const std::vector<dia_valor_t>& dados)
{
    float valor_max = std::numeric_limits<float>::lowest();

    for(const auto& entrada : dados){
        valor_max = (entrada.valor > valor_max ? entrada.valor : valor_max);
    }   

    return valor_max;
}

int get_acimaMedia(const std::vector<dia_valor_t>& dados)
{
    float media = 0.0f, soma = 0.0f;
    int n = 0;

    for(const auto& entrada : dados){
        n++;
        soma += entrada.valor;
    }

    media = soma/n;
    int dias_acima_media = 0;

    for(const auto& entrada : dados){
        if(entrada.valor >= media) dias_acima_media++;
    }

    return dias_acima_media;
}

void ex03()
{
    std::vector<dia_valor_t> dados;
    std::ifstream dados_arq("dados/dados.json", std::ifstream::binary);

    if(!dados_arq.is_open()){
        std::cerr << "<Erro ao abrir o arquivo json.>" << std::endl;
        return;
    }

    // Leitura
    Json::Value root;
    Json::CharReaderBuilder builder;
    std::string errs;
    if (!Json::parseFromStream(builder, dados_arq, &root, &errs)) {
        std::cerr << "Erro ao ler o JSON: " << errs << std::endl;
        return;
    }
    for(const auto& item : root){
        dia_valor_t dado;

        dado.dia = item["dia"].asUInt();
        dado.valor = item["valor"].asFloat();

        dados.push_back(dado);
    }

    // Escrita
    std::cout << "\n\tMenor valor de faturamento do mes: " << get_min_valor(dados) << std::endl;
    std::cout << "\tMaior valor de faturamento do mes: " << std::fixed << std::setprecision(4) << get_max_valor(dados) << std::endl;
    std::cout << "\tNumero de dias acima da media mensal: " << get_acimaMedia(dados) << std::endl;
}
#endif