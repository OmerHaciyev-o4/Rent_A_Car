#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
//memorizes statements or arrays that are necessary for automotive information.
struct carInfo
{
	char carNum[50] = { "\t\tCar -  " };
	char carName[50] = { "Car Name: " };
	char carModel[50] = { "Car Model: " };
	char maxSpeed[50] = { "Max Speed: " };
	char enginePower[50] = { "Engine Power: " };
	char gearbox[50] = { "Gearbox: " };
	char carNumber[50] = { "Car Number: " };
	char priceHour[50] = { "PriceHour: " };
	char carNum_select[25] = { '\0' };
	char carName_select[25] = { '\0' };
	char carModel_select[25] = { '\0' };
	char maxSpeed_select[25] = { '\0' };
	char enginePower_select[25] = { '\0' };
	char gearbox_select[25] = { '\0' };
	char carNumber_select[25] = { '\0' };
	char priceHour_select[25] = { '\0' };
	//------------------------------------------------
	char count[999][999] = { '\0' };
	char select2[50] = { '\0' };
	char select3[25] = { '\0' };
	char select4[25] = { '\0' };
	char count3[50] = { '\0' };
	char count1[50] = { '\0' };
	char count2[50] = { '\0' };
	char ad[40] = { '\0' };
	char soyad[40] = { '\0' };
	char carad[40] = { '\0' };
	char carnomre[10] = { '\0' };
	int index = 0;
}car;
//saves the words or arrays that are necessary for the user menu.
struct userMenu
{
	char count[999][999] = { '\0' };
	double cem = 0;
	char Read[999][100] = { '\0' };
	char contract[40] = { '\0' };
	char select3[20] = { '\0' };
	char line2[50] = {};
	char line4[1] = {};
	char line5[2] = {};
	char line6[3] = {};
	char line7[1] = {};
	char line8[2] = {};
	char line9[3] = {};
	char line10[50] = {};
	int s = 0;
	int s1 = 8;
	int s2 = 12;
	int price = 0;
	int time = 0;
	char date[50] = { "Date: \n" };
	char city[50] = { "City: \n" };
	char icareciAd[50] = { "Icarecinin Adi: \n" };
	char icaresoyad[50] = { "Icarecinin Soyadi: \n" };
	char icareciMobil[50] = { "Icarecinin Mobil Nomresi: \n" };
	char icareciSelect[60] = { "Icarecinin Secdiyi Avtomobil melumatlari: \n" };
	char icareciPrice[50] = { "Icarecinin odemeli oldugu mebleg: \n" };
	char icareciTimeEnd[50] = { "Muqavilenin bitme mudediti: \n" };
	char line[100][100] = { '\0' };
	char line1[400][999] = { '\0' };
	char muqavileBasliqlari[3][100] = { '\0' };
	char muqavilerinSetirSayi[60][999] = { '\0' };
}user;
//The program displays the logo on the screen.
void entranceLogo();
//Directs menus.
int theWayAllWorkWillDo();
//redirect admin menus
void adminMenuAll();
//--------------------------------------------------------------
//adminMenuAll is the first selection of the menu.
int adminMenu1();
//Continuation inside adminMenu1.
int adminMenu1_1();
//adminMenu1_1's computational work.
int calculation();
//admin Menu The second selection of the All menu.
int adminMenu1_2();
//The first option inside adminMenu1_2.
int adminMenu1_2_1();
//The second option inside adminMenu1_2.
int adminMenu1_2_2();
//The third option inside adminMenu1_2.
int adminMenu1_2_3();
//The fourth option inside adminMenu1_2.
int adminMenu1_2_4();
//The fifth option inside adminMenu1_2.
int adminMenu1_2_5();
//The sixth option inside adminMenu1_2.
int adminMenu1_2_6();
//The seventh option inside adminMenu1_2.
int adminMenu1_2_7();
//adminThe third choice of the menu of Menu1.
int adminMenu1_3();
//adminMenuAll's second choice.
void adminMenu2();
//The first option inside adminMenu2.
int adminMenu2_1();
//Continuation of adminMenu2_1.
int adminMenu2_2_1();
//Continuation of adminMenu2_2_2.
int adminMenu2_2_2(char select[], char select1[], char select2[]);
//admin The fourth option inside Menu2.
int adminMenu2_4();
//The fifth option within adminMenu2.
int adminMenu2_5();
//------------------------------------------------------------------------
//Orientation of user menus.
int userMenuAll();
//userMenuAll's first choice.
int userMenu1();
//second selection of userMenuAll.
int userMenu2();
//userMenuAll's third choice.
int userMenu3();


int main()
{
	entranceLogo(); 
	theWayAllWorkWillDo();
}
void entranceLogo()
{
	cout << "  \t  \033[36m                                                                              ____     \033[0m" << endl;
	cout << "\t\t  \033[36m ______   _____  _______ ___________      __      __  ____     _____ |  __|            \033[0m" << endl;
	cout << "\t\t  \033[36m/  ____| / ___ \\ |  ___||__    __|\\ \\    /  \\    / / / __ \\   |  _  || |__        \033[0m" << endl;
	cout << "\t\t  \033[36m\\____  \\ ||   || |  |_     |  |    \\ \\  / /\\ \\  / / / /__\\ \\  |    _||  __|    \033[0m" << endl;
	cout << "\t\t  \033[36m ____)  |||___|| |  __|    |  |     \\ \\/ /  \\ \\/ / /  ____  \\ | |\\ \\ | |__      \033[0m" << endl;
	cout << "\t\t  \033[36m|_____ / \\_____/ |__|      |__|      \\__/    \\__/ /__/    \\__\\|_| \\_\\|____|     \033[0m" << endl;
	cout << "\t\t       \033[91m ____   ___     _   _______  ______  ___     _  ____  ____  _____                 \033[0m" << endl;
	cout << "\t\t       \033[91m|  __| |   \\   | | |  _____||_    _||   \\   | ||  __||  __||  _  |              \033[0m" << endl;
	cout << "\t\t       \033[91m| |__  | |\\ \\  | | | |  ___   |  |  | |\\ \\  | || |__ | |__ |    _|            \033[0m" << endl;
	cout << "\t\t       \033[91m|  __| | | \\ \\ | | | | |_  |  |  |  | | \\ \\ | ||  __||  __|| |\\ \\           \033[0m" << endl;
	cout << "\t\t       \033[91m| |__  | |  \\ \\| | | |___| | _|  |_ | |  \\ \\| || |__ | |__ | | \\ \\          \033[0m" << endl;
	cout << "\t\t       \033[91m|____| |_|   \\___| |_______||______||_|   \\___||____||____||_|  \\_\\           \033[0m" << endl;
	cout << "\t\t	  \033[92m                                                                                    \033[0m" << endl;
	cout << "\t\t	  \033[92m _     _        _____     __        __   ____   _____                        \033[0m" << endl;
	cout << "\t\t	  \033[92m| |   | |      /  _  \\   |  \\      /  | |  __| |  _  |                      \033[0m" << endl;
	cout << "\t\t	  \033[92m| |___| |      | | | |   | |\\\\    //| | | |__  |    _|                    \033[0m" << endl;
	cout << "\t\t	  \033[92m|  ___  |      | | | |   | | \\\\  // | | |  __| | |\\ \\                    \033[0m" << endl;
	cout << "\t\t	  \033[92m| |   | |  _   | |_| |   | |  \\\\//  | | | |__  | | \\ \\                   \033[0m" << endl;
	cout << "\t\t	  \033[92m|_|   |_| |_|  \\_____/   |_|   \\/   |_| |____| |_|  \\_\\                  \033[0m" << endl;
	Sleep(3000);
	system("cls");
	cout << "\t\t\t\t\tWELCOME" << endl;
	Sleep(1500);
	system("cls");
}
int theWayAllWorkWillDo()
{
	string select;
	cout << "\t\t\t\t\tRENT A CAR" << endl;
	cout << "1) User Menu." << endl;
	cout << "2) Admin Menu." << endl;
	cout << "Secim edin: ";
	getline(cin, select);
	if (select == "1")
	{
		system("cls");
		userMenuAll();
	}
	if (select == "2")
	{
		system("cls"); 
		string login;
		cout << "Login: "; 
		getline(cin, login);
		string password;
		cout << "Password: ";
		getline(cin, password);
		if (login == "admin" && password == "admin")
		{
			adminMenuAll();
		}
		else
		{
			cout << "You have entered the wrong login and password.\nPlease return to the main menu and try again." << endl;
			cout << "0) Exit." << endl;
			cout << "1) Continue." << endl;
			cout << "Secim edin : ";
			string select1;
			getline(cin, select1);
			if (select1 == "0")
			{
				system("cls");
				theWayAllWorkWillDo();
			}
		}
	}
	return 0;
}
//-
void adminMenuAll()
{
	system("cls");
	string select;
	// adminThe first menu of the menu
	cout << "\t\t\t\t\tADMIN MENU" << endl;
	cout << "1) Car." << endl;
	cout << "2) Contract" << endl;
	cout << "0) Exit." << endl;
	cout << "Make a choice: ";
	getline(cin, select);
	// What can be done about the car.
	if (select == "1")
	{
		system("cls");
		// adminMenu1 is routed.
		adminMenu1();
	}
	//+
	//They can be made about the contract
	if (select == "2")
	{
		system("cls");
		// redirection to adminMenu2
		adminMenu2();
	}
	// Return to previous menu
	if (select == "0")
	{
		system("cls");
		theWayAllWorkWillDo();
	}
}
int adminMenu1()
{
	system("cls");  // After the user enters, the screen deletes the cixans in advance.
	string select;
	//adminThe second menu of the menu
	cout << "\t\t\t\t\tADIM MENU" << endl;
	cout << "1) To add auto." << endl;
	cout << "2) Saying auto information." << endl;
	cout << "3) Auto delete." << endl;
	cout << "4) Avto list." << endl;
	cout << "5) Avto delete list." << endl;
	cout << "6) Auto Accident." << endl;
	cout << "0) Exit." << endl;
	cout << "Secim edin: ";
	getline(cin, select);
	system("cls"); // After the user enters, the screen deletes the cixans in advance.
	if (select == "1")
	{
		system("cls");
		// the first choice in the menu
		adminMenu1_1();
	}
	else if (select == "2")
	{
		system("cls");
		//second choice in the menu
		adminMenu1_2();
	}
	else if (select == "3")
	{
		system("cls");
		// the third choice in the menu
		adminMenu1_3();
	}
	else if (select == "4")
	{

		system("cls");
		for (int i = 0; i < 999; i++)
		{
			for (int j = 0; j < 999; j++)
			{
				car.count[i][j] = { '\0' };  // The elements of the two-level array inside the struct are set to zero or NULL.
			}
		}
		FILE* fptr; fopen_s(&fptr, "CarInfo.txt", "r");  // reads the information from the file in the middle.
		if (fptr != NULL)  // Checks whether the file is in, if not, the file program does not display anything.
		{
			for (int i = 0; i < 998; i++)
			{
				fgets(user.count[i], 100, fptr); //The array inside the struct reads and writes to each element of each element of the file.
			}
			fclose(fptr); // stops reading from file.
		}
		for (int i = 0; i < 998; i++)
		{
			cout << user.count[i]; // captures the elements inside the array on the screen.
		}
		cout << endl << endl << "Please press Enter when you are finished.";
		cin.ignore();  // The program continues to work on the user's Enter etiquette.
		system("cls"); // After the user enters, the screen deletes the cixans in advance.
		// then the selections are capped on the screen to make a selection.
		cout << "0) Exit." << endl;
		cout << "1) Continue." << endl;
		cout << "Secim edin: ";
		string select1;
		getline(cin, select1); // shows the user where the selection should be written.
		if (select1 == "0")    // here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
		{
			system("cls"); // After the user enters, the screen deletes the cixans in advance.
			adminMenu1();  // restarts the adminMenu1 function.
		}
		system("cls");  // After the user enters, the screen deletes the cixans in advance.
	}
	else if (select == "5")
	{
		system("cls"); // After the user enters, the screen deletes the cixans in advance.
		for (int i = 0; i < 999; i++)
		{
			for (int j = 0; j < 999; j++)
			{
				car.count[i][j] = { '\0' };  // The elements of the two-level array inside the struct are set to zero or NULL.
			}
		}
		FILE* fptr1; fopen_s(&fptr1, "Car Delete List.txt", "r");  // reads the information from the file in the middle.
		if (fptr1 != NULL)  // Checks whether the file is in, if not, the file program does not display anything.
		{
			for (int i = 0; i < 998; i++)
			{
				fgets(user.count[i], 100, fptr1);  //The array inside the struct reads and writes to each element of each element of the file.
			}
			fclose(fptr1);  // stops reading from file.
		}
		for (int i = 0; i < 998; i++)
		{
			cout << user.count[i];  // captures the elements inside the array on the screen.
		}
		cout << endl << endl << "Please press Enter when you are finished.";
		cin.ignore();  // The program continues to work on the user's Enter etiquette.
		system("cls");// After the user enters, the screen deletes the cixans in advance.
		// then the selections are capped on the screen to make a selection.
		cout << "0) Exit." << endl;
		cout << "1) Continue." << endl;
		cout << "Secim edin: ";
		string select1;
		getline(cin, select1); // shows the user where the selection should be written.
		if (select1 == "0")	   // here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
		{
			system("cls");  // After the user enters, the screen deletes the cixans in advance.
			adminMenu1();   // restarts the adminMenu1 function.
		}
		system("cls");  // After the user enters, the screen deletes the cixans in advance.
	}
	else if (select == "6")
	{
		system("cls"); // After the user enters, the screen deletes the cixans in advance.
		for (int i = 0; i < 999; i++)
		{
			for (int j = 0; j < 999; j++)
			{
				car.count[i][j] = { '\0' };  // The elements of the two-level array inside the struct are set to zero or NULL.
			}
		}
		FILE* fptr; fopen_s(&fptr, "Qezaya ugramis avtos", "r");  // reads the information from the file in the middle.
		if (fptr != NULL)  // Checks whether the file is in, if not, the file program does not display anything.
		{
			for (int i = 0; i < 999; i++)
			{
				fgets(car.count[i], 999, fptr);   //The array inside the struct reads and writes to each element of each element of the file.
			}
			fclose(fptr);  // stops reading from file.
		}
	}
	else if (select == "0")
	{
		system("cls");  // After the user enters, the screen deletes the cixans in advance.
		adminMenuAll(); // If you want to exit the menu inside this function, this function redirects to the previous menu adminMenuAll();
	}
	return 0;		// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int adminMenu1_1()
{
	system("cls");  // After the user enters, the screen deletes the cixans in advance.
	cout << "You know how many cars will be in the car database that will include information(y/n): ";
	string select;
	getline(cin, select);   // shows the user where the selection should be written.
	if (select == "y" || select == "Y")    // The car entered by the user is checked to see if it is a car, and if yes, the function continues to work, but if it does not know, it redirects the user to the previous menu.
	{
		FILE* fptr; fopen_s(&fptr, "CarInfo.txt", "a"); // reads the information from the file in the middle.
		{
			cout << "What a car(1/2/3/...): "; cin.getline(car.carNum_select, 25);								// asks the user what kind of car it is                
			cout << "Enter the name of the car: "; cin.getline(car.carName_select, 25);							// asks the user to enter the name of the car.                                  
			cout << "Enter the car model: "; cin.getline(car.carModel_select, 25);								// asks the user to enter the model of the car.                         
			cout << "Enter the maximum speed of the car: "; cin.getline(car.maxSpeed_select, 25);               // asks the user to enter the maximum speed of the car.                                      
			cout << "Insert the car's engine cube and fuel: "; cin.getline(car.enginePower_select, 25);			// asks the user to enter the engine power of the car.                            
			cout << "Enter the car automatic / manual: "; cin.getline(car.gearbox_select, 25);                  // asks the user to enter the car's gearbox.    
			cout << "Enter the car number(xx-XX-xxx): "; cin.getline(car.carNumber_select, 25);					// asks the user to enter the number of the car.         
			cout << "Enter the 1-hour price of the car: "; cin.getline(car.priceHour_select, 25);               // asks the user to enter the hourly price of the car.            
			calculation();											// The user's input tags are written after the finished words into another array, and then written to the file here.
			fprintf_s(fptr, "%s\n", car.carNum);					// The user's input tags are written after the finished words into another array, and then written to the file here.
			fprintf_s(fptr, "%s\n", car.carName);					// The user's input tags are written after the finished words into another array, and then written to the file here.
			fprintf_s(fptr, "%s\n", car.carModel);					// The user's input tags are written after the finished words into another array, and then written to the file here.
			fprintf_s(fptr, "%s\n", car.enginePower);			    // The user's input tags are written after the finished words into another array, and then written to the file here.     
			fprintf_s(fptr, "%s\n", car.maxSpeed);				    // The user's input tags are written after the finished words into another array, and then written to the file here.
			fprintf_s(fptr, "%s\n", car.gearbox);					// The user's input tags are written after the finished words into another array, and then written to the file here.
			fprintf_s(fptr, "%s\n", car.carNumber);					// The user's input tags are written after the finished words into another array, and then written to the file here.
			fprintf_s(fptr, "%s\n", car.priceHour);					// The user's input tags are written after the finished words into another array, and then written to the file here. 
			fputs("--------------------------------\n", fptr);		// After the data, it separates the current car with the next car with forty lines.
			fclose(fptr);											// stops reading from file.
		}
		system("cls");												// After the user enters, the screen deletes the cixans in advance.			
		cout << "Please wait 5 seconds to save the data :)" << endl;
		Sleep(5000);												// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
		system("cls");												// After the user enters, the screen deletes the cixans in advance.
		cout << "Thanks for waiting :)" << endl;
		cout << "The data was successfully stored in memory :)" << endl;
		Sleep(3000);												// After displaying the information displayed in the program, this function waits for 3 seconds and then performs the next task.
		system("cls");												// After the user enters, the screen deletes the cixans in advance.
		// After the data is deleted from the screen, these words are captured on the screen and must be selected.
		cout << "0) Exit." << endl; 
		cout << "1) Continue." << endl;
		cout << "Secim edin: ";
		string select;
		getline(cin, select);	// indicates where the selection should be stored
		if (select == "0")		// here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
		{
			system("cls");		// After the user enters, the screen deletes the cixans in advance.
			adminMenu1();		// restarts the adminMenu1 function.
		}
	}
	else
	{
		cout << "Please see the car list : )";
		Sleep(5000);		 // After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
		system("cls");		 // After the user enters, the screen deletes the cixans in advance.
		adminMenu1();        // restarts the adminMenu1 function.
	}
	return 0;				// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int calculation()
{
	for (int i = 0, j = 10; (i < 25) && (j < 37); i++, j++)
	{
		car.carName[j] = car.carName_select[i];				// The information entered together with the others, including the 10th element of carName, is recorded.
	}
	for (int i = 0, j = 11; (i < 25) && (j < 38); i++, j++)
	{
		car.carModel[j] = car.carModel_select[i];			// The information entered together with the others, including the 10th element of carModel, is recorded.
	}
	for (int i = 0, j = 7; (i < 25) && (j < 33); i++, j++)
	{
		car.carNum[j] = car.carNum_select[i];				// The information entered together with the others, including the 10th element of carNum, is recorded.
	}
	for (int i = 0, j = 11; (i < 25) && (j < 38); i++, j++)
	{
		car.maxSpeed[j] = car.maxSpeed_select[i];			// The information entered together with the others, including the 10th element of MaxSpeed, is recorded.
	}
	for (int i = 0, j = 13; (i < 25) && (j < 40); i++, j++)
	{
		car.enginePower[j] = car.enginePower_select[i];		// The information entered together with the others, including the 10th element of enginepower, is recorded.
	}
	for (int i = 0, j = 9; (i < 25) && (j < 36); i++, j++)
	{
		car.gearbox[j] = car.gearbox_select[i];				// The information entered together with the others, including the 10th element of gearbox, is recorded.
	}
	for (int i = 0, j = 11; (i < 25) && (j < 38); i++, j++)
	{
		car.carNumber[j] = car.carNumber_select[i];			// The information entered together with the others, including the 10th element of carNumber, is recorded.
		car.priceHour[j] = car.priceHour_select[i];			// The information entered together with the others, including the 10th element of carPriceHour, is recorded.
	}
	return 0;												// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int adminMenu1_2()
{
	system("cls");				// After the user enters, the screen deletes the cixans in advance.
	cout << "Let him know how to tell the details of the car(y/n): "; 
	string select;			
	getline(cin, select);		// shows the user where the selection should be written.
	if (select == "y" || select == "Y")   // if the information entered by the user is correct, then this line is dropped.
	{
		FILE* fptr; fopen_s(&fptr, "CarInfo.txt", "r");		// reads the information from the file in the middle.
		if (fptr != NULL)									// Checks whether the file is in, if not, the file program does not display anything.
		{
			system("cls");   // After the user enters, the screen deletes the cixans in advance.
			char select1[6] = { '\0' };
			cout << "How many car details will you change(1/2/3/...): ";
			cin.getline(select1, 6);    // shows the user where the selection should be written.
			system("cls");				// After the user enters, the screen deletes the cixans in advance.
			if (select1 != "\0")		// if the information entered by the user is correct, then this line is dropped.
			{
				char line[50] = { "\t\tCar -" };
				for (int i = 7, j = 0; (i < 12) && (j < 5); i++, j++)
				{
					line[i] = select1[j];   // The mode entered by the user is written inside the finished array.
				}
				for (int i = 0; i < 50; i++)
				{
					if (line[i] == '\0')	// if '\ 0' is equal inside the array, the codes inside if will be executed.
					{
						line[i] = { '\n' };  // if '\ 0' is equal, then the same index is equal to '\ n'.
						break;  //stops the cycle
					}
				}
				for (int i = 0; i < 999; i++)
				{
					for (int j = 0; j < 999; j++)
					{
						car.count[i][j] = { '\0' };   // The array inside the struct is set to '\ 0' for all elements so that no problem arises
					}
				}
				for (int i = 0; i < 999; i++)
				{
					fgets(car.count[i], 999, fptr);		// The file reads all the information and writes the array inside the struct.
				}
				int s = 0;
				for (int i = 0; i < 999; i += 9)
				{
					for (int j = 0; j < 50; j++)
					{
						if (car.count[i][j] == line[j])  // here it is checked whether each element is equal, if it is equal, then the value of s is increased by one unit, if not, if the first element is not equal, then it is equal to 0 and stops the second.
						{
							s++;
						}
						else
						{
							s = 0;
							break;
						}
					}
					// if s = 50 then the codes inside if will work.
					if (s == 50)
					{
						// the elements are printed on the screen
						for (int j = i; j < i + 8; j++)
						{
							cout << car.count[j];
						}
						cout << endl;   // ekrana yeni bos setir qoyurþ
						car.index = i;  // remembers the index of the first element.
						fclose(fptr);   // stops reading from file.
						string select2;
						cout << "You will tell the details of which spare part of the car: ";
						getline(cin, select2);   // shows the user where the selection should be written.
						if (select2 == "Car Name" || select2 == "car name" || select2 == "car Name" || select2 == "Car name")
						{
							// directs
							adminMenu1_2_1();
						}
						else if (select2 == "Car Model" || select2 == "car model" || select2 == "car Model" || select2 == "Car model")
						{
							// directs
							adminMenu1_2_2();
						}
						else if (select2 == "Engine Power" || select2 == "engine power" || select2 == "engine Power" || select2 == "Engine power")
						{
							// directs
							adminMenu1_2_3();
						}
						else if (select2 == "Max Speed" || select2 == "max speed" || select2 == "max Speed" || select2 == "Max speed")
						{
							// directs
							adminMenu1_2_4();
						}
						else if (select2 == "GearBox" || select2 == "gearbox" || select2 == "gearBox" || select2 == "Gearbox")
						{
							// directs
							adminMenu1_2_5();
						}
						else if (select2 == "Car Number" || select2 == "car number" || select2 == "car Number" || select2 == "Car number")
						{
							// directs
							adminMenu1_2_6();
						}
						else if (select2 == "PriceHour" || select2 == "pricehour" || select2 == "priceHour" || select2 == "PriceHour")
						{
							// directs
							adminMenu1_2_7();
						}
						// if none of the conditions are true, then the codes here work
						else
						{
							cout << "You didn't spell your name correctly\nPlease try again. Thanks  :)";
							Sleep(3500);	// After displaying the information displayed in the program, this function waits for 3.5 seconds and then performs the next task.
							system("cls");	// After the user enters, the screen deletes the cixans in advance.
							cout << "0) Exit." << endl;
							cout << "1) Continue." << endl;
							cout << "Secim edin: ";
							string select;
							getline(cin, select);		// shows the user where the selection should be written.
							if (select == "0")			// here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
							{
								system("cls");			// After the user enters, the screen deletes the cixans in advance.
								adminMenu1();			// restarts the adminMenu1 function.
							}
							system("cls");				// After the user enters, the screen deletes the cixans in advance.
						}
					}
				}
			}
			else
			{
				cout << "There are no cars in your database." << endl;
				cout << "Please enter car information by going to 'auto entry'. Thanks. :)" << endl;
				Sleep(5000);							// After displaying the information displayed in the program, this function waits for 3 seconds and then performs the next task.
				system("cls");							// After the user enters, the screen deletes the cixans in advance.
				cout << "0) Exit." << endl;
				cout << "1) Continue." << endl;
				cout << "Secim edin: ";
				string select;
				getline(cin, select);					// shows the user where the selection should be written.
			}
		}
	}
	else
	{
		system("cls");						// After the user enters, the screen deletes the cixans in advance.
		cout << "0) Exit." << endl;
		cout << "1) Continue." << endl;
		cout << "Secim edin : "; 
		string select;
		getline(cin, select);				// shows the user where the selection should be written.
		if (select == "0")					// here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
		{
			system("cls");					// After the user enters, the screen deletes the cixans in advance.
			adminMenu1();					// restarts the adminMenu1 function.
		}
	}
	return 0; // if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int adminMenu1_2_1()
{
	int l = car.index + 1;                            // this index + 1 new here will be operations on the next element
	for (int i = l; i < 999; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = { '\0' };				// The array inside the struct is set to '\ 0' for all elements so that no problem arises
		}
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = car.count[i][j];		// Copying the information in the index of the count array to the count 2 array to show the screen what the previous word is
		}
		break;										// stops the cycle after the copy job is over
	}
	for (int j = 0; j < 25; j++)
	{
		car.select3[j] = { '\0' };					// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
		car.select4[j] = { '\0' };					// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
	}
	cout << "Type according to the model being compared (previous Car Name: Mercedes-Benz; New Car Name: Mercedes Benz)\n";
	cout << "Enter the previous name: ";
	cin.getline(car.select3, 25);											// indicates that the data entered by the user will be saved in scrap or writes an average
	cout << "Make a new name: ";
	cin.getline(car.select4, 25);											// indicates that the data entered by the user will be saved in scrap or writes an average
	for (int i = l; i < 999; i++)
	{
		for (int j = 10; j < 50; j++)
		{
			car.count[i][j] = { '\0' };										// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
		break;																// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int l = 10, j = 0; (l < 35) && (j < 25); l++, j++)
		{
			car.count[i][l] = car.select4[j];								// Newly entered information is written starting from the specified index.
		}
		break;																// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int j = 10; j < 999; j++)
		{
			if (car.count[i][j] == '\0')									// Searching for '\ 0', if it encounters the first NULL, it will replace it with '\ n' and stop the current.
			{
				car.count[i][j] = { '\n' };
				break;
			}
		}
		break;
	}
	cout << "Previous Ordinary Car: " << car.count2 << endl;
	cout << "New Ordinary Car: " << car.count[l] << endl;
	Sleep(5000);									// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");									// After the user enters, the screen deletes the cixans in advance.
	cout << "Please wait 5 seconds to memorize the information\n";
	Sleep(5000);									// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");									// After the user enters, the screen deletes the cixans in advance.
	FILE* fptr; fopen_s(&fptr, "CarInfo.txt", "w"); // reads the information from the file in the middle.
	if (fptr != NULL)								// Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 999; i++)
		{
			fprintf_s(fptr, "%s", car.count[i]);	// the data is written to the file
		}
		fclose(fptr);								// stops reading from file.
	}
	for (int i = 0; i < 999; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			car.count[i][j] = { '\0' };				// The array inside the struct is set to '\ 0' for all elements so that no problem arises
		}
	}
	cout << "The information was memorized.";
	Sleep(5000);									// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");									// After the user enters, the screen deletes the cixans in advance.
	cout << "0) Exit." << endl;
	cout << "1) Continue." << endl;
	cout << "Secim edin: ";
	string select;
	getline(cin, select);							// shows the user where the selection should be written.
	if (select == "0")								// here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
	{
		system("cls");								// After the user enters, the screen deletes the cixans in advance.
		adminMenu1();								// restarts the adminMenu1 function.
	}
	system("cls");									// After the user enters, the screen deletes the cixans in advance.
	return 0;										// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int adminMenu1_2_2()
{
	int l = car.index + 2;								// this index + 2 new here will be operations on the next element
	for (int i = l; i < 999; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = { '\0' };					// The array inside the struct is set to '\ 0' for all elements so that no problem arises	
		}
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = car.count[l][j];			// Copying the information in the index of the count array to the count 2 array to show the screen what the previous word is
		}
		break;											// stops the cycle after the copy job is over
	}
	for (int i = 0; i < 25; i++)
	{
		car.select3[i] = { '\0' };						// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
		car.select4[i] = { '\0' };						// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
	}
	cout << "Write according to the sample you are considering (Old Car Model: Mercedes-190; New Car Model: Mercedes 190)\n";
	cout << "Enter the name of the previous model: ";	
	cin.getline(car.select3, 25);									// indicates that the data entered by the user will be saved in scrap or writes an average
	cout << "Enter a new model name: ";
	cin.getline(car.select4, 25);									// indicates that the data entered by the user will be saved in scrap or writes an average
	for (int i = l; i < 999; i++)
	{
		for (int j = 11; j < 50; j++)
		{
			car.count[i][j] = { '\0' };								// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
		break;														// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int l = 11, j = 0; (l < 36) && (j < 25); l++, j++)
		{
			car.count[i][l] = car.select4[j];						// Newly entered information is written starting from the specified index.
		}
		break;														// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int j = 11; j < 999; j++)
		{
			if (car.count[i][j] == '\0')							// Searching for '\ 0', if it encounters the first NULL, it will replace it with '\ n' and stop the current.
			{
				car.count[i][j] = { '\n' };
				break;
			}
		}
		break;
	}
	cout << "Previous Model of the car: " << car.count2 << endl;
	cout << "New Model of the car: " << car.count[l] << endl;
	Sleep(5000);													// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");													// After the user enters, the screen deletes the cixans in advance.
	cout << "Please wait 5 seconds to memorize the information\n";	
	Sleep(5000);													// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");													// After the user enters, the screen deletes the cixans in advance.
	FILE* fptr; fopen_s(&fptr, "CarInfo.txt", "w");					// reads the information from the file in the middle.
	if (fptr != NULL)												// Checks whether the file is in, if not, the file program does not display anything.
	{																
		for (int i = 0; i < 999; i++)
		{
			fprintf_s(fptr, "%s", car.count[i]);					// the data is written to the file
		}
		fclose(fptr);												// stops reading from file.														
	}
	for (int i = 0; i < 999; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			car.count[i][j] = { '\0' };								// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
	}
	cout << "The information was saved.";							// The information was memorized.
	Sleep(5000);													// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");													// After the user enters, the screen deletes the cixans in advance.
	cout << "0) Exit." << endl;
	cout << "1) Continue." << endl;
	cout << "Secim edin: ";
	string select;
	getline(cin, select);											// shows the user where the selection should be written.
	if (select == "0")												// here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
	{
		system("cls");												// After the user enters, the screen deletes the cixans in advance.
		adminMenu1();												// restarts the adminMenu1 function.
	}
	system("cls");													// After the user enters, the screen deletes the cixans in advance.
	return 0;														// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int adminMenu1_2_3()
{
	int l = car.index + 3;											// this index + 3 new here will be operations on the next element
	for (int i = l; i < 999; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = { '\0' };								// The array inside the struct is set to '\ 0' for all elements so that no problem arises	
		}
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = car.count[l][j];						// Copying the information in the index of the count array to the count 2 array to show the screen what the previous word is
		}
		break;														// stops the cycle after the copy job is over
	}
	for (int i = 0; i < 25; i++)
	{
		car.select3[i] = { '\0' };									// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
		car.select4[i] = { '\0' };									// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
	}
	cout << "Write according to the sample you are using (Old Engine Power: 2.0-petrol; New Engine Power: 2.0-petrol)\n";
	cout << "Enter the previous Engine Power: ";
	cin.getline(car.select3, 25);										// indicates that the data entered by the user will be saved in scrap or writes an average
	cout << "Enter a new Engine Power: ";
	cin.getline(car.select4, 25);										// indicates that the data entered by the user will be saved in scrap or writes an average
	for (int i = l; i < 999; i++)
	{
		for (int j = 13; j < 50; j++)
		{
			car.count[i][j] = { '\0' };									// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
		break;															// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int l = 13, j = 0; (l < 38) && (j < 25); l++, j++)
		{
			car.count[i][l] = car.select4[j];							// Newly entered information is written starting from the specified index.
		}
		break;															// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int j = 13; j < 999; j++)
		{
			if (car.count[i][j] == '\0')								// Searching for '\ 0', if it encounters the first NULL, it will replace it with '\ n' and stop the current.
			{
				car.count[i][j] = { '\n' };
				break;
			}
		}
		break;
	}
	cout << "Previous Engine Power of the car: " << car.count2 << endl;
	cout << "New Engine Power of the car: " << car.count[l] << endl;
	Sleep(5000);																// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");																// After the user enters, the screen deletes the cixans in advance.
	cout << "Please wait 5 seconds to memorize the information\n";
	Sleep(5000);																// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");																// After the user enters, the screen deletes the cixans in advance.
	FILE* fptr; fopen_s(&fptr, "CarInfo.txt", "w");								// reads the information from the file in the middle.
	if (fptr != NULL)															// Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 999; i++)
		{
			fprintf_s(fptr, "%s", car.count[i]);								// the data is written to the file
		}
		fclose(fptr);															// stops reading from file.														
	}
	for (int i = 0; i < 999; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			car.count[i][j] = { '\0' };											// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
	}
	cout << "The information was saved.";										// The information was memorized.
	Sleep(5000);																// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");																// After the user enters, the screen deletes the cixans in advance.
	cout << "0) Exit." << endl;
	cout << "1) Continue." << endl;
	cout << "Secim edin: ";
	string select;
	getline(cin, select);														// shows the user where the selection should be written.
	if (select == "0")															// here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
	{
		system("cls");															// After the user enters, the screen deletes the cixans in advance.
		adminMenu1();															// restarts the adminMenu1 function.
	}
	system("cls");																// After the user enters, the screen deletes the cixans in advance.
	return 0;																	// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int	adminMenu1_2_4()
{
	int l = car.index + 4;											// this index + 4 new here will be operations on the next element
	for (int i = l; i < 999; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = { '\0' };								// The array inside the struct is set to '\ 0' for all elements so that no problem arises	
		}
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = car.count[l][j];						// Copying the information in the index of the count array to the count 2 array to show the screen what the previous word is
		}
		break;														// stops the cycle after the copy job is over
	}
	for (int i = 0; i < 25; i++)
	{
		car.select3[i] = { '\0' };									// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
		car.select4[i] = { '\0' };									// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
	}
	cout << "Write according to the model being compared (Old Max Speed: 240km / h; New Max Speed: 260 km / h)\n";
	cout << "Enter the previous Max Speed: ";
	cin.getline(car.select3, 25);										// indicates that the data entered by the user will be saved in scrap or writes an average
	cout << "Enter the new Max Speed: ";
	cin.getline(car.select4, 25);										// indicates that the data entered by the user will be saved in scrap or writes an average
	for (int i = l; i < 999; i++)
	{
		for (int j = 11; j < 50; j++)
		{
			car.count[i][j] = { '\0' };									// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
		break;															// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int l = 11, j = 0; (l < 35) && (j < 25); l++, j++)
		{
			car.count[i][l] = car.select4[j];							// Newly entered information is written starting from the specified index.
		}
		break;															// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int j = 11; j < 999; j++)
		{
			if (car.count[i][j] == '\0')								// Searching for '\ 0', if it encounters the first NULL, it will replace it with '\ n' and stop the current.
			{
				car.count[i][j] = { '\n' };
				break;
			}
		}
		break;
	}
	cout << "Previous Max Speed of the car: " << car.count2 << endl;
	cout << "Avtomobilin Yeni Max Speed: " << car.count[l] << endl;
	Sleep(5000);														// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");														// After the user enters, the screen deletes the cixans in advance.
	cout << "Please wait 5 seconds to memorize the information\n";
	Sleep(5000);														// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");														// After the user enters, the screen deletes the cixans in advance.
	FILE* fptr; fopen_s(&fptr, "CarInfo.txt", "w");						// reads the information from the file in the middle.
	if (fptr != NULL)													// Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 999; i++)
		{
			fprintf_s(fptr, "%s", car.count[i]);						// the data is written to the file
		}
		fclose(fptr);													// stops reading from file.														
	}
	for (int i = 0; i < 999; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			car.count[i][j] = { '\0' };									// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
	}
	cout << "The information was saved.";								// The information was memorized.
	Sleep(5000);														// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");														// After the user enters, the screen deletes the cixans in advance.
	cout << "0) Exit." << endl;
	cout << "1) Continue." << endl;
	cout << "Secim edin: ";
	string select;
	getline(cin, select);												// shows the user where the selection should be written.
	if (select == "0")													// here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
	{
		system("cls");													// After the user enters, the screen deletes the cixans in advance.
		adminMenu1();													// restarts the adminMenu1 function.
	}
	system("cls");														// After the user enters, the screen deletes the cixans in advance.
	return 0;															// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int	adminMenu1_2_5()
{
	int l = car.index + 5;							// this index + 5 new here will be operations on the next element
	for (int i = l; i < 999; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = { '\0' };				// The array inside the struct is set to '\ 0' for all elements so that no problem arises	
		}
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = car.count[l][j];		// Copying the information in the index of the count array to the count 2 array to show the screen what the previous word is
		}
		break;										// stops the cycle after the copy job is over
	}
	for (int i = 0; i < 25; i++)
	{
		car.select3[i] = { '\0' };					// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
		car.select4[i] = { '\0' };					// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
	}
	cout << "Type based on the model you are looking for (Old Gearbox: automatic; New Gearbox: manual)\n";
	cout << "Enter your previous Gearbox: ";
	cin.getline(car.select3, 25);											// indicates that the data entered by the user will be saved in scrap or writes an average
	cout << "Insert a new gearbox: ";
	cin.getline(car.select4, 25);											// indicates that the data entered by the user will be saved in scrap or writes an average
	for (int i = l; i < 999; i++)
	{
		for (int j = 9; j < 50; j++)
		{
			car.count[i][j] = { '\0' };										// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
		break;																// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int l = 9, j = 0; (l < 34) && (j < 25); l++, j++)
		{
			car.count[i][l] = car.select4[j];								// Newly entered information is written starting from the specified index.
		}
		break;																// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int j = 9; j < 999; j++)
		{
			if (car.count[i][j] == '\0')									// Searching for '\ 0', if it encounters the first NULL, it will replace it with '\ n' and stop the current.
			{
				car.count[i][j] = { '\n' };
				break;
			}
		}
		break;
	}
	cout << "Previous Gearbox of the car: " << car.count2 << endl;
	cout << "New Gearbox of the car: " << car.count[l] << endl;
	Sleep(5000);															// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");															// After the user enters, the screen deletes the cixans in advance.
	cout << "Please wait 5 seconds to memorize the information\n";
	Sleep(5000);															// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");															// After the user enters, the screen deletes the cixans in advance.
	FILE* fptr; fopen_s(&fptr, "CarInfo.txt", "w");							// reads the information from the file in the middle.
	if (fptr != NULL)														// Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 999; i++)
		{
			fprintf_s(fptr, "%s", car.count[i]);							// the data is written to the file
		}
		fclose(fptr);														// stops reading from file.														
	}
	for (int i = 0; i < 999; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			car.count[i][j] = { '\0' };										// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
	}
	cout << "The information was memorized.";								// The information was memorized.
	Sleep(5000);															// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");															// After the user enters, the screen deletes the cixans in advance.
	cout << "0) Exit." << endl;
	cout << "1) Continue." << endl;
	cout << "Secim edin: ";
	string select;
	getline(cin, select);													// shows the user where the selection should be written.
	if (select == "0")														// here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
	{
		system("cls");														// After the user enters, the screen deletes the cixans in advance.
		adminMenu1();														// restarts the adminMenu1 function.
	}
	system("cls");															// After the user enters, the screen deletes the cixans in advance.
	return 0;																// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int	adminMenu1_2_6()
{
	int l = car.index + 6;											// this index + 2 new here will be operations on the next element
	for (int i = l; i < 999; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = { '\0' };								// The array inside the struct is set to '\ 0' for all elements so that no problem arises	
		}
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = car.count[l][j];						// Copying the information in the index of the count array to the count 2 array to show the screen what the previous word is
		}
		break;														// stops the cycle after the copy job is over
	}
	for (int i = 0; i < 25; i++)
	{
		car.select3[i] = { '\0' };									// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
		car.select4[i] = { '\0' };									// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
	}
	cout << "Type according to the model being compared (Previous Car Number: 04-ZZ-345; New Car Number: 04-AA-004)\n";
	cout << "Enter your previous Car Number: ";
	cin.getline(car.select3, 25);											// indicates that the data entered by the user will be saved in scrap or writes an average
	cout << "Enter a new Car Number: ";
	cin.getline(car.select4, 25);											// indicates that the data entered by the user will be saved in scrap or writes an average
	for (int i = l; i < 999; i++)
	{
		for (int j = 11; j < 50; j++)
		{
			car.count[i][j] = { '\0' };										// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
		break;																// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int l = 11, j = 0; (l < 36) && (j < 25); l++, j++)
		{
			car.count[i][l] = car.select4[j];								// Newly entered information is written starting from the specified index.
		}
		break;																// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int j = 11; j < 999; j++)
		{
			if (car.count[i][j] == '\0')									// Searching for '\ 0', if it encounters the first NULL, it will replace it with '\ n' and stop the current.
			{
				car.count[i][j] = { '\n' };
				break;
			}
		}
		break;
	}
	cout << "Previous Car Number of the car: " << car.count2 << endl;
	cout << "New Car Number of the car: " << car.count[l] << endl;
	Sleep(5000);															// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");															// After the user enters, the screen deletes the cixans in advance.
	cout << "Please wait 5 seconds to memorize the information\n";
	Sleep(5000);															// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");															// After the user enters, the screen deletes the cixans in advance.
	FILE* fptr; fopen_s(&fptr, "CarInfo.txt", "w");							// reads the information from the file in the middle.
	if (fptr != NULL)														// Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 999; i++)
		{
			fprintf_s(fptr, "%s", car.count[i]);							// the data is written to the file
		}
		fclose(fptr);														// stops reading from file.														
	}
	for (int i = 0; i < 999; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			car.count[i][j] = { '\0' };										// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
	}
	cout << "The information was memorized.";								// The information was memorized.
	Sleep(5000);															// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");															// After the user enters, the screen deletes the cixans in advance.
	cout << "0) Exit." << endl;
	cout << "1) Continue." << endl;
	cout << "Secim edin: ";
	string select;
	getline(cin, select);													// shows the user where the selection should be written.
	if (select == "0")														// here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
	{
		system("cls");														// After the user enters, the screen deletes the cixans in advance.
		adminMenu1();														// restarts the adminMenu1 function.
	}
	system("cls");															// After the user enters, the screen deletes the cixans in advance.
	return 0;																// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int	adminMenu1_2_7()
{
	int l = car.index + 7;								// this index + 5 new here will be operations on the next element
	for (int i = l; i < 999; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = { '\0' };					// The array inside the struct is set to '\ 0' for all elements so that no problem arises	
		}
		for (int j = 0; j < 50; j++)
		{
			car.count2[j] = car.count[l][j];			// Copying the information in the index of the count array to the count 2 array to show the screen what the previous word is
		}
		break;											// stops the cycle after the copy job is over
	}
	for (int i = 0; i < 25; i++)
	{
		car.select3[i] = { '\0' };						// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
		car.select4[i] = { '\0' };						// The elements of the array are set to '\ 0' so that when it is exited, the data inside the selection is deleted and the user data is included in it.
	}
	cout << "Write according to the sample (previous PriceHour: 2AZN; New PriceHour: 4AZN)\n";
	cout << "Enter the previous PriceHour: ";
	cin.getline(car.select3, 25);												// indicates that the data entered by the user will be saved in scrap or writes an average
	cout << "Enter the new PriceHour: ";
	cin.getline(car.select4, 25);												// indicates that the data entered by the user will be saved in scrap or writes an average
	for (int i = l; i < 999; i++)
	{
		for (int j = 11; j < 50; j++)
		{
			car.count[i][j] = { '\0' };											// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
		break;																	// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int l = 11, j = 0; (l < 36) && (j < 25); l++, j++)
		{
			car.count[i][l] = car.select4[j];									// Newly entered information is written starting from the specified index.
		}
		break;																	// stops the cycle after the copy job is over
	}
	for (int i = l; i < 999; i++)
	{
		for (int j = 11; j < 999; j++)
		{
			if (car.count[i][j] == '\0')										// Searching for '\ 0', if it encounters the first NULL, it will replace it with '\ n' and stop the current.
			{
				car.count[i][j] = { '\n' };
				break;
			}
		}
		break;
	}
	cout << "Previous PriceHour of the car: " << car.count2 << endl;
	cout << "New PriceHour of the car: " << car.count[l] << endl;
	Sleep(5000);																// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");																// After the user enters, the screen deletes the cixans in advance.
	cout << "Please wait 5 seconds to memorize the information\n";
	Sleep(5000);																// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");																// After the user enters, the screen deletes the cixans in advance.
	FILE* fptr; fopen_s(&fptr, "CarInfo.txt", "w");								// reads the information from the file in the middle.
	if (fptr != NULL)															// Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 999; i++)
		{
			fprintf_s(fptr, "%s", car.count[i]);								// the data is written to the file
		}
		fclose(fptr);															// stops reading from file.														
	}
	for (int i = 0; i < 999; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			car.count[i][j] = { '\0' };											// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
	}
	cout << "The information was memorized.";									// The information was memorized.
	Sleep(5000);																// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
	system("cls");																// After the user enters, the screen deletes the cixans in advance.
	cout << "0) Exit." << endl;
	cout << "1) Continue." << endl;
	cout << "Secim edin: ";
	string select;
	getline(cin, select);														// shows the user where the selection should be written.
	if (select == "0")															// here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
	{
		system("cls");															// After the user enters, the screen deletes the cixans in advance.
		adminMenu1();															// restarts the adminMenu1 function.
	}
	system("cls");																// After the user enters, the screen deletes the cixans in advance.
	return 0;																	// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int adminMenu1_3()
{
	system("cls");													// After the user enters, the screen deletes the cixans in advance.
	for (int i = 0; i < 999; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			user.count[i][j] = { '\0' };							// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
	}
	string select;
	cout << "Which Car Do You Want to Delete (1/2/3/...): ";
	getline(cin, select);											// shows the user where the selection should be written.
	if (select != "\0")
	{
		FILE* fptr; fopen_s(&fptr, "CarInfo.txt", "r");				// reads the information from the file in the middle.
		if (fptr != NULL)											// Checks whether the file is in, if not, the file program does not display anything.
		{
			for (int i = 0; i < 998; i++)
			{
				fgets(user.count[i], 100, fptr);					// the data is written to the file
			}
			fclose(fptr);											// stops reading from file.														
		}
		int c = 0;
		for (int i = 0; i < 998; i = 9 + i)
		{
			for (int j = 0; j < 100; j++)
			{
				if (user.count[i][7] == select[0] && user.count[i][8] == '\n' && select[1] == '\0')		// If it is hard, then the codes inside will work
				{
					FILE* fptr1; fopen_s(&fptr1, "Car Delete List.txt", "a");							// writes file information always starts from the last line in the file
					if (fptr1 != NULL)																	// Checks whether the file is in, if not, the file program does not display anything.
					{
						fprintf_s(fptr1, "%s", user.count[i]);											// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr1, "%s", user.count[i + 1]);										// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr1, "%s", user.count[i + 2]);										// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr1, "%s", user.count[i + 3]);										// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr1, "%s", user.count[i + 4]);										// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr1, "%s", user.count[i + 5]);										// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr1, "%s", user.count[i + 6]);										// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr1, "%s", user.count[i + 7]);										// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr1, "%s", user.count[i + 8]);										// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fclose(fptr1);																	// stops reading from file.		
					}
					// the car of the user's choice is deleted from the cars, here his striae are deleted.
					for (int j = 0; j < 100; j++)
					{
						user.count[i][j] = { '\0' };								
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 1][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 2][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 3][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 4][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 5][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 6][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 7][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 8][j] = { '\0' };
					}
					c++;													// if it is hard salt, the value of this expression is increased by one unit
					system("cls");											// After the user enters, the screen deletes the cixans in advance.
					cout << "The deletion is successful.";
					Sleep(3500);											// After displaying the information displayed in the program, this function waits for 3. seconds and then performs the next task.			
					system("cls");											// After the user enters, the screen deletes the cixans in advance.
					break;													// stops the second cycle
				}
				else if (user.count[i][7] == select[0] && user.count[i][8] == select[1] && user.count[i][9] == '\n' && select[2] == '\0')		// If it is hard, then the codes inside will work
				{
					FILE* fptr2; fopen_s(&fptr2, "Car Delete List.txt", "a");		// writes file information always starts from the last line in the file
					if (fptr2 != NULL)												// Checks whether the file is in, if not, the file program does not display anything.
					{
						fprintf_s(fptr2, "%s", user.count[i]);						// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr2, "%s", user.count[i + 1]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr2, "%s", user.count[i + 2]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr2, "%s", user.count[i + 3]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr2, "%s", user.count[i + 4]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr2, "%s", user.count[i + 5]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr2, "%s", user.count[i + 6]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr2, "%s", user.count[i + 7]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr2, "%s", user.count[i + 8]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fclose(fptr2);												// stops reading from file.		
					}
					// the car of the user's choice is deleted from the cars, here his striae are deleted.
					for (int j = 0; j < 100; j++)
					{
						user.count[i][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 1][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 2][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 3][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 4][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 5][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 6][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 7][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 8][j] = { '\0' };
					}
					c++;										// if it is hard salt, the value of this expression is increased by one unit
					system("cls");								// After the user enters, the screen deletes the cixans in advance.
					cout << "The deletion is successful.";
					Sleep(3500);								// After displaying the information displayed in the program, this function waits for 3.5 seconds and then performs the next task.
					system("cls");								// After the user enters, the screen deletes the cixans in advance.
					break;										// stops the second cycle
				}
				else if (user.count[i][7] == select[0] && user.count[i][8] == select[1] && user.count[i][9] == select[2] && user.count[i][10] == '\n' && select[3] == '\0')   	// If it is hard, then the codes inside will work
				{
					FILE* fptr3; fopen_s(&fptr3, "Car Delete List.txt", "a");		// writes file information always starts from the last line in the file
					if (fptr3 != NULL)												// Checks whether the file is in, if not, the file program does not display anything.
					{
						fprintf_s(fptr3, "%s", user.count[i]);						// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr3, "%s", user.count[i + 1]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr3, "%s", user.count[i + 2]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr3, "%s", user.count[i + 3]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr3, "%s", user.count[i + 4]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr3, "%s", user.count[i + 5]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr3, "%s", user.count[i + 6]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr3, "%s", user.count[i + 7]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fprintf_s(fptr3, "%s", user.count[i + 8]);					// If the line is salty, then this car is deleted and it is written inside the deleted cars.
						fclose(fptr3);												// stops reading from file.		
					}
					// the car of the user's choice is deleted from the cars, here his striae are deleted.
					for (int j = 0; j < 100; j++)
					{
						user.count[i][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 1][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 2][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 3][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 4][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 5][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 6][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 7][j] = { '\0' };
					}
					for (int j = 0; j < 100; j++)
					{
						user.count[i + 8][j] = { '\0' };
					}
					c++;								// if it is hard salt, the value of this expression is increased by one unit
					system("cls");						// After the user enters, the screen deletes the cixans in advance.
					cout << "The deletion is successful.";
					Sleep(3500);						// After displaying the information displayed in the program, this function waits for 3.5 seconds and then performs the next task.
					system("cls");						// After the user enters, the screen deletes the cixans in advance.
					break;								// stops the second cycle
				}
				break;
			}
		}
		FILE* fptr5; fopen_s(&fptr5, "CarInfo.txt", "w");		// writes file information always starts from the last line in the file
		if (fptr5 != NULL)										// Checks whether the file is in, if not, the file program does not display anything.
		{
			for (int i = 0; i < 998; i++)
			{
				fprintf_s(fptr5, "%s", user.count[i]);			// the data is written to the file
			}
			fclose(fptr5);										// stops reading from file.														
		}
		system("cls");											// After the user enters, the screen deletes the cixans in advance.
		cout << "The deletion was done successfully \ n You can go back and look at the 'Deleted Car list' to see the deleted cars. Thanks :)";
		if (c == 0)   // If it is hard, then the codes inside will be executed
		{
			cout << "You did not enter the correct mode." << endl;
			Sleep(3000);				// After displaying the information displayed in the program, this function waits for 3. seconds and then performs the next task.			
			system("cls");				// After the user enters, the screen deletes the cixans in advance.
			cout << "0) Exit." << endl;
			cout << "1) Continue" << endl;
			cout << "Secim edin: ";
			string select3;
			getline(cin, select3);
			if (select3 == "0")
			{
				system("cls");
				adminMenu1();
			}

		}
		cout << "0) Exit." << endl;
		cout << "1) Continue" << endl;
		cout << "Secim edin: ";
		string select3;
		getline(cin, select3);			// indicates where the selection should be stored
		if (select3 == "0")				// here it is checked that if the user selects 0 to go back to the new 'select3 == "0"' if it is hard, then the codes inside if will be executed.
		{
			system("cls");				// After the user enters, the screen deletes the cixans in advance.
			adminMenu1();				// restarts the adminMenu1 function.
		}
	}
	return 0;							// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
void adminMenu2()
{
	// Menu
	cout << "\t\t\t\t\tADMIN MENU" << endl;
	cout << "1) Amendments to the terms of the contract." << endl;
	cout << "2) Conclude a contract with the tenant." << endl;
	cout << "3) Look at the list of created contracts." << endl;
	cout << "4) Delete any contract." << endl;
	cout << "5) Look for any contract." << endl;
	cout << "0) Exit." << endl;
	cout << "Make a choice: ";
	string select;
	getline(cin, select);		// indicates where the selection should be stored.
	if (select == "1")			// here it is checked that if the user selects 1 to go back to the new 'select == "1"' if it is hard, then the codes inside if will be executed.
	{
		system("Cls");			// After the user enters, the screen deletes the cixans in advance.
		adminMenu2_1();			// restarts the adminMenu2_1 function.

	}
	//+
	else if (select == "2")		// here it is checked that if the user selects 2 to go back to the new 'select == "2"' if it is hard, then the codes inside if will be executed.
	{
		system("cls");			// After the user enters, the screen deletes the cixans in advance.
		adminMenu2_2_1();		// restarts the adminMenu2_2_1 function.
	}
	//+
	else if (select == "3")		// here it is checked that if the user selects 3 to go back to the new 'select == "3"' if it is hard, then the codes inside if will be executed.
	{
		system("cls");			// After the user enters, the screen deletes the cixans in advance.
		FILE* fptr; fopen_s(&fptr, "Icareciler ile baglanilmis muqavileler.txt", "r");      // reads the information from the file in the middle.
		if (fptr != NULL) 																	// Checks whether the file is in, if not, the file program does not display anything.
		{
			for (int i = 0; i < 999; i++)
			{
				fgets(user.count[i], 999, fptr);											// the data is written to the file
			}
			fclose(fptr);																	// stops reading from file.			
		}
		cout << endl << endl << "Click Enter when you're done";
		cin.ignore();										// The program waits until the user enters
		system("cls");										// After the user enters, the screen deletes the cixans in advance.
		cout << "0) Exit." << endl;
		cout << "1) Continue." << endl;
		cout << "Secim edin: ";
		char select1[5] = { '\0' };
		cin.getline(select1, 5);							// indicates where the selection should be stored
		if (select1 == "0")									// here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
		{
			system("cls");									// After the user enters, the screen deletes the cixans in advance.
			adminMenu2();									// restarts the adminMenu2 function.
		}
		system("cls");										// After the user enters, the screen deletes the cixans in advance.
	}
	//+
	else if (select == "4")
	{
		system("cls");								// After the user enters, the screen deletes the cixans in advance.
		cout << "Know the contract code(y/n): ";
		string select1;
		getline(cin, select1);						// indicates where the selection should be stored 
		if (select1 == "y" || select1 == "Y")		// here it is checked that if the user selects y to go back to the new 'select == "y"' if it is hard, then the codes inside if will be executed.		
		{
			system("cls");		// After the user enters, the screen deletes the cixans in advance.
			adminMenu2_4();		// restarts the adminMenu2_4 function.
		}
		// otherwise it will work hard
		else
		{
			system("cls");				// After the user enters, the screen deletes the cixans in advance.
			cout << "You did not make the right choice. \n Please refer to the 'Contract list'" << endl;
			Sleep(5000);				// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
			system("cls");				// After the user enters, the screen deletes the cixans in advance.
			adminMenu2();				// restarts the adminMenu2 function.
		}
	}
	//+
	else if (select == "5")
	{
		system("cls");								// After the user enters, the screen deletes the cixans in advance.
		cout << "Know the contract code(y/n): ";
		string select1;
		getline(cin, select1);						// indicates where the selection should be stored.
		if (select1 == "y" || select1 == "Y")		// here it is checked that if the user selects y to go back to the new 'select == "y"' if it is hard, then the codes inside if will be executed.
		{
			system("cls");		// After the user enters, the screen deletes the cixans in advance.
			adminMenu2_5();		// restarts the adminMenu2_5 function.
		}
		else
		{
			system("cls");		// After the user enters, the screen deletes the cixans in advance.
			cout << "You did not make the right choice. \n Please refer to the 'Contract list'" << endl;
			Sleep(5000);		// After displaying the information displayed in the program, this function waits for 5 seconds and then performs the next task.
			system("cls");		// After the user enters, the screen deletes the cixans in advance.
			adminMenu2();		// restarts the adminMenu2 function.
		}
	}
	//+
	else if (select == "0")
	{
		system("cls");		// After the user enters, the screen deletes the cixans in advance.
		adminMenuAll();		// restarts the adminMenuAll function.
	}
	//+
}
int adminMenu2_1()
{
	char date[60] = { "Date: " };                                                      // ready words
	char city[60] = { "City: " };													   // ready words
	char name[60] = { "Tenant is Name: " };											   // ready words
	char lastname[60] = { "Tenant is Surname: " };									   // ready words
	char mobile[60] = { "Tenant is Mobile  Number: " };								   // ready words
	char selectAvtoInformation[60] = { "Tenant   Select    the  Car  information: " }; // ready words
	char muqavileninBitmevaxti[60] = { "Contract      time     end: " };			   // ready words

	system("cls");						// After the user enters, the screen deletes the cixans in advance.
	cout << "Let's start writing the terms of the contract(y/n) ";
	string select1;
	getline(cin, select1);						// indicates where the selection should be stored
	if (select1 == "n" || select1 == "N")		// here it is checked that if the user selects 0 to go back to the new 'select1 == "n"' if it is hard, then the codes inside if will be executed.
	{
		system("cls");							// After the user enters, the screen deletes the cixans in advance.
		cout << "In 5 seconds we will send you to the previous menu :)" << endl;
		Sleep(5000);							// After displaying the information displayed in the program, this function waits for 5. seconds and then performs the next task.
		adminMenu2();							// restarts the adminMenu2 function.
	}
	system("cls");								// After displaying the information displayed in the program, this function waits for 3. seconds and then performs the next task.
	cout << "Please be very careful, otherwise you will rewrite the terms of the contract !!!" << endl << endl;;
	cout << "  >>>Note: The headings of the contract are max 3 lines, each 100 characters and \n\t\tThe number of lines in the contract will be written in max. Max 60 999 characters each !!!<<< " << endl << endl;
	cout << "The number of the contract will be asked when the contract is concluded with the lessee." << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Of the contract " << i + 1 << ". Enter the header: ";
		cin.getline(user.muqavileBasliqlari[i], 100);
	}
	int select2 = 0;
	cout << "Take into account how hard the lines of your contract will be and the gaps between the lines: ";
	cin >> select2;
	cin.ignore();
	cout << "  >>>Note: The headings of the contract are max 3 lines, each 100 characters and \n\t\tThe number of lines in the contract will be written in max. Max 60 999 characters each !!!<<< " << endl << endl;
	Sleep(5000);		// After displaying the information displayed in the program, this function waits for 3. seconds and then performs the next task.
	system("cls");		// After the user enters, the screen deletes the cixans in advance.	
	cout << "Enter the hardest part. Be careful." << endl << "Note: whichever line you want to be left blank and visible, then put a space in that line instead of a sentence.r" << endl << endl;
	for (int i = 0; i < select2; i++)
	{
		cout << i + 1 << ". enter the line: ";
		cin.getline(user.muqavilerinSetirSayi[i], 999);
	}
	cout << "\n\nPlease wait 5 seconds to memorize the information.";
	Sleep(5000);		// After displaying the information displayed in the program, this function waits for 3. seconds and then performs the next task.
	FILE* fptr; fopen_s(&fptr, "Muqavileler ucun sert.txt", "w");				// writes file information always starts from the last line in the file
	if (fptr != NULL)															// Checks whether the file is in, if not, the file program does not display anything.
	{
		fputs("\t\t\t\t\t\tContract No: \n", fptr);						// entering data into a file
		int s = 0;
		for (int i = 0; i < 3; i++)
		{
			s = 0;
			for (int j = 0; j < 100; j++)
			{
				if (user.muqavileBasliqlari[i][j] == '\0')
				{
					s++;
				}
				else
				{
					s = 0;
					break;
				}
			}
			if (s == 0)
			{
				fprintf_s(fptr, "\t\t\t%s\n", user.muqavileBasliqlari[i]);      // entering data into a file
			}
		}
		fputs("\n", fptr);										// entering data into a file
		fprintf_s(fptr, "%s\n", date);							// entering data into a file
		fprintf_s(fptr, "%s\n", city);							// entering data into a file
		fprintf_s(fptr, "%s\n", name);							// entering data into a file
		fprintf_s(fptr, "%s\n", lastname);						// entering data into a file
		fprintf_s(fptr, "%s\n", mobile);						// entering data into a file
		fprintf_s(fptr, "%s\n", selectAvtoInformation);			// entering data into a file
		fputs("1.\n", fptr);									// entering data into a file
		fputs("2.\n", fptr);									// entering data into a file
		fputs("3.\n", fptr);									// entering data into a file
		fputs("4.\n", fptr);									// entering data into a file
		fputs("5.\n", fptr);									// entering data into a file
		fputs("6.\n", fptr);									// entering data into a file
		fputs("7.\n", fptr);									// entering data into a file
		fputs("8.\n\n", fptr);									// entering data into a file
		for (int i = 0; i < select2; i++)
		{
			s = 0;
			for (int j = 0; j < 999; j++)
			{
				if (user.muqavilerinSetirSayi[i][j] == '\0')
				{
					s++;
				}
				else
				{
					s = 0;
					break;
				}
			}
			if (s == 0)
			{
				fprintf_s(fptr, "%s\n", user.muqavilerinSetirSayi[i]);   // entering data into a file
			}
		}
		fputs("\n\n", fptr);																// entering data into a file
		fprintf_s(fptr, "%s\n", muqavileninBitmevaxti);										// entering data into a file
		fputs("------------------------------------------------------------\n", fptr);		// entering data into a file
		fclose(fptr);																		// stops reading from file.		
	}
	system("cls");																			// After the user enters, the screen deletes the cixans in advance.
	cout << "0) Exit." << endl;
	cout << "1) Continue." << endl;
	cout << "Make a choice: ";
	string select;
	getline(cin, select);			// indicates where the selection should be stored
	if (select == "0")				// here it is checked that if the user selects 0 to go back to the new 'select == "0"' if it is hard, then the codes inside if will be executed.
	{
		system("cls");				// After the user enters, the screen deletes the cixans in advance.
		adminMenu2();				// restarts the adminMenu1 function.
	}
	return 0;						// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int adminMenu2_2_1()
{
	char select[15] = { '\0' };
	char select1[20] = { '\0' };
	char select2[50] = { '\0' };
	system("cls");				// After the user enters, the screen deletes the cixans in advance.
	cout << endl;
	cout << "Enter the contract number: ";
	cin.getline(select, 15);					// indicates where the selection should be stored
	cout << "Write the date(01.02.2021): ";
	cin.getline(select1, 20);					// indicates where the selection should be stored
	cout << "Enter the city(Baku): ";
	cin.getline(select2, 50);					// indicates where the selection should be stored
	system("cls");								// After the user enters, the screen deletes the cixans in advance.
	adminMenu2_2_2(select, select1, select2);			// routing
	return 0;				// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int adminMenu2_2_2(char select[], char select1[], char select2[])
{
	FILE* fptr; fopen_s(&fptr, "Muqavileler ucun lazim olan istifadecinin melumatlari.txt", "r");		// reads the information from the file in the middle.
	if (fptr != NULL)																					// Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 100; i++)
		{
			fgets(user.line[i], 100, fptr);																// the data is written to the file
		}
		fclose(fptr);																					// stops reading from file.														
	}
	cout << "Tenant " << user.line[12] << " he got mad. Enter the expiration date of the contract: ";
	cin.getline(user.select3, 20);
	fopen_s(&fptr, "Muqavileler ucun sert.txt", "r");				// reads the information from the file in the middle.
	if (fptr != NULL)												// Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 400; i++)
		{
			fgets(user.line1[i], 999, fptr);						// the data is written to the file
		}
		fclose(fptr);												// stops reading from file.														
	}
	for (int i = 0; i < 1; i++)
	{
		for (int j = 19; j < 50; j++)
		{
			user.line1[i][j] = { '\0' };							// the elements of the array are reset starting from the specified location
		}
		for (int j = 19, l = 0; (j < 50) && (l < 31); j++, l++)
		{
			user.line1[i][j] = select[l];							// the information entered by the user is added.
		}
		for (int j = 0; j < 50; j++)
		{
			if (user.line1[i][j] == '\0')							// When you first see '\ 0', it says '\ n'
			{
				user.line1[i][j] = '\n';
				break;												// the second period is stopped
			}
		}
	}
	user.s = 0;
	for (int i = 0; i < 400; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			for (int l = 0; l < 50; l++)
			{
				//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
				if (user.line1[i][l] == user.date[l])					
				{
					user.s++;							
				}
				else
				{
					user.s = 0;
					break;
				}
			}
			// s = 50 if will work
			if (user.s == 50)
			{
				for (int j = 6; j < 9; j++)
				{
					user.line1[i][j] = { '\0' };						// the elements of the array are reset starting from the specified location
				}
				for (int j = 6, l = 0; (j < 16) && (l < 10); j++, l++)
				{
					user.line1[i][j] = select1[l];					
				}
				for (int j = 0; j < 100; j++)
				{														// the information entered by the user is added.
					if (user.line1[i][j] == '\0')
					{
						for (int l = j; l < j + 12; l++)
						{											
							user.line1[i][l] = { '\t' };				// '\ t' is written as the index of the element shown from the index of the element shown.
						}
						break;											// the fourth period is stopped
					}
				}
				user.s++;      // one unit is increased.
				break;			// the two period is stopped
			}
			//-----------------------------------------------------------------
			user.s = 0;
			for (int l = 0; l < 50; l++)
			{
				//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
				if (user.line1[i][l] == user.city[l]) 
				{
					user.s++;
				}
				else
				{
					user.s = 0;
					break;
				}
			}
			// s = 50 if will work
			if (user.s == 50)
			{
				for (int j = 6; j < 100; j++)
				{
					user.line1[i][j] = { '\0' };									// the elements of the array are reset starting from the specified location
				}
				for (int j = 6, l = 0; (j < 56) && (l < 50); j++, l++)
				{
					user.line1[i][j] = select2[l];									// the information entered by the user is added.
				}
				for (int j = 0; j < 100; j++)
				{																	
					if (user.line1[i][j] == '\0')
					{
						user.line1[i][j] = { '\n' };								// '\n' is written as the index of the element shown from the index of the element shown.
						user.line1[i][j + 1] = { '\n' };							// '\n' is written as the index of the element shown from the index of the element shown.
						break;														//stops the cycle
					}
				}
				user.s++;
				break;																//stops the cycle
			}
			break;																	//stops the cycle
		}
	}
	//-----------------------------------------------------------------
	for (int i = 0; i < 400; i++)
	{

		for (int j = 0; j < 999; j++)
		{
			user.s = 0;
			for (int l = 0; l < 50; l++)
			{
				//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
				if (user.line1[i][l] == user.icareciAd[l])
				{
					user.s++;
				}
				else
				{
					user.s = 0;
					break;
				}
			}
			// s = 50 if will work
			if (user.s == 50)
			{
				for (int j = 16; j < 50; j++)
				{
					user.line1[i][j] = { '\0' };									// the elements of the array are reset starting from the specified location
				}
				int s1 = 9;
				for (int j = 16, l = 0; (j < 31) && (l < 46); j++, l++)
				{
					user.line1[i][j] = user.line[s1][l];							// the information entered by the user is added.
				}
				user.s++;				// one unit is increased.
				break;					//stops the cycle
			}
			//-----------------------------------------------------------------
			user.s = 0;
			for (int l = 0; l < 50; l++)
			{
				//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
				if (user.line1[i][l] == user.icaresoyad[l])
				{
					user.s++;
				}
				else
				{
					user.s = 0;
					break;
				}
			}
			// s = 50 if will work
			if (user.s == 50)
			{
				for (int l = 19; l < 50; l++)
				{
					user.line1[i][l] = { '\0' };							// the elements of the array are reset starting from the specified location
				}
				int s1 = 10;
				for (int j = 19, l = 0; (j < 50) && (l < 31); j++, l++)
				{
					user.line1[i][j] = user.line[s1][l];					// the information entered by the user is added.
				}
			}
			break;															//stops the cycle			
		}
	}
	//-----------------------------------------------------------------
	for (int i = 0; i < 400; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			user.s = 0;
			for (int l = 0; l < 50; l++)
			{
				//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
				if (user.line1[i][l] == user.icareciMobil[l])
				{
					user.s++;
				}
				else
				{
					user.s = 0;
					break;
				}
			}
			// s = 50 if will work
			if (user.s == 50)
			{
				for (int l = 26; l < 50; l++)
				{
					user.line1[i][l] = { '\0' };							// the elements of the array are reset starting from the specified location
				}
				user.s1 = 11;
				for (int l = 26, n = 0; (l < 50) && (n < 24); l++, n++)
				{
					user.line1[i][l] = user.line[user.s1][n];				// the information entered by the user is added.
				}
				break;														//stops the cycle
			}																			
			break;															//stops the cycle
		}
	}
	//-----------------------------------------------------------------
	for (int i = 0; i < 400; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
			if (user.line1[i][j] == '1' && user.line1[i][j + 1] == '.' && user.line1[i][j + 2] == '\n')
			{
				j = 2;
				for (; j < 30; j++)
				{
					user.line1[i][j] = { '\0' };									// the elements of the array are reset starting from the specified location
				}
				int s1 = 1;
				for (int j = 2, l = 0; (j < 32) && (l < 30); j++, l++)
				{
					user.line1[i][j] = user.line[s1][l];							// the information entered by the user is added.
				}
			}
			//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
			else if (user.line1[i][j] == '2' && user.line1[i][j + 1] == '.' && user.line1[i][j + 2] == '\n')
			{
				j = 2;
				for (; j < 30; j++)
				{
					user.line1[i][j] = { '\0' };							// the elements of the array are reset starting from the specified location
				}
				int s1 = 2;
				for (int j = 2, l = 0; (j < 32) && (l < 30); j++, l++)
				{
					user.line1[i][j] = user.line[s1][l];					// the information entered by the user is added.
				}
			}
			//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
			else if (user.line1[i][j] == '3' && user.line1[i][j + 1] == '.' && user.line1[i][j + 2] == '\n')
			{
				for (int l = 2; l < 50; l++)
				{
					user.line1[i][l] = { '\0' };						// the elements of the array are reset starting from the specified location
				}
				int s1 = 3;
				for (int l = 2, n = 0; (l < 50) && (n < 48); l++, n++)
				{
					user.line1[i][l] = user.line[s1][n];				// the information entered by the user is added.
				}
			}
			//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
			else if (user.line1[i][j] == '4' && user.line1[i][j + 1] == '.' && user.line1[i][j + 2] == '\n')
			{
				j = 2;
				for (; j < 30; j++)
				{
					user.line1[i][j] = { '\0' };							// the elements of the array are reset starting from the specified location
				}
				int s1 = 4;
				for (int j = 2, l = 0; (j < 32) && (l < 30); j++, l++)
				{
					user.line1[i][j] = user.line[s1][l];					// the information entered by the user is added.
				}
			}
			//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
			else if (user.line1[i][j] == '5' && user.line1[i][j + 1] == '.' && user.line1[i][j + 2] == '\n')
			{
				j = 2;
				for (; j < 30; j++)
				{
					user.line1[i][j] = { '\0' };							// the elements of the array are reset starting from the specified location
				}
				int s1 = 5;
				for (int j = 2, l = 0; (j < 32) && (l < 30); j++, l++)
				{
					user.line1[i][j] = user.line[s1][l];					// the information entered by the user is added.
				}
			}
			//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
			else if (user.line1[i][j] == '6' && user.line1[i][j + 1] == '.' && user.line1[i][j + 2] == '\n')
			{
				j = 2;
				for (; j < 30; j++)
				{
					user.line1[i][j] = { '\0' };							// the elements of the array are reset starting from the specified location
				}
				int s1 = 6;
				for (int j = 2, l = 0; (j < 32) && (l < 30); j++, l++)
				{
					user.line1[i][j] = user.line[s1][l];					// the information entered by the user is added.
				}
			}
			//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
			else if (user.line1[i][j] == '7' && user.line1[i][j + 1] == '.' && user.line1[i][j + 2] == '\n')
			{
				j = 2;
				for (; j < 30; j++)
				{
					user.line1[i][j] = { '\0' };							// the elements of the array are reset starting from the specified location
				}
				int s1 = 7;
				for (int j = 2, l = 0; (j < 32) && (l < 30); j++, l++)
				{
					user.line1[i][j] = user.line[s1][l];					// the information entered by the user is added.
				}
			}
			//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
			else if (user.line1[i][j] == '8' && user.line1[i][j + 1] == '.' && user.line1[i][j + 2] == '\n')
			{
				j = 2;
				for (; j < 30; j++)
				{
					user.line1[i][j] = { '\0' };							// the elements of the array are reset starting from the specified location
				}
				int s1 = 8;
				for (int j = 2, l = 0; (j < 32) && (l < 30); j++, l++)
				{
					user.line1[i][j] = user.line[s1][l];					// the information entered by the user is added.
				}
			}
			break;					//stops the cycle
		}
	}
	//------------------------------------------------------------------------------------------
	for (int i = 0; i < 400; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			user.s = 0;
			for (int l = 0; l < 50; l++)
			{
				//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
				if (user.line1[i][l] == user.icareciTimeEnd[l])
				{
					user.s++;
				}
				else
				{
					user.s = 0;
					break;
				}
			}
			// s = 50 if will work
			if (user.s == 50)
			{
				for (int l = 28; l < 50; l++)
				{
					user.line1[i][l] = { '\0' };									// the elements of the array are reset starting from the specified location
				}
				for (int l = 28, n = 0; (l < 50) && (n < 21); l++, n++)
				{
					user.line1[i][l] = user.select3[n];								// the information entered by the user is added.
				}
				for (int l = 0; l < 60; l++)
				{
					if (user.line1[i][l] == '\0')
					{
						user.line1[i][l] = { '\n' };								// '\n' is written as the index of the element shown from the index of the element shown.
						break;				//stops the cycle					
					}
				}
			}
			break;		//stops the cycle
		}
	}
	system("cls");									// After the user enters, the screen deletes the cixans in advance.				
	cout << "Please wait 5 seconds to remember the information.";
	Sleep(5000);									// After displaying the information displayed in the program, this function waits for 3. seconds and then performs the next task.
	system("cls");									// After the user enters, the screen deletes the cixans in advance.		
	fopen_s(&fptr, "Icareciler ile baglanilmis muqavileler.txt", "a");		// reads the information from the file in the middle.
	if (fptr != NULL)														// Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 400; i++)
		{
			fprintf_s(fptr, "%s", user.line1[i]);							// the data is written to the file
		}
		fclose(fptr);														// stops reading from file.			
	}
	cout << "The information was successfully saved." << endl;
	cout << "To view created contracts, go to 'Look at created contracts'.";
	Sleep(5000);									 // After displaying the information displayed in the program, this function waits for 3. seconds and then performs the next task.
	system("cls");									 // After the user enters, the screen deletes the cixans in advance.		
	cout << "0)Exit." << endl;
	cout << "1)Continue" << endl;
	cout << "Make a choice: ";
	string select4;
	getline(cin, select4);
	if (select4 == "0")								// strictly checked.
	{
		system("cls");								// After the user enters, the screen deletes the cixans in advance.
		adminMenu2();								// recalls the function
	}
	system("cls");									// After the user enters, the screen deletes the cixans in advance.
	return 0;										// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int adminMenu2_4()
{
	cout << "Enter the code of the contract that is being sold: ";
	cin.getline(user.contract, 40);
	for (int i = 0; i < 40; i++)
	{
		if (user.contract[i] == '\0')			// When you first see '\ 0', it says '\ n'
		{
			user.contract[i] = { '\n' };
			break;								// the second period is stopped
		}
	}
	for (int i = 0; i < 999; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			user.count[i][j] = { '\0' };			// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
	}
	FILE* fptr; fopen_s(&fptr, "Icareciler ile baglanilmis muqavileler.txt", "r");	// reads the information from the file in the middle.	
	if (fptr != NULL)																// Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 999; i++)
		{
			fgets(user.count[i], 999, fptr);										// the data is written to the file
		}
		fclose(fptr);																// stops reading from file.			
	}
	int s = 0;
	for (int i = 0; i < 999; i++)
	{
		//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
		for (int j = 19, l = 0; (j < 59) && (l < 40); j++, l++)
		{
			if (user.count[i][j] == user.contract[l])
			{
				s++;
			}
			else
			{
				s = 0;
				break;
			}
		}
		// s = 50 if will work
		if (s == 40)
		{
			system("cls");
			for (int l = i; l < 999; l++)
			{
				if (user.count[l] == "------------------------------------------------------------\n")
				{
					for (int n = 0; n < 999; n++)
					{
						user.count[l][n] = { '\0' };				// the elements of the array are reset starting from the specified location
					}
					break;
				}
				else
				{
					for (int n = 0; n < 999; n++)
					{
						user.count[l][n] = { '\0' };						// the elements of the array are reset starting from the specified location
					}
				}
			}
		}
	}
	fopen_s(&fptr, "Icareciler ile baglanilmis muqavileler.txt", "w");		// reads the information from the file in the middle.	
	if (fptr != NULL)														// Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 999; i++)
		{
			fprintf_s(fptr, "%s", user.count[i]);							// the data is written to the file
		}
		fclose(fptr);														// stops reading from file.			
	}
	system("cls");															// After the user enters, the screen deletes the cixans in advance.
	cout << "The deletion is successful.";
	system("cls");															// After the user enters, the screen deletes the cixans in advance.
	cout << "0) Exit." << endl;
	cout << "1) Continue" << endl;
	cout << "Make a choice: ";
	string select;
	getline(cin, select);				// strictly checked.
	if (select == "0")
	{									
		system("cls");					// After the user enters, the screen deletes the cixans in advance.
		adminMenu2();					// recalls the function
	}									
	system("cls");						// After the user enters, the screen deletes the cixans in advance.
	return 0;							// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int adminMenu2_5()
{
	cout << "Enter the code of the contract that is being sold: ";
	cin.getline(user.contract, 40);
	for (int i = 0; i < 40; i++)
	{
		if (user.contract[i] == '\0')			// When you first see '\ 0', it says '\ n'
		{
			user.contract[i] = { '\n' };
			break;								// the second period is stopped
		}
	}
	for (int i = 0; i < 999; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			user.count[i][j] = { '\0' };		// reset the elements of the array
		}
	}
	FILE* fptr; fopen_s(&fptr, "Icareciler ile baglanilmis muqavileler.txt", "r");   // reads the information from the file in the middle.	
	if (fptr != NULL)																 // Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 999; i++)
		{
			fgets(user.count[i], 999, fptr);										 // the data is written to the file
		}
		fclose(fptr);																 // stops reading from file.			
	}
	int s = 0;
	for (int i = 0; i < 999; i++)
	{
		for (int j = 19, l = 0; (j < 59) && (l < 40); j++, l++)
		{
			//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
			if (user.count[i][j] == user.contract[l])
			{
				s++;
			}
			else
			{
				s = 0;
				break;
			}
		}
		// s = 50 if will work
		if (s == 40)
		{
			system("cls");
			for (int l = i; l < 999; l++)
			{
				if (user.count[l] == "------------------------------------------------------------\n")
				{
					break;			// the second period is stopped
				}
				else
				{
					cout << user.count[l];
				}
			}
		}
	}
	cout << endl << endl << "When you are done, press Enter.";
	cin.ignore();
	if (true)
	{
		system("cls");								// After the user enters, the screen deletes the cixans in advance.
		cout << "0) Exit." << endl;
		cout << "1) Continue." << endl;
		cout << "Make a choice: ";
		string select1;
		getline(cin, select1);		
		if (select1 == "0")		// strictly checked.
		{
			system("cls");
			adminMenu2();		// After the user enters, the screen deletes the cixans in advance.
		}						// recalls the function
		system("cls");
	}							// After the user enters, the screen deletes the cixans in advance.
	return 0;					// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int userMenuAll()
{
	system("cls");			// After the user enters, the screen deletes the cixans in advance.
	cout << "\t\t\t\t\tUSER MENU" << endl;
	cout << "1) Rent a car." << endl;
	cout << "2) Extend the existing lease." << endl;
	cout << "3) Report a road traffic accident of a rented vehicle." << endl;
	cout << "0) Exit." << endl;
	cout << "Choose: ";
	string select;
	getline(cin, select);
	if (select == "1")
	{
		// routing
		userMenu1();
	}
	else if (select == "2")
	{
		// routing
		userMenu2();
	}
	else if (select == "3")
	{
		// routing
		userMenu3();
	}
	else if (select == "0")
	{
		system("cls");		// After the user enters, the screen deletes the cixans in advance.
		// routing
		theWayAllWorkWillDo();
	}
	return 0;				// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int userMenu1()
{
	system("cls");				// After the user enters, the screen deletes the cixans in advance.
	cout << "Hello and welcome :)" << endl;
	Sleep(3000);				// The program is waiting for 3 seconds
	system("cls");				// After the user enters, the screen deletes the cixans in advance.
	cout << "You know what kind of car you want to rent(y/n): ";
	string select1;
	getline(cin, select1);
	if (select1 == "y" || select1 == "Y")
	{
		cout << "How do you choose a car?(1/2/3/...): ";
		string select2;
		getline(cin, select2);
		FILE* fptr; fopen_s(&fptr, "CarInfo.txt", "r");		// reads the information from the file in the middle.	
		if (fptr != NULL)									// Checks whether the file is in, if not, the file program does not display anything.
		{
			for (int i = 0; i < 999; i++)
			{
				fgets(user.count[i], 999, fptr);			// the data is written to the file
			}
			fclose(fptr);									// stops reading from file.			
		}
		int s = 0;
		for (int i = 0; i < 999; i = 9 + i)
		{
			for (int j = 0; j < 999; j++)
			{
				if (user.count[i][7] == select2[0] && user.count[i][8] == '\n' && select2[1] == '\0')
				{
					fopen_s(&fptr, "Muqavileler ucun lazim olan istifadecinin melumatlari.txt", "w");			 // reads the information from the file in the middle.	
					if (fptr != NULL)																			 // Checks whether the file is in, if not, the file program does not display anything.
					{
						fputs("Isdifadecinin secimleri veya daxil edikler: \n", fptr);
						for (int l = i; l < i + 8; l++)
						{																						 // the data is written to the file		 
							fprintf_s(fptr, "%s", user.count[l]);												 // the data is written to the file
						}																								
						fclose(fptr);																			 // stops reading from file.
					}
					s++;
					break;
				}
				else if (user.count[i][7] == select2[0] && user.count[i][8] == select2[1] && user.count[i][9] == '\n' && select2[2] == '\0')
				{
					fopen_s(&fptr, "Muqavileler ucun lazim olan istifadecinin melumatlari.txt", "w");		// reads the information from the file in the middle.	
					if (fptr != NULL)																		// Checks whether the file is in, if not, the file program does not display anything.
					{
						fputs("Isdifadecinin secimleri veya daxil edikler: \n", fptr);
						for (int l = i; l < i + 8; l++)
						{																					// the data is written to the file		 
							fprintf_s(fptr, "%s", user.count[l]);											// the data is written to the file
						}
						fclose(fptr);																		// stops reading from file.
					}
					s++;
					break;
				}
				else if (user.count[i][7] == select2[0] && user.count[i][8] == select2[1] && user.count[i][9] == select2[2] && user.count[i][10] == '\n' && select2[3] == '\0')
				{

					fopen_s(&fptr, "Muqavileler ucun lazim olan istifadecinin melumatlari.txt", "w");		// reads the information from the file in the middle.	
					if (fptr != NULL)																		// Checks whether the file is in, if not, the file program does not display anything.
					{
						fputs("Isdifadecinin secimleri veya daxil edikler: \n", fptr);
						for (int l = i; l < i + 8; l++)
						{																					// the data is written to the file		 
							fprintf_s(fptr, "%s", user.count[l]);											// the data is written to the file
						}
						fclose(fptr);																		// stops reading from file.
					}
					s++;
					break;
				}
				break;
			}
		}
		if (s != 1)
		{
			system("cls");					// After the user enters, the screen deletes the cixans in advance.	
			cout << "The choice is not correct !" << endl;
			cout << "It will redirect you to the First Menu in 5 seconds" << endl;
			Sleep(5000);					// The program is waiting for 5 seconds
			userMenuAll();					// recalls the function
		}
		cout << "Please enter your name: ";
		char select4[20] = { '\0' };
		cin.getline(select4, 20);
		cout << "If not, enter your last name: ";
		char select5[20] = { '\0' };
		cin.getline(select5, 20);
		cout << "Please enter your phone number: ";
		char select6[50] = { '\0' };
		cin.getline(select6, 50);
		cout << "How many hours do you get your favorite car (just write the number is enough) (48 hours = 2 days): ";
		int select7;
		cin >> select7;
		cout << "What is the hourly rate of the car of your choice: ";
		double select8;
		cin >> select8;
		user.cem = select7 * select8;
		cout << "The car of your choice " << select7 << "hours " << user.cem << " makes money.";
		Sleep(5000);				// The program is waiting for 5 seconds
		fopen_s(&fptr, "Muqavileler ucun lazim olan istifadecinin melumatlari.txt", "a");		// reads the information from the file in the middle.	
		if (fptr != NULL)																		// Checks whether the file is in, if not, the file program does not display anything.
		{
			fprintf_s(fptr, "%s\n", select4);													// the data is written to the file	
			fprintf_s(fptr, "%s\n", select5);													// the data is written to the file	
			fprintf_s(fptr, "%s\n", select6);													// the data is written to the file		 
			fprintf_s(fptr, "%d\n", select7);													// the data is written to the file
			fclose(fptr);																		// stops reading from file.
		}																						
		system("cls");					// After the user enters, the screen deletes the cixans in advance.	
		cout << "5 saniye gozleyin melumatlar yuklensin." << endl;
		Sleep(5000);						// The program is waiting for 5 seconds
		system("cls");							// After the user enters, the screen deletes the cixans in advance.	
		cout << "Please contact the administrator to create a contract, otherwise you will be fined." << endl;
		Sleep(5000);			// The program is waiting for 5 seconds
		system("cls");						// After the user enters, the screen deletes the cixans in advance.	
		cout << "0) Exit." << endl;
		cout << "1) Continue." << endl;
		cout << "Make a choice: ";
		string select3;
		getline(cin, select3);	// strictly checked.
		if (select3 == "0")
		{
			system("cls");		// After the user enters, the screen deletes the cixans in advance.	
			userMenuAll();		// recalls the function
		}
	}							
	else						
	{
		system("cls");							// After the user enters, the screen deletes the cixans in advance.
		cout << "Please listen to Auto listen car." << endl;
		Sleep(5000);					// The program is waiting for 5 seconds			
		system("cls");					// After the user enters, the screen deletes the cixans in advance.
		userMenuAll();					// recalls the function
	}
	return 0;								// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
int userMenu2()
{
	system("cls");					// After the user enters, the screen deletes the cixans in advance.
	cout << "Hello and welcome";
	Sleep(5000);					// The program is waiting for 5 seconds		
	system("cls");					// After the user enters, the screen deletes the cixans in advance.
	char contract[30] = { '\0' };
	cout << "Enter the code of the contract that is being sold: ";
	cin.getline(contract, 30);
	system("cls");					// After the user enters, the screen deletes the cixans in advance.
	for (int i = 0; i < 30; i++)
	{
		if (contract[i] == '\0')		// When you first see '\ 0', it says '\ n'
		{
			contract[i] = { '\n' };
			break;						// the second period is stopped
		}
	}
	for (int i = 0; i < 999; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			car.count[i][j] = { '\0' };		// begins to be deleted from the index shown so that the new data writes a new data from the index shown by j.
		}
	}
	FILE* fptr; fopen_s(&fptr, "Icareciler ile baglanilmis muqavileler.txt", "r");		// reads the information from the file in the middle.	
	if (fptr != NULL)																	// Checks whether the file is in, if not, the file program does not display anything.
	{
		for (int i = 0; i < 999; i++)
		{
			fgets(car.count[i], 999, fptr);												// the data is written to the file
		}
		fclose(fptr);																	// stops reading from file.			
	}
	int time = 0;
	cout << "How many days will you extend your contract?: ";
	cin >> time;
	cin.ignore();
	char count[10] = { '\0' };
	char count1[70] = { "------------------------------------------------------------\n" };
	char pointer[1] = { '.' };
	char zero[1] = { '0' };
	int day = 0;
	int month = 0;
	int year = 0;
	int s = 0;
	for (int i = 0; i < 999; i++)
	{
		for (int j = 19, l = 0; (j < 40) && (l < 21); j++, l++)
		{
			//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
			if (car.count[i][j] == contract[l])
			{
				s++;
			}
			else
			{
				s = 0;
				break;
			}
		}
		// s = 21 if will work	
		if (s == 21)
		{
			s = 0;
			for (int i = 0; i < 999; i++)
			{
				for (int j = 0; j < 70; j++)
				{
					//s is increased by one unit when there is hard salt. otherwise it becomes s = 0 and stops the third cycle.
					if (car.count[i][j] == count1[j])
					{
						s++;
					}
					else
					{
						s = 0;
						break;
					}
				}
				// s = 70 if will work	
				if (s == 70)
				{
					for (int j = 28, l = 0; (j < 38) && (l < 10); j++, l++)
					{
						count[l] = car.count[i - 1][j];
					}
					sscanf_s(count, "%d. %d. %d", (&day), (&month), (&year));
					day += time;
					if ((year != 2020 && year != 2024 && year != 2028) && (month != 2))
					{
						for (; day >= 31; )
						{
							day -= 31;
							month++;
						}
						for (; month >= 12; )
						{
							month -= 12;
							year++;
						}
					}
					else if ((year != 2020 && year != 2024 && year != 2028) && (month == 2))
					{
						for (; day >= 28; )
						{
							day -= 28;
							month++;
						}
						for (; month >= 12; )
						{
							month -= 12;
							year++;
						}
					}
					else if ((year == 2020 || year == 2024 || year == 2028) && (month == 2))
					{
						for (; day >= 29; )
						{
							day -= 29;
							month++;
						}
						for (; month >= 12; )
						{
							month -= 12;
							year++;
						}
					}
					else if ((year == 2020 || year == 2024 || year == 2028) && (month != 2))
					{
						for (; day >= 31; )
						{
							day -= 29;
							month++;
						}
						for (; month >= 12; )
						{
							month -= 12;
							year++;
						}
					}
					for (int i = 0; i < 10; i++)
					{
						count[i] = { '\0' };
					}
					sprintf_s(count, "%d %d %d", day, month, year);
					for (int j = 28; j < 38; j++)
					{
						car.count[i - 1][j] = { '\0' };
					}
					for (int j = 28, l = 0; (j < 38) && (l < 10); j++, l++)
					{
						car.count[i - 1][j] = count[l];
					}
					for (int j = 0; j < 999; j++)
					{
						if (car.count[i - 1][j] == '\0')
						{
							car.count[i - 1][j] = { '\n' };
							break;
						}
					}
					fopen_s(&fptr, "Icareciler ile baglanilmis muqavileler.txt", "w");		// reads the information from the file in the middle.	
					if (fptr != NULL)														// Checks whether the file is in, if not, the file program does not display anything.
					{
						for (int i = 0; i < 999; i++)
						{
							fprintf_s(fptr, "%s", car.count[i]);							// the data is written to the file
						}
						fclose(fptr);														// stops reading from file.			
					}
					break;
				}
			}
			break;
		}
	}
	cout << "Your contract has been successfully extended.";
	Sleep(5000);				// The program is waiting for 5 seconds		
	system("cls");				// After the user enters, the screen deletes the cixans in advance.
	cout << "0) Exit." << endl;
	cout << "1) Continue." << endl;
	cout << "Choose: ";
	string select1;
	getline(cin, select1);
	if (select1 == "0")
	{
		system("cls");			// After the user enters, the screen deletes the cixans in advance.
		userMenuAll();			
	}
	system("cls");				// After the user enters, the screen deletes the cixans in advance.
	return 0;					// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}

int userMenu3()
{
	system("cls");		// After the user enters, the screen deletes the cixans in advance.
	cout << "Welcome.";
	Sleep(5000);		// The program is waiting for 5 seconds		
	system("cls");		// After the user enters, the screen deletes the cixans in advance.
	cout << ">>>>>>Attention: There is a difference between big and small characters if you write the car information accurately. Be careful. Thanks : ) <<<<<<<<" << endl << endl;
	cout << "The name of the tenant who crashed: ";
	cin.getline(car.ad, 40);
	cout << "The last name of the tenant who crashed: ";
	cin.getline(car.soyad, 40);
	cout << "The name of the car that crashed: ";
	cin.getline(car.carad, 40);
	cout << "The number of the car that crashed: ";
	cin.getline(car.carnomre, 10);
	for (int i = 0; i < 40; i++)
	{
		if (car.ad[i] == '\0')
		{
			car.ad[i] = { '\n' };
			break;
		}
	}
	for (int i = 0; i < 40; i++)
	{
		if (car.soyad[i] == '\0')
		{
			car.soyad[i] = { '\n' };
			break;
		}
	}
	for (int i = 0; i < 40; i++)
	{
		if (car.carad[i] == '\0')
		{
			car.carad[i] = { '\n' };
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (car.carnomre[i] == '\0')
		{
			car.carnomre[i] = { '\n' };
			break;
		}
	}
	for (int i = 0; i < 999; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			car.count[i][j] = { '\0' };
		}
	}
	system("cls");				// After the user enters, the screen deletes the cixans in advance.
	FILE* fptr; fopen_s(&fptr, "Icareciler ile baglanilmis muqavileler.txt", "r");
	if (fptr != NULL)
	{
		for (int i = 0; i < 999; i++)
		{
			fgets(car.count[i], 999, fptr);
		}
		fclose(fptr);
	}
	int c = 0;
	for (int i = 0; i < 999; i++)
	{
		for (int j = 16, l = 0; (j < 56) && (l < 40); j++, l++)
		{
			if (car.count[i][j] == car.ad[l])
			{
				c++;
			}
			else
			{
				c = 0;
				break;
			}
		}
		if (c == 40)
		{
			c = 1;
			break;
		}
	}
	int c1 = 1;
	for (int i = 0; i < 999; i++)
	{
		for (int j = 19, l = 0; (j < 59) && (l < 40); j++, l++)
		{
			if (car.count[i][j] == car.soyad[l])
			{
				c1++;
			}
			else
			{
				c1 = 0;
				break;
			}
		}
		if (c1 == 40)
		{
			c1 = 1;
			break;
		}
	}
	int c2 = 0;
	for (int i = 0; i < 999; i++)
	{
		for (int j = 12, l = 0; (j < 52) && (l < 40); j++, l++)
		{
			if (car.count[i][j] == car.carad[l])
			{
				c2++;
			}
			else
			{
				c2 = 0;
				break;
			}
		}
		if (c2 == 40)
		{
			c2 = 1;
			break;
		}
	}
	int c3 = 0;
	for (int i = 0; i < 999; i++)
	{
		for (int j = 13, l = 0; (j < 53) && (l < 40); j++, l++)
		{
			if (car.count[i][j] == car.carnomre[l])
			{
				c3++;
			}
			else
			{
				c3 = 0;
				break;
			}
		}
		if (c3 == 40)
		{
			c3 = 1;
			break;
		}
	}
	if ((c == 1) && (c1 == 1) && (c2 == 1) && (c3 == 1))
	{
		fopen_s(&fptr, "Qezaya ugramis avto", "a");
		if (fptr != NULL)
		{
			fprintf_s(fptr, "%s", car.ad);
			fprintf_s(fptr, "%s", car.soyad);
			fprintf_s(fptr, "%s", car.carad);
			fprintf_s(fptr, "%s", car.carnomre);
			fputs("-------------------------------------\n", fptr);
			fclose(fptr);
		}
		cout << "The information was successfully memorized.";
		Sleep(5000);
		system("cls");			// After the user enters, the screen deletes the cixans in advance.
	}
	else
	{
		cout << "Please write more accurately.";
		Sleep(5000);
		system("cls");			// After the user enters, the screen deletes the cixans in advance.
	}
	cout << "0) Exit." << endl;
	cout << "1) Continue." << endl;
	cout << "Choose: ";
	string select1;
	getline(cin, select1);
	if (select1 == "0")
	{
		system("cls");			// After the user enters, the screen deletes the cixans in advance.
		userMenuAll();
	}
	system("cls");				// After the user enters, the screen deletes the cixans in advance.
	return 0;					// if the type of the function is int, then the end of the function is' erturn 0; This means that if it is an int type, it will return the information
}
