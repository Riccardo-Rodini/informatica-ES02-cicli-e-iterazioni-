/** ****************************************************************************************
* \mainpage <divisori.c>
*
* @brief <Si scriva un programma per calcolare la media aritmetica di una serie di numeri inseriti da tastiera. 
L’introduzione del valore 0 indica il termine del caricamento dei dati.>
* <specifiche del progetto>
* <specifiche del collaudo>
* 
* @author <rodini riccardo>
* @date <4/11/22> 
* @version 1.0 <data> Versione iniziale
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/
#include<stdio.h>                        //librerie
int main()
{
    printf("Esercizio C Rodini Riccardo");
    int n, c=0, somma=0;
    float media=0;
    
    do
    {
          printf("inserisci un numero");
          scanf("%d",&n);
          
          media+ =n;
          if(n!=0)
          c++
    }while(n!=0)
    media/=c;
    printf("la media dei voti è %.2f");
}
