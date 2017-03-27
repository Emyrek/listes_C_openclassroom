#include <stdio.h>
#include <stdlib.h>

typedef struct Element Element;
struct Element
{
	int nombre;
	Element *suivant;
};

typedef struct Liste Liste;
struct Liste
{
	Element *premier;
};


Liste *init()
{
	Element *el=malloc(sizeof(*el));
	if(el==NULL)
	{
		printf("ERREUR");
		exit(-1);
	}
	Liste *li=malloc(sizeof(*li));
	if(li==NULL)
	{
		printf("ERREUR");
		exit(-1);
	}
	el->nombre=0;
	el->suivant=NULL;
	li->premier=el;
	return li;
}

void insertion(Liste *li, int nvNombre)
{
	Element *nouveau=malloc(sizeof(*nouveau));
	if(nouveau==NULL)
	{
		exit(-1);
	}
	nouveau->nombre=nvNombre;
	nouveau->suivant=li->premier;
	li->premier=nouveau;
}

void suppression(Liste *liste)
{
	if(liste->premier!=NULL)
	{
		Element *asupprimer=liste->premier;
		liste->premier=liste->premier->suivant;
		free(asupprimer);
	}
}

int main()
{
	return 0;
}
