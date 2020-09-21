#include <iostream>
#include <string>
using namespace std;


int main()
{
	int arr[5] = {2, 1, 5, 6, 8 };
	
	int command;
	
	int value;
	int indx;
	
	setlocale(0, "");
	
	while (true)
{
	
	cout << "¬вести команду:" <<endl << "0 - выход 1 - выход 2 - запись 3 - сорт" << endl;
	cin>>command;
	
	switch(command)
	{
		case 1:
		for (int i = 0; i < 5; i++)
		{
		cout<<arr[i]<<"\t";
		}
		
		case 2:
		cout<<"¬вести номер элемента дл€ записи"<<endl;
		cin>>indx>>value;

			arr[indx] = value;
		break;
		
		case 0:
		return 0;
		break;
	}
}

return 0;
}
