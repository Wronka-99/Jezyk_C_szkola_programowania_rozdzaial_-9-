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

/*
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
*/




/*
*   Ćwiczenie pierwsze na koniec rozdziału
*                   #
*                 # #
*                #  #
*                   #
*                   #
*                 # # # 
*/                  

/*
#include <stdio.h>
#include <stdlib.h>

double min(double x, double y);

int main(void)
{
    double liczba =0;
    double liczba_2 = 0;

    printf("Podaj liczby do porównania.\n");

    while(((scanf("%le",&liczba_2))==1)&&((scanf("%le",&liczba))==1))
    {
        liczba=min(liczba,liczba_2);
        printf("Większą liczbą jest: %4.2f.\n\n",liczba);
        printf("Podaj liczby do porównania.\n");
    }


    return 0;
}



double min(double x, double y)
{
    if(x>=y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
*/


/*
*   Ćwiczenie piąte na koniec rozdziału
*               #######
*               #  
*               #
*               ###### 
*                     #
*                     #
*               ###### 
*/ 


/*
#include <stdio.h>
#include <stdlib.h>

void swap(double *x, double *y);  // * oznaczaja, że odwołujemy się do wartości, na które wskazują wskaźniki

int main(void)
{
    double liczba =0;
    double liczba_2 = 0;

    printf("Podaj liczby do zamiany.\n");

    while(((scanf("%le",&liczba_2))==1)&&((scanf("%le",&liczba))==1))
    {
        printf("Liczby przed zamianą: x = %4.2f, y = %4.2f.\n",liczba,liczba_2);
        swap(&liczba,&liczba_2);
        printf("Liczby po zamianie: x = %4.2f, y = %4.2f.\n\n",liczba,liczba_2);
        printf("Podaj liczby do zamiany.\n");
    }


    return 0;
}



void swap (double * x, double * y)   //Argumentami sa adresy pamieci do zmiennych
{
   double  tmp;                         // Tworzymy zmienna pomocniczą

   tmp=*y;                              //do wartości tmp przypisujemy wartosc na którą wskazuje y (* jest to znak dereferencji)
   *y=*x;                               //do wartości wskazywanej przez y przypisujemy wartosc wskazywaną przez x
   *x=tmp;                              //do wartości wskazywanej przez x przypisujemy wartość tmp
}
*/




/*
*   Ćwiczenie szóste na koniec rozdziału
*                #####
*               #     #
*               #
*               ###### 
*               #     #
*               #     #
*                ##### 
*/ 



#include <stdio.h>
#include <stdlib.h>

void zamien(double * x, double * y, double * z);  // * oznaczaja, że odwołujemy się do wartości, na które wskazują wskaźniki

int main(void)
{
    double liczba =0;
    double liczba_2 = 0;
    double liczba_3 = 0;


    printf("Podaj liczby do zamiany.\n");

    while(((scanf("%le",&liczba))==1)&&((scanf("%le",&liczba_2))==1)&&((scanf("%le",&liczba_3))==1))
    {
        printf("Liczby przed zamianą: x = %4.2f, y = %4.2f, z = %4.2f.\n",liczba,liczba_2,liczba_3);
        zamien(&liczba,&liczba_2,&liczba_3);
        printf("Liczby po zamianie: x = %4.2f, y = %4.2f, z = %4.2f.\n\n",liczba,liczba_2,liczba_3);
        printf("Podaj liczby do zamiany.\n");
    }


    return 0;
}




void zamien(double * x, double * y, double * z)  // * oznaczaja, że odwołujemy się do wartości, na które wskazują wskaźniki
{
   double  tmp;                         // Tworzymy zmienna pomocniczą

    if(*x-*y>0)
    {
        tmp=*y;
        *y=*x;
        *x=tmp;
    }

    if(*y-*z>0)
    {
        tmp=*z;                     //do wartości tmp przypisujemy wartosc na którą wskazuje y (* jest to znak dereferencji)
        *z=*x;                      //do wartości wskazywanej przez y przypisujemy wartosc wskazywaną przez x
        *x=tmp;                     //do wartości wskazywanej przez x przypisujemy wartość tmp
    }


        if(*z-*y<0)
    {
        tmp=*z;                     //do wartości tmp przypisujemy wartosc na którą wskazuje y (* jest to znak dereferencji)
        *z=*y;                      //do wartości wskazywanej przez y przypisujemy wartosc wskazywaną przez x
        *y=tmp;                     //do wartości wskazywanej przez x przypisujemy wartość tmp
    } 

     if(*z-*x<0)
    {
        tmp=*z;
        *z=*x;
        *x=tmp;
    }                         
                                                              
}


