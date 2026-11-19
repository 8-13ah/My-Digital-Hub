#include<iostream>
using namespace std;
int main(){
	string user_name ,password,name_std="please enter the information..first!!",clas="please enter the information..first!!";
	int attemps=0, choose = 0,choose1 =0,age= 0,choose2=0,no_std=0,subs =5,choose3,choose4=0;
	double Absentees,Attendees;
	double total;
	double avg,percentage;
	string sub[5]={"math","English","programming","computer skills","Arabic"};
	string name_std1[50];
	int degree_std[50] [subs];
	float avg1[50];
	float counter[subs];

	cout<<"=============================\n"
	    <<"|\n|\n|\n|\n|\n|       SCHOOL SYSTEM|\n|\n|\n|\n|\n|"
	    <<"=============================\n";
	while(attemps<3){
	cout<<"Enter the User Name:";
	cin>>user_name;
	
	cout<<"Enter the Password:";
	cin>> password;
	
	if(user_name=="admin"&&password=="1234")
	{
		cout<<"login Successufly\n";
		break;
	}

	else{
		attemps++;
		if(attemps<3){
		cout<<"Wrong User Name or Password\n";
		cout<<"The Number of Attemps you stil have:"<<3-attemps<<"\n";
		}
		}
		
	if(attemps==3){
		cout<<"SORRY!!..You Have exhausted all your attempts\n"
		    <<"The System Has Been Shut Down";
		    return 0;
	}
	}
system("cls");
	//the list of the system
	x:
	do{
	cout<<"============================\n"
	    <<"  School Management System\n"
	    <<"============================\n"
	    <<"1.Student Management\n"
	    <<"2.Student Marks Management\n"
	    <<"3.Attendance Management\n"
	    <<"4.Exit\n";
	cout<<"Choose:";
	cin>>choose;
	system("cls");
	switch(choose){	
	m:
		case 1:
	cout<<"============================\n"
		<<"    Student Management\n"	  
		<<"============================\n"
		<<"1.Enter the information of student\n"
		<<"2.Display the information of student\n"
		<<"3.The result of the student\n"
		<<"4.Back to the School Management System(main list)\n ";
		cout<<"choose number:";
		cin>>choose1;
		system("cls");

		switch(choose1)
	{
		
			case 1:
				cout<<"------------------------------------------\n"
				    <<"Please Enter the Information of student\n"
				    <<"------------------------------------------\n";
			    cout<<"Enter the Name of student:";
			      cin>>name_std;
			    cout<<"Enter the age of student:";
			      cin>>age;
			    cout<<"Enter the class of student:";
			      cin>>clas;
				goto m;	
				break;
		
			case 2:
				cout<<"--------------------------\n"
				    <<"The information of student:\n"
				    <<"--------------------------\n"
				    <<"The name of student:"<<name_std<<"\n"
				    <<"The age of student:"<<age<<"\n"
				    <<"The class of student:"<<clas<<"\n";
			    goto m;    
				break;
			
			case 3:
				cout<<"The result of the student:\n";
				cout<<"Enter the average of student:\n";
				cin>>avg;
				if(avg>=50){
					cout<<"student pass\n";
				}
				else{
					cout<<"student filed\n";
				}
			    goto m;
				break;
				
			case 4:
				goto x;
				break;
			
			default :
			cout<<"=====================\n";
			cout<<"invalid choose....\n";
			cout<<"=====================\n";
			goto x;
        }
//The Student Management	
		case 2:
		l:	
			cout<<"=============================\n"
		        <<"  Student Marks Management\n"
			    <<"=============================\n"
			    <<"1.Enter the Mark of student\n"
			    <<"2.Display the Mark\n"
			    <<"3.Calculating The Average Grade\n"
			    <<"4.Display the Highest Mark\n"
			    <<"5.Display the Lowest Mark\n"
			    <<"6.Back to the School Management System(main list)\n";
			    cout<<"Choose:";
			    cin>>choose2;
			    system("cls");
			    switch(choose2){
			    	case 1:
			    		cout<<"Enter how many student Do You Want Add:\n";
			    		cin>>no_std;
			    		if(no_std<=50&&no_std>0){
			    			for(int i=0; i<no_std; i++){
			    			cout<<"------------------------------------\n";
			    			cout<<"Enter The Name Of Student("<<(i+1)<<"):";
			    			cin>>name_std1[i];
			    			for(int j=0; j<subs;j++){
			    			cout<<"Enter The Mark Of "<<sub[j]<<"("<<(i+1)<<"):";
			    			cin>>degree_std[i][j];
							}
						}
						}
						else{
							cout<<"You Can't Add More Than 50 Students\n";
						}
						goto l;
			    		break;
			    	
			    	case 2:
			    		if(no_std!=0){
						
			    		cout<<"=============================\n"
			    		    <<"     The Mark Of Student:\n"  
			    		    <<"=============================\n";
			    		    for(int i=0; i<no_std; i++){
			    		    cout<<"------------------------------------\n";	

			    		    	for(int j=0;j<subs;j++){
							cout<<"The Marks Of Student("<<name_std1[i]<<"):\n";	
			    		    cout<<sub[j]<<":"<<degree_std[i][j]<<"\n";
						}
						
						}
						}
						else{
							cout<<"\n\n\nFill in The Information..First!!\n\n\n\n\n----------------------\n";
						}
						goto l;
			    		break;
			    	
			    	case 3:
			    		cout<<"========================\n"
			    		    <<"   The Average Grade\n"
			    		    <<"========================\n";
			    		    
			    		    for(int i=0;i<no_std;i++){
			    		    cout<<"The Average Grade Of Student("<<name_std1[i]<<"):\n";

			    		    	counter[i]=0;
			    		    	for(int j=0;j<subs;j++){
			    		    		
			    		    		counter[i] += degree_std[i][j];			    		    		
							}
							avg1[i]=counter[i]/subs;
							cout<<"is: "<<avg1[i]<<"\n";
							}
							
						goto l;
			    		break;
		//the comprasion(highest,lowset)
			    	case 4:{
						
			    		float c=0;
			    		int m = 0;
			    		for(int i=0;i<no_std;i++){
			    			
			    			if(avg1[i]>c){//90 80 99
							c=avg1[i];
							m=i;   				
							}
						}
						cout<<"The Highest Avg For"<<"("<<name_std1[m]<<")"<<"\n"<<"IS :"<<c<<"\n";

						goto l;
			    		break;
						}
			    	case 5:{
					
			    		
			    		float k=100;
			    		int n = 0;
			    		for(int i =0;i<no_std;i++){
			    			
			    		if(avg1[i]<k){//70 //80 50
							k=avg1[i];
							n=i;   				
							}
						}
						cout<<"The Lowest Avg For"<<"("<<name_std1[n]<<")"<<"\n"<<"IS :"<<k<<"\n";
						goto l;
			    		break;	
						}
			    	case 6:
			    		goto x;
			    		break;
				}
			break;
//Attendance Management 
		case 3:
			p:
				cout<<"=============================\n"
				    <<"\n\n\n     (Attendance Management)\n\n\n"
			        <<"=============================\n"
			        <<"1.Enter the Number of Attendees and Absentees\n"
			        <<"2.Display the Number Of Attendees\n"
			        <<"3.Display the Number Of Absentees\n"
			        <<"4.Calculate the Number Of Attendees\n"
			        <<"5.Back to the School Management System(main list)\n";
			        cout<<"Choose Number:";
			        cin>>choose4;
			        system("cls");
			         switch(choose4){
			         	
			         	case 1: 
			         		cout<<"Enter the Number of :\n";
			         		
			         		cout<<"Attendees:";
			         		cin>>Attendees;
			         		cout<<"Absentees:";
			         		cin>>Absentees;
			         		goto p;
			         		break;
			         	
			         	case 2:
			         		cout<<"|==========================|\n"
			         		    <<"The Number of Attendees IS:"<<Attendees<<"\n"
			         		    <<"|==========================|\n";
			         		goto p;
			         		break;
			         		
			         	case 3:
			         		cout<<"|==========================|\n"
			         		    <<"The Number of Absentees Is:"<<Absentees<<"\n"
			         		    <<"|==========================|\n";
			         		goto p;
			         		break;	
			         		
			         	case 4:{
			         		total=Attendees+Absentees;
						 if(total>0 && total<=50){
						 	percentage = (Attendees/total)*100.0;
		         		    cout<<"The Total Of Student Is\n ";
			         		cout<<total<<"\n";
			         		cout<<"Attendees percentage:"<<percentage<<"%"<<"\n";
							}
							else{
								cout<<"|===========================================================|\n"
								    <<"|\n|\n|\n|\n|\n| The Information Not Found!!.... Maybe You Add More Than 50...|\n|\n|\n|\n|\n|\n|"
								    <<"|===========================================================|\n";
							}
							goto p;
			         		break;
						 }
			         	case 5:
			         		goto x;
			         		break;
					 }
					 
			break;
			
		case 4:
			int choose3;
			if(choose==4){
				cout<<"|=============================================|\n"
			        <<"|\n|\n|\n|\n|\n|\n|\n|  Thank YOU For Using THE System of School..|\n"
					<<"|           ..Have Anice Day!!\n|\n|\n|\n|\n|\n|\n|"
			        <<"|=============================================|\n";
			}
			
			break;	
	}  
} while(choose!=4);
	return 0;
	
	}
