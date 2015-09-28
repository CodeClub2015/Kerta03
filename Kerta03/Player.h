#pragma once
#include <string>
// ostreamia varten
#include <ostream>
class Player
{
private:
	std::string name;
	int damage;
	int hp;
public:
	Player(std::string n, int dmg, int hp);
	~Player();
	void setHp(int hp);
	int getHp();
	// sama homma muille 
	void setDamage(int dmg);
	int getDamage();
	void setName(std::string name);
	std::string getName();

	// tulostus
	void print();

	// kotiteht�vi� ":D"
	bool isAlive(); // ts. onko > 0 hp j�ljell�
	// v�henn� toisen pelaajan hp:sta damagen verra
	void attack(Player other);

	// tulostus erill� lailla
	friend std::ostream& operator<<(std::ostream& out, Player& obj) {
		// t�ss� tilanteessa out voi olla esim. std::cout
		out << "HP: " << obj.getHp() << " Name: " << obj.getName() << std::endl;
		return out;
	}
};


