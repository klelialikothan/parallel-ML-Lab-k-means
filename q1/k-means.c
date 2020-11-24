#include "stdio.h"
#include "stdlib.h"

#define N 10
#define Nv 2
#define Nc 2
#define THR_KMEANS 0.001

// Define vector and center arrays as global
float Vec[N][Nv];
float Center[Nc][Nv];
int Classes[N];

// Vector initialisation
void init_vectors(void){}

// Pick initial centres
void init_centers(void){}

// Helper function that calculates Euclidean distance between two given vectors
void euclidean_dist(void){}

// (Re)assignment of a cluster to each vector
void assign_clusters(void){}

// Calculation of cluster means after (re)assignment
void update_centers(void){}

// Main function
int main (void){

    return 0;

}