#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string employeeName;
    float basicSalary;

public:
    Employee(string name, float salary)
    {
        employeeName = name;
        basicSalary = salary;
    }

    float calculateHRA()
    {
        return basicSalary * 0.20;
    }

    float calculateDA()
    {
        return basicSalary * 0.10;
    }

    void displayGrossSalary()
    {
        float hra = calculateHRA();
        float da = calculateDA();
        float grossSalary = basicSalary + hra + da;

        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main()
{
    string name;
    float salary;

    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter basic salary: ";
    cin >> salary;

    Employee e(name, salary);

    e.displayGrossSalary();

    return 0;
}