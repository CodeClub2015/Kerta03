#include "Player.h"

#include <iostream>
Player::Player(std::string name, int dmg, int hp)
	: name(name), damage(dmg), hp(hp)
{
}


Player::~Player()
{
}
// voidaan asettaa ulkopuolelta hp
void Player::setHp(int hp) {
	// viitataan meidän omaan hp muuttujaan
	// tarvitaan this->hp koska
	// muuttujat ovat saman nimisiä
	this->hp = hp;
}
// saadaan ulkopuolelta hp
int Player::getHp() {
	// sama kuin return this->hp
	return hp;
}

void Player::setDamage(int dmg) {
	// ei tarvita this->damage koska
	// muuttujat on erinimisiä
	damage = dmg;
}
int Player::getDamage() {
	return damage;
}

void Player::setName(std::string name) {
	// koska taas saman niminen muuttuja
	this->name = name;
}
std::string Player::getName() {
	return name;
}

void Player::print() {
	std::cout << "Nimi: " << name << std::endl;
	std::cout << "Damage: " << damage << std::endl;
	std::cout << "HP: " << hp << std::endl;
	// sama kuin ylin rivi
	//std::cout << "Nimi: " << getName() << std::endl;
}
