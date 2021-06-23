/*
*Rekurencja realizuje najpierw wszystko co jest przed ponownym wywołaniem funkcji.
*Następnie, gdy zostanie spełniony warunek if (warunek wyjścia jest obowiązkowy),
*zostaje realizowana pozostała część kodu znajdująca się poniżej wywołania funkcji,
*działa ona aż do momentu powrotu do pierwszego argumentu funkcji. 
*
*
*/



/*
#include <stdio.h>
#include <stdlib.h>

void gora_i_dol(int);

int main(void)
{
    gora_i_dol(1);
    return 0;
}



void gora_i_dol(int n)
{
    printf("Poziom:%d: adres zmiennej n: %p\n",n,&n);
    printf("Rekurencja w prawo.\n");

    if(n<7)
    {
        printf("Rekurencja w PRAWO.\n");
        gora_i_dol(n+1);
        printf("Rekurencja w LEWO.\n");
        

    }

    printf("POZIOM:%d: adres zmiennej n: %p\n",n,&n);
    printf("Rekurencja w lewo.\n");

}
*/

//###############################################################
//###############################################################
//###############################################################
//###############################################################


/*
*Ciąg Fibonaciego oparty na rekurencji.
*
*
*/

#include <stdio.h>
#include <stdlib.h>

unsigned long Fibonaci(int n);

int main(void)
{
    int liczba=0;
    int liczba_ciagu=0;

    printf("Podaj liczbe ciagu Fibonaciego.\n");

    while((scanf("%d",&liczba))==1)
    {
        liczba_ciagu=Fibonaci(liczba);
        printf("%d liczba ciagu Fibonaciego to %d.\n\n",liczba,liczba_ciagu);
        printf("Podaj liczbe ciagu Fibonaciego.\n");
    }
    return 0;
}



unsigned long Fibonaci(int n)
{
    if(n>2)
    {
        return Fibonaci(n-1)+Fibonaci(n-2);
    }
    else
    {
        return 1;
    } 
}