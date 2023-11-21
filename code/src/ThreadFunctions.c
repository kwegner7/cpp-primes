
#include <pthread.h> 
#include <stdio.h> 
#include <stdlib.h> 

//
// TODO KURT - must allow parameters to the thread function
//
void* print_message_function( void )
{
     char*  message = "Message during thread";
     printf("%s \n", message);
	   printf("Inside the thread doing stuff\n"); 
}

void start_thread(pthread_t threadId, void* fcn)
{
	// detach the new thread from the calling thread 
	// pthread_detach(pthread_self());
  printf("Starting thread %d\n", (int)pthread_self()); 
   
  // start the new thread
  int returnCode = pthread_create(&threadId, NULL, fcn, NULL);
  return;

  /*
  char result1[50];
  char result2[50]; 
  sprintf(result1, "%d", (int)pthread_self()); 
  sprintf(result2, "%d", returnCode); 
  printf("The thread %s has terminated with return code %s", result1, result2); 
  */
}


//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
void* func(void* arg) 
{ 
	// detach the current thread (the main thread)
	// from the calling thread 
	pthread_detach(pthread_self()); 

	printf("Inside the thread doing stuff\n"); 

	// exit the current thread 
	pthread_exit(NULL); 
} 

void fun() 
{ 
	pthread_t ptid; 

	// Creating a new thread, start the func()
	pthread_create(&ptid, NULL, &func, NULL); 

	printf("Contunue main thread, this line may be printed"
		" before thread terminates\n"); 

	// The following line terminates 
	// the thread manually 
	// pthread_cancel(ptid); 

	// Compare the two threads created 
	if(pthread_equal(ptid, pthread_self())) 
		printf("Threads are equal\n"); 
	else
		printf("Threads are not equal\n"); 

	// Waiting for the created thread to terminate 
	pthread_join(ptid, NULL); 

	printf("This line will be printed"
		" after thread ends\n"); 

	pthread_exit(NULL); 
} 

// Driver code 
int mainn() 
{ 
	fun(); 
	return 0; 
} 

