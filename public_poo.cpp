#include<stdio.h>
//sem atributos privados
class ponto
{
	public:
		int x,y;
	void mostraCoord(int a, int b)
	{
		printf("x:%d \n y: %d\n",a,b);
	}
};
int main()
{
	ponto p;
	p.x = 4;
	p.y = 5;
	p.mostraCoord(p.x,p.y);
}
