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

int main()
{
	return 0;
}
