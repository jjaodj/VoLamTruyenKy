#include "Game.h"
#define max 100

int main()
{
	Info* arr[max];
	Info* arrMon[max];
	int n, m, option, option1;
	float maxCha = 0, maxMon = 0;
	int mon, cha;


	cout << "\nNhap so luong nhan vat: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		arr[i] = new Character;
		cout << "\nNhap thong tin nhan vat thu " << i + 1;
		(*arr[i]).input();
		if (arr[i]->setDamage() > maxCha)
			cha = i;
	}

	do
	{
		cout << "\nNhap so luong quai vat: ";
		cin >> m;

		for (int i = 0; i < m; i++)
		{
			cout << "\nNhap thong tin quai vat thu " << i + 1;
			
				cout << "\n1.Thong thuong";
				cout << "\n2.Dau linh";
				cout <<  endl;

			 while (cin >> option  && option != 1 && option != 2)
					cout << "Invalid option! Please try again!";

			switch (option)
			{
			case 1:

				arrMon[i] = new SmallMonster;
				(*arrMon[i]).input();

				if (arrMon[i]->setDamage() > maxMon)
					mon = i;

				break;

			case 2:

				arrMon[i] = new BigMonster;
				(*arrMon[i]).input();

				if (arrMon[i]->setDamage() > maxMon)
					mon = i;
				break;

			}
		}
	} while (m <= 0);
	
	for (int i = 0; i < n; i++)
		arr[i]->output();

	for (int i = 0; i < m; i++)
		arrMon[i]->output();

	cout << endl;
	cout << "\nNhan vat co sat thuong cao nhat: ";
	arr[cha]->output();

	cout << endl;

	cout << "\nQuai vat co sat thuong cao nhat: ";
	arrMon[mon]->output();


	cout << endl;
	cout << endl;
	cout << endl;

	cout << "\nNhap thong tin nhan vat A: ";
	arr[99] = new Character;
	(*arr[99]).input();

	cout << "\nNhap thong tin quai vat B: ";

	cout << "\n1.Thong thuong";
	cout << "\n2.Dau linh";
	cout << endl;

	while (cin >> option1 && option1 != 1 && option1 != 2)
		cout << "Invalid option! Please try again!";

	switch (option1)
	{
	case 1:

		arrMon[99] = new SmallMonster;
		(*arrMon[99]).input();

		
		break;

	case 2:

		arrMon[99] = new BigMonster;
		(*arrMon[99]).input();

		
		break;

	}

	float atk = arr[99]->setDamage(), atkmon = arrMon[99]->setDamage();

	if (arr[99]->setMonphai() == 1 || arr[99]->setMonphai() == 2)
	{
		if (arrMon[99]->setMonphai() == 3 || arrMon[99]->setMonphai() == 4)
		{
			atk = arr[99]->setDamage() * 1.2;
			atkmon = arrMon[99]->setDamage() * 0.8;
		}

		else if (arrMon[99]->setMonphai() == 7 || arrMon[99]->setMonphai() == 8)
		{
			atk = arr[99]->setDamage() * 0.8;
			atkmon = arrMon[99]->setDamage() * 1.2;
		}
	}
	else if (arr[99]->setMonphai() == 3 || arr[99]->setMonphai() == 4)
	{
		if (arrMon[99]->setMonphai() == 9 || arrMon[99]->setMonphai() == 10)
		{
			atk = arr[99]->setDamage() * 1.2;
			atkmon = arrMon[99]->setDamage() * 0.8;
		}

		else if (arrMon[99]->setMonphai() == 1 || arrMon[99]->setMonphai() == 2)
		{
			atk = arr[99]->setDamage() * 0.8;
			atkmon = arrMon[99]->setDamage() * 1.2;
		}
	}
	else if (arr[99]->setMonphai() == 5 || arr[99]->setMonphai() == 6)
	{
		if (arrMon[99]->setMonphai() == 7 || arrMon[99]->setMonphai() == 8)
		{
			atk = arr[99]->setDamage() * 1.2;
			atkmon = arrMon[99]->setDamage() * 0.8;
		}

		else if (arrMon[99]->setMonphai() == 9 || arrMon[99]->setMonphai() == 10)
		{
			atk = arr[99]->setDamage() * 0.8;
			atkmon = arrMon[99]->setDamage() * 1.2;
		}
	}
	else if (arr[99]->setMonphai() == 7 || arr[99]->setMonphai() == 8)
	{
		if (arrMon[99]->setMonphai() == 1 || arrMon[99]->setMonphai() == 2)
		{
			atk = arr[99]->setDamage() * 1.2;
			atkmon = arrMon[99]->setDamage() * 0.8;
		}

		else if (arrMon[99]->setMonphai() == 5 || arrMon[99]->setMonphai() == 6)
		{
			atk = arr[99]->setDamage() * 0.8;
			atkmon = arrMon[99]->setDamage() * 1.2;
		}
	}
	else if (arr[99]->setMonphai() == 9 || arr[99]->setMonphai() == 10)
	{
		if (arrMon[99]->setMonphai() == 5 || arrMon[99]->setMonphai() == 6)
		{
			atk = arr[99]->setDamage() * 1.2;
			atkmon = arrMon[99]->setDamage() * 0.8;
		}

		else if (arrMon[99]->setMonphai() == 3 || arrMon[99]->setMonphai() == 4)
		{
			atk = arr[99]->setDamage() * 0.8;
			atkmon = arrMon[99]->setDamage() * 1.2;
		}
	}

	cout << "\nSat thuong cua nhan vat A gay ra cho B " << atk;
	cout << "\nSat thuong cua quai vat B gay ra cho A " << atkmon;


	

	return 0;
}

