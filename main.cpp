#include <iostream>
#include<string>
#include <cmath>
#include <iomanip>
#include <cctype>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		int option,age;
	string email,password,name,close ;
	char login,createAccount;
	close="clo";
	bool opt=true;
	
	cout<<"\n \n \n \n  \t  \t \t  \t     ````````````` *** Welcome to our page ***  `````````````"<<endl;
	
do{		
		cout<<"\n\n\n\n\t\t\t\t:-------------------------------CHOSE THE OPTION---------------------------:\t\t\t"<<endl;
		cout<<"\n\t\t\t\t:\t\t\t\t1) Login\t\t\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t2) Create Account\t\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t3) Exit\t\t\t\t\t   :"<<endl;	
		cout<<"\t\t\t\t:--------------------------------------------------------------------------:\t\t\t"<<endl;
		
	

	

		
	cout<<"Enter option :";
	cin >>option;
//	system("CLS");


	

	switch(option){
		case 1:{
				string Email,passCode;
		 
		
		Email=email;
		passCode=password;
		string checks=" ";
		do{
	
			cout<<"Enter your email ";
			cin>>email;
			cout<<"Enter your password ";
			cin>>password;
			if(Email==email && password==passCode){
				
					system("CLS");
			
		cout<<"\n \n \n \n  \t  \t \t  \t     ````````````` *** Welcome to Mathematic Formula ***  `````````````"<<endl;
		cout <<"\n \n \t \t \t  \t````````````` *** Enter values and calculate the formula ***  `````````````";

		string check = " ";

				do{
	
	
		
	cout<<"\n\n\n\n\t\t\t\t:-------------------------------CHOSE THE FORMULA---------------------------:\t\t\t"<<endl;
	cout<<"\t\t\t\t:\t\t\t\t(1) volume.\t\t\t\t\t:\t\t\t\t\t"<<endl
	    <<"\t\t\t\t:\t\t\t\t(2) cone. \t \t\t\t\t:\t\t\t\t\t"<<endl
		<<"\t\t\t\t:\t\t\t\t(3) Area of Triangle.\t\t\t\t:\t\t" <<endl
		<<"\t\t\t\t:\t\t\t\t(4) Diameter.\t\t\t\t\t:\t\t\t\t"<<endl
		<<"\t\t\t\t:\t\t\t\t(5) Area of Parallelogram.\t\t\t:\t\t"<<endl
		<<"\t\t\t\t:\t\t\t\t(6) circle.\t\t\t\t\t:\t\t\t\t\t"<<endl
		<<"\t\t\t\t:\t\t\t\t(7) Quadratic.\t\t\t\t\t:\t\t\t"<<endl
		<<"\t\t\t\t:\t\t\t\t(8) Speed.\t\t\t\t\t:\t\t\t\t\t" <<endl
		<<"\t\t\t\t:\t\t\t\t(9) Circumference.\t\t\t\t:\t\t\t\t"<<endl
		<<"\t\t\t\t:\t\t\t\t(10) Trapezoid.    \t\t\t\t:\t\t\t\t"<<endl;   
		cout<<"\t\t\t\t*---------------------------------------------------------------------------*"<<endl;
		cout<<"\t\t\t\t*___________________________________________________________________________*"<<endl;
	

		cout<<"\n\t\t\t\t\t\t\t user login :" <<name ;
		
		int formula;
	cout<<"\n\n\n\t\t\t\t\tEnter your option for chose formla :";
	cin>>formula;
	
		system("CLS");
	
		

	switch(formula){
	
//			formula of volume	
	case 1:{
		
			cout<<"\t\t\t\t\t\t\t  V = L x W x H"<<endl;		
			int l,h,b,volume;
			cout<<"\t\t\t\t\t\t\t  Enter value of l :";
			cin>>l;
			cout<<"\t\t\t\t\t\t\t        value of h :";
			cin>>h;
			cout<<"\t\t\t\t\t\t\t  Enter value of b :";
			cin>>b;
			volume=l*h*b;
			cout<<"\t\t\t\t\t\t\t         volume is :"<<volume<<"\n\n\n\n\n";
		
			break;
			
	}

//			formula of cone	
	case 2:{
		
			cout<<"\t\t\t\t\t\t\t V= 3.14 * r * r * h/3"<<endl;
			float radius,hight ,cone;
			cout << "\t\t\t\t\t\t\t      Enter radius :";
			cin>>radius;
			
			cout << "\t\t\t\t\t\t\t       Enter hight :";
			cin>>hight;
			
	
			cone=3.14*radius*radius*(hight/3);
	
			 cout << "\t\t\t\t\t\t\t     value of cone :" << cone<<"\n\n\n\n\n";
 
		break;
	}
	
//			Area of triangle	
	case 3:{
			cout<<"\t\t\t\t\t\t\t Area= (b * h)/2"<<endl;
			float 	base,hight,area;
			cout << "\t\t\t\t\t\t\t  Enter base value :";
			cin>>base;
			cout << "\t\t\t\t\t\t\t Enter hight value :";
			cin>>hight;
			
			area=(base*hight)/2;
			cout<<"\t\t\t\t\t\t\t  Area of triangle :"<<area<<"\n\n\n\n\n";
			
		
		break;
	}
//	Diameter of a circle
	case 4:{
		
		
			cout<<"\t\t\t\t\t\t\t Diameter= 2*radius"<<endl;
			float diameter,radius;
			cout<< "\t\t\t\t\t\t\t      Enter radius :";
			cin>>radius;
			diameter=2*radius;
			cout<<"\t\t\t\t\t\t      Diameter of a circle :"<<diameter<<"\n\n\n\n\n";
			
			
			
		break;
	}
	
	
//	Area of Parallelogram 
	case 5:{
			cout<<"\t\t\t\t\t\t\t P=hight*width"<<endl;
			int area,hight,width;
			cout<<"\t\t\t\t\t\t\t       Enter hight :";
			cin>>hight;
			cout<<"\t\t\t\t\t\t\t       Enter width :";
			cin>>width;
			area=hight*width;
			cout<<"\t\t\t\t\t\t     Area of Parallelogram :"<<area<<"\n\n\n\n\n";
			
			
					
		break;
	}
	
//	Area of a circle 
	case 6:{
		cout<<"\t\t\t\t\t\t Circle Area=3.14*radius"<<endl;
		float area, radius;
		cout<<"\t\t\t\t\t\t\t      Enter radius :";	
		cin>>radius;	
		area=3.14*radius;
		cout<<"\t\t\t\t\t\t\t  Area of a circle :"<<area<<"\n\n\n\n\n";
		
			
		break;
	}
	
	case 7:{
		cout<<"\t\t\t\t\t\t x = (-b+-(b*b-4ac)^1/2)/(2a)"<<endl;
		float a,b,c,x, underRoot ,D;	
//			ax2 + bx + c = 0
			cout<<"\t\t\t\t\t\t\t  Enter value of a :";
			cin>> a;	
			cout<<"\t\t\t\t\t\t\t  Enter value of b :";
			cin>> b;	
			cout<<"\t\t\t\t\t\t\t  Enter value of c :";
			cin>> c;	
//		    enter values in Quadratic formula
// 			for - value
			underRoot=(b*b)-4*a*c;
 			cout << sqrt(underRoot);
 			x = -b-(underRoot)/2*a;
			cout<< "\t\t\t\t\t\t\t\tValue of x :" <<x <<endl;
//   		for + value
			x = -b+(underRoot)/2*a;	
			cout<< "\t\t\t\t\t\t\t\tValue of x :" <<x <<endl;	
//			D = b2 - 4ac
			D= (b*b)-4*a*c;
			cout<<"\t\t\t\t\t\t\t\tValue of D :" << D <<endl;	
			if (D > 0){
				cout<<"\t\t\t\t\t\t\tThe roots are real and distinct. " <<endl<<"\n\n\n\n\n";
			}
			else if(D == 0){
				cout<< "\t\t\t\t\t\t\tThe roots are real and equal. " <<endl<<"\n\n\n\n\n";
			}
				else if (D < 0) {
				cout<< "\t\t\t\t\t\t\tThe roots are imaginary. " <<endl<<"\n\n\n\n\n";
			}
			else{
				cout<< "\t\t\t\t\t\t\tRoots are invalid."<<"\n\n\n\n\n";
			}
		
		break;
	}
	
//	formula of Speed
	case 8:{
			cout<<"\t\t\t\t\t\t\t speed=distance/time"<<endl;
			float distance,time,speed;
			cout<<"\t\t\t\t\t\t\t    Enter distance :";
			cin>>distance;
			cout<<"\t\t\t\t\t\t\t\tEnter time :";
			cin>>time;
			speed=distance/time;
			cout<<"\t\t\t\t\t\t\t\t     Speed :"<<speed<<"\n\n\n\n\n";
			
		
		break;
	}	
//	Circumference of a circle
	case 9:{
			cout<<"\t\t\t\t\t\t Circumference=2*3.14*radius"<<endl;
			float circumference, radius;
			cout<<"\t\t\t\t\t\t\t      Enter radius :";
			cin>>radius;
			circumference=2*3.14*radius;
			cout<<"\t\t\t\t\t\t Circumference of a circle :"<<circumference<<"\n\n\n\n\n";
			
			
		break;
	}
	
//	Area of Trapezoid
	case 10:{
			cout<<"\t\t\t\t\t\tT=(largeSide*smallSide/2)*hight"<<endl;
			float area, largeSide, smallSide,hight;
			cout<<"\t\t\t\t\t\t  Enter large side of width:";
			cin>>largeSide;
			cout<<"\t\t\t\t\t\t  Enter small side of width:";
			cin>>smallSide;
			cout<<"\t\t\t\t\t\t\t        Enter hight:";
			cin>>hight;
			area=(largeSide*smallSide/2)*hight;
			cout<<"\t\t\t\t\t\t\t Area of Trapezoid :"<<area<<"\n\n\n\n\n";
			
			
			
		break;
	}
	default: {
			cout<<"Please enter vaild option";
			break;
		}
//		system("pause");

}
		
				cout << "\n\n\n\n\t\t\t\tEnter option: ";
					cin>>check;
			if(check=="no"){
			
				system("CLS");
				system("exit");
	
				}
				else{
					check=="yes";
				}	
			
				
			 	system("CLS");
		
			
	}while(check=="yes");
					
	
		

		}
		
			
			
				cout<<"Reenter yes/ no"<<endl;
			cin>>checks;
			
			 if(checks=="no"){
			
				system("CLS");
				system("exit");
		
				}
				
			
				
			 
		
		}while(checks=="yes");
			
				system("CLS");	
				cout<<"Login to our system"<<endl;
			
		
	

	
			
			
			break;
		}
		case 2:{
			string enter;
				cout<<"Enter your name ";
			cin>>name;

			cout<<"Enter your age ";
			cin>>age;
			
			cout<<"Enter your email ";
			cin>>email;
			
			cout<<"Enter your password ";
			cin>>password;
			
			cout<<"Your account is successfully created."<<endl;
			cout<<"Enter yes for login"<<endl;
			cin>>enter;
			system("CLS");	
			break;
			
		}
		case 3:{
			cout<<"press any key"<<endl;
			system("exit");
		
			goto loop;
			
				system("CLS");	
			
			break;
		}
		default: {
			cout<<"Please enter vaild option";
			opt=false;
			break;
		}
		
	}
		if(opt==1 && opt==2 & opt==3){
			opt=true;
		}
		
}while(opt);	

loop:system("exit");
	return 0;
}

