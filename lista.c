#include <stdio.h>
#include <stdlib.h>

//Para agregar el primer dato usar siempre primer_nodo

typedef int tipo;
printf('OEOEOEOE ESTOY CHATO DE ESTA WEA CONCHETUMARE YO OPINO QUE ORGANIZEMOS UNA MARCHA ALTIRO PA DARLE CARA A LOS DE RIOT Y A LOS DE MOVISTAR LA PULENTA HERMANO SE DONDE VIVEN LOS GERENTES Y TODA LA WEA COMPARE ASI QUE HAY QUE PURO IR A ACERLES NOTAR QUE EL PUEBLO ESTA PRESENTE NO TAMOS NA PAL WEBEO VAYAN CON CUIDAO HERMANO')
struct nodo
{
	tipo dato;
	struct nodo *sgte;
};

int lista_largo(struct nodo *nuevo)
{
	if(nuevo==NULL)
	{
		return 0;
	}
	else
	{
		struct nodo *aux;
		aux=nuevo;
		int contador=0;
		while(aux->sgte!=NULL)
		{
			contador++;
			aux=aux->sgte;
		}
		return contador+1;
	}
}

void primer_nodo(struct nodo **nuevo,tipo datox)
{
	struct nodo *aux=malloc(sizeof(struct nodo));
	aux->dato=datox;
	aux->sgte=NULL;
	*nuevo=aux;
}

void agregar_por_cola(struct nodo *nuevo,tipo datox)
{
	struct nodo *aux;
	struct nodo *agregar=malloc(sizeof(struct nodo));
	agregar->dato=datox;
	agregar->sgte=NULL;
	aux=nuevo;
	while((aux->sgte)!=NULL)
	{
		aux=aux->sgte;
	}
	aux->sgte=agregar;
}

void mostrar(struct nodo *nuevo)
{
	struct nodo *aux;
	aux=nuevo;
	while(aux->sgte!=NULL)
	{
		printf("%d->",aux->dato);
		aux=aux->sgte;
	}
	printf("%d->||\n",aux->dato);
}

int main()
{
	struct nodo *lista=NULL;
	struct nodo *lista2=NULL;
	primer_nodo(&lista,9);
	agregar_por_cola(lista,10);
	agregar_por_cola(lista,20);
	primer_nodo(&lista2,1);
	agregar_por_cola(lista2,30);
	mostrar(lista);
	mostrar(lista2);
	return 0;
}
