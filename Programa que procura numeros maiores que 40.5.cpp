#include <stdio.h>
#include <stdlib.h>

/*atividade 2_questão 3 Codigo criado no dia 06/05/2020*/

main()<%
	int numbT=0,numM=0;
	float num;
	do{
		printf("Digite um numero real: ");
			scanf("%f",&num);
		
		if( num >= 10 and num <= 20 )
			numbT++;
			
			if(num > 40.5)
				numM++;
			
	}while(num!=0);
	printf("Total de numeros entre 10 e 20 sao: %d",numbT);
	printf("\n Total de numeros maiores que 40.5 e :%d",numM);
	
%>
