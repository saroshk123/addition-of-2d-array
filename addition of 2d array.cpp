#include<iostream>
using namespace std;
const int r=2;
const int c=2;
void get_array(int m1[r][c])
{
	for(int i=0; i<r; i++)
		{
			
			for(int j=0; j<c; j++)
			{	
				
				
				cout<<"Enter the number: ";
				cin>>m1[i][j];
			}
		}
}

void display_array(int m1[r][c])
{
		
		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				
				cout<<m1[i][j]<<"\t";
			}
			cout<<endl;
		}

	

}



int main()
{
	int m1[2][2];
	
	get_array(m1);
	
		system("cls");
		
		cout<< endl;
		cout<<"Matrix 1 "<< endl;
		display_array(m1);
		
		
		int m2[2][2];
		
		get_array(m2);
					
			display_array(m2);
				
		
		int m3[2][2];
		
					
			cout<<"Addition of two matrix "<< endl;
		
			for(int i=0; i<2; i++)
		{
			for(int j=0; j<2; j++)
			{
				m3[i][j]= m1[i][j] + m2[i][j];
				cout<<m3[i][j] <<"\t";
			}
			cout<<endl;
}
}

