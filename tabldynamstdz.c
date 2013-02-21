#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wypelnij_tablice(int rozmiar, int *tab);
void wyswietl_tablice(int rozmiar, int *tab);
double srednia(int rozmiar, int *tab);
int wartosc_max(int rozmiar, int *tab);
int wartosc_min(int rozmiar, int *tab);
void bubble_sort(int rozmiar, int *tab);
double mediana(int rozmiar, int *tab);

int main() {
        int rozmiar_tablicy, max, min;
        int *tab;
        double sre, med;
        FILE *wyniki;

        printf("Podaj ile elementow ma miec tablica: ");
        scanf("%d", &rozmiar_tablicy);
        printf("--------------------------------------\n");

        tab = (int*)malloc(rozmiar_tablicy);

        srand(time(NULL));
        wypelnij_tablice(rozmiar_tablicy, tab);
        wyswietl_tablice(rozmiar_tablicy, tab);

        sre = srednia(rozmiar_tablicy, tab);
        max = wartosc_max(rozmiar_tablicy, tab);
        min = wartosc_min(rozmiar_tablicy, tab);

        bubble_sort(rozmiar_tablicy, tab);
        med = mediana(rozmiar_tablicy, tab);

        wyniki = fopen("INStatystyki.txt", "w");
        fprintf(wyniki, "Srednia wynosi: %.1f\n", sre);
        fprintf(wyniki, "Wartosc maksymalna wynosi: %d\n", max);
        fprintf(wyniki, "Wartosc minimalna wynosi: %d\n", min);
        fprintf(wyniki, "Mediana wynosi: %.1f\n", med);
        fclose(wyniki);

        return 0;
}

void wypelnij_tablice(int rozmiar, int *tab){
        int i;
        for (i=0; i<rozmiar; i++) {
                srand;
                tab[i] = (rand() % 21);
        }
}

void wyswietl_tablice(int rozmiar, int *tab){
        int i;
        for (i=0; i<rozmiar; i++) {
                printf("%d element tablicy: %d\n", i+1, tab[i]);
        }
}

double srednia(int rozmiar, int *tab){
        int suma=0,i;
        for (i=0; i<rozmiar; i++) {
                suma += tab[i];
        }
        return (suma/rozmiar);
}

int wartosc_max(int rozmiar, int *tab){
        int tmp = tab[0];
        int i;
        for (i=0; i<rozmiar; i++) {
                if(tmp < tab[i]){
                        tmp = tab[i];
                }
        }
        return tmp;
}

int wartosc_min(int rozmiar, int *tab){
        int tmp = tab[0];
        int i;
        for (i=0; i<rozmiar; i++) {
                if(tmp > tab[i]){
                        tmp = tab[i];
                }
        }
        return tmp;
}

void bubble_sort(int rozmiar, int *tab){
        int tmp,i,j;
        for (i=0; i<rozmiar; i++) {
                for (j=0; j<rozmiar-1; j++) {
                        if(tab[j] > tab[j+1]){
                                tmp = tab[j+1];
                                tab[j+1] = tab[j];
                                tab[j] = tmp;
                        }
                }
        }
}

double mediana(int rozmiar, int *tab){
        double wynik;
        int a, b;
        if(!(rozmiar%2)==0){
                wynik = tab[rozmiar/2];
        }
        else {
                a = (rozmiar/2)-1;
                b = (rozmiar/2);
                wynik = (tab[a]+tab[b])/2;
        }
        return wynik;
}