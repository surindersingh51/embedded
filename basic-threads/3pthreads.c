
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> //Header file for sleep(). man 3 sleep for details. 
#include <pthread.h> 

// A normal C function that is executed as a thread 
// when its name is specified in pthread_create() 
void *myThread1(void *arg) 
{ 
	sleep(1); 
	printf("FIRST Thread \n"); 
	return NULL; 
}
void *myThread2(void *arg) 
{ 
	sleep(1); 
	printf("SECOND Thread \n"); 
	return NULL; 
}

int main() 
{   
    
	pthread_t thread1,thread2; 
	 
	pthread_create(&thread1, NULL, myThread1, NULL); 
	pthread_create(&thread2, NULL, myThread2, NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
    printf("Third Thread\n"); 
	exit(0); 
}
