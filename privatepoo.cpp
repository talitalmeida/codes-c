#include<stdio.h>
//Trabalhando com atributos privados
class ponto
{
	private:
		int x,y;
	public:
		void mostraCoord(int a, int b)
		{
			p.x= 4;
			p.y= 5;
			printf("x: %d\n y: %d\n", a,b);
		}
};
int main()
{
	ponto p;
	p.mostraCoord(p.x,p.y);
}
