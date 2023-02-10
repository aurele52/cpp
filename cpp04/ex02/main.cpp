#include "main.hpp"
int main( void )
{
	const Animal* animal = new Animal();
	animal->makeSound(); //will output the animal sound
	delete animal;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
	std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
	cat->makeSound(); //will output the cat sound! (not the Animal)
	dog->makeSound(); //will output the dog sound! (not the Animal)

	std::cout << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl;
	wrong_cat->makeSound();
	wrong_animal->makeSound();

	std::cout << std::endl;
	delete dog;
	delete cat;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	delete wrong_cat;
	delete wrong_animal;
}
