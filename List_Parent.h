#ifndef LIST_PARENT_H_INCLUDED
#define LIST_PARENT_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

typedef int infotype_parent;
typedef struct elmlist_parent *address_parent;

struct elmlist_parent {
    infotype_parent info;
    address_parent next;
};

struct List_Parent {
    address_parent first;
};



void createList(List_Parent &L);
void insertFirst(List_Parent &L, address_parent P);
void insertAfter(List_Parent &L, address_parent Prec, address_parent P);
void insertLast(List_Parent &L, address_parent P);
void deleteFirst(List_Parent &L, address_parent &P);
void deleteLast(List_Parent &L, address_parent &P);
void deleteAfter(List_Parent &L, address_parent Prec, address_parent &P);


address_parent alokasi(infotype_parent x);
void dealokasi(address_parent &P);
address_parent findElm(List_Parent L, infotype_parent x);
void printInfo(List_Parent L);

#endif
