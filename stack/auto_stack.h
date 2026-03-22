//auto_stack.h
typedef struct StackStruct_t* StackPtr_t;
typedef struct Autovettura_t* Autovettura;

StackPtr_t Stack_Init();
void Stack_Destroy(StackPtr_t stack);

bool Stack_Push(StackPtr_t stack, Autovettura item);
bool Stack_Pop(StackPtr_t stack, Autovettura* item);
bool Stack_IsEmpty(StackPtr_t stack);
bool Stack_IsFull(StackPtr_t stack);

Autovettura Autovettura_Crea( char* telaio, char* marca, int cilindrata, int anno);
void Autovettura_Distruggi(Autovettura a);

char* Autovettura_getNumeroTelaio(Autovettura a);
char* Autovettura_getMarca(Autovettura a);

int Autovettura_getCilindrata(Autovettura a);
int Autovettura_getAnno(Autovettura a);

void Autovettura_setMarca(Autovettura a, char* nuovaMarca);
void Autovettura_setCilindrata(Autovettura a, int nuovaCilindrata);
void Autovettura_setAnno(Autovettura a, int nuovoAnno);
void Autovettura_setTelaio(Autovettura a,char* nuovoNumTelaio);


