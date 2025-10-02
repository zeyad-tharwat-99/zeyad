#include<iostream>
#include<limits>
#include <cstdlib> // For rand() function
#include<ctime>
using namespace std;
int main(){
	int num;
       cout << "======================================" << endl;
    cout << "      Welcome to Sinai University     " << endl;
    cout << "======================================" << endl;
    cout << "         You are now in ABR SU Arish  " << endl;
    cout << "======================================" << endl;
    cout << endl;
    cout << "   What would you like to do today?   " << endl;
    cout << "--------------------------------------" << endl;
    cout << "  1 - Know the Academic Evaluation    " << endl;
    cout << "  2 - Course Registration             " << endl;
    cout << "  3 - Checking Grades                  " << endl;
    cout << "  4 - The Hours You Completed          " << endl;
    cout << "  5 - More About Sinai University      " << endl;
    cout << "  6 - Contact Support                " << endl;
    cout << "  7 - Log Out                          " << endl;
    cout << "--------------------------------------" << endl;
    cout << "   Please enter your choice (1-6):    ";
 cin>>num;
    if (num==1)
    {
    long long id;
   
while (true) {
        cout << "Please enter your ID: ";
        cin >> id;

        // Handle invalid input (e.g., letters instead of numbers)
        if (cin.fail()) {
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
            cout << "Invalid input! Please enter a valid numeric ID.\n";
            continue; // Restart the loop
        }

        if (id == 202302407) {
            cout << "Name of student is Zeyad Tharwat" << endl;
            cout << "ID: " << id << endl;
            cout << "GPA of student is 2.87" << endl;
            cout << "The CGPA of student is 2.5" << endl;
            break;
        } else if (id == 202405444) {
            cout << "Name of student is Ahmed Nasser" << endl;
            cout << "ID: " << id << endl;
            cout << "GPA of student is 0" << endl;
            cout << "The CGPA of student is 0" << endl;
            cout << "Warning: If this GPA continues, the student will be expelled." << endl;
            break;
        } else if (id == 202302371) {
            cout << "Name of student is Mohamed Ibrahim Fouad" << endl;
            cout << "ID: " << id << endl;
            cout << "GPA of student is 0" << endl;
            cout << "The CGPA of student is 0" << endl;
            break;
        } else if (id == 202307952) {
            cout << "Name of student is Alaa Elkashif" << endl;
            cout << "ID: " << id << endl;
            cout << "GPA of student is 3.9" << endl;
            cout << "The CGPA of student is 3.5" << endl;
            cout << "Congratulations: The student is ranked first among peers." << endl;
            break;
        }
         else if (id == 202104823) {
         cout << "Name of student is Omar Khaled" << endl;
         cout << "ID: " << id << endl;
         cout << "GPA of student is 3.4" << endl;
         cout << "The CGPA of student is 3.2" << endl;
        } else if (id == 202203712) {
        cout << "Name of student is Salma Ahmed" << endl;
        cout << "ID: " << id << endl;
        cout << "GPA of student is 2.1" << endl;
        cout << "The CGPA of student is 2.0" << endl;
        }
	    else if (id == 202307654) {
        cout << "Name of student is Youssef Mahmoud" << endl;
        cout << "ID: " << id << endl;
        cout << "GPA of student is 3.8" << endl;
        cout << "The CGPA of student is 3.6" << endl;
    }
       else if (id == 201801245) {
       cout << "Name of student is Nada Mostafa" << endl;
        cout << "ID: " << id << endl;
       cout << "GPA of student is 1.9" << endl;
       cout << "The CGPA of student is 2.1" << endl;
    }
    else if (id == 201902314) {
    cout << "Name of student is Karim Hossam" << endl;
    cout << "ID: " << id << endl;
    cout << "GPA of student is 3.0" << endl;
    cout << "The CGPA of student is 2.9" << endl;
    }

		 else {
            cout << "This ID is not found in the system." << endl;
            cout << "Try again." << endl;
        }
    }
}

 if (num==2)
{
    float cgpa;
    int maxHours;

    do {
        cout << "Enter your CGPA (0 - 4): ";
        cin >> cgpa;

        if (cgpa < 0 || cgpa > 4) {
            cout << "Invalid CGPA! Please enter a value between 0 and 4.\n";
        }
    } while (cgpa < 0 || cgpa > 4);

    if (cgpa < 2) {
        maxHours = 12;
    } else {
        maxHours = 18;
    }

    cout << "You can register for up to " << maxHours << " credit hours.\n";

    // Course list
    cout << "Available courses (with hours):\n";
    cout << "1- Linear Algebra (3 hours)\n";
    cout << "2- Calculus (4 hours)\n";
    cout << "3- Programming 1 (4 hours)\n";
    cout << "4- Data Structure (3 hours)\n";
    cout << "5- Programming 2 (4 hours)\n";
    cout << "6- Database (3 hours)\n";
    cout << "7- File Organization and Processing (3 hours)\n";
    cout << "8- Computer Architecture (3 hours)\n";
    cout << "9- Logic Design (3 hours)\n";
    cout << "10- Software Engineering (3 hours)\n";
    cout << "11- Introduction to Systems and Informatics (3 hours)\n";
    cout << "12- Parallel Processing (3 hours)\n";

    if (maxHours == 18) { // Extra courses for CGPA = 2
        cout << "13- Communication Skills (1 hour)\n";
        cout << "14- Technical Writing (3 hours)\n";
        cout << "15- Reading and Presentation Skills (2 hours)\n";
        cout << "16- Discrete Mathematics (4 hours)\n";
        cout << "17-it project 1 (2 hours)"<<endl;
        cout << "18-it project 2 (2 hours)"<<endl;
    }

    const int MAX_COURSES = 16;
    string selectedCourses[MAX_COURSES];
    int selectedHours[MAX_COURSES];

    int totalHours = 0, numCourses = 0;

    cin.ignore(); // Clear input buffer before taking course names

    while (totalHours < maxHours) {
        cout << "\nEnter course name: ";
        getline(cin, selectedCourses[numCourses]); // Allow multi-word course names

        cout << "Enter hours for " << selectedCourses[numCourses] << ": ";
        cin >> selectedHours[numCourses];

        if (cin.fail()) { // Check for invalid input (non-numeric)
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a valid number for hours.\n";
            continue;
        }

        if (totalHours + selectedHours[numCourses] > maxHours) {
            cout << "Error: You cannot exceed " << maxHours << " hours. Try again.\n";
            cin.ignore();
        } else {
            totalHours += selectedHours[numCourses];
            numCourses++;
            cin.ignore(); // Clear buffer before next course

            if (totalHours == maxHours) {
                cout << "\nRegistration Successful! You have registered for exactly " << maxHours << " hours.\n";
                break;
            }
        }
    }

    // Display registered courses
    cout << "\nYou have registered for the following courses:\n";
    for (int i = 0; i < numCourses; i++) {
        cout << "- " << selectedCourses[i] << " (" << selectedHours[i] << " hours)\n";
    }

  }
if (num == 3) {
    cout << "Please enter the number of courses:" << endl;
    int size;
    cin >> size;
    cin.ignore(); // To ignore the newline character left by cin

    string courses[size]; // Array to store course names

    // Input course names
    for (int i = 0; i < size; i++) {
        cout << "Enter the name of course " << (i + 1) << ":" << endl;
        getline(cin, courses[i]); // Store the full course name
    }

    // Display entered course names in order
    cout << "\nCourses entered:\n";
    for (int i = 0; i < size; i++) {
        cout << (i + 1) << "- " << courses[i] << endl;    }
cout << "==========================================" << endl;
cout << " Done! Your request has been processed." << endl;
cout << "------------------------------------------" << endl;
cout << " From 24 to 48 hours, please visit the site" << endl;
cout << "   to check your updated grades for this course." << endl;
cout << "==========================================" << endl;
} 
if(num==4)
{
	 int id;
    float cgpa;
    int earned_hours;

    // Seeding random number generator
    srand(time(0));

    cout << "Enter your Student ID: ";
    cin >> id;
    
    cout << "Enter your CGPA: ";
    cin >> cgpa;

    // Assigning random earned hours based on CGPA
    if (cgpa >= 3.5) {
        earned_hours = rand() % 20 + 100; // Between 100 and 119 hours
    } else if (cgpa >= 2.5) {
        earned_hours = rand() % 20 + 80;  // Between 80 and 99 hours
    } else if (cgpa >= 1.5) {
        earned_hours = rand() % 20 + 60;  // Between 60 and 79 hours
    } else {
        earned_hours = rand() % 20 + 30;  // Between 30 and 49 hours
    }

    // Display the student's details
    cout << "\n===================================" << endl;
    cout << "          Student Report         " << endl;
    cout << "===================================" << endl;
    cout << " ID: " << id << endl;
    cout << " CGPA: " << cgpa << endl;
    cout << " Earned Hours: " << earned_hours << " hours" << endl;
    cout << "===================================" << endl;

}
if (num == 5) {
    cout << "==========================================" << endl;
    cout << "         WELCOME TO SINAI UNIVERSITY " << endl;
    cout << "==========================================" << endl;
    cout << " Sinai University was established by presidential" << endl;
    cout << "   decree No. 363 in the year 2005, in accordance" << endl;
    cout << "   with the provisions of Law No. 101 (1992) for" << endl;
    cout << "   private universities. This law was later replaced" << endl;
    cout << "   by Law No. 12 (2009) regarding private and civil" << endl;
    cout << "   universities and its executive regulations, issued" << endl;
    cout << "   by Presidential Decree No. 302 (2010)." << endl;
    cout << "==========================================" << endl;
    cout << " Sinai University - A Place of Excellence & Innovation" << endl;
    cout << "==========================================" << endl;
}
if(num==6)
{
	    cout << "==============================================" << endl;
    cout << "        Contact Information ??              " << endl;
    cout << "==============================================" << endl;
    cout << "   Gmail:       @su.edu.eg                  " << endl;
    cout << "   Hotline:      19050                     " << endl;
    cout << "   Location:     Cairo, El Mokattam,       " << endl;
    cout << "                 Sama Resort, Behind Carrefour" << endl;
    cout << "==============================================" << endl;

	
	
}
if(num==7){
cout<<"thank you for visiting us"<<endl;
}
}