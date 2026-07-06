#ifndef CANCIONES_H
#define CANCIONES_H

#define MAX_CANCIONES 100

typedef struct
{
    char codigo[16];
    char titulo[100];
    char clasificacion[30];
    char compositor[100];
    char artista[100];
    int duracion;
} Cancion;

// Funciones de gestión
void registrarCancion(Cancion canciones[], int *n);
void listarCanciones(Cancion canciones[], int n);
void buscarCancion(Cancion canciones[], int n);
void actualizarCancion(Cancion canciones[], int n);
void eliminarCancion(Cancion canciones[], int *n);
void mostrarDuracion(Cancion canciones[], int n);

#endif