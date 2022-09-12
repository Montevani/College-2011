int buscaSentinela(LISTA* l, int ch)
{
	int i=0;
	l->A[l->nroElem].chave=ch;
	while(l->A[i].chave != ch) i++;
	if(i== l->nroElem) return -1;
	else return i;
}