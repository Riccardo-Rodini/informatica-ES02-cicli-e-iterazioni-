/** ****************************************************************************************
* \mainpage <divisori.c>
*
* @brief <Scrivere un programma che stampi tutti i numeri primi compresi tra 1 e 100. Un numero � primo quando ha come divisore uno e s� stesso. 
Quindi � primo ciascun numero naturale maggiore di 1 che sia divisibile solamente per 1 e per s� stesso>
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
    int i1, i2, c=1;
    for(i1=2;i1<101;i1++)  {
    
        for(i2=2;i2<i1;i2++)  {
        
            if(i1%i2==0)
            c=0;
        
        }
        if(c)
        printf("%d � un numero primo",i1);
        c=1;
        
    }
}
