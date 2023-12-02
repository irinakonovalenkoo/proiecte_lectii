#include <iostream> 
#include <iomanip>

#include <cstdlib> // <stdlib.h>
#include <ctime>   // <time.h>
#include <cmath>   // <math.h>
 
using namespace std;
  
int main()
{  
  srand( time(0) );

	// alocarea dinamica a memoriei - pointerul singur isi 
	//aloca memorie in momentul executarii instructiunii
	
	// tip_date *nume_pointer = new tip_date;
	
	// sa se calculeze a+b-c
	
	//int a,b,c,R;
	//int *pa;
	
	//pa= &a;
	
	// 1. new - aloca memorie
	// 2. delete - elibereaza memorie
	
	/*
	
	int *a = new int;
		*a = rand()%10;
		
		cout<<" a = "<<*a<<" adresa a = "<<a<<endl;
	
	int *b = new int;
		*b = rand()%10;
		
	int *c = new int;
		*c = rand()%10;
		
		cout<<" a = "<<*a<<" b = "<<*b<<" c = "<<*c<<endl;

	int *R = new int;
	
	*R = *a + *b - *c;
	
	
	delete a; // se distruge tipul de date dar adresa ramane dar nu putem
	//lucra cu ea fiindca nu are tip de date
	
	// Eroare *a=123321;
	// Eroare cout<<" a = "<<*a<<" adresa a ="<<a<<"sizeof(a) = "<<sizeof(a)<<endl;
	
	delete b;
	delete c;
	
		cout <<" R = "<<*R<<endl;
		
	delete R;
	

	
	//a = new int;
		
	cout<<"\n sizeof(int) = "<<sizeof(int)
		<<"\n sizeof(float) = "<<sizeof(float)
		<<"\n sizeof(double) = "<<sizeof(double)
		<<"\n sizeof(bool) = "<<sizeof(bool)<<endl;
	
	
	/// delete nume_pointer
	
	a = new int;
	
	*a=123321;
	cout<<" a = "<<*a<<" adresa a ="<<a<<"sizeof(a) = "<<sizeof(a)<<endl;
	*/
	
	// sa se calculeze a+b-c de n ori
	// sa se calculeze suma raspunsurilor 
	
	
	/*
	int *n = new int;
	
	cout<<"Enter n :";
	cin>>*n;
	
	int *a = new int;
		
	int *b = new int;
		
	int *c = new int;
	
	int *R = new int;
		
	int *i = new int;
		
	int *S = new int;
		*S=0;
		
	for (*i = 0; *i < *n ; *i+=1)
	{
		*a = rand()%10;
		*b = rand()%10;
		*c = rand()%10;
		
		*R = *a + *b - *c ;
		cout<<setw(3)<< *i+1 <<" a = "<<*a<<" b = "<<*b<<" c = "<<*c<<" R = a + b - c = "<<*R <<endl;
		*S += *R;
	}
	
	
	delete a;
	delete b;
	delete c;
	delete R;
	delete i;
	delete n;

	cout<<" S = "<<*S;
	
	delete S;
	
	
	*/
	
	/// alocarea dinamica a memoriei : Tablouri
	
	
	// tip_date nume_vector[nr_maximal de elemente];
	// tip_date *nume_pointer = new tip_date[nr_necesar_de_elemente];
	/*
	//sa se creeze un vector din 10 elemente
	
	int *v = new int[10];
	
	for ( int i=0; i<10; i++ ) v[i] = rand()%10;
	
	cout<<"v :: ";
	
	for ( int i=0; i<10; i++ ) cout << " "<<v[i];
	
	cout<<endl;
	*/
	
	
	
	/*
	// sa se creeze un vector de n elemente;
	// x[], n
	
	int *n = new int;
	
	do{
	
	cout<<"Enter n :";
	cin>>*n;
	
	}while ( *n<1 || *n>1000 );
	
	
	int *v = new int[*n];
	
	for ( int i=0; i<*n; i++ ) v[i] = rand()%10;
	
	cout<<"v :: ";
	
	for ( int i=0; i<*n; i++ ) cout << " "<<v[i];
	
	cout<<endl;
	
	
	//X [] - elem pare, Y [] - elem impare
	
	int *nX = new int; // ca sa contorizam elem sunt pare si impare
	int *nY = new int;
	*nX =0 , *nY =0;
	
	for ( int i=0; i<*n; i++ )
	{
		if ( v[i] %2 ==0 ) *nX+=1;
		else *nY+=1;
	}
	
	int *X = new int[*nX];
	int *Y = new int[*nY];
	
	*nX =0 , *nY =0;
	for ( int i=0; i<*n; i++ )
	{
		if ( v[i] %2 ==0 )
		{
			X[*nX] = v[i];
			*nX+=1;
		 } 
		else
		{
			Y[*nY] = v[i];
			*nY+=1;
		 } 
	}

	
	cout<<"\nX :: ";
	
	for ( int i=0; i<*nX; i++ ) cout << " "<<X[i];
	
	cout<<endl;
	cout<<"Y :: ";
	
	for ( int i=0; i<*nY; i++ ) cout << " "<<Y[i];
	
	cout<<endl;
	
	/// eliberarea meoriei
	// delete[] nume_vector;
	
	delete [] v;
	delete [] X;
	delete [] Y;
	*/
	
	
	
	//[][]
	
	// matrici [6][]
	//[]
	//[]
	//[]
	//[]
	//[]
	//[]
	/*
	int **M = new int*[6];
	
	for (int i = 0 ; i < 6 ; i++)
	{
		M[i] = new int [10];
		
		for ( int j = 0 ; j<10 ; j++)
		{
			M[i][j] = rand()%10;
		}
	}
	
	for (int i = 0 ; i < 6 ; i++)
	{
		
		for ( int j = 0 ; j<10 ; j++)
		{
			cout<<setw(3)<<M[i][j];
		}
		cout<<endl;
	}
	*/
	// [][], nxm
	
	
	
	int *n = new int;
	cout<<"Enter n = ";
	cin>>*n;
	
	int *m = new int;
	cout<<"Enter m = ";
	cin>>*m;
	
	cout<<*n<<"X"<<*m<<endl;
	
	int **M = new int*[*n];
	
	for (int i = 0 ; i < *n ; i++)
	{
		M[i] = new int [*m];
		
		for ( int j = 0 ; j<*m ; j++)
		{
			M[i][j] = rand()%10;
		}
	}
	
	for (int i = 0 ; i < *n ; i++)
	{
		
		for ( int j = 0 ; j<*m ; j++)
		{
			cout<<setw(3)<<M[i][j];
		}
		cout<<endl;
	}
	
	for (int i = 0 ; i < *n ; i++) delete[] M[i];
	
	delete[] M;
	
	
	
 return 0;
}

	 
	
	


   
   
   
   
   


