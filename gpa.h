#include<iostream>
using namespace std;
const int size=6;

double pointsincourse(float arr, int ch){
	double agpa;
	agpa=arr*ch;
	return agpa;
	
}

double calGPA(float aa[],int tch){
	double gpa,fgpa;
	for(int i=0;i<size;i++){
		gpa=gpa+aa[i];
	}
	
	fgpa=gpa/tch;
	return fgpa;
	
}

void calculatecgpa(double x){
	int s;
	cout<<"Enter your semester number: ";
	cin>>s;
	float gpa, cgpa;
	for(int i=1;i<s;i++){
		cout<<"Enter your GPA in semester "<<i<<" : ";
		cin>>gpa;
		cgpa=cgpa+gpa;
	}
	cgpa=cgpa+x;
	cout<<"Your CPGA is: "<< cgpa/s;
	
}

void inputmarks(){
	int ch,tch;
	float cgpa[size], arr[size],pic;
	double gpa;
	cout<<"Enter marks for " <<size<<" subjects: "<<endl;
	for(int i=0 ;i<size;i++){
		cout<<"Subject "<<i+1<<" grade in numbers: ";
		cin>>arr[i];
		cout<<"Enter credit hour: ";
		cin>>ch;
		tch=tch+ch;
		pic=pointsincourse(arr[i],ch);
		cgpa[i]=pic;
		cout<<endl;
	}
	
	gpa=calGPA(cgpa,tch);
	cout<<"Your GPA is : "<<gpa<<endl;	
	calculatecgpa(gpa);
}


