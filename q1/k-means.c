#include "stdio.h"
#include "stdlib.h"

#define N 10
#define Nv 3
#define Nc 2
#define THR_KMEANS 0.001f

// Define vector and center arrays as global
float Vec[N][Nv];
float Center[Nc][Nv];
int Classes[N];

// Vector initialisation
void init_vectors(void){}

// Pick initial centres
void init_centers(void){}

// Helper function that calculates Euclidean distance between two given vectors
void euclidean_dist(int vec_idx, int center_idx){}

// (Re)assignment of a cluster to each vector
void assign_clusters(void){}

// Calculation of new cluster means after (re)assignment
void update_centers(void){}

// Main function
int main(void){

    return 0;

}