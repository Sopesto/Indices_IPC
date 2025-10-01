#ifndef INDICES_H_INCLUDED
#define INDICES_H_INCLUDED
/*
indice común
Codigo (codigo, alfanumérico, 20 caracteres).
Descripcion (descripcion, 30 caracteres).
Clasificador (clasificador, 30 caracteres).
Indice_IPC (indice_icc, flotante doble precisión hasta 16 dígitos).
v_m_ipc (variacion_mensual, flotante doble precisión hasta 16 dígitos).
v_i_a_IPC (variacion_interanual, flotante doble precisión hasta 16 dígitos).
Region (region, 9 caracteres).
Periodo_codificado (periodo, 4 dígitos para el año y 2 para el mes).
*/
//CAMPOS
#define CODIGO  0
#define DESC    1
#define CLASIF  2
#define INDIPC  3
#define VARMEN  4
#define VARINT  5
#define REGION  6
#define PERIOD  7

typedef struct{
  char[21] cod,
  char[31] desc,
  char[31] clas,
  double   indice_ipc,
  double   var_men,
  double   var_inter,
  char[10] region,
  Fecha    periodo
} Indice;

typedef struct{
  Fecha    fecha,
  char[31] desc,
  double   indice_ipc,
  char[10] region,
  char[10] grupo
} IndiceGrupo

int           filtrar_campo(Indice*,const int,const int);
double        obtener_indice(const Indice*,const Fecha*);
double        calcular_monto_ajustado(const double,const double,const double);
double        calcular_variacion_porcentual(const double,const double);
IndiceGrupo*  agrupar(const Indice*);
double        calcular_indice_promedio_mensual(const IndiceGrupo*,const char*,const Fecha*);
double        calcular_indice_promedio_mensual_por_grupo(const IndiceGrupo*,const Fecha*);

#endif // INDICES_H_INCLUDED
