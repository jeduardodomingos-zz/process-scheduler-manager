#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct process {
    int processPriority;
    int processSize;
    int completedUnits;
    float completedPerCent;
    int entryCounter;
    char processDescription[100];
    struct process *previousProcess;
    struct process *nextProcess;
};

typedef struct process *processPointer;

processPointer createProcess(char description[100]) {

    processPointer newProcess = (processPointer) malloc(sizeof(struct process));

    newProcess->processSize = rand() % 1000;
    newProcess->completedUnits = 0;
    newProcess->completedPerCent = 0;
    newProcess->entryCounter = 0;
    newProcess->previousProcess = NULL;
    newProcess->nextProcess = NULL;
    strcpy(newProcess->processDescription, description);

    return newProcess;
}

int main() {

    return 0;
}