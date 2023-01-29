#include <iostream>
#include<iomanip>
using namespace std;

char Name[100]; //defined global variable for name of student
int CLASS; //defined global variable for class of student
int Marks_eng; //defined gloabl variable for marks in english subject
int Marks_sci; //defined gloabl variable for marks in science subject
int Marks_sst; //defined gloabl variable for marks in sst subject
int Marks_maths; //defined gloabl variable for marks in maths subject
int Marks_hindi; //defined gloabl variable for marks in hindi subject
int Marks_addl; //defined gloabl variable for marks in additional subject
string engGrade; //defined global variable for english grade
string mathGrade; //defined global variable for maths grade 
string sciGrade; //defined global variable for science grade
string sstGrade; //defined global variable for sst grade 
string hindiGrade; //defined global variable for hindi grade
string addlGrade; //defined global variable for additional grade


// Function for input of name
void name(){
    cout<<"Enter name of the student : ";
    gets(Name);
    return;
}

// Function for input of class
void Class(){
    cout<<"Enter class of the student : ";
    cin>>CLASS;
    return;
}

// FUNCTION FOR ENGLISH GRADE
void ENGLISHGRADE(int Marks_eng){
    if(Marks_eng>=90){
        engGrade="A+";
    }
    else if(Marks_eng>=80 && Marks_eng<90){
        engGrade="A";
    }
    else if(Marks_eng>=70 && Marks_eng<80){
        engGrade="B";
    }
    else if(Marks_eng>=60 && Marks_eng<70){
        engGrade="C";
    }
    else if(Marks_eng>=50 && Marks_eng<60){
        engGrade="D";
    }
    else if(Marks_eng>=40 && Marks_eng<50){
        engGrade="E";
    }
    else{
        engGrade="F";
    }
    return;
}

// FUNCTION FOR MATHS GRADE
void MATHGRADE(int Marks_maths){
    if(Marks_maths>=90){
        mathGrade="A+";
    }
    else if(Marks_maths>=80 && Marks_maths<90){
        mathGrade="A";
    }
    else if(Marks_maths>=70 && Marks_maths<80){
        mathGrade="B";
    }
    else if(Marks_maths>=60 && Marks_maths<70){
        mathGrade="C";
    }
    else if(Marks_maths>=50 && Marks_maths<60){
        mathGrade="D";
    }
    else if(Marks_maths>=40 && Marks_maths<50){
        mathGrade="E";
    }
    else{
        mathGrade="F";
    }
    return;
}

// FUNTION FOR SCIENCE GRADE
void SCIENCEGRADE(int Marks_sci){
    if(Marks_sci>=90){
        sciGrade="A+";
    }
    else if(Marks_sci>=80 && Marks_sci<90){
        sciGrade="A";
    }
    else if(Marks_sci>=70 && Marks_sci<80){
        sciGrade="B";
    }
    else if(Marks_sci>=60 && Marks_sci<70){
        sciGrade="C";
    }
    else if(Marks_sci>=50 && Marks_sci<60){
        sciGrade="D";
    }
    else if(Marks_sci>=40 && Marks_sci<50){
        sciGrade="E";
    }
    else{
        sciGrade="F";
    }
    return;
}

// FUNCTION FOR SST GRADE
void SSTGRADE(int Marks_sst){
    if(Marks_sst>=90){
        sstGrade="A+";
    }
    else if(Marks_sst>=80 && Marks_sst<90){
        sstGrade="A";
    }
    else if(Marks_sst>=70 && Marks_sst<80){
        sstGrade="B";
    }
    else if(Marks_sst>=60 && Marks_sst<70){
        sstGrade="C";
    }
    else if(Marks_sst>=50 && Marks_sst<60){
        sstGrade="D";
    }
    else if(Marks_sst>=40 && Marks_sst<50){
        sstGrade="E";
    }
    else{
        sstGrade="F";
    }
    return;
}

// function for hindi grade
void HINDIGRADE(int Marks_hindi){
    if(Marks_hindi>=90){
        hindiGrade="A+";
    }
    else if(Marks_hindi>=80 && Marks_hindi<90){
        hindiGrade="A";
    }
    else if(Marks_hindi>=70 && Marks_hindi<80){
        hindiGrade="B";
    }
    else if(Marks_hindi>=60 && Marks_hindi<70){
        hindiGrade="C";
    }
    else if(Marks_hindi>=50 && Marks_hindi<60){
        hindiGrade="D";
    }
    else if(Marks_hindi>=40 && Marks_hindi<50){
        hindiGrade="E";
    }
    else{
        hindiGrade="F";
    }
    return;
}

// FUNCTION FOR ADDITIONAL GRADE
void ADDLGRADE(int Marks_addl){
    if(Marks_addl>=90){
        addlGrade="A+";
    }
    else if(Marks_addl>=80 && Marks_addl<90){
        addlGrade="A";
    }
    else if(Marks_addl>=70 && Marks_addl<80){
        addlGrade="B";
    }
    else if(Marks_addl>=60 && Marks_addl<70){
        addlGrade="C";
    }
    else if(Marks_addl>=50 && Marks_addl<60){
        addlGrade="D";
    }
    else if(Marks_addl>=40 && Marks_addl<50){
        addlGrade="E";
    }
    else{
        addlGrade="F";
    }
    return;
}

// Function for input of marks for students in classes 1 to 10
void Marks_Primary(){
    // English marks
    cout<<"Enter marks in English : ";
    cin>>Marks_eng;
    if(Marks_eng<0 || Marks_eng>100){
        cout<<"INVALID ENTRY"<<endl;
    }
    else{
        ENGLISHGRADE(Marks_eng);
    }
    // maths marks
    cout<<"Enter marks in Mathematics : ";
    cin>>Marks_maths;
    if(Marks_maths<0 || Marks_maths>100){
        cout<<"INVALID ENTRY"<<endl;
    }
    else{
        MATHGRADE(Marks_maths);
    }
    // science marks
    cout<<"Enter marks in Science : ";
    cin>>Marks_sci;
    if(Marks_sci<0 || Marks_sci>100){
        cout<<"INVALID ENTRY"<<endl;
    }
    else{
        SCIENCEGRADE(Marks_sci);
    }
    // sst marks
    cout<<"Enter marks in Social Studies : ";
    cin>>Marks_sst;
    if(Marks_sst<0 || Marks_sst>100){
        cout<<"INVALID ENTRY"<<endl;
    }
    else{
        SSTGRADE(Marks_sst);
    }
    // hindi marks
    cout<<"Enter marks in Hindi : ";
    cin>>Marks_hindi;
    if(Marks_hindi<0 || Marks_hindi>100){
        cout<<"INVALID ENTRY"<<endl;
    }
    else{
        HINDIGRADE(Marks_hindi);
    }
    // addl marks
    cout<<"Enter marks in Additional : ";
    cin>>Marks_addl;
    if(Marks_addl<0 || Marks_addl>100){
        cout<<"INVALID ENTRY"<<endl;
    }
    else{
        ADDLGRADE(Marks_addl);
    }
    return;
}

// Function to determine pass of fail
void Pass_Fail(){
    int Total=(Marks_eng + Marks_maths + Marks_sci + Marks_sst + Marks_hindi + Marks_addl);
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

// Function to make table
void rcardpri(){
    cout<<"Name: "<<Name<<endl;
    cout<<"Class: "<<CLASS<<endl;
    cout<<left<<setw(40)<<"SUBJECT"<<left<<setw(40)<<"MARKS"<<left<<setw(10)<<"GRADE"<<endl;
    cout<<left<<setw(40)<<"ENGLISH"<<left<<setw(40)<<Marks_eng<<left<<setw(10)<<engGrade<<endl;
    cout<<left<<setw(40)<<"MATHEMATICS"<<left<<setw(40)<<Marks_maths<<left<<setw(10)<<mathGrade<<endl;
    cout<<left<<setw(40)<<"SCIENCE"<<left<<setw(40)<<Marks_sci<<left<<setw(10)<<sciGrade<<endl;
    cout<<left<<setw(40)<<"SOCIAL STUDIES"<<left<<setw(40)<<Marks_sst<<left<<setw(10)<<sstGrade<<endl;
    cout<<left<<setw(40)<<"HINDI"<<left<<setw(40)<<Marks_hindi<<left<<setw(10)<<hindiGrade<<endl;
    cout<<left<<setw(40)<<"ADDITONAL"<<left<<setw(40)<<Marks_addl<<left<<setw(10)<<addlGrade<<endl;
    cout<<endl;
    Pass_Fail();
    return;
}

int main(){
    name();
    Class();
    if(CLASS>=1 && CLASS<=10){
        Marks_Primary();
        rcardpri();
    }
    else{
        cout<<"INVALID ENTRY"<<endl;
    }
    return 0;
}