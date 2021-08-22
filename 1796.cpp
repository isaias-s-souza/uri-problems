#include<bits/stdc++.h>

using namespace std;
int main()
{	
	//	freopen("in.txt", "r", stdin); //Definir entrada do programa como um arquivo de texto
	int q, v, contsatisf = 0, continsatisf = 0;
	
	cin >> q;
	
	for(int i = 0; i < q; i++)
	{
		cin >> v;
		if(v == 0)
			contsatisf++;
		else
			continsatisf++;
	}
	
	if(contsatisf > continsatisf)
		cout << "Y" << endl;
	else
		cout << "N" << endl;
	
	return 0;
}
