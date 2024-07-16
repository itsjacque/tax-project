#include <iostream>
#include <string>
using namespace std;

int main ()
{
// declaring variables 
    string Name;
    double TaxableIncome;
    double Tax;
    string Occupation; 
    int Children; 

  // starting thhe code and getting the user inputs
    cout << "Name: ";
    getline (cin, Name);
    if (Name.empty())
    {  
        cout << "---" << endl;
        cout << "You must enter a name" << endl;
        return 0;
    } 
   
  
    //taxable income code (printing outputs and grabbing inputs)
    cout << "Taxable Income: ";
    cin >> TaxableIncome;
  
      if (TaxableIncome < 0)
    {
      cout << "---" << endl;
      cout << "The taxable income must not be negative" << endl;
      return 0;
    }
    
  cin.ignore (10000, ('\n'));
  

  // occupation (printing outputs and grabbing inputs)
    cout << "Occupation: ";
    getline (cin, Occupation); 
  
      if (Occupation.empty() )
    {
      cout << "---" << endl;
      cout << "You must enter an occupation" << endl ;
      return 0;
    }
  
  // children (printing outputs and grabbing inputs)
    cout << "Number of Children: "; 
    cin >> Children;
     if (Children < 0)
    {
      cout << "---" << endl;
      cout << "The number of children must not be negative" << endl;
      return 0;
    }
 cout << "---" << endl;

// coding the tax calculator (printing outputs and grabbing inputs)
  
if (TaxableIncome <= 55000 ) {
     Tax = (TaxableIncome * .04)- (Children*200) ;
    cout.setf(ios::fixed);
    cout.precision(2);
    if (Tax < 0){
        Tax = 0;
        cout << Name << " would pay $" << Tax << endl;
    } else
    cout << Name << " would pay $" << Tax << endl;
} else if (TaxableIncome <= 125000) {

    if ((TaxableIncome <= 125000) && ((Occupation == "nurse") || (Occupation == "teacher"))){
    Tax = (((55000 * .04)+ ((TaxableIncome -55000)*.05))- (Children*200));
    cout.setf(ios::fixed);
    cout.precision(2);
     if (Tax < 0){
        Tax = 0;
    } else
    cout << Name << " would pay $" << Tax << endl;
  } else 
  {
     Tax = (((55000 * .04)+((TaxableIncome - 55000)*.07))- (Children*200) );
    cout.setf(ios::fixed);
    cout.precision(2);
     if (Tax < 0){
        Tax = 0;
    } else
    cout << Name << " would pay $" << Tax << endl;
  }
  } else if (TaxableIncome > 125000){
    if (Occupation == "nurse" || Occupation == "teacher"){
    Tax = ((55000 * .04)+ ((70000)* .05) + ((TaxableIncome - 125000)* .093));
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << Name << " would pay $" << Tax << endl;
    } else {
    Tax = ((55000 * .04)+ ((70000)* .07) + ((TaxableIncome - 125000)* .093));
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << Name << " would pay $" << Tax << endl;
    }
    
  }
}

