// DEFININDO O TIPO 'PONTO'
typedef struct ponto Ponto; 

// FUNCAO PARA CRIAR O PONTO COM DUAS COORDENADAS
Ponto* pto_cria (float x, float y);

// FUNCAO PARA LIMPAR AS COORDENADAS DE UM PONTO
void pto_libera (Ponto *p);

// FUNCAO PARA ACESSAR AS COORDENADAS DE UM PONTO
void pto_acessa (Ponto *p, float *x, float *y);

// FUNCAO PARA ATRIBUIR AS COORDENADAS DE UM PONTO
void pto_atribui (Ponto *p, float x, float y);

// FUNCAO PARA CALCULAR A DISTANCIA ENTRE DOIS PONTOS
float pto_distancia (Ponto *p1 , Ponto *p2 );

