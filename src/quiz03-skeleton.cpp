#include <iostream>
using namespace std;

class Employee{
    protected:
        string name;
        double salary;
    public:
        static int employeeCount;
        Employee(string n, double s) {
        name = n;
        salary= s;
        employeeCount++;
        }
        virtual void displayInfo(){
            cout << "Employee Name: " << name << endl;
            cout << "Employee Salary: " << salary << endl;
        }
        static int showTotalEmployees(){
            return employeeCount;
        }
        virtual ~Employee() {
        // virtual destructor
        }
};
class Staff: public Employee{
    private:
        string department;
        void displayInfo() override {
            cout<< "Staff:"<<endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Salary: " << salary << endl;
        }
};
class Faculty: public Employee{
    private:
        string department;
        void displayInfo() override {
            cout<< "Faculty:"<<endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Salary: " << salary << endl;
        }
};
int main() {
    int n;
    cout<<"enter number of employees"<<endl;
    cin>>n;
    string t, name;
    int s,i;
    for (i=0; i<n; i++){
        cout<<"staff or faculty?";
        cin>>t;
        cout<<"name:";
        cin>>name;
        cout<<"salary:";
        cin>>s;
    };
    cout<<"input end"<<endl;
    for (i=0; i<n; i++){
        if (t=="staff"){
            Staff::displayInfo(){}
        }else if (t=="Faculty"){
            Faculty::displayInfo(){}
        }
    }
    cout<<"Total Employees Created:"<<Employee::showTotalEmployees()<<endl;
    return 0;
}