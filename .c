#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Este programa gera 10 cartelas de bingo com 24 números de 1 a 99, e através de sorteio de números a cartela vencedora é decidida.

int main() {
	
	srand(time(NULL));
	//As 10 cartelas serão armazenadas em 10 vetores de 24 posições.
	int car1[24], car2[24], car3[24], car4[24], car5[24], car6[24], car7[24], car8[24], car9[24], car10[24];
	int a[24], b[24], c, i, j, k, x, z = 1;
	
	//Este for gera 24 números de 1 a 99 que não se repetem, 10 vezes, atribuindo cada conjunto de 24 números a uma cartela.
    for (k = 0; k < 10; k++) {
		do {
		for (i = 0; i < 24; i++) {
			if (i == 0)
			c = 0;
			if (c > 24 || i == 0) {
			for (x = 0; x < 24; x++) {
 			a[x] = (rand() % 99) + 1;
			b[x] = a[x]; }
			}
		
		for (j = 0; j < 24; j++) {
			if (a[i] == b[j])
			c++; }
			//A função c assegura que nenhuma cartela receba números repetidos.
	}
	//Aqui se atribue cada conjunto a uma cartela, de modo que a função k controla as cartelas que receberão os valores.
	if (c == 24) {
		if (k == 0)
		for (x = 0; x < 24; x++)
		car1[x] = a[x];
		
		if (k == 1)
		for (x = 0; x < 24; x++)
		car2[x] = a[x];
		
	  	if (k == 2)
		for (x = 0; x < 24; x++)
		car3[x] = a[x];
		
		if (k == 3)
		for (x = 0; x < 24; x++)
		car4[x] = a[x];
		
		if (k == 4)
		for (x = 0; x < 24; x++)
		car5[x] = a[x];
		
		if (k == 5)
		for (x = 0; x < 24; x++)
		car6[x] = a[x];
		
		if (k == 6)
		for (x = 0; x < 24; x++)
		car7[x] = a[x];
		
		if (k == 7)
		for (x = 0; x < 24; x++)
		car8[x] = a[x];
		
		if (k == 8)
		for (x = 0; x < 24; x++)
		car9[x] = a[x];
		
		if (k == 9)
		for (x = 0; x < 24; x++)
		car10[x] = a[x];
	}
    } while (c > 24);
}
    //Neste for serão imprimidas as 10 cartelas, no formato 6 x 4.
    for (i = 0; i < 24; i++) {
    if (i % 4 == 0 && i != 0)
    printf ("\n");
    if (i == 0)
    printf ("A cartela 1:\n");
    printf ("%i\t", car1[i]); }
    printf ("\n\n");

    for (i = 0; i < 24; i++) {
    if (i % 4 == 0 && i != 0)
    printf ("\n");
    if (i == 0)
    printf ("A cartela 2:\n");
    printf ("%i\t", car2[i]); }
    printf ("\n\n");
    
    for (i = 0; i < 24; i++) {
    if (i % 4 == 0 && i != 0)
    printf ("\n");
    if (i == 0)
    printf ("A cartela 3:\n");
    printf ("%i\t", car3[i]); }
    printf ("\n\n");
    
    for (i = 0; i < 24; i++) {
    if (i % 4 == 0 && i != 0)
    printf ("\n");
    if (i == 0)
    printf ("A cartela 4:\n");
    printf ("%i\t", car4[i]); }
    printf ("\n\n");

    for (i = 0; i < 24; i++) {
    if (i % 4 == 0 && i != 0)
    printf ("\n");
    if (i == 0)
    printf ("A cartela 5:\n");
    printf ("%i\t", car5[i]); }
    printf ("\n\n");
    
    for (i = 0; i < 24; i++) {
    if (i % 4 == 0 && i != 0)
    printf ("\n");
    if (i == 0)
    printf ("A cartela 6:\n");
    printf ("%i\t", car6[i]); }
    printf ("\n\n");
    
    for (i = 0; i < 24; i++) {
    if (i % 4 == 0 && i != 0)
    printf ("\n");
    if (i == 0)
    printf ("A cartela 7:\n");
    printf ("%i\t", car7[i]); }
    printf ("\n\n");

    for (i = 0; i < 24; i++) {
    if (i % 4 == 0 && i != 0)
    printf ("\n");
    if (i == 0)
    printf ("A cartela 8:\n");
    printf ("%i\t", car8[i]); }
    printf ("\n\n");
    
    for (i = 0; i < 24; i++) {
    if (i % 4 == 0 && i != 0)
    printf ("\n");
    if (i == 0)
    printf ("A cartela 9:\n");
    printf ("%i\t", car9[i]); }
    printf ("\n\n");
    
    for (i = 0; i < 24; i++) {
    if (i % 4 == 0 && i != 0)
    printf ("\n");
    if (i == 0)
    printf ("A cartela 10:\n");
    printf ("%i\t", car10[i]); }
    printf ("\n\n");
    
    //Variáveis e vetores intrínsecos à decisão da cartela vencedora são incializados.
    int box[99], zeta[10];
    for (i = 0; i < 99; i++) {
    	box[i] = -1;
    	if (i < 10) 
		zeta[i] = 0; }
		
	int bingo, d, posicao, vencedor = 0; 
	k = 0;
    //Neste do-while, números de 1 a 99 serão sorteados na variável bingo e comparados com os números de cada cartela.
    //O vetor box armazena números que já foram sorteados, para evitar repetições.
    do {
    	d = 0;
	    bingo = (rand() % 99 + 1);
      	for (i = 0; i < 99; i++)
	    if (bingo == box[i])
        d++;
        
        if (d == 0) {
        	box[k] = bingo;
         	k++; 
		//A função do vetor zeta é contar quantos números em comum cada cartela tem com os números sorteados.
		//A primeira cartela cuja casa-zeta alcançar 24 é a vencedora.
    		for (z = 0; z < 24; z++) {
    			if (car1[z] == bingo) 
    		    zeta[0]++;
    	    	
    	    	if (car2[z] == bingo) 
    		    zeta[1]++;
    	    	
    	    	if (car3[z] == bingo) 
    		    zeta[2]++;
    	    	
    	    	if (car4[z] == bingo) 
    		    zeta[3]++;
    	    	
    	    	if (car5[z] == bingo) 
    		    zeta[4]++;
    	    	
    	    	if (car6[z] == bingo) 
    		    zeta[5]++;
    	    	
    	    	if (car7[z] == bingo) 
    		    zeta[6]++;
    	    	
    	    	if (car8[z] == bingo) 
    		    zeta[7]++;
    	    	
    	    	if (car9[z] == bingo) 
    		    zeta[8]++;
    	    	
    	    	if (car10[z] == bingo) 
    		    zeta[9]++;	
			}
		
    		for (x = 0; x < 10; x++)
    		if (zeta[x] == 24)
	    	vencedor++;
		}
    } while (vencedor < 1);
    printf ("\n\n\n");
    //A posição da cartela vencedora é determinada.
    for (i = 0; i < 10; i++)
    if (zeta[i] == 24)
    posicao = i + 1;
    
    //Imprimem-se os resultados.
    printf ("SORTEIO COMPLETO:\n\n\n");
    
    j = 0;
    printf ("Os numeros sorteados foram:\n");
    for (i = 0; i < 99; i++) {
    	if (box[i] == -1)
    	break;
    	else {
    	printf ("%i\t", box[i]);
		j++; }
	}
	printf ("\n\n");
	printf ("A quantidade de numeros sorteados foi %i.\n\n", j);
	printf ("A cartela vencedora foi a %i.\n\n\n", posicao);
	
	printf ("SORTEIO NUMERO A NUMERO:\n\n\n");
	
	//As variáveis e os vetores são zerados para a execução da segunda opção.
	k = 0, j = 0, vencedor = 0; posicao = 0;
	for (i = 0; i < 99; i++) {
		box[i] = -1;
		if (i < 10)
			zeta[i] = 0; }
			
	//Neste do-while, números de 1 a 99 são sorteados conforme no anterior, porém o número sorteado é imprimido junto aos pontos de cada cartela.	
	do {
    	d = 0;
	    bingo = (rand() % 99 + 1);
      	for (i = 0; i < 99; i++)
	    if (bingo == box[i])
        d++;
        
        if (d == 0) {
        	box[k] = bingo;
         	k++, j++;
			printf ("Numero sorteado: %i.\n", bingo); 
		 
    		for (z = 0; z < 24; z++) {
    			if (car1[z] == bingo) 
    		    zeta[0]++;
    	    	if (z == 23)
    	    	printf ("Cartela 1 preencheu %i numeros.\n", zeta[0]);
    	    	
    	    	if (car2[z] == bingo) 
    		    zeta[1]++;
    	    	if (z == 23)
    	    	printf ("Cartela 2 preencheu %i numeros.\n", zeta[1]);
    	    	
    	    	if (car3[z] == bingo) 
    		    zeta[2]++;
    	    	if (z == 23)
    	    	printf ("Cartela 3 preencheu %i numeros.\n", zeta[2]);
    	    	
    	    	if (car4[z] == bingo) 
    		    zeta[3]++;
    	    	if (z == 23)
    	    	printf ("Cartela 4 preencheu %i numeros.\n", zeta[3]);
    	    	
    	    	if (car5[z] == bingo) 
    		    zeta[4]++;
    	    	if (z == 23)
    	    	printf ("Cartela 5 preencheu %i numeros.\n", zeta[4]);
    	    	
    	    	if (car6[z] == bingo) 
    		    zeta[5]++;
    	    	if (z == 23)
    	    	printf ("Cartela 6 preencheu %i numeros.\n", zeta[5]);
    	    	
    	    	if (car7[z] == bingo) 
    		    zeta[6]++;
    	    	if (z == 23)
    	    	printf ("Cartela 7 preencheu %i numeros.\n", zeta[6]);
    	    	
    	    	if (car8[z] == bingo) 
    		    zeta[7]++;
    	    	if (z == 23)
    	    	printf ("Cartela 8 preencheu %i numeros.\n", zeta[7]);
    	    	
    	    	if (car9[z] == bingo) 
    		    zeta[8]++;
    	    	if (z == 23)
    	    	printf ("Cartela 9 preencheu %i numeros.\n", zeta[8]);
    	    	
    	    	if (car10[z] == bingo) 
    		    zeta[9]++;
    	    	if (z == 23)
				printf ("Cartela 10 preencheu %i numeros.\n\n", zeta[9]);
			}
		
    		for (x = 0; x < 10; x++)
    		if (zeta[x] == 24)
	    	vencedor++;
	    	
	    	system ("pause");
	    	printf ("\n");
	    }
    } while (vencedor < 1);
    printf ("\n");
    //A posição da cartela vencedora é determinada.
    for (i = 0; i < 10; i++)
    if (zeta[i] == 24)
    posicao = i + 1;
    
    //Imprimem-se os resultados.
    printf ("A quantidade de numeros sorteados foi %i.\n\n", j);
    printf ("A cartela vencedora foi a %i.\n", posicao);

	return 0;
	
}
