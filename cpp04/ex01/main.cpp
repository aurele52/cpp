#include "main.hpp"
int main( void )
{
//	const Animal* animal = new Animal();
//	const Animal* dog = new Dog();
//	const Cat* cat = new Cat();


	Cat doug;
	Cat boug;
	boug = doug;
	std::cout << boug.getBrain()->getIdeas(10);
	/*
	std::cout << std::endl;
	std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
	std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
	cat->makeSound(); //will output the cat sound! (not the Animal)
	dog->makeSound(); //will output the dog sound! (not the Animal)
	animal->makeSound(); //will output the animal sound

	std::cout << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl;
	wrong_cat->makeSound();
	wrong_animal->makeSound();

	std::cout << std::endl;
	delete animal;
	delete dog;
	delete cat;
	delete wrong_cat;
	delete wrong_animal;

	const Animal	*lol[100];

	for (int i = 0; i < 100;)
	{
		lol[i++] = new Dog;
		lol[i++] = new Cat;
	}
	std::cout << *lol[45] << std::endl;
	for (int i = 0; i < 100;)
		delete lol[i++];
	*/	

}
