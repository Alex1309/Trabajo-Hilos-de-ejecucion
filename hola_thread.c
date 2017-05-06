#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NTHREADS 20 //cantidad de hilos.

void *do_sayhello(void*); //funcion que se requiere a la hora de crear el hilo. 

int main(int argc, char *argv[]) {
	
	pthread_t tid;
	int j;

	for (j = 0; j < NTHREADS; j++) {
		pthread_create(&tid, NULL, do_sayhello, NULL); //se crea el hilo.
		
	}
	return 0;
}
//Esta funcion se encarga de imprimir hola n. (n es el identificador del hilo)
void *do_sayhello(void *null) {
	printf("hola %ld\n", (long) pthread_self());
	pthread_exit(NULL);
}     
