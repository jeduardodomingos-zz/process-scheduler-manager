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


void presentation() {
    printf("----------------------------Simulador de escalonamento de processos -----------------------------\n");
    printf("---------------------------------------Seja Bem Vindo !!!----------------------------------------\n\n\n");
    _sleep(1000);
}

void menu() {
    int menuSelectedOption = 0;

    system("cls");
    _sleep(100);

    printf("----------------------------------------Menu de Opcoes----------------------------------------\n\n\n");
    printf("1 - Agendar Processos\n");
    printf("2 - Consultar Processos Agendados\n");
    printf("3 - Executar Processos Detalhadamente\n");
    printf("4 - Executar Processos Simplificadamente\n");
    printf("5 - Sair\n\n");
    printf("R: ");
    scanf("%d", &menuSelectedOption);
    printf("\n\n\n");

    switch (menuSelectedOption) {
        case 1 :
            printf("Agendamento de Processos Selecionado");
            break;
        case 2:
            printf("Consulta de Processos Selecionada");
            break;
        case 3:
            printf("Execução Detalhada de Processos Selecionada");
            break;
        case 4:
            printf("Execução Simplificada de Processos Selecionada");
            break;
        case 5:
            printf("Saindo do Sistema ...");
            _sleep(10000);
            system("exit");
            break;
        default:
            printf("A opcao selecionada nao e valida.");
            _sleep(1000);
            menu();
            break;
    }

}

int main() {

    processPointer processList = NULL;

    presentation();
    menu();

    return 0;
}