/** ****************************************************************************************
* \mainpage <divisori.c>
*
* @brief <Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori>
* <specifiche del progetto>
* <specifiche del collaudo>
* 
* @author <rodini riccardo>
* @date <30/11/22> 
* @version 1.0 <data> Versione iniziale
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/
#include<stdio.h>
int main()
{
	int num,cont;
	
	printf("insserici un numero:\t");
	scanf("%d",&num);
	
	for(cont=1; cont<num; cont++)
	if(0==num%cont)
	{
	   printf("\n%d",cont);	
	}
	return 0;

}
