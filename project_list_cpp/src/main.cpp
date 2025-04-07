#include <iostream>
#include "list.h"

int main() {
    tList list = create_list();

    insert_list(&list, 10);
    insert_list(&list, 20);
    insert_list(&list, 30);

    print_list(&list);  // Deve mostrar: 30 20 10

    remove_list(&list, 20);

    print_list(&list);  // Deve mostrar: 30 10

    remove_list(&list, 99);  // Teste: valor inexistente

    free_list(&list);

    print_list(&list);  // Deve mostrar lista vazia

    return 0;
}
