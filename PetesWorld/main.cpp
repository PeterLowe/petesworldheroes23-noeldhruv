// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// Noel
// Dhruv dagar
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to B or Z to Y" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0;
		}
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}

	if (letter == 'b' || letter == 'B')
	{
		if (region == 1)
		{
			std::cout << "Bermuda, Brazil\n";
		}
		if (region == 2)
		{
			std::cout << "Belarus, Belgium, Bonsnia, Bulgaria\n";
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi";
		}
		if (region == 4)
		{
			std::cout << "Bangladesh, Bhutan, Brunei";
		}
		if (region == 5)
		{
			std::cout << "Barbados";
		}

	}


	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	if (letter == 'y' || letter == 'Y')
	{
		if (region == 1)
		{
			std::cout << "There are no Y in the America" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe" << std::endl;

		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa " << std::endl;

		}
		if (region == 4)
		{
			std::cout << "Yemen Arabian Peninsula, Middle East" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "there is no Ys in rest of the world" << std::endl;
		}
	}


	
	
	
	
	return 1;
}