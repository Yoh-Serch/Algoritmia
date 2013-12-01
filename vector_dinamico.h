#ifndef VECTOR_DINAMICO_H_INCLUDED
#define VECTOR_DINAMICO_H_INCLUDED

void* vectorGenerico[10];


typedef struct vector vector_t;

//Firmas de funciones
//Crea el vector
vector_t* vector_crear(size_t tam_inicial);

//Agrega elemento
//Devuelve si hubo error o no.
bool vector_agregar(vector_t* vector, size_t indice, void* elemento);



void* vector_obtener(vector_t*, size_t indice);


size_t vector_obtener_tam(vector_t* vector);

//Redimenciona el vector
//Devuelve si hubo algun error o no
bool vector_redimencionar(vector_t* vector, size_t nuevoTam);


//Libera la memoria perdida
void vector_destruir(vector_t* vector);

#endif
