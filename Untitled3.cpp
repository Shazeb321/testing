#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int cafe();
int  generate_total_and_grades();
int classes();
int class_choice();
float weightage[5];
int size,choice;
int select_assesment();
int lab_perf();
int lab_rep();
int Midterm();
int CEA();
/*..........................................GAMING ZONE....................................*/



int win_count=0;
int enter_word();
int count=3;
int pick;
int challenge();
int chk[3]={0,0,0};
string word;
int warning(){
	while(win_count<=3){
	
				count--;
			cout<<"You have "<<count<<" lives remaining"<<endl<<endl;
			cout<<"1.Go back to picking position"<<endl<<endl;
			cout<<"2.Continue with the same position"<<endl<<endl;
			
			int choice;
			cout<<"Enter your choice : "; cin>>choice;
			if(choice==1){
				challenge();
				return 0;
			}
			else{
				enter_word();
				return 0;
			}
}
return 0;
}

string choic[4]={"?","?","?","?"};
int enter_word(){
	while(win_count<=3){
		
	while(count>0){
		
	
	if(pick==2){
		cout<<"Enter word : "; cin>>word;
		if(word=="u" || word=="U" ){
			
			choic[0]="u";
			win_count++;
			challenge();
			return 0;
		}
		else{
				warning();
				return 0;
		}
	}
	else if(pick==3){
		cout<<"Enter word : "; cin>>word;
		if(word=="i" || word=="I" ){
			win_count++;
			choic[1]="i";
			challenge();
			return 0;
		}
		else{
				warning();
				return 0;
		}
	}
	else if(pick==6){
			cout<<"Enter word : "; cin>>word;
		if(word=="d" || word=="D" ){
			win_count++;
			choic[2]="d";
			challenge();
			return 0;
		}
		else{
				warning();
				return 0;
		}
	}
}
	return 0;
	
}
}
int challenge(){
	while(win_count<=3){
	
	while(count>0){
		
	cout<<"S "<<choic[0]<<" "<<choic[1]<<" c "<<" i "<<choic[2]<<" e"<<endl<<endl;
	cout<<"1 "<<"2 "<<"3"<<" 4"<<" 5"<<" 6"<<" 7"<<endl<<endl;
	int x=0;
	while (x!=1){
	
	cout<<endl<<"Which position do you want to pick?		: "; cin>>pick; cout<<endl;
	
	if (win_count==3){
		return 0;
	}
	else if(pick==1 ||pick==4 || pick==5 || pick==7 ){
		cout<<endl<<"This position is already filled."<<endl<<endl;

	}
	else if(pick==2 || pick ==3 || pick==6 ){
	enter_word();
	return 0;
	}
	
	else{
		cout<<endl<<"Enter a correct number."<<endl;
	}
	
	
	
}

}
			
			return 0;

}
}
int gaming_zone(){
	cout<<"Welcome to hangman game."<<endl;
	cout<<endl<<endl;
	
	challenge();
	if(win_count==3){
	
	cout<<endl<<"Congratulation!! you have won the game."<<endl;
}

else{
	cout<<endl<<"			YOU HAVE LOST THE GAME			"<<endl<<endl;
}
return 0;
}




/*..............................UNIVERSITY CAFE MENU..................................*/
const int Food_price[12]={100,110,220,310,120,150,160,170,180,190,165,110};
const int Deal_price[5]={250,290,320,450,320};
	void Cafe_menu()
	{
	      
		 
		 
		string Menu[12]={"Fruit Chat       " , "Dahi Ballay Chat " , "Channa Chart ", 
		              "Milk Shake  ", "Mango Shake ", "Oreo Shake  ", "Fries         ", "Zinger Burger",
					   "Shawrama ", "Aloo Keema    ", "Chicken Karhai", "Haleem    "};
		
		cout<<"\nYou Have Choosed Cafe Things.";
		cout<<"\n\nWe Sell The Following Items : ";
		cout<<endl;
		
		
	for(int i=0 ; i<12; i++)
	{
			cout<<i<<" -) "<<Menu[i]<<"   --- "  <<  "  Rs "<<Food_price[i]<<"     ";
			cout<<endl;
	}
	
}

	void Deal_menu(){
		
		string Deal_menu[5]={"Deal - 0 : Chicken Burger + Cold-Drink(Any) + Fries ", 
		"Deal - 1 : Maggi + 2 Zinger Burgers + Chai          ", 
		"Deal - 2 : Shawrma + Biryani + Sting                "
		,"Deal - 3 : Lathe + HotWings(12 Pieces)+Samosa's     ",
		"Deal - 4 : Chicken Soup + Grllied Kabob + Coke      " 		}; 

		
				for(int i=0 ; i<5; i++)
	{
			cout<<i<<" -) "<<Deal_menu[i]<<"   --- "  <<  "  Rs "<<Deal_price[i]<<"     ";
	
			cout<<endl;
	
	}
	
	cout<<endl;	
			
	}
	
	int Cafe_bill()
		{
		
		int choice;
	
	
		cout<<"\nEnter Your Order Number Please : ";
		cin>>choice;
		
		int Bill;
		int Total_bill;
		string option;
	
		Bill=Food_price[choice];
		
		
		cout<<"\nDo You Want To Buy Anything Else?";
		do{
			
		
		cout<<"\nEnter 'buy more items ' If You Want To Continue Otherwise Type ' show bill ' : ";
		cin.ignore(),cin.clear();
		getline(cin,option);
		
		if(option=="Buy More Items" || option=="buy more items" || option=="BuyMoreItems" || option=="buymoreitems")
	
		{
		
			Cafe_menu();
			cout<<"\nPlease Enter Your Order Number  : ";	
			cin>>choice;
			Bill=Bill+Food_price[choice];
		}	
			
		else if(option=="showbill" || option=="show bill")
		{
			break;
		}
	}while(1);
		
			
		cout<<"|----------------------------|";	
		cout<<"\n|   Your Bill Is Rs : "<<Bill<<"    |";
		cout<<"\n|   Thank You                |";
		cout<<"\n|   COME AGAIN !             |";
		cout<<"\n|----------------------------|";
		
		
		return Bill;
	}
	
	
	int Deal_bill(){
		
		int choice;
		
		cout<<"\nEnter Your Order Number Please : ";
		cin>>choice;
		
		int Bill;
		string option;
	
		Bill=Deal_price[choice];
		
		cout<<"\nDo You Want To Buy Another Deal Else?";
		
	do{
	
				
		cout<<"\n\nEnter ' buy more deals ' If You Want To Continue Otherwise Type ' show bill ' : ";
		cin.ignore(),cin.clear();
		getline(cin,option);
	
		cout<<endl;	
		
		if(option=="Buy More Deals" || option=="buy more deals")
		{
		
			Deal_menu();
			cout<<"\nPlease Enter Your Deal Number  : ";
			cin>>choice;
			Bill=Bill+Deal_price[choice];
		}	
	
		else if(option=="showbill" || option=="show bill"){
			
			break;
		}
			
	}while(1);
		
		cout<<"|----------------------------|";	
		cout<<"\n|   Your Bill Is Rs : "<<Bill<<"    |";
		cout<<"\n|   Thank You                |";
		cout<<"\n|   COME AGAIN !             |";
		cout<<"\n|----------------------------|";
		return Bill;
	
	}	
		
		void Menu_Selection(){
		
		string c_option;
		cout<<"\n-----------------------------------------------------------------------------------------------------------------------";
		cout<<"\n                                          WARM  WELL-COME TO AU CAFE ";
		cout<<"\n-----------------------------------------------------------------------------------------------------------------------";
		
		cout<<"\nWhat Are You Interested In 'Deals or Cafe Things \n ";
		cout<<"\nEnter D or d For DEALS & C or c For Cafe Things : ";
		cin>>c_option;
		
		cout<<endl;
		if(c_option=="D" || c_option=="d"){
			
		Deal_menu();	
		}
		
		
		 if (c_option=="C" || c_option=="c")
		{
		Cafe_menu();	
		}
	
		
		int Bill;
		
		if(c_option=="D" || c_option=="d"){
					
	   Bill = Deal_bill();
			
		}
		
		 if (c_option=="C" || c_option=="c"){
		
		Bill= Cafe_bill();
		
		}
		
	}
	
	
	int cafe(){
		
	Menu_Selection();
	
	return 0;
	
}



/*...............................TEACHER'S PORTAL..................................*/
int Final_term();

			/*CALCULATING TOTAL MARKS AND GRADES*/
int  generate_total_and_grades(){	

		
			//for class f21 A
		if(choice==1){
				//reading files
			float f21A_total[size];
			ifstream readlab;
			readlab.open("weighted lab performance marks.txt");
			ifstream readlabrep;
			readlabrep.open("weighted lab report marks.txt");
			ifstream readmid;
			readmid.open("weighted midterm marks.txt");
			ifstream readcea;
			readcea.open("weighted CEA marks.txt");
			ifstream readfinal;
			readfinal.open("weighted final marks.txt");
			ifstream readname;
			readname.open("name.txt");
							//calculating total marsk
			float lab_per[size],lab_rep[size],mid[size],cea[size],final[size];
			string name[size];
			for(int x=0 ; x<size; x++){
				readlab>>lab_per[x]; 
				readlabrep>>lab_rep[x];
				 readname>>name[x];
				readmid>>mid[x];
				 readcea>>cea[x]; 
				 readfinal>>final[x];
				f21A_total[x]=lab_per[x]+lab_rep[x]+mid[x]+cea[x]+final[x];
			}
			ofstream write;
			write.open("f21 A total marks.txt");
			for(int x=0 ; x<size ;x++){
				write<<f21A_total[x];
			}
					//calculating grade
	
			float ideal;
			cout<<"Enter ideal marks : "; cin>>ideal;
			ofstream writegrade;
			writegrade.open("f21 A grade.txt");
			char f21Agrade[size];
			for(int x=0 ; x<size ; x++){
				if (f21A_total[x]>=0 && f21A_total[x]<=(ideal*0.45)){
					f21Agrade[x]='C';
				}
				else if(f21A_total[x]>(ideal*0.45) && f21A_total[x]<=(ideal*0.60)){
					f21Agrade[x]='B';
			}
			else if(f21A_total[x]>(ideal*0.60) && f21A_total[x]<=ideal){
					f21Agrade[x]='A';
			}
		}
			for(int x=0 ; x<size ; x++){
				writegrade<<f21Agrade[x];
			}
			ifstream readgrade;
			readgrade.open("f21 A grade.txt");
			
			
						//displaying total
				cout<<"Student		:		Total marks		:		Grade"<<endl;
			for(int x=0 ; x<size ; x++){
				cout<<name[x]<<"		:		"<<f21A_total[x]<<"			:			"<<f21Agrade[x]<<endl;
			}
		}
	
	//for class f21 B

		else if(choice==2){
			float f21B_total[size];
				//reading files
			ifstream readlab;
			readlab.open("weighted f21 B lab performance marks.txt");
			ifstream readlabrep;
			readlabrep.open("weighted f21 B lab report marks.txt");
			ifstream readmid;
			readmid.open("weighted f21 B midterm marks.txt");
			ifstream readcea;
			readcea.open("weighted f21 B CEA marks.txt");
			ifstream readfinal;
			readfinal.open("weighted f21 B final marks.txt");
			ifstream readname;
			readname.open("f21 B name.txt");
							//calculating total
			float lab_per[size],lab_rep[size],mid[size],cea[size],final[size];
			string name[size];
			for(int x=0 ; x<size; x++){
				readlab>>lab_per[x]; 
				readlabrep>>lab_rep[x];
				 readname>>name[x];
				readmid>>mid[x];
				 readcea>>cea[x]; 
				 readfinal>>final[x];
				f21B_total[x]=lab_per[x]+lab_rep[x]+mid[x]+cea[x]+final[x];
			}
			ofstream write;
			write.open("f21 B total marks.txt");
			for(int x=0 ; x<size ;x++){
				write<<f21B_total[x];
			}
								//calculating grade
	
			float ideal;
			cout<<"Enter ideal marks : "; cin>>ideal;
			ofstream writegrade;
			writegrade.open("f21 B grade.txt");
			char f21Bgrade[size];
			for(int x=0 ; x<size ; x++){
				if (f21B_total[x]>=0 && f21B_total[x]<=(ideal*0.45)){
					f21Bgrade[x]='C';
				}
				else if(f21B_total[x]>(ideal*0.45) && f21B_total[x]<=(ideal*0.60)){
					f21Bgrade[x]='B';
			}
			else if(f21B_total[x]>(ideal*0.60) && f21B_total[x]<=ideal){
					f21Bgrade[x]='A';
			}
		}
			for(int x=0 ; x<size ; x++){
				writegrade<<f21Bgrade[x];
			}
			ifstream readgrade;
			readgrade.open("f21 B grade.txt");
			
			
						//displaying total
				cout<<"Student		:		Total marks		:		Grade"<<endl;
			for(int x=0 ; x<size ; x++){
				cout<<name[x]<<"		:		"<<f21B_total[x]<<"			:			"<<f21Bgrade[x]<<endl;
			}
		}
		
		
				//for f20 A
	else if(choice==3){
			float f20A_total[size];
				//reading files
			ifstream readlab;
			readlab.open("weighted f20 A lab performance marks.txt");
			ifstream readlabrep;
			readlabrep.open("weighted f20 A lab report marks.txt");
			ifstream readmid;
			readmid.open("weighted f20 A midterm marks.txt");
			ifstream readcea;
			readcea.open("weighted f20 A CEA marks.txt");
			ifstream readfinal;
			readfinal.open("weighted f20 A final marks.txt");
			ifstream readname;
			readname.open("f20 A name.txt");
							//calculating total
			float lab_per[size],lab_rep[size],mid[size],cea[size],final[size];
			string name[size];
			for(int x=0 ; x<size; x++){
				readlab>>lab_per[x]; 
				readlabrep>>lab_rep[x];
				 readname>>name[x];
				readmid>>mid[x];
				 readcea>>cea[x]; 
				 readfinal>>final[x];
				f20A_total[x]=lab_per[x]+lab_rep[x]+mid[x]+cea[x]+final[x];
			}
			ofstream write;
			write.open("f20 A total marks.txt");
			for(int x=0 ; x<size ;x++){
				write<<f20A_total[x];
			}
					//calculating grade
	
			float ideal;
			cout<<"Enter ideal marks : "; cin>>ideal;
			ofstream writegrade;
			writegrade.open("f20 A grade.txt");
			char f20Agrade[size];
			for(int x=0 ; x<size ; x++){
				if (f20A_total[x]>=0 && f20A_total[x]<=(ideal*0.45)){
					f20Agrade[x]='C';
				}
				else if(f20A_total[x]>(ideal*0.45) && f20A_total[x]<=(ideal*0.60)){
					f20Agrade[x]='B';
			}
			else if(f20A_total[x]>(ideal*0.60) && f20A_total[x]<=ideal){
					f20Agrade[x]='A';
			}
		}
			for(int x=0 ; x<size ; x++){
				writegrade<<f20Agrade[x];
			}
			ifstream readgrade;
			readgrade.open("f20 A grade.txt");
			
			
						//displaying total
				cout<<"Student		:		Total marks		:		Grade"<<endl;
			for(int x=0 ; x<size ; x++){
				cout<<name[x]<<"		:		"<<f20A_total[x]<<"			:			"<<f20Agrade[x]<<endl;
			}
		
	}	
	return 0;

		
	
}
			/*.......Enter Class size.......*/
			
int enter_size(){
	int x=0;
	size;
	while(x!=1){
		cout<<"Enter class size (1-10): "; cin>>size;
		if(size>=0 && size<=10){
			x=1;
		}
		else{
			cout<<"Please enter correct size."<<endl;
		}	
	}
	return size;
}


		/*..............choosing between class or assesment of the class..........*/
int assesment_or_class(){		
	cout<<"Do you want to continue for this class or do you want to select another class?"<<endl<<endl;
	cout<<"1. Continue for this class."<<endl;
	cout<<"2. Choose another class."<<endl;
	cout<<"3. Generate total marks and grades."<<endl;
	cout<<"4. Exit."<<endl<<endl;
	int optn;
	int chk;
	while(chk!=1){
	cout<<"Enter option (1)Continue (2) Next class (3) Generate total marks and grades (4)Exit: "; cin>>optn;
	if(optn==1){	
	select_assesment();
	return 0;
}
	else if(optn==2){
		class_choice();
		return 0;
	}
	else if(optn==3){
		generate_total_and_grades();
	}
	else if(optn==4){
		return 0;
	}
	else{
		cout<<"Please enter a correct option."<<endl<<endl;
	}
}
}

			/*......SELECTING ASSESMENT TYPES......*/
int select_assesment(){
	int op;

	cout<<"...........SELECTING ASSESMENT TYPE ............."<<endl<<endl;
	
	cout<<"Select the following : "<<endl;
	cout<<"1. Lab performance"<<endl;
	cout<<"2. Lab report"<<endl;
	cout<<"3. Midterm"<<endl;
	cout<<"4. CEA"<<endl;
	cout<<"5. Final term"<<endl;
	cout<<"6. Exit."<<endl<<endl;
	int check=0;
	while(check!=1){
	cout<<"Enter an option(number) : "; cin>>op;
	if(op==1){
		lab_perf();
		return 0;
	}	
	else if (op==2){
		lab_rep();
		return 0;
	}
	else if(op==3){
		Midterm();
		return 0;
	}
	else if(op==4){
		CEA();
		return 0;
	}
	else if (op==5){
		Final_term();
		return 0;
	}
	else if(op==6){
		return 0;
	}
	else{
		cout<<"Please enter a correct option."<<endl<<endl;
	}
}
}


			/*.........ASSESMNET TYPES........*/
				/*LAB PERFORMANCE*/
			
int lab_perf(){	
	//for class F21 A
	if(choice==1){
		float marks[size];
		cout<<"Enter the lab preformance marks of each student."<<endl;
		ifstream nameFile;
		nameFile.open("name.txt");
		string name[size];
		for(int x=0 ; x<size ; x++){
		nameFile>>name[x];	
		}
		ofstream marksFile;
		marksFile.open("lab performance marks.txt");
		for(int y=0 ; y<size ; y++){
		cout<<name[y]<<"	:	"; cin>>marks[y];
	}
		for(int x=0; x<size; x++){
			marksFile<<marks[x]<<endl;
		}
	}
	//for class F21 B
	if(choice==2){
	
		float marks[size];
		cout<<"Enter the lab preformance marks of each student."<<endl;
		ifstream nameFile;
		nameFile.open("f21 B name.txt");
		string name[size];
		for(int x=0 ; x<size; x++){
		nameFile>>name[x];	
		}
		ofstream marksFile;
		marksFile.open(" f21 B lab performance marks.txt");
		for(int y=0 ; y<size ; y++){
		cout<<name[y]<<"	:	"; cin>>marks[y];
	}
		for(int x=0; x<size; x++){
			marksFile<<marks[x]<<endl;
		}
}
	// FOR CLASS F20 A	
	if(choice==3){
	
		float marks[size];
		cout<<"Enter the lab performance marks of each student."<<endl;
		ifstream nameFile;
		nameFile.open("f20 A name.txt");
		string name[size];
		for(int x=0 ; x<size ; x++){
		nameFile>>name[x];	
		}
		ofstream marksFile;
		marksFile.open("f20 A lab performance marks.txt");
		for(int y=0 ; y<size ; y++){
		cout<<name[y]<<"	:	"; cin>>marks[y];
	}
		for(int x=0; x<size; x++){
			marksFile<<marks[x]<<endl;
		}
	}
	cout<<endl<<"Enter the weightage of this assesment(%).";cin>>weightage[0];
	
	/*....................Marking lab performance according to weightage................*/
	if(choice==1){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[0]/100);
		}
		ofstream read;
		read.open("weighted lab performance marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	if(choice==2){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[0]/100);
		}
		ofstream read;
		read.open("weighted f21 B lab performance marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	if(choice==3){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[0]/100);
		}
		ofstream read;
		read.open("weighted f20 A lab performance marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	
	assesment_or_class();
	return 0;		
}

			/*LAB REPORTS*/
int lab_rep(){
	//for class F21 A
		if(choice==1){	

		float marks[size];
		cout<<"Enter the lab report marks of each student."<<endl;
		ifstream nameFile;
		nameFile.open("name.txt");
		string name[size];
		for(int x=0 ; x<size ; x++){
		nameFile>>name[x];	
		}
		ofstream reportmarksFile;
		reportmarksFile.open("lab report marks.txt");
		for(int y=0 ; y<size ; y++){
		cout<<name[y]<<"	:	"; cin>>marks[y];
	}
		for(int x=0; x<size; x++){
			reportmarksFile<<marks[x]<<endl;
		}
}
	//for class f21 B
	if(choice==2){
	
		float marks[size];
		cout<<"Enter the lab preformance marks of each student."<<endl;
		ifstream nameFile;
		nameFile.open("f21 B name.txt");
		string name[size];
		for(int x=0 ; x<size ; x++){
		nameFile>>name[x];	
		}
		ofstream marksFile;
		marksFile.open(" f21 B lab report marks.txt");
		for(int y=0 ; y<size ; y++){
		cout<<name[y]<<"	:	"; cin>>marks[y];
	}
		for(int x=0; x<size; x++){
			marksFile<<marks[x]<<endl;
		}
	}
	if(choice==3){
		//FOR CLASS F20 A

		float marks[size];
		cout<<"Enter the Lab report marks of each student."<<endl;
		ifstream nameFile;
		nameFile.open("f20 A name.txt");
		string name[size];
		for(int x=0 ; x<size ; x++){
		nameFile>>name[x];	
		}
		ofstream marksFile;
		marksFile.open("f20 A Lab report marks.txt");
		for(int y=0 ; y<size ; y++){
		cout<<name[y]<<"	:	"; cin>>marks[y];
	}
		for(int x=0; x<size; x++){
			marksFile<<marks[x]<<endl;
		}
	
	}
	cout<<endl<<"Enter the weightage of this assesment(%).";cin>>weightage[1];
	 
	/*....................Marking lab report according to weightage................*/
	if(choice==1){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[1]/100);
		}
		ofstream read;
		read.open("weighted lab report marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	if(choice==2){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[1]/100);
		}
		ofstream read;
		read.open("weighted f21 B lab report marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	if(choice==3){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[1]/100);
		}
		ofstream read;
		read.open("weighted f20 A lab report marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	assesment_or_class();
	return 0;
}
		
		
			/*MIDTERM MARKS*/
int Midterm(){
		//for class F21 A
	if(choice==1){	

		float marks[size];
		ifstream nameFile;
		nameFile.open("name.txt");
		string name[size];
		ifstream marksFile;
		marksFile.open("midterm marks.txt");
		for(int x=0 ; x<size ; x++){
			nameFile>>name[x];
			marksFile>>marks[x];
			cout<<name[x]<<"	:		"<<marks[x]<<endl;
		}	

	}
	//for class f21 B
	else if(choice==2){

		float marks[size];
		ifstream nameFile;
		nameFile.open("f21 B name.txt");
		string name[size];
		ifstream marksFile;
		marksFile.open("f B Midterm marks.txt");
		for(int x=0 ; x<size ; x++){
			nameFile>>name[x];
			marksFile>>marks[x];
			cout<<name[x]<<"	:		"<<marks[x]<<endl;
		}	

	}
	else if(choice==3){
	
		//FOR CLASS F20 A
		float marks[size];
		ifstream nameFile;
		nameFile.open("f20 A name.txt");
		string name[size];
		ifstream marksFile;
		marksFile.open("f20 A Midterm marks.txt");
		for(int x=0 ; x<size ; x++){
			nameFile>>name[x];
			marksFile>>marks[x];
			cout<<name[x]<<"	:		"<<marks[x]<<endl;
		}	
}
	cout<<endl<<"Enter the weightage of this assesment(%).";cin>>weightage[2]; 
	
			/*....................Marking Midterm marks according to weightage................*/
	if(choice==1){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[2]/100);
		}
		ofstream read;
		read.open("weighted midterm marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	else if(choice==2){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[2]/100);
		}
		ofstream read;
		read.open("weighted f21 B Midterm marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	else if(choice==3){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[2]/100);
		}
		ofstream read;
		read.open("weighted f20 A Midterm marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
		

assesment_or_class();
return 0;
}


			/* CEA MARKS*/
int CEA(){
			//for class F21 A
	if(choice==1){	

		float marks[size];
		ifstream nameFile;
		nameFile.open("name.txt");
		string name[size];
		ifstream marksFile;
		marksFile.open("CEA marks.txt");
		for(int x=0 ; x<size ; x++){
			nameFile>>name[x];
			marksFile>>marks[x];
			cout<<name[x]<<"	:		"<<marks[x]<<endl;
		}	

	}
	//for class f21 B
	else if(choice==2){	

		float marks[size];
		ifstream nameFile;
		nameFile.open("f21 B name.txt");
		string name[size];
		ifstream marksFile;
		marksFile.open("f B CEA marks.txt");
		for(int x=0 ; x<size ; x++){
			nameFile>>name[x];
			marksFile>>marks[x];
			cout<<name[x]<<"	:		"<<marks[x]<<endl;
		}	
	}
	//FOR CLASS F20 A
	else if(choice==3){
	
		float marks[size];
		ifstream nameFile;
		nameFile.open("f20 A name.txt");
		string name[size];
		ifstream marksFile;
		marksFile.open("f20 A CEA marks.txt");
		for(int x=0 ; x<size ; x++){
			nameFile>>name[x];
			marksFile>>marks[x];
			cout<<name[x]<<"	:		"<<marks[x]<<endl;
		}	

	}
	cout<<endl<<"Enter the weightage of this assesment(%).";cin>>weightage[3]; 
	
		/*....................Marking CEA marks according to weightage................*/
	 if(choice==1){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[3]/100);
		}
		ofstream read;
		read.open("weighted CEA marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	else if(choice==2){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[3]/100);
		}
		ofstream read;
		read.open("weighted f21 B CEA marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	else if(choice==3){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[3]/100);
		}
		ofstream read;
		read.open("weighted f20 A CEA marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	
	assesment_or_class();
	return 0;
}

			/*FINAL MARKS*/
int Final_term(){
	//FOR CLASS F21 A
	if(choice==1){	

		float marks[size];
		ifstream nameFile;
		nameFile.open("name.txt");
		string name[size];
		ifstream marksFile;
		marksFile.open("final marks.txt");
		for(int x=0 ; x<size ; x++){
			nameFile>>name[x];
			marksFile>>marks[x];
			cout<<name[x]<<"	:		"<<marks[x]<<endl;
		}	
	}
	//FOR CLASS F21 B
	else if(choice==2){	

		float marks[size];
		ifstream nameFile;
		nameFile.open("f21 B name.txt");
		string name[size];
		ifstream marksFile;
		marksFile.open("f B final term marks.txt");
		for(int x=0 ; x<size ; x++){
			nameFile>>name[x];
			marksFile>>marks[x];
			cout<<name[x]<<"	:		"<<marks[x]<<endl;
		}	

	}
	//FOR CLASS F20 A
	else if(choice==3){
	
		float marks[size];
		ifstream nameFile;
		nameFile.open("f20 A name.txt");
		string name[size];
		ifstream marksFile;
		marksFile.open("f20 A final marks.txt");
		for(int x=0 ; x<size ; x++){
			nameFile>>name[x];
			marksFile>>marks[x];
			cout<<name[x]<<"	:		"<<marks[x]<<endl;
		}	
	}
	cout<<endl<<"Enter the weightage of this assesment(%).";cin>>weightage[4]; 
	
			/*....................Marking Final marks according to weightage................*/
	 if(choice==1){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[4]/100);
		}
		ofstream read;
		read.open("weighted final marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	else if(choice==2){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[4]/100);
		}
		ofstream read;
		read.open("weighted f21 B final marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	else if(choice==3){
		
		float marks[size];
		for(int x=0 ; x<size ; x++){
			marks[x]*=(weightage[4]/100);
		}
		ofstream read;
		read.open("weighted f20 A final marks.txt");
		for(int x=0 ; x<size ; x++){
			read<<marks[x]<<endl;
		}
		
	}
	
	assesment_or_class();
	return 0;
}

		/*.........WELCOME TO CLASSES.........*/

int classes(){
	if(choice==1){
	cout<<"		Welcome to class F21 A 		"<<endl<<endl;
 	size=enter_size();
	ifstream roll_File;
	roll_File.open("roll number.txt");
	string name[size];
	int reg[size];
	cout<<endl<<"Students:	Roll # "<<endl<<endl;
	for(int x=0 ; x<size ; x++){
		roll_File>>reg[x] ;
	}
	ifstream nameFile;
	nameFile.open("name.txt");
	
	for(int x=0 ; x<size ; x++){
		nameFile>>name[x];	
	}
	for(int y=0 ; y<size ; y++){
		cout<<name[y]<<"	:	"<<reg[y];
		cout<<endl;
	}
		
}	
else if(choice==2){
	cout<<"		Welcome to class F21 B 		"<<endl<<endl;
	size=enter_size();
	
	ifstream roll_File;
	roll_File.open("f21 B roll number.txt");
	string name[size];
	int reg[size];
	cout<<endl<<"Students:	Roll # "<<endl<<endl;
	for(int x=0 ; x<size ; x++){
		roll_File>>reg[x] ;
	}
	ifstream nameFile;
	nameFile.open("f21 B name.txt");
	
	for(int x=0 ; x<size ; x++){
		nameFile>>name[x];	
	}
	for(int y=0 ; y<size ; y++){
		cout<<name[y]<<"	:	"<<reg[y];
		cout<<endl;
	}
	
}
else if(choice==3){
	cout<<"		Welcome to class F20 A 		"<<endl<<endl;
	size=enter_size();
	
	ifstream roll_File;
	roll_File.open("f20 A roll number.txt");
	string name[size];
	int reg[size];
	cout<<endl<<"Students:	Roll # "<<endl<<endl;
	for(int x=0 ; x<size ; x++){
		roll_File>>reg[x] ;
	}
	ifstream nameFile;
	nameFile.open("f20 A name.txt");
	
	for(int x=0 ; x<size ; x++){
		nameFile>>name[x];
	}
	for(int y=0 ; y<size ; y++){
		cout<<name[y]<<"	:	"<<reg[y];
		cout<<endl;
	}	
	
	
}
select_assesment();
return 0;
}

		/*..........CHOOSING CLASS............*/
int class_choice(){
	cout<<endl<<"Enter which class to select : "<<endl<<endl;
	cout<<"1. CE-112L BEME F21 A"<<endl<<endl;
	cout<<"2. CE-112L BEME F21 B"<<endl<<endl;
	cout<<"3. CE-112L BEME F20 A"<<endl<<endl;
	cout<<"4.Exit."<<endl<<endl;
	int chk=0;
	int ch;
	while(chk!=1){
	cout<<"Enter choice(number) : "; cin>>choice;
	cout<<endl;
	if(choice==1 || choice==2 || choice==3){
		
		classes();
		return 0;
	}
	else if(choice==4){
		return 0;
	}

	else{
		cout<<"Please enter a correct choice"<<endl;
	}
	}
	
}
int teacher_portal(){
	
	cout<<".........WELCOME TO TEACHER'S PORTAL............"<<endl;
	
	int choice=class_choice();
	return 0;
	
}





/*................................	MAIN FUNCTION........................*/

int main(){
	cout<<"...................WELCOME TO AIR UNIVERSITY MANAGEMENT SYSTEM....................."<<endl<<endl<<endl;
	cout<<"Select the following choices."<<endl;
	cout<<"1. Teacher's portal"<<endl;
	cout<<"2. University Cafe."<<endl;
	cout<<"3. Gaming zone."<<endl;
	cout<<"4. Exit"<<endl<<endl;
	int choose;
	int x=0;
	while(x!=1){
		cout<<"Enter choice : "; cin>>choose;
		
		if (choose ==1){
			teacher_portal();
			return 0;
		}
		else if(choose==2){
			cafe();
			return 0;
		}
		else if(choose==3){
		gaming_zone();
			return 0;
		}
		else if(choose==4){
			x=1;
			
		}
		else{
			cout<<"Please enter a correct choice";
		}
	}
	return 0;
}


