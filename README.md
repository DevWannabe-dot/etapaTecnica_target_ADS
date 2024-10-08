# desafio_target
## Instruções para build
### Windows
`$ g++ -ljsoncpp main.cpp -omain`<br>
`$ main.exe`<br>
### Linux/Unix
`$ g++ -ljsoncpp main.cpp -omain`<br>
`$ ./main`<br>
<hr>
1) Observe o trecho de código abaixo: <br><br>

```
 	int INDICE = 13, SOMA = 0, K = 0; 

 	enquanto K < INDICE faça 

	{ 

		K = K + 1; 

		SOMA = SOMA + K; 

	} 

 	imprimir(SOMA); 
```
Ao final do processamento, qual será o valor da variável SOMA?<br>
&nbsp;&nbsp;&nbsp;&nbsp;**91.**
<br>
<br>
2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

### [Código: Fibonacci](src/2.hpp)
<br>
3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:

- O menor valor de faturamento ocorrido em um dia do mês;
- O maior valor de faturamento ocorrido em um dia do mês;
- Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

#### IMPORTANTE:
a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal;<br>
b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média;

### [Código: Faturamento diário por json](src/3.hpp)
<br>
4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

- SP – R$67.836,43 
- RJ – R$36.678,66 
- MG – R$29.229,88 
- ES – R$27.165,48 
- Outros – R$19.849,53 

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora. 
### [Código: Percentual estadual no faturamento mensal](src/4.hpp)
<br>
5) Escreva um programa que inverta os caracteres de um string.

### [Código: Inversor de Strings](src/5.hpp)
