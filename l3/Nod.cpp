#include <iostream>
#include "Nod.h"


nod* citireLista()
{
	nod* cap = 0;
	int n;
	std::cin >> n;
	if (n)
	{
		cap = new nod;
		cap->data = n;
		cap->urm = 0;
	}
	while (n != 0)
	{
		std::cin >> n;
		if (n)
		{
			nod* p = new nod;
			p->data = n;
			p->urm = cap;
			cap = p;
		}
	}
	return cap;
}

void afisareLista(nod* cap)
{
	if (!cap)
	{
		std::cout << "lista nula" << "\n";
	}
	else {
		std::cout << "Elementele listei sunt " << "\n";
		while (cap)
		{
			std::cout << cap->data << " ";
			cap = cap->urm;
		}
	}
}

bool cautaLista(nod* cap,int elem)
{
	while (cap)
	{
		if (cap->data == elem)
			return true;
		cap = cap->urm;
	}
	return false;
}

void inserareElement(nod* cap, int poz, int nr)
{
	nod* p = cap;
	poz--;
	if (poz == 1)
	{
		p = cap->urm;
		nod* p2 = new nod;
		p2->data = nr;
		p2->urm = p;
		cap->urm = p2;
	}
	else
	{
		while (poz)
		{
			p = cap;
			cap = cap->urm;
			poz--;
		}
		nod* p2 = new nod;
		p2->data = nr;
		p2->urm = cap;
		p->urm = p2;
	}
}

void stergereElement(nod* cap, int poz	)
{
	poz--;
	if (poz == 1)
	{
		nod* p = cap->urm;
		cap->urm = p->urm;
		delete p;
	}
	else
	{
		poz--;
		nod* p = cap->urm;
		while (poz)
		{
			p = p->urm;
			cap = cap->urm;
			poz--;
		}
		cap->urm = p->urm;
		delete p;
	}
}

void afisareSfarsit(nod* cap, int poz)
{
	if (cap)
		if(cap->urm)
	afisareSfarsit(cap->urm, poz);
	poz--;
	if (!poz)
		std::cout << cap->data << " ";
}


void parcurgereLista(nod* cap)
{
	if (cap)
	{
		std::cout << cap->data << " ";
		parcurgereLista(cap->urm);
		std::cout << cap->data << " ";
	}
}

void lipireListe(nod* cap, nod* cap2)
{
	while (cap->urm)
	{
		cap = cap->urm;
	}
	cap->urm = cap2;
}

void intercalareListe(nod* cap, nod* cap2)
{
	nod* p = cap;
	nod* p2 = cap2;
	cap = cap->urm;
	cap2 = cap2->urm;
	p->urm = p2;
	p2->urm = cap;
	while (cap && cap2)
	{
		p = cap;
		cap = cap->urm;
		p->urm = cap2;
		p2 = cap2;
		cap2 = cap2->urm;
		p2->urm = cap;

	}
}
