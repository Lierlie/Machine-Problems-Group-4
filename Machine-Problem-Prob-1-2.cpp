// MAchine Problem: Problem 1 // 

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int score1st=0, score2nd=0, score3rd=0, score4th=0,score5th=0,score6th=0,score7th=0,score8th=0,score9th=0,score10th=0, studentScore, count=0;
	int s,x=0,xx=0;
	string firstname[50],lastname[50];
	float FinalRawGrade[50];
	
	for(s=1;s<=50;s++)
	{
		cout << "\nA Classroom Management Software\n" << endl;
		cout<< "Enter student name ("<<s<<"): ";
		cin>>firstname[x]>>lastname[x];
		
		cout<< "\nExperiments: " << endl;
			
		int exp;
		float ExpT=0,ExpScore;
		for(exp=1;exp<=4;exp++)
		{
			cout<<"Experiment Score " <<exp <<": ";
			cin>>ExpScore;
			ExpT=ExpT+(ExpScore*0.05);
		}
			cout<<"\nExperiment Equivalent Score: "<<ExpT<<endl<<endl;
		
		cout<< "Skills Tests: " << endl;
		
		int skills;
		float SkillsT=0,SkillsScore;
		for(skills=1;skills<=4;skills++)
		{
			cout<<"Skills Score " <<skills <<": ";
			cin>>SkillsScore;
			SkillsT=SkillsT+(SkillsScore*0.05);
		}
			cout<<"\nSkills Equivalent Score: "<<SkillsT<<endl<<endl;
		
		cout<< "Machine Problems: " << endl;
		
		int MP;
		float MPT=0,MPScore;
		for(MP=1;MP<=2;MP++)
		{
			cout<<"Machine Problem Score " <<MP <<": ";
			cin>>MPScore;
			MPT=MPT+(MPScore*0.10);
		}
			cout<<"\nMachine Problem Equivalent Score: "<<MPT<<endl<<endl;
		
	
		cout<< "Preliminary Exams: " << endl;
		
		float PreWrEx,PrePrEx,WrPer=0;
		cout<<"Preliminary Written Exam Score: ";
		cin>>PreWrEx;
		cout<<"Preliminary Practical Exam Score: ";
		cin>>PrePrEx;
		WrPer=(PreWrEx+PrePrEx)*0.20;
		cout<<"\nPreliminary Equivalent Score: "<<WrPer<<endl<<endl;
		
		
		cout<< "Finals: " << endl;
		
		float FinWrEx,FinPrEx,FWrPer=0;
		cout<<"Final Written Exam Score: ";
		cin>>FinWrEx;
		cout<<"Final Practical Exam Score: ";
		cin>>FinPrEx;
		FWrPer=(FinWrEx+FinPrEx)*0.20;
		cout<<"Final Equivalent Score: "<<FWrPer<<endl<<endl;
		
		
		FinalRawGrade[x]=ExpT+SkillsT+MPT+WrPer+FWrPer;
		cout<<"Final Raw Grade: "<<FinalRawGrade[x]<<endl;
		
		
		if(FinalRawGrade[x]>=95.57 && FinalRawGrade[x]<=100)
			cout<<"Grade Point Average (GPA): 1.0 - Passed";
		else if(FinalRawGrade[x]>=91.12 && FinalRawGrade[x]<=95.56)
			cout<<"Grade Point Average (GPA): 1.25 - Passed";
		else if(FinalRawGrade[x]>=86.68 && FinalRawGrade[x]<=91.11)
			cout<<"Grade Point Average (GPA): 1.50 - Passed";			
		else if(FinalRawGrade[x]>=82.23 && FinalRawGrade[x]<=86.67)
			cout<<"Grade Point Average (GPA): 1.75 - Passed";
		else if(FinalRawGrade[x]>=77.79 && FinalRawGrade[x]<=82.22)
			cout<<"Grade Point Average (GPA): 2.0 - Passed";
		else if(FinalRawGrade[x]>=73.34 && FinalRawGrade[x]<=77.78)
			cout<<"Grade Point Average (GPA): 2.25 - Passed";
		else if(FinalRawGrade[x]>=68.90 && FinalRawGrade[x]<=73.33)
			cout<<"Grade Point Average (GPA): 2.50 - Passed";
		else if(FinalRawGrade[x]>=64.45 && FinalRawGrade[x]<=68.89)
			cout<<"Grade Point Average (GPA): 2.75 - Passed";
		else if(FinalRawGrade[x]>=60.00 && FinalRawGrade[x]<=64.44)
			cout<<"Grade Point Average (GPA): 3.00 - Passed";
		else
			cout<<"Student Failed!";
	
	cout<<endl<<endl;
	x++;
	
	
	}
	
	int i,j,temp;
			
	for(x=1;x<50;++x)
	{
		for(j=0;j<(50-x);++j)
			if(FinalRawGrade[j]<FinalRawGrade[j+1])
			{
				temp=FinalRawGrade[j];
				FinalRawGrade[j]=FinalRawGrade[j+1];
				FinalRawGrade[j+1]=temp;
			}
	}
      	
	cout<<"Top 10:"<<endl<<endl;
	for(x=0;x<10;++x)
		cout<< x + 1 << "." << firstname[x] << " " << lastname[x] << "  =  " << FinalRawGrade[x] <<endl;
	
}
