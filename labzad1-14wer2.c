1.

#include <stdio.h>

int main()
{
   int liczba;

   printf("Podaj liczbe calkowita: ");
   scanf("%d", &liczba);

   if (liczba > 5){
     printf("Liczba %d jest wieksza od 5 \n", liczba);
   }
   else{
     printf("Liczba %d nie jest wieksza od 5 \n", liczba);
   }

   return 0;
}

2.

#include <stdio.h>

int main()
{
   int liczba;

   printf("Podaj liczbe calkowita: ");
   scanf("%d", &liczba);

   if (liczba > 0){
     printf("Liczba %d jest dodatnia \n", liczba);
   }
   else{
     printf("Liczba %d jest ujemna \n", liczba);
   }

   return 0;
}

3.

#include <stdio.h>

int main()
{
  int liczba;

  printf("Podaj liczbe calkowita: ");
  scanf("%d", &liczba);

  
  if (liczba % 2){ //zwraca reszte 1 jesli nieparzysta, 1 == true
    printf("Liczba %d jest nieparzysta \n", liczba);
  }
  else{ //brak reszty, czyli 0 == false
    printf("Liczba %d jest parzysta \n", liczba);
  }

  return 0;
}

4.

#include <stdio.h>

int main()
{
  int liczba1, liczba2;

  printf("Podaj pierwsza liczbe: ");
  scanf("%d", &liczba1);
  printf("Podaj druga liczbe: ");
  scanf("%d", &liczba2);
  if (liczba1 == liczba2){
    printf("Liczby %d i %d sa rowne \n", liczba1, liczba2);
  }
  else{
    printf("Liczby %d i %d nie sa rowne \n", liczba1, liczba2);
  }

  return 0;
}

5.

#include <stdio.h>

int main()
{
  int liczba1, liczba2;

  printf("Podaj pierwsza liczbe: ");
  scanf("%d", &liczba1);
  printf("Podaj druga liczbe: ");
  scanf("%d", &liczba2);

  if (liczba1 > liczba2){
    printf("Liczba %d jest wieksza od %d \n", liczba1, liczba2);
  }
  else if (liczba2 > liczba1){
    printf("Liczba %d jest wieksza od %d \n", liczba2, liczba1);
  }
  else{
    printf("Liczby %d i %d sa rowne", liczba1, liczba2);
  }

  return 0;
}

6.
#include <stdio.h>

int main()
{
  int suma, licznik, start, stop;
  suma = 0;
  start = 1;
  stop = 20;

  for(licznik = start; licznik<=stop; licznik++){
    suma = suma+licznik;
  }
  printf("Suma liczb naturalnych od %d do %d wynosi %d \n", start, stop, suma);

  return 0;
}

7.

#include <stdio.h>

int main()
{
  int suma, licznik, start, stop;
  suma = 0;
  start = 1;
  stop = 20;

  for(licznik = start; licznik<=stop; licznik++){
    suma = suma+licznik*licznik;
  }
  printf("Suma kwadratow liczb od %d do %d wynosi %d \n", start, stop, suma);

  return 0;
}
8.

#include <stdio.h>
#include <math.h>

int main()
{
  int podstawa, wykladnik, potega;
  podstawa = 2;
  potega = 0;

  for(wykladnik = 0; potega<=2010; wykladnik++){
    potega = pow(podstawa, wykladnik);
    if(potega <= 2010){
      printf("%d \n", potega);
    }
  }
    
  return 0;
}

9.

#include <stdio.h>

int main(){
  int calkowita, suma, licznik;
  suma = 0;
  calkowita = 3;  

  //blok odpowiedzialny za sczytywanie liczby z klawiatury
  do{
    if (calkowita <= 2){
      printf("Podales liczbe mniejsza lub rowna 2! ");
    }
    
    printf("Podaj liczbe calkowita wieksza od 2 \n");
    scanf("%d", &calkowita);
    printf("-------- \n");
  }while(calkowita <= 2);

  //blok odpowiedzialny za sumowanie i wypisywanie
  for(licznik = 1; licznik<=calkowita; licznik++){
    suma = suma+licznik;
    printf("%d \n", licznik);
  }
  printf("-------- \n = %d \n", suma);

  return 0;
}

10.

#include <stdio.h>

int main(){
  int calkowita, suma, licznik;
  suma = 0;
  calkowita = 3;

  //blok odpowiedzialny za sczytywanie liczby z klawiatury
  do{
    if (calkowita <= 2){
      printf("Podales liczbe mniejsza lub rowna 2! ");
    }

    printf("Podaj liczbe calkowita wieksza od 2 \n");
    scanf("%d", &calkowita);
  }while(calkowita <= 2);

  //blok odpowiedzialny za sumowanie i wypisywanie
  for(licznik = 1; licznik<=calkowita; licznik++){
    suma = suma+licznik*licznik;
    printf("%d * %d = %d \n", licznik, licznik, licznik*licznik);
  }
  printf("-------- \n = %d \n", suma);

  return 0;
}

11.

#include <stdio.h>

int main(){
  int calkowita, suma, licznik;
  suma = 0;
  calkowita = 3;
 
  //blok odpowiedzialny za sczytywanie liczby z klawiatury
  do{
    if (calkowita <= 2){
      printf("Podales liczbe mniejsza lub rowna 2! ");
    }

    printf("Podaj liczbe calkowita wieksza od 2 \n");
    scanf("%d", &calkowita);
  }while(calkowita <= 2);

  //blok odpowiedzialny za sumowanie i wypisywanie
  for(licznik = 1; licznik<=calkowita; licznik++){
    suma = suma+licznik*licznik;
    printf("%d * %d = %d \n", licznik, licznik, licznik*licznik);
  }
  printf("-------- \n = %d \n", suma);

  return 0;
}

12.

#include <stdio.h>

int main(){
  int liczba;

  for(liczba = 1; liczba<=20; liczba++){
    printf("%d, %d^2 = %d, %d^3 = %d \n", liczba, liczba, liczba*liczba, liczba, liczba*liczba*liczba);
  }

  return 0;
}

13.

#include <stdio.h>

int main(){
  int calkowita, licznik, liczba, suma, tmp;
  liczba = 1;
  suma = 0;

  printf("Podaj liczbe calkowita \n");
  scanf("%d", &calkowita);

  while(suma <= calkowita){
    suma = 0;
    tmp = liczba;
    liczba++;
    for(licznik = 1; licznik<=liczba; licznik++){
      suma = suma+licznik;
    }
  }

  printf("%d \n", tmp);
  return 0;
}

14.

#include <stdio.h>

int main(){
  int calkowita, licznik, liczba, suma, tmp;
  liczba = 1;
  suma = 0;

  printf("Podaj liczbe calkowita \n");
  scanf("%d", &calkowita);

  while(suma <= calkowita){
    suma = 0;
    tmp = liczba;
    liczba++;
    for(licznik = 1; licznik<=liczba; licznik++){
      suma = suma+licznik*licznik;
    }
  }

  printf("%d \n", tmp);
  return 0;
}

