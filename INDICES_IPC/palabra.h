#ifndef PALABRA_H_INCLUDED
#define PALABRA_H_INCLUDED

typedef struct{
  char* cadena,
  int   tam
} Palabra;

void  aMay(char*);
void  aMin(char*);
int   extraerPalabras(Palabra*,int,char*);
int   normalizarPalabra(Palabra*);

#endif // PALABRA_H_INCLUDED
