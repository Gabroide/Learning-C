// MatrixMultiplication.cpp
// Programa para multiplicar dos matrices

#include <iostream>
#include <stdlib.h>

int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	 int b[3][3];
	 
	 for(int i=0; i<3; i++)
	 {
	 	for(int j=0; j<3; j++)
	 	{
	 		b[i][j]=0;
	 		
	 		for(int k=0; k<3; k++)
	 		{
	 			b[i][j]+=a[i][k]*a[k][j];
			 }
		 }
	 }
	 
	 for(int i=0; i<3; i++)
	 {
	 	for(int j=0; j<3; j++)
	 	{
	 		std::cout << "\t" << b[j][i];
	 	}
	 	
	 	std::cout << "\n";
	 }
	 
	 std::cout << std::endl;
	 
	 system("pause");
	 
	 return 0;
}
