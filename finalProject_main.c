/*********************************************************************************
 * Nome: Jo�o Paulo Pereira dos Santos | Matricula: UC17201688                   *
 * Sintese                                                                       *
 * 	Objetivo: Gerenciar os testes que ser�o realizados na pr�xima temporada  *
 * 		  do campeonato mundial de Moto GP.                              *
 * 	Entrada: Op��es do menu, dados cadastrais dos pilotos, equipes, circuitos*
 * 		 e voltas;                                                       *
 * 	Sa�da: Relat�rios correspondentes �s op��es selecionadas.                *
 *********************************************************************************/



int main (void){
	int opcaoMenuPrincipal, opcao, sair=0;
	do{
		opcaoMenuPrincipal = leValidaOpcao();
		switch(opcaoMenuPrincipal){
			case 1: 
				opcao = leValidaOpcao();
				switch(opcao){
					case 1: 
						incluiPiloto();
						break;
					case 2: 
						alteraPiloto();
						break;
					case 3:				
						excluiPiloto();
						break;
				}
				break;
			case 2: 
				opcao = leValidaOpcao();
				switch(opcao){
					case 1: 
						incluiEquipe();
						break;
					case 2:
						excluiEquipe();
						break;
				}
				break;
			case 3: 
				opcao = leValidaOpcao();
				switch(opcao){
					case 1: 
						incluiCircuito();
						break;
					case 2:
						alteraCircuito();
						break;
				}
				break;
			case 4: 
				opcao = leValidaOpcao();
				switch(opcao){
					case 1: 
						incluiMelhorVolta();
						break;
					case 2:
						alteraMelhorVolta();
						break;
					case 3: 
						excluiMelhorVolta();
						break;
				}
				break;
			case 5: 
				opcao = leValidaOpcao();
				switch(opcao){
					case 1: 
						relatorio1();
						break;
					case 2: 
						relatorio2();
						break;
					case 3: 
						relatorio3();
						break;
					case 4: 
						relatorio4();
						break;
					case 5: 
						relatorio5();
						break;
					case 6: 
						relatorio6();
						break;
					case 7: 
						relatorio7();
						break;
					case 8: 
						relatorio8();
						break;
				}
			default: 
				sair = 1;		
		}
	
	}while(!sair);	
	

	return 0;
}
