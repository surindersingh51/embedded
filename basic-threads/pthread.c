#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> //Header file for sleep(). man 3 sleep for details. 
#include <pthread.h> 

// A normal C function that is executed as a thread 
// when its name is specified in pthread_create() 
void *myThread(void *arg) 
{ 
	//sleep(1); 
	printf("Second Thread \n"); 
	return NULL; 
} 

int main() 
{ 
	pthread_t thread; 
	printf("First Thread\n"); 
	pthread_create(&thread, NULL, myThread, NULL); 
	pthread_join(thread, NULL); 
	printf("Third Thread\n"); 
	exit(0); 
}

