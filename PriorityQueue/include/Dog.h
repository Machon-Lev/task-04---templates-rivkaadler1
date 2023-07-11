#pragma once
#include <iostream>
#include <string>

using std::string; 
using std::ostream;

/**
 * @brief Represents a Dog with age, weight, and name.
 */
class Dog
{
	
public:
	/**
 * @brief Constructs a Dog object.
 * @param age The age of the dog.
 * @param weight The weight of the dog.
 * @param name The name of the dog.
 */
	Dog(int age, int weight, string name);
	/**
   * @brief Retrieves the age of the dog.
   * @return The age of the dog.
   */
	int getAge() const;
	/**
  * @brief Retrieves the weight of the dog.
  * @return The weight of the dog.
  */
	int getWeight() const;
	/**
	* @brief Retrieves the name of the dog.
	* @return The name of the dog.
	*/
	string getName()const;

private:
	int _age;
	int _weight;
	string _name;
};

/**
 * @brief Overloaded stream insertion operator for printing a Dog object.
 * @param os The output stream.
 * @param d The Dog object to be printed.
 * @return The modified output stream.
 */
ostream& operator<< (ostream& os, Dog d);

/**
 * @brief Overloaded subtraction operator for performing a custom operation on Dog objects.
 * @param lhs The left-hand side Dog object.
 * @param rhs The right-hand side Dog object.
 * @return The result of the custom operation on Dog objects.
 */
Dog operator-(const Dog& lhs, const Dog& rhs);


/**
 * @brief Overloaded less-than operator for comparing a Dog object with an integer.
 * @param lhs The left-hand side Dog object.
 * @param rhs The right-hand side integer.
 * @return True if the age of the Dog is less than the provided integer, false otherwise.
 */
bool operator<(const Dog& lhs, const int rhs);
