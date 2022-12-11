#include <stdio.h>
#include <stdlib.h>

/* Ana pagou R$ 500.000,00 por uma casa e revendeu a João por 600.000,00 .

	Escreve um programa (usando funções) que calcule e escreva:
	
	- Os Juros que Ana aplicou nessa venda
	- O lucro em reais, sabendo-se que Ana pagou 22% ao IR a titulo de ganho de capital
	
 */

double JurosDeVenda (double valorPago,double valorRevenda){
	
	return (valorRevenda / valorPago - 1) * 100;
	
}

double JurosIR (double valorPago,double valorRevenda,double taxaIR){
	
	return (valorRevenda - valorPago) * (1 - taxaIR/100);
}



int main(void) {
	
	double valorPago, valorRevenda,lucroAna,lucroIR,taxaIR;
	
	valorPago = 500000.00;
	valorRevenda = 600000.00;
	taxaIR = 22;
	lucroAna = JurosDeVenda(valorPago,valorRevenda);
	lucroIR =  JurosIR(valorPago,valorRevenda,taxaIR);
	
	printf ("A PORCENTAGEM no lucro de ANA foi de: %.0lf\n", lucroAna);
	printf ("O LUCRO de ANA apos o desconto do imposto de renda foi de : R$ %.2lf", lucroIR);
	
	return 0;
}
