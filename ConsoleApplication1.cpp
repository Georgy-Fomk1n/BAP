#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;


struct node {
    string name;
    int age;
    struct node* next = NULL;
};

node* idperson(node* pointer, string name, int id) {
    int j = 1;
    struct node* link = pointer;
    struct node* person = new node;
    person->name = name;

    if (id == 1 || pointer == NULL) {
        person->next = pointer;
        return person;
    }
    while (pointer->next != NULL && j < id - 1) {
        pointer = pointer->next;
        j++;
    }
    person->next = pointer->next;
    pointer->next = person;
    return link;
}

node* del_idperson(node* pointer, int id) {
    int j = 1;
    struct node* link = pointer, * lnk_del;

    if (pointer == NULL)
        return pointer;
    if (id == 1) {
        lnk_del = pointer;
        pointer = pointer->next;
        delete lnk_del;
        return pointer;
    }
    while (pointer->next != NULL && j < id - 1) {
        pointer = pointer->next;
        j++;
    }
    lnk_del = pointer->next;
    if (pointer->next != nullptr) {
        pointer->next = lnk_del->next;
        delete lnk_del;
        return link;
    }
    
}

    int main() {
        setlocale(LC_ALL, "");
        struct node kate;
        kate.name = "Kate";
        struct node tom;
        tom.name = "Tom";
        struct node bob;
        bob.name = "Bob";
        kate.next = &tom;
        tom.next = &bob;
        cout << "1. Добавить" << endl;
        cout << "2. Убрать" << endl;
}

    
