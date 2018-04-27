#include <iostream>
#include <iomanip>
using namespace std;
/*4. Create an employee class, basing it on Exercise 4 of Chapter 4. The member data should
comprise an int for storing the employee number and a float for storing the employee’s
compensation. Member functions should allow the user to enter this data and display it.
Write a main() that allows the user to enter data for three employees and display it.*/
class emp {
    private :
        int emp_num ;
        float emp_comp ;
    public :
        void enter_data (){
            cout <<"Enter employee number"<< endl ;
            cin >> emp_num ;
            cout << "Enter employee’s compensation "<< endl ;
            cin >> emp_comp ;
            }
        void display_data () {
            cout << setw(15) << "employee number" << setw(30) << "employee’s compensation" << endl ;
            cout << setw(15) << emp_num      << setw(30) << emp_comp << endl ;
            }



        };



int main()
{
    emp emp1 ;
    emp emp2 ;
    emp emp3 ;
        emp1.enter_data () ;
        emp2.enter_data () ;
        emp3.enter_data () ;
        emp1.display_data () ;
        emp2.display_data () ;
        emp3.display_data () ;
    return 0;
}
