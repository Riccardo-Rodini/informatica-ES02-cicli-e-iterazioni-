/** ****************************************************************************************
* \mainpage <divisori.c>
*
* @brief <Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15>
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
    int a,b;
    printf("Esercizio B Riccardo Rodini");
    
    for(a=1; a<8; a++)
        
        for(b=1; b<15; b++)
             
             if(a+b==15)
               printf("%d e %d",a,b);
}
