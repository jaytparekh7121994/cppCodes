#include <iostream>
using namespace std;

class Student 
{
    class Student *classptr; //How to use it have to check
    
    int roll_no;
    int birthdate;
    protected:
        char Subject_choosen[10][10];
    
    public:
        
        string name;    
        void setRollNo(int );
        int getRollNo();
        void display_name(){
            cout << "Name :"<<name <<endl;
        }
        
        Student()
		{
			name="NULL";
			roll_no=0;
			Subject_choosen[10][10]={};
		}
};

void Student::setRollNo(int d)
{
    if( d < 0 )
	{
        perror("%d is a negative number"); 
    }
            
    else
	{
        roll_no = d;
    }
}
        
int Student::getRollNo() 
{
        return roll_no;
}



class Subject : public Student
{
    public:
        int sel_row[10];
        int sel_col;
        char Subject_sel[10][10]= { "Maths", "Physics", "Chemistry", "Hindi", "Gujarati", "Marathi", "English"};
        void setSubject(int subjcode[ ])
        {   
            for (int i=0; i<8 ; i++)    // To pass the subject code eg; 0,1,2 or 2,1,3
            {
                sel_row[i]=subjcode[i]; 
            }
             /* for (int j=sel_r; j<8; j++)  // for selection of rows eg; Marathi,English,Gujarati
                {
                    for(int k=0; k<10 ;k++)
                    {
                        Subject_choosen[j][k] = Subject_sel[j][k]; // for selection of alphabets eg; M,A,R,A,T,H,I
                    }
                
                }
            */
                cout<<Subject_choosen[i]<<endl;
        }
        
        string getSubject()
        {
            string Subject123= Subject_choosen[5];
            return Subject123;
        }        
        
		
};

class Result: public Subject
{
	int marks;
	public:
		int getMarks();
		void setMarks(int );
		Result()
		{
			marks= 0;
		}
};


int Result::getMarks()
{
	return marks; 
}

void Result::setMarks(int data)
{
	if(data < 100 && data >0)
	{
		marks = data;
	}
	else
	{
		perror("Marks should be within 0-100\n");
	}
} 


int main()
{
    int subjcode[10]={3,5,1};
    Result stud1;
    stud1.name="Jay Parekh";
    stud1.setRollNo(140763);
    cout<<"Roll No:"<< stud1.getRollNo() << endl;
    stud1.display_name();
    stud1.setSubject(subjcode);
    stud1.setMarks(40);
    string array_catch = stud1.getSubject();
    cout << array_catch +":" << stud1.getMarks() << endl;
    return 0;
}


//Solve the problem. What if the student has more than one Subject
//Stud1 Must have Subjects choosen from the given list and then associate the marks of that subject with it
// Name: Jay Parekh 
//Roll No.: 140763
// Subject_choosen are Hindi, English and Marathi 
// Marks obtained Hindi: 50, English: 80, Marathi: 90