#include <iostream>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	zob::ScavTrap st1("Derick");
	zob::ScavTrap st2("Rick");
	zob::ScavTrap st3(st1);
	std::cout << std::endl;


	std::cout << st1 << std::endl;
	std::cout << st2 << std::endl;
	std::cout << st3 << std::endl;
	std::cout << std::endl;

	st3 = st2;
	std::cout << st1 << std::endl;
	std::cout << st2 << std::endl;
	std::cout << st3 << std::endl;
	std::cout << std::endl;

	st1.rangedAttack("Bob");
	std::cout << st1 << std::endl;
	std::cout << st2 << std::endl;
	std::cout << std::endl;

	st1.meleeAttack("Bob");
	std::cout << st1 << std::endl;
	std::cout << st2 << std::endl;
	std::cout << std::endl;

	st1.takeDamage(3);
	std::cout << st1 << std::endl;
	std::cout << st2 << std::endl;
	std::cout << std::endl;

	st1.beRepaired(3);
	std::cout << st1 << std::endl;
	std::cout << st2 << std::endl;
	std::cout << std::endl;

	st1.takeDamage(1000);
	std::cout << st1 << std::endl;
	std::cout << st2 << std::endl;
	std::cout << std::endl;

	st1.beRepaired(1000);
	std::cout << st1 << std::endl;
	std::cout << st2 << std::endl;
	std::cout << std::endl;

	st1.challengeNewcomer();
	std::cout << st1 << std::endl;
	st1.challengeNewcomer();
	std::cout << st1 << std::endl;
	st1.challengeNewcomer();
	std::cout << st1 << std::endl;
	st1.challengeNewcomer();
	std::cout << st1 << std::endl;
	st1.challengeNewcomer();
	std::cout << st1 << std::endl;
	std::cout << std::endl;

	zob::FragTrap ft1("Derick");
	zob::FragTrap ft2("Rick");
	zob::FragTrap ft3(ft1);
	std::cout << std::endl;


	std::cout << ft1 << std::endl;
	std::cout << ft2 << std::endl;
	std::cout << ft3 << std::endl;
	std::cout << std::endl;

	ft3 = ft2;
	std::cout << ft1 << std::endl;
	std::cout << ft2 << std::endl;
	std::cout << ft3 << std::endl;
	std::cout << std::endl;

	ft1.rangedAttack("Bob");
	std::cout << ft1 << std::endl;
	std::cout << ft2 << std::endl;
	std::cout << std::endl;

	ft1.meleeAttack("Bob");
	std::cout << ft1 << std::endl;
	std::cout << ft2 << std::endl;
	std::cout << std::endl;

	ft1.takeDamage(3);
	std::cout << ft1 << std::endl;
	std::cout << ft2 << std::endl;
	std::cout << std::endl;

	ft1.beRepaired(3);
	std::cout << ft1 << std::endl;
	std::cout << ft2 << std::endl;
	std::cout << std::endl;

	ft1.takeDamage(1000);
	std::cout << ft1 << std::endl;
	std::cout << ft2 << std::endl;
	std::cout << std::endl;

	ft1.beRepaired(1000);
	std::cout << ft1 << std::endl;
	std::cout << ft2 << std::endl;
	std::cout << std::endl;

	ft1.vaulthunter_dot_exe("1");
	std::cout << ft1 << std::endl;
	ft1.vaulthunter_dot_exe("2");
	std::cout << ft1 << std::endl;
	ft1.vaulthunter_dot_exe("3");
	std::cout << ft1 << std::endl;
	ft1.vaulthunter_dot_exe("4");
	std::cout << ft1 << std::endl;
	ft1.vaulthunter_dot_exe("5");
	std::cout << ft1 << std::endl;
	std::cout << std::endl;

	return 0;
}