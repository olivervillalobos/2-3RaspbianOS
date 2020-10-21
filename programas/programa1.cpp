/*
INSTITUTO TECNOLOGICO DE TIJUANA
OLIVER VILLALOBOS BECERRIL
NO.CONTROL: 18212282
*/

#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
srand((unsigned)time(NULL));
int n;
n=rand()%6+1;
cout<<"El numero en el dado de seis lados es "<<n<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
