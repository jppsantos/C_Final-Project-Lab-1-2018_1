#include <stdio.h>
#include <stdlib.h>

//Data
typedef struct {
	int dia, mes, ano;
} Data;

//Tempo
typedef struct {
	int min, seg , miliseg;
}Tempo;

//Piloto
typedef struct {
	int codigo;
	char nome[TAM_NOME_PILOTO];
	char sigla[TAM_SIGLA];
	Data dataNascimento;
	char sexo;
	char paisOrigem[TAM_NOME_PAIS];
}Piloto;

//Equipe
typedef struct {
	char nome[TAM_NOME_EQUIPE];
	char sigla[TAM_SIGLA];
	char paisOrigem[TAM_NOME_PAIS];
}Equipe;

//Circuito
typedef struct {
	int codigo;
	char nome[TAM_NOME_CIRCUITO];
	char paisOrigem[TAM_NOME_PAIS];
	int kmCircuito;
	Tempo menorTempo;
	int codPilotoMenorTempo;
}Circuito;


//Melhor Volta
typedef struct {
	int codPiloto, codCircuito;
	Equipe equipeDoPiloto;
	Data data;
	Tempo tempo;
}MelhorVolta;