#include "iostream"
#include "string"
#include "chrono"
#include "thread"

using namespace std;
void lovedeep();

void lovedeep()

{

 float marksReceived = 0;
 float totalMarksAvailable = 0;
  double gradePercentage = 0;             

   cout<<" Enter the Received Marks "<<endl;
   cin>>marksReceived;
   cout<<"Enter the Total Marks "<<endl;
   cin>>totalMarksAvailable;
   gradePercentage= (marksReceived/totalMarksAvailable)*100;
   cout << "You achieved a grade of: " << gradePercentage << "%" << endl;
  
}

void joke();

void joke()


  { cout<< "What’s the best thing about Switzerland?"<<endl;
    cout<<  "I don’t know, but the flag is a big plus."<<endl;
  } 
void canada();

void canada()
{
     for (int s=0; s<10; s++)
         cout<<s<<endl;
}
 int main()

 {
    cout << "Welcome to the function machine!" << endl;
    cout << "================================" << endl;
    cout << endl;
    cout << "Enter a number to select the program you want to run:" << endl;
    cout << endl;
    cout << "1: Calculate your grade on a test" << endl;
    cout << "2: Tell me a joke" << endl;
    cout << "3: Count to 10" << endl;
    cout << "Any other key: Exit" << endl;

    int selection;
    cin >> selection;

    if (cin.fail() || selection < 1 || selection > 3) {
        cout << endl;
        cout << "Have a nice day, goodbye!" << endl;
        return 0;
    }

  if(selection == 1)

    {
  lovedeep();

        
    }
    
    
     else if(selection == 2)
     
      {
        int Name;
                    
        cout<<" Write your Name "<<endl;
        cin>>Name;

     joke();  
     
     } 
    
    
    else 
    
    {
        int count;
        canada(); 
    }

    return 0;
}