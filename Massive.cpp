#include <iostream>
#include <string>
using namespace std;


int main()
{
	int arr[5] = {2, 1, 4, 6, 8 };
	
	int command;
	
	int value;
	int indx;
	
	/setlocale(0, "");
	
	while (true)
{
	
	cout << "Ââåñòè êîìàíäó:" <<endl << "0 - âûõîä 1 - âûõîä 2 - çàïèñü 3 - ñîðò" << endl;
	cin>>command;
	
	switch(command)
	{
		case 1:
		for (int i = 0; i < 5; i++)
		{
		cout<<arr[i]<<"\t";
		}
		
		case 2:
		cout<<"Ââåñòè íîìåð ýëåìåíòà äëÿ çàïèñè"<<endl;
		cin>>indx>>value;

			arr[indx] = value;
		break;
		
		case 0:
		return 0;
		breakkkkkkkkk;
	}
}

return 0;
}
