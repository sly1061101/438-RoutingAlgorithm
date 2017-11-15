#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "Solver.hpp"
#include "Solver_LinkState.hpp"

int main(int argc, char** argv) {
    //printf("Number of arguments: %d", argc);
    if (argc != 4) {
        printf("Usage: ./linkstate topofile messagefile changesfile\n");
        return -1;
    }
    
    solver::ForwardingTable f;
    solver::Solver_LinkState s(f);
    
    FILE *fpOut;
    fpOut = fopen("output.txt", "w");
    fclose(fpOut);
    

    return 0;
}
