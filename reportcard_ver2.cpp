#include <iostream>
#include<iomanip>
using namespace std;

// defined global variables for various inputs
char Name[100]; 
int Marks_addl; 
int CLASS; 
int Marks_eng; 
int Marks_sci; 
int Marks_sst; 
int Marks_maths; 
int Marks_hindi;
int marksinput[6];
string gradesinput[6];
string GRADE; 
string engGrade; 
string mathGrade; 
string sciGrade; 
string sstGrade;
string hindiGrade; 
string addlGrade; 

// Function for input of name
void name(){
    cout<<"Enter name of the student : ";
    gets(Name);
    return;
}

// Function to tell pass or fail
void Pass_Fail(){
    int Total=(Marks_eng+Marks_maths+Marks_sci+Marks_sst+Marks_hindi+Marks_addl);
    int pcent=Total/6;
    cout<<"TOTAL PERCENTAGE : "<<pcent<<"%"<<endl;
    if(pcent<40){
        cout<<"RESULT : FAIL"<<endl;
    }
    else{
        cout<<"RESULT : PASS"<<endl;
    }
    return;
}

// Function to input marks and grade and print table
void Marks_Primary(){
    cout<<"ENTER ENLISH MARKS : ";
    cin>>Marks_eng;
    cout<<"ENTER MATHEMATICS MARKS : ";
    cin>>Marks_maths;
    cout<<"ENTER SCIENCE MARKS : ";
    cin>>Marks_sci;
    cout<<"ENTER SOCIAL STUDIES MARKS : ";
    cin>>Marks_sst;
    cout<<"ENTER HINDI MARKS : ";
    cin>>Marks_hindi;
    cout<<"ENTER ADDITIONAL MARKS : ";
    cin>>Marks_addl;
    // array for marks and subjects
    int marksinput[6]={Marks_eng, Marks_maths, Marks_sci, Marks_sst, Marks_hindi, Marks_addl};
    string subj[6]={"ENGLISH", "MATHEMATICS", "SCIENCE", "SOCIAL STUDIES", "HINDI", "ADDITIONAL"};
    // code bit for begining of report card
    cout<<"Name: "<<Name<<endl<<"Class: "<<CLASS<<endl<<left<<setw(40)<<"SUBJECT"<<left<<setw(40)<<"MARKS"<<left<<setw(10)
    <<"GRADE"<<endl;
    // loop for determining grade
    for(int i=0; i<=5; i++){
        if(marksinput[i]>=90 && marksinput[i]<=100){
            GRADE="A+";
        }
        else if(marksinput[i]>=80 && marksinput[i]<90){
            GRADE="A";
        }
        else if(marksinput[i]>=70 && marksinput[i]<80){
            GRADE="B";
        }
        else if(marksinput[i]>=60 && marksinput[i]<70){
            GRADE="C";
        }
        else if(marksinput[i]>=50 && marksinput[i]<60){
            GRADE="D";
        }
        else if(marksinput[i]>=40 && marksinput[i]<50){
            GRADE="E";
        }
        else if(marksinput[i]>=0 && marksinput[i]<40){
            GRADE="F";
        }
        else{
            cout<<"INVALID VALUE OF "<<subj[i]<<" MARKS"<<endl;
            Marks_Primary();
        }
        // array for grades
        string gradesinput[6];
        for(int j=0; j<=5; j++){
            gradesinput[j]=GRADE;
        }
        // code part to make table
        cout<<left<<setw(40)<<subj[i]<<left<<setw(40)<<marksinput[i]<<left<<setw(10)<<gradesinput[i]<<endl;
    }
    Pass_Fail();
    return;
}

// Function for input of class
void Class(){
    cout<<"Enter class of the student : ";
    cin>>CLASS;
    if(CLASS>=1 && CLASS<=10){
        Marks_Primary();
    }
    else{
        cout<<"INVALID ENTRY"<<endl;
        Class();
    }
    return;
}

int main(){
    name();
    Class();
    return 0;
}