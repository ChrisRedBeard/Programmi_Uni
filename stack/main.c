#include "auto_stack.h"

int main(void){
        printf("aspetta, premi per continuare: ");
        getchar();
    StackPtr_t stack = Stack_Init();

    Autovettura a1 = Autovettura_Crea("123ABC", "Fiat", 1400, 2010);
    Autovettura a2 = Autovettura_Crea("456DEF", "Ford", 1600, 2015);

    Stack_Push(stack, a1);
    Stack_Push(stack, a2);

    Autovettura estratta;
        printf("aspetta, premi per continuare: ");
        getchar();
    if (Stack_Pop(stack, &estratta)) {
        printf("sono qui");
        printf("Estratta: %s\n", Autovettura_getMarca(estratta));
        getchar();
        Autovettura_Distruggi(estratta);
    }

    Stack_Destroy(stack);
    return 0;


return 0;
}
