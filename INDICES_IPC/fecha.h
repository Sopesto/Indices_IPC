#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

typedef struct{
  int dia,
  int mes,
  int anio,
} Fecha;

int   fecha_iniciar(Fecha*);
int   fecha_validar(Fecha*);
int   comparar_fecha(Fecha*,Fecha*);
char* decodificar_fecha(char*); //TOMA UNA FECHA NNNNNN Y LA CONVIERTE A AAAAMM
int   convertir_fechai_a_fechac(char*,char*);//TOMA UNA FECHA AAAAMM Y LA CONVIERTE A MES-AAAA
int   formatear_fecha(char*,char*);//TOMA UNA FECHA AAAAMM Y LA CONVIERTE A AAAA-MM-DD

#endif // FECHA_H_INCLUDED
