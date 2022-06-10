#include "Game.h"

void Info::input()
{
	cin.ignore();
	cin.getline(name, 20);

	cout << "\nNhap mon phai: ";
	cout << "\nKim: ";
	cout << "\n1. Thieu Lam   2. Thien Vuong Bang ";
	cout << "\nMoc: ";
	cout << "\n3. Ngu Doc Giao   4. Duong Mon ";
	cout << "\nThuy: ";
	cout << "\n5. Nga My   6. Thuy Yen Mon ";
	cout << "\nHoa: ";
	cout << "\n7. Cai Bang   8. Thien Nhan Giao ";
	cout << "\nTho: ";
	cout << "\n9. Con Lon   10. Vo Dang "<<endl;
	cin >> monphai;

	cout << "\nNhap cap do ";
	cin >> level;
}

void Info::output()
{
	switch (monphai)
	{
	case 1:

		cout << "Thieu Lam";
		break;

	case 2:

		cout << "Thien Vuong Bang";
		break;

	case 3:

		cout << "Ngu Doc Giao";
		break;

	case 4:

		cout << "Duong Mon";
		break;

	case 5:

		cout << "Nga My";
		break;

	case 6:

		cout << "Thuy Yen Mon";
		break;

	case 7:

		cout << "Cai Bang";
		break;

	case 8:

		cout << "Thien Nhan Giao";
		break;

	case 9:

		cout << "Con Lon";
		break;

	case 10:

		cout << "Vo Dang";
		break;
	}
	cout << "\nCap do: " << level;
	cout << "\nSat thuong: " << setDamage();
}

float Info::setDamage()
{
	return damage;
}

int Info::setMonphai()
{
	return monphai;
}

void Character::input()
{
	cout << "\nNhap ten nhan vat: ";
	Info::input();
}

void Character::output()
{
	cout << "\nTen nhan vat: " << name;
	cout << "\nMon phai: ";
	Info::output();

}

float Character::setDamage()
{
	return level * 5;
}

int Character::setMonphai()
{
	return monphai;
}

void BigMonster::input()
{
	cout << "\nNhap ten quai vat: ";
	Info::input();
}

void BigMonster::output()
{
	cout << "\nQuai vat dau linh ";
	cout << "\nTen quai vat: " << name;
	cout << "\nMon phai: ";

	Info::output();
}

int BigMonster::setMonphai()
{
	return monphai;
}

float BigMonster::setDamage()
{
	return level * 7;
}

void SmallMonster::input()
{
	cout << "\nNhap ten quai vat: ";
	Info::input();
}

int SmallMonster::setMonphai()
{
	return monphai;
}

void SmallMonster::output()
{
	cout << "\nQuai vat thong thuong ";
	cout << "\nTen quai vat: " << name;
	cout << "\nMon phai: ";

	Info::output();
}

float SmallMonster::setDamage()
{
	return level * 3;
}

