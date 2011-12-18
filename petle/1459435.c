#include <stdio.h>

int main(int argc, char *argv[]) {
  int c;
  int nb = 0; /* liczba znaków odstępu */
  int nt = 0; /* liczba znaków tabulacji */
  int nl = 0; /* liczba znaków nowego wiersza */
  FILE *fin, *fout;

  if ((fin = fopen(argv[1], "r")) == NULL) {
    printf("Nie mogę otworzyć pliku do czytania '%s'\n", argv[1]);
    return 1;
  }
  if ((fout = fopen(argv[2], "w")) == NULL) {
    printf("Nie mogę otworzyć pliku do zapisu '%s'\n", argv[2]);
    return 2;
  }

  while ((c = fgetc(fin)) != EOF) {
    if (c == ' ')
      nb++;
    if (c == '\t')
      nt++;
    if (c == '\n')
      nl++;
  }

  fprintf(fout, "\nliczba znaków odstępu = %d,\ntabulacji = %d,\nnowego wiersza = %d\n\n", nb, nt, nl);

  return 0;
}

#include <stdio.h>
int main() {
    int y, x=1, wynik = 0;
    while (x<=10) {
        y = x*x;
        printf("%d\n", y);
        wynik += y;
        ++x;
    }
    printf("wynik = %d\n", wynik);
    return 0;
}
