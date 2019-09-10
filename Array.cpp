#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{	
	float S[15],Sum = 0,Per[15],TPer = 0;
	for (int i = 0 ; i < 15; i++)
	{
		cout << "Input Store " << i+1 << ": " ;
		cin >> S[i];
		Sum += S[i];
	}
	for (int i = 0; i < 15; i++)
	{
		Per[i] = (S[i] / Sum) * 100;
		TPer += Per[i];
	}
	cout << "=============================================="<<endl;
	cout << "\t" << "#" << " |" << "\t"<< "Score" <<"\t" <<"|"<< "\t"<< "Percent"<<endl;
	cout << "=============================================="<<endl;
	for (int i = 0; i < 15; i++)
	{
		cout << "\t" << i+1 << " |" << "\t" << fixed << setprecision(2) << S[i] <<"\t"<< "|" << "\t" << Per[i]<<endl;
	}
	cout << "==============================================" << endl;
	cout << "   Total " << " |" << "\t" << Sum << "\t" << "|" << "\t" << TPer<<endl;
	cout << "==============================================" << endl;
	return (0);
}