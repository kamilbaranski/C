//Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010.


#include <stdio.h>
int main() {
    int  x=2, wynik = 2;
    while (wynik<=128) {
         wynik=wynik*x;
        printf("%d\n", wynik);
        
        
    }
   
    return 0;
}
