#include <iostream>
#include <string>
#include <vector>

//Stores the number and the word which is used to check when to add the word
struct Map 
{ 
	int first;
	std::string second;
};

void FizzBuzz(int Number, std::vector<Map> FizzBuzz)
{
	//Make the output string which we print at the end
	std::string output = " ";

	//Loop through all the FizzBuzz structs
	for (int i = 0; i < FizzBuzz.size(); i++)
	{
		//If the current number modules the stored number == 0 add the word 
		if (Number % FizzBuzz[i].first == 0) { output += FizzBuzz[i].second; }
	}
	//If no words were added add the number instead
	if (output == " ") { output += std::to_string(Number); }

	output += "\n";
	printf(output.c_str());
}

int main()
{
	//Initialize the values and add them to the vector
	std::vector<Map> FizzBuzzWhenInt;
	FizzBuzzWhenInt.push_back(Map{ 3, "Fizz" });
	FizzBuzzWhenInt.push_back(Map{ 5, "Buzz" });

	//Loop through numbers 1 to 100
	for (int i = 1; i <= 100; i++) 
	{
		FizzBuzz(i, FizzBuzzWhenInt);
	}
}
