#include "inherit2.h"

class partTimeEmployee : public personType
{
public:
    /**
     * @brief Prints employee information
     */
    void print();

    /**
     * @brief Calculates pay
     * @return employee pay
     */
    double calculatePay();

    void setNameRateHours(string first, string last,
                          double rate, double hours);

    partTimeEmployee(string first, string last,
                     double rate, double hours);

    partTimeEmployee();

private:
    double payRate;
    double hoursWorked;
};
