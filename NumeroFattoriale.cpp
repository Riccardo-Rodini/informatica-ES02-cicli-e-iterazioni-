/** ****************************************************************************************
* \mainpage <divisori.c>
*
* @brief <Si scriva un programma che calcoli il fattoriale di un numero intero N dato dalla tastiera. 
Si ricordi che il fattoriale di un numero n (simbolo n!) viene calcolato con la seguente formula: n! = n ·(n–1)·(n–2)· ... ·2 ·1.>
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
    int n, i;
    printf("inserisci un numero");
    scanf("%d",&n);
    
    if(n>0)
       for(i=n-1;i>0;i--) {
       n*=i;
       }
       
       printf("il fattoriale del numero inserito è %d",n);
       }
       else{
            printf("non è possibile calcolare il fattoriale di un numero negativo");
            }   
}
