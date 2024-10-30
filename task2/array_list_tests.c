#include <stdio.h>
#include "array_list.h"

int main(){
    array_list *list = array_list_new;
    array_list_add_to_end(list, "Hello");
    array_list_add_to_end(list, "My");
    array_list_add_to_end(list, "Name");
    array_list_add_to_end(list, "will");
    array_list_add_to_end(list, "be");
    array_list_add_to_end(list, "Kaitlyn");
    array_list_add_to_end(list, "Namvar");

    for (int i =0; i < list -> length; i++){
        printf("Item %d: %s\n", i, list->items[i]);
    }

    array_list_free(list);
    return 0;
}


