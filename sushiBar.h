#ifndef SUSHI_BAR_H
#define SUSHI_BAR_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

//declaring semaphores
sem_t vacant_seats;
sem_t eating;


#define NUM_SEATS 5 //according to the given problem

//declaring variables for tracking
int vacancies = NUM_SEATS;
bool seats_full = false;
int num_customers = -1; //getting the number of customers

#endif
