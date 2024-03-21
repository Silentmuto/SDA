#pragma once


struct nod {
	int data;
	nod* urm;
};

nod* citireLista();
void afisareLista(nod* cap);
bool cautaLista(nod* cap, int elem);
void inserareElement(nod*cap,int poz,int nr);
void stergereElement(nod* cap, int poz);
void afisareSfarsit(nod* cap, int poz);
void parcurgereLista(nod* cap);
void lipireListe(nod* cap, nod* cap2);
void intercalareListe(nod* cap, nod* cap2);
