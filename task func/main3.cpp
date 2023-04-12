
//А) Торговец из Мартона попросил вас помочь автоматизировать работу его магазина написав программу.
//Пользователь может ввести 3 слова: «меч», «щит» и «броня», а программа вызывает функции,
//которые снимают с его счета монеты и информируют покупателя о приобретенном товаре и остатке денег в кошельке.

#include <iostream>

using namespace std;

int Buy(int cost, int balance);
struct Hero {
	string armor = "none";
	string weapon = "none";
	string shield = "none";
	int balance;
};

int main()
{	
	Hero hero1;
	cout << "Wrtie amount of your balance: ";
	cin >> hero1.balance;

	system("cls");
	
	cout << "Balance: " << hero1.balance << endl;

	string option;
	char flag;

	string weaponShop[3] = {
		"sword", "shield", "armor"
	};

	cout << "\nYour total balance is: " << hero1.balance << endl;
	cout << "Do you wanna go to weapon shop? (y/n): ";
	cin >> flag;

	if (flag == 'y') {
		cout << "\nWeapon Shop has: ";
		for (int i = 0; i < 3; i++) {
			cout <<"\t[ " << weaponShop[i] << " ]";
		}
		cout << "\t[ exit ]" << endl;
		cout << "\nWrite [ exit ] if you wanna go away from weapon shop.";
		cout << endl;

		for (int i = 0; i < 3; i++) {

			cout << "\nWrite item you wanna buy: ";
			cin >> weaponShop[i];

			if (weaponShop[i] == "sword") {
				hero1.balance = Buy(30, hero1.balance);
				hero1.weapon = "sword";
				cout << "\nYour current balance is: " << hero1.balance << endl;
			}

			else if (weaponShop[i] == "shield") {
				hero1.balance = Buy(120, hero1.balance);
				hero1.shield = "shield";
				cout << "\nYour current balance is: " << hero1.balance << endl;
			}

			else if (weaponShop[i] == "armor") {
				hero1.balance = Buy(150, hero1.balance);
				hero1.armor = "armor";
				cout << "\nYour current balance is: " << hero1.balance << endl;
			}
			else if (weaponShop[i] == "exit") {
				i = 3;
			}
			else {
				cout << "Invalid item. Please choose from the list." << endl;
				i--;
			}
		}
	}
	
	cout << "\n- - - -Your total balance is: " << hero1.balance << " - - - -" << endl;

	cout << endl << "Do you wanna watch your statistics ?\t (y/n):";
	cin >> flag;
	
	if (flag == 'y') {
		for (int i = 0; i < 1; i++) {
			cout << "\nArmor: " << hero1.armor << endl;
			cout << "Shield: " << hero1.shield << endl;
			cout << "Weapon: " << hero1.weapon << endl;
			cout << "Balance: " << hero1.balance << endl;
		}
	}
	else {
		cout << "Good luck Hero!" << endl;
	}
	
}

int Buy(int cost, int balance) {
	if (balance < cost) {
		cout << "\nYou dont have enough money to buy this item!" << endl;
		return balance;
	}
	else {
		int purchase = balance - cost;
		return purchase;
	}
	
}

