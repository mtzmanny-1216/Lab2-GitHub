#ifndef H_PersonType
#define H_PersonType

#include <string>
using namespace std;

/**
 * @brief Person class
 */
class personType
{
public:
    /**
     * @brief Prints the name
     */
    void print() const;

    /**
     * @brief Sets the name
     * @param first first name
     * @param last last name
     */
    void setName(string first, string last);

    /**
     * @brief Gets the name
     * @param first first name
     * @param last last name
     */
    void getName(string& first, string& last);

    personType(string first, string last);
    personType();

private:
    string firstName;
    string lastName;
};

#endif
