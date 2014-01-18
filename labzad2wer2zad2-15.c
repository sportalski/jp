/*
#include <stdio.h>

int main(){
int tab[]={1,3,7,8,9}, i;

for(i=4; i>=0; i--){
  printf("%d \n", tab[i]);
}

return 0;
} */

3.
/*
#include <stdio.h>
#include <math.h>

int main(){
int tab[5];
int i;

for(i=0; i<=4; i++){
  tab[i] = pow(2, i);
  printf("tab[%d] = %d \n", i, tab[i]);
}

return 0;
} */
4.
#include <stdio.h>

int main(){
int tab[5];
int i;

for(i=0; i<=4; i++){
  printf("Podaj wartość %d elementu tablicy ", i+1);
  scanf("%d", &tab[i]);
}

for(i=0; i<=4; i++){
  printf("tab[%d] = %d \n", i, tab[i]);
}

return 0;
}


5.
#include <stdio.h>

int main(){
int tab[5];
int i;

for(i=0; i<=4; i++){
  printf("Podaj wartość %d elementu tablicy ", i+1);
  scanf("%d", &tab[i]);
}

for(i=4; i>=0; i--){
  printf("tab[%d] = %d \n", i, tab[i]);
}

return 0;
}

6.

#include <stdio.h>

int main(){
int tab[5];
int i, suma = 0;

for(i=0; i<=4; i++){
  printf("Podaj wartość %d elementu tablicy ", i+1);
  scanf("%d", &tab[i]);
}

for(i=0; i<=4; i++){
  suma = suma + tab[i];
}

printf("Suma elementów w tablicy wynosi: %d \n", suma);

return 0;
}

7.

#include <stdio.h>

int main(){
int tab[5];
int i, parzyste = 0;

for(i=0; i<=4; i++){
  printf("Podaj wartość %d elementu tablicy ", i+1);
  scanf("%d", &tab[i]);
}

for(i=0; i<=4; i++){
  if(tab[i] % 2 == 0){
    parzyste++;
  }
}

printf("Liczba parzystych elementów w tablicy wynosi: %d \n", parzyste);

return 0;
}

8.

#include <stdio.h>

int main(){
int tab[5];
int i, tmp;

for(i=0; i<=4; i++){
  printf("Podaj wartość %d elementu tablicy ", i+1);
  scanf("%d", &tab[i]);
}

tmp = tab[4];
tab[4] = tab[0];
tab[0] = tmp;

for(i=0; i<=4; i++){
 printf("tab[%d] = %d \n", i, tab[i]);
}

return 0;
}

9.

#include <stdio.h>

int main(){
int tab1[5], tab2[5];
int i, tmp;

for(i=0; i<=4; i++){
  printf("Podaj wartość %d elementu tab1 ", i+1);
  scanf("%d", &tab1[i]);
}

for(i=0; i<=4; i++){
  tab2[i] = tab1[i];
  printf("tab2[%d] = %d \n", i, tab2[i]);
}

return 0;
}

10.

#include <stdio.h>

int main(){
int tab1[5], tab2[5];
int i, tmp;

for(i=0; i<=4; i++){
  printf("Podaj wartość %d elementu tab1 ", i+1);
  scanf("%d", &tab1[i]);
}

for(i=0; i<=4; i++){
  tab2[i] = tab1[i]*2;
  printf("tab2[%d] = %d \n", i, tab2[i]);
}

return 0;
}

11.

#include <stdio.h>

int main(){

int tab1[5], tab2[10];
int i, tmp;

for(i=0; i<=4; i++){
  printf("Podaj wartość %d elementu tab1 ", i+1);
  scanf("%d", &tab1[i]);
}

for(i=0; i<=4; i++){
  tab2[i] = tab1[i];
  tab2[i+5] = tab1[i];
}

for(i=0; i<=9; i++){
  printf("Element nr. %d z tablicy tab2: %d \n", i+1, tab2[i]);
}

return 0;
}

12.

#include <stdio.h>

int main(){

int tab[5];
int i, max;

for(i=0; i<=4; i++){
  printf("Podaj wartość %d elementu tab1 ", i+1);
  scanf("%d", &tab[i]);
}

max=tab[0];
for(i=1; i<=4; i++){
  if(tab[i] > max){
    max = tab[i];
  }
}

printf("Najwiekszy element z tablicy: %d \n", max);


return 0;
}

13.

#include <stdio.h>

int main(){

int tab[5];
int i, min;

for(i=0; i<=4; i++){
  printf("Podaj wartość %d elementu tab1 ", i+1);
  scanf("%d", &tab[i]);
}

min=tab[0];
for(i=1; i<=4; i++){
  if(tab[i] < min){
    min = tab[i];
  }
}

printf("Najmniejszy element z tablicy: %d \n", min);


return 0;
}

14.

#include <stdio.h>

int main(){

int tab1[5], tab2[5];
int i, i2, wartosc_min, index_min;
int wykluczone[5]={0, 0, 0, 0, 0};        

//zczytywanie z klawiatury
for(i = 0; i <= 4; i++){
  printf("Podaj wartość %d elementu tab1 ", i+1);
  scanf("%d", &tab1[i]);
}

//szukanie najmniejszej i przypisywanie do tab2, potem szukanie drugiej od końca najmniejszej,
//ignorując już poprzednio znaleziono. Tablica "wykluczone" wskazuje które pola powinny zostać pominięte
for(i = 0; i <= 4; i++){
        wartosc_min = 100;
        for(i2 = 0; i2 <= 4; i2++){
                if(wykluczone[i2] == 0){
                        if(tab1[i2] < wartosc_min){
                            wartosc_min = tab1[i2];
                            index_min = i2;
                    }
            }
        }
        tab2[i] = tab1[index_min];
        wykluczone[index_min] = 1;
}

//wypisywanie obydwóch tablic
printf("tab1:\n");
for(i = 0; i <= 4; i++){
        printf("%d\n", tab1[i]);
}

printf("\ntab2:\n");
for(i = 0; i <= 4; i++){
        printf("%d\n", tab2[i]);
}

return 0;
}

15.

#include <stdio.h>

int main(){

int tab1[5], tab2[5];
int i, i2, wartosc_max, index_max;
int wykluczone[5]={0, 0, 0, 0, 0};        

//zczytywanie z klawiatury
for(i = 0; i <= 4; i++){
  printf("Podaj wartość %d elementu tab1 ", i+1);
  scanf("%d", &tab1[i]);
}

//szukanie największej i przypisywanie do tab2, potem szukanie drugiej od końca największej,
//ignorując już poprzednio znalezione. Tablica "wykluczone" wskazuje które pola powinny zostać pominięte
for(i = 0; i <= 4; i++){
        wartosc_max = 0;
        for(i2 = 0; i2 <= 4; i2++){
                if(wykluczone[i2] == 0){
                        if(tab1[i2] > wartosc_max){
                            wartosc_max = tab1[i2];
                            index_max = i2;
                    }
            }
        }
        tab2[i] = tab1[index_max];
        wykluczone[index_max] = 1;
}

//wypisywanie obydwóch tablic
printf("tab1:\n");
for(i = 0; i <= 4; i++){
        printf("%d\n", tab1[i]);
}

printf("\ntab2:\n");
for(i = 0; i <= 4; i++){
        printf("%d\n", tab2[i]);
}

return 0;
}
