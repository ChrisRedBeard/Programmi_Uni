//auto_stack.c
#include <string.h>

struct Autovettura_t {
 char NumeroTelaio[20];
 char Marca[20];
 int Cilindrata;
 int AnnoImmatricolazione;};

struct StackStruct_t {
 int Position_Current;
Autovettura Array[STACK_SIZE];};


Autovettura Autovettura_Crea( char* telaio, char* marca, int cilindrata, int anno){
  Autovettura a = malloc(sizeof(struct Autovettura_t));
  if (a!=NULL) {
     //marca
    Autovettura_setMarca(a,Marca);
      //telaio
    Autovettura_setTelaio(a,telaio);
     //cilindrata
    Autovettura_setCilindrata(a,cilindrata);
    //anno di immatricolazione
    Autovettura_setAnno(a,anno){

   }
 return a;
}


void Autovettura_Distruggi(Autovettura a) {
free(a);
}


char* Autovettura_getNumeroTelaio(Autovettura a){

 return a->NumeroTelaio;
}



char* Autovettura_getMarca(Autovettura a){
 return a->Marca;
}

int Autovettura_getCilindrata(Autovettura a){
 return a.Cilindrata;
}

int Autovettura_getAnno(Autovettura a){
 return a.AnnoImmatricolazione;
}

void Autovettura_setMarca(Autovettura a, char* nuovaMarca){
 strncpy(a->Marca,nuovaMarca,sizeof(a->Marca) - 1);
 a->Marca[sizeof(a->Marca) - 1] = '\0';  // sicurezza terminatore
}

void Autovettura_setTelaio(Autovettura a,char* nuovoNumTelaio){
 strncpy(a->NumeroTelaio,nuovoNumTelaio,sizeof(a->NumeroTelaio) - 1);
 a->Marca[sizeof(a->Marca) - 1] = '\0';  // sicurezza terminatore
}




void Autovettura_setCilindrata(Autovettura a, int nuovaCilindrata){
    a->Cilindrata = nuovaCilindrata;
}

void Autovettura_setAnno(Autovettura a, int nuovoAnno){
    a->AnnoImmatricolazione = nuovoAnno;
}



StackPtr_t Stack_Init() {
    StackPtr_t stack = malloc(sizeof(struct StackStruct_t));
    if (stack != NULL) {
        stack->Position_Current = 0;
    }
    return stack;
}



void Stack_Destroy(StackPtr_t stack) {
    if (stack != NULL) {
        // Dealloca tutte le Autovetture nello stack
        for (int i = 0; i < stack->Position_Current; i++) {
            Autovettura_Distruggi(stack->Array[i]);
        }
        free(stack);
    }
}


bool Stack_Push(StackPtr_t stack, Autovettura item) {
    if (stack == NULL || Stack_IsFull(stack)) {
        return false;
    }
    stack->Array[stack->Position_Current] = item;
    stack->Position_Current++;
    return true;
}

bool Stack_Pop(StackPtr_t stack, Autovettura* item) {
    if (stack == NULL || Stack_IsEmpty(stack)) {
        return false;
    }
    stack->Position_Current--;
    *item = stack->Array[stack->Position_Current];
    return true;
}


bool Stack_IsEmpty(StackPtr_t stack) {
    return (stack != NULL && stack->Position_Current == 0);
}

bool Stack_IsFull(StackPtr_t stack) {
    return (stack != NULL && stack->Position_Current >= STACK_SIZE);
}
