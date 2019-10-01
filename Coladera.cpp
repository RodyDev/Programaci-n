using namespace std;
#include <iostream>

int TamanoVector = 1000;
void MostrarVector( int A[], int Tamano);

int main()
{
 int Vector[TamanoVector + 1] = {0,0};

 for (int i = 1;i<= TamanoVector; i++ )
 {
 	Vector[i] = 1;
 }
 
 
 for (int j = 2;j <= TamanoVector; j++)
 for (int k = 2;k <= (TamanoVector)/j; k++)
 Vector[k*j] = 0;
 
 MostrarVector(Vector,TamanoVector);

 return 0;
}
