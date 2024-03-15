#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
		//code length can be significantly decreased with use of functions but I dont think theyve studied them yet
		
		srand(time(NULL));
		int choice, ticket_choice, family_choice, num_adults = 0, num_children = 0, cnic;
		int ja_max_seats, ik_max_seats, am_max_seats, jm_max_seats, sa_max_seats, st_max_seats, ya_max_seats, mk_max_seats;
		int vip_price, premium_price, first_class_price, general_price, adult_total = 0, child_total = 0, total = 0;
		cout<<"\n1. 27 Feb 2020 - Islamabad United v Quetta Gladiators, Pindi Cricket Stadium (7pm-10.15pm)";
		cout<<"\n2. 28 Feb 2020 - Peshawar Zalmi v Lahore Qalandars, Pindi Cricket Stadium (8pm-11.15pm)";
		cout<<"\n3. 29 Feb 2020 - Islamabad United v Peshawar Zalmi, Pindi Cricket Stadium (7pm-10.15pm)";
		cout<<"\n4. 1 Mar 2020 - Islamabad United v Karachi Kings, Pindi Cricket Stadium (7pm-10.15pm)";
		cout<<"\n5. 2 Mar 2020 - Peshawar Zalmi v Karachi Kings, Pindi Cricket Stadium (7pm-10.15pm)";
		cout<<"\n6. 5 Mar 2020 - Peshawar Zalmi v Quetta Gladiators, Pindi Cricket Stadium (7pm-10.15pm)";
		cout<<"\n7. 7 Mar 2020 - Peshawar Zalmi v Islamabad United, Pindi Cricket Stadium (2pm-5.15pm)";
		cout<<"\n8. 8 Mar 2020 - Multan Sultans v Islamabad United, Pindi Cricket Stadium (2pm-5.15pm)";
		cout<<"\nEnter choice (1-8): ";
		cin>>choice;
		
		switch(choice){
				case 1:
					ja_max_seats = rand() % 3000 + 1; 
					ik_max_seats = rand() % 3000 + 1; 
					am_max_seats = rand() % 3000 + 1;
					jm_max_seats = rand() % 3000 + 1;
					sa_max_seats = rand() % 1500 + 1;
					st_max_seats = rand() % 1000 + 1;
					ya_max_seats = rand() % 500 + 1;
					mk_max_seats = rand() % 500 + 1;
					vip_price = 3000;
					premium_price = 1500;
					first_class_price = 1000;
					general_price = 500;
					cout<<"\n1.Javed Akhter Enclosure (VIP)  | Ticket Price: 3000 | Available Seats: "<<ja_max_seats;
					cout<<"\n2.Imran Khan Enclosure (VIP)    | Ticket Price: 3000 | Available Seats: "<<ik_max_seats;
					cout<<"\n3.Azhar Mehmood Enclosure (VIP) | Ticket Price: 3000 | Available Seats: "<<am_max_seats;
					cout<<"\n4.Javed Miandad Enclosure (VIP) | Ticket Price: 3000 | Available Seats: "<<jm_max_seats;
					cout<<"\n5.Shoaib Akhter (Premium)       | Ticket Price: 1500 | Available Seats: "<<sa_max_seats;
					cout<<"\n6.Sohail Tanveer (First Class)  | Ticket Price: 1000 | Available Seats: "<<st_max_seats;
					cout<<"\n7.Yasir Arafat (General)        | Ticket Price: 500  | Available Seats: "<<ya_max_seats;
					cout<<"\n8.Miran Buksh (General)         | Ticket Price: 500  | Available Seats: "<<mk_max_seats;
					cout<<"\nEnter Choice (1-8): ";
					cin>>ticket_choice;
					
					switch(ticket_choice){
							case 1:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}
								
								break;
							case 2:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							case 3:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 4:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 5:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += premium_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 6:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += first_class_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 7:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 8:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							default:
								cout <<"\nInvalid Input!";
								
								break;
							
					}
					
					break;
				case 2:
					ja_max_seats = rand() % 3000 + 1; 
					ik_max_seats = rand() % 3000 + 1; 
					am_max_seats = rand() % 3000 + 1;
					jm_max_seats = rand() % 3000 + 1;
					sa_max_seats = rand() % 1500 + 1;
					st_max_seats = rand() % 1000 + 1;
					ya_max_seats = rand() % 500 + 1;
					mk_max_seats = rand() % 500 + 1;
					vip_price = 3000;
					premium_price = 1500;
					first_class_price = 1000;
					general_price = 500;					
					cout<<"\n1.Javed Akhter Enclosure (VIP)  | Ticket Price: 3000 | Available Seats: "<<ja_max_seats;
					cout<<"\n2.Imran Khan Enclosure (VIP)    | Ticket Price: 3000 | Available Seats: "<<ik_max_seats;
					cout<<"\n3.Azhar Mehmood Enclosure (VIP) | Ticket Price: 3000 | Available Seats: "<<am_max_seats;
					cout<<"\n4.Javed Miandad Enclosure (VIP) | Ticket Price: 3000 | Available Seats: "<<jm_max_seats;
					cout<<"\n5.Shoaib Akhter (Premium)       | Ticket Price: 1500 | Available Seats: "<<sa_max_seats;
					cout<<"\n6.Sohail Tanveer (First Class)  | Ticket Price: 1000 | Available Seats: "<<st_max_seats;
					cout<<"\n7.Yasir Arafat (General)        | Ticket Price: 500  | Available Seats: "<<ya_max_seats;
					cout<<"\n8.Miran Buksh (General)         | Ticket Price: 500  | Available Seats: "<<mk_max_seats;
					cout<<"\nEnter Choice (1-8): ";
					cin>>ticket_choice;
					
					switch(ticket_choice){
							case 1:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}
								
								break;
							case 2:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							case 3:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 4:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 5:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += premium_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 6:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += first_class_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 7:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 8:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							default:
								cout <<"\nInvalid Input!";
								
								break;
							
					}
					
					break;
				case 3:
					ja_max_seats = rand() % 3000 + 1; 
					ik_max_seats = rand() % 3000 + 1; 
					am_max_seats = rand() % 3000 + 1;
					jm_max_seats = rand() % 3000 + 1;
					sa_max_seats = rand() % 1500 + 1;
					st_max_seats = rand() % 1000 + 1;
					ya_max_seats = rand() % 500 + 1;
					mk_max_seats = rand() % 500 + 1;
					vip_price = 3000;
					premium_price = 1500;
					first_class_price = 1000;
					general_price = 500;					
					cout<<"\n1.Javed Akhter Enclosure (VIP)  | Ticket Price: 3000 | Available Seats: "<<ja_max_seats;
					cout<<"\n2.Imran Khan Enclosure (VIP)    | Ticket Price: 3000 | Available Seats: "<<ik_max_seats;
					cout<<"\n3.Azhar Mehmood Enclosure (VIP) | Ticket Price: 3000 | Available Seats: "<<am_max_seats;
					cout<<"\n4.Javed Miandad Enclosure (VIP) | Ticket Price: 3000 | Available Seats: "<<jm_max_seats;
					cout<<"\n5.Shoaib Akhter (Premium)       | Ticket Price: 1500 | Available Seats: "<<sa_max_seats;
					cout<<"\n6.Sohail Tanveer (First Class)  | Ticket Price: 1000 | Available Seats: "<<st_max_seats;
					cout<<"\n7.Yasir Arafat (General)        | Ticket Price: 500  | Available Seats: "<<ya_max_seats;
					cout<<"\n8.Miran Buksh (General)         | Ticket Price: 500  | Available Seats: "<<mk_max_seats;
					cout<<"\nEnter Choice (1-8): ";
					cin>>ticket_choice;
					
					switch(ticket_choice){
							case 1:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}
								
								break;
							case 2:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							case 3:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 4:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 5:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += premium_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 6:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += first_class_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 7:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 8:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							default:
								cout <<"\nInvalid Input!";
								
								break;
							
					}
					
					break;
				case 4:
					ja_max_seats = rand() % 2000 + 1; 
					ik_max_seats = rand() % 2000 + 1; 
					am_max_seats = rand() % 2000 + 1;
					jm_max_seats = rand() % 2000 + 1;
					sa_max_seats = rand() % 1000 + 1;
					st_max_seats = rand() % 5000 + 1;
					ya_max_seats = rand() % 250 + 1;
					mk_max_seats = rand() % 250 + 1;
					vip_price = 2000;
					premium_price = 1000;
					first_class_price = 500;
					general_price = 250;					
					cout<<"\n1.Javed Akhter Enclosure (VIP)  | Ticket Price: 2000 | Available Seats: "<<ja_max_seats;
					cout<<"\n2.Imran Khan Enclosure (VIP)    | Ticket Price: 2000 | Available Seats: "<<ik_max_seats;
					cout<<"\n3.Azhar Mehmood Enclosure (VIP) | Ticket Price: 2000 | Available Seats: "<<am_max_seats;
					cout<<"\n4.Javed Miandad Enclosure (VIP) | Ticket Price: 2000 | Available Seats: "<<jm_max_seats;
					cout<<"\n5.Shoaib Akhter (Premium)       | Ticket Price: 1000 | Available Seats: "<<sa_max_seats;
					cout<<"\n6.Sohail Tanveer (First Class)  | Ticket Price: 500  | Available Seats: "<<st_max_seats;
					cout<<"\n7.Yasir Arafat (General)        | Ticket Price: 250  | Available Seats: "<<ya_max_seats;
					cout<<"\n8.Miran Buksh (General)         | Ticket Price: 250  | Available Seats: "<<mk_max_seats;
					cout<<"\nEnter Choice (1-8): ";
					cin>>ticket_choice;
					
					switch(ticket_choice){
							case 1:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}
								
								break;
							case 2:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							case 3:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 4:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 5:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += premium_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 6:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += first_class_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 7:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 8:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							default:
								cout <<"\nInvalid Input!";
								
								break;
							
					}
					
					break;
				case 5:
					ja_max_seats = rand() % 1500 + 1; 
					ik_max_seats = rand() % 1500 + 1; 
					am_max_seats = rand() % 1500 + 1;
					jm_max_seats = rand() % 1500 + 1;
					sa_max_seats = rand() % 1000 + 1;
					st_max_seats = rand() % 500 + 1;
					ya_max_seats = rand() % 250 + 1;
					mk_max_seats = rand() % 250 + 1;
					vip_price = 1500;
					premium_price = 1000;
					first_class_price = 500;
					general_price = 250;
					cout<<"\n1.Javed Akhter Enclosure (VIP)  | Ticket Price: 1500  | Available Seats: "<<ja_max_seats;
					cout<<"\n2.Imran Khan Enclosure (VIP)    | Ticket Price: 1500  | Available Seats: "<<ik_max_seats;
					cout<<"\n3.Azhar Mehmood Enclosure (VIP) | Ticket Price: 1500  | Available Seats: "<<am_max_seats;
					cout<<"\n4.Javed Miandad Enclosure (VIP) | Ticket Price: 1500  | Available Seats: "<<jm_max_seats;
					cout<<"\n5.Shoaib Akhter (Premium)       | Ticket Price: 1000  | Available Seats: "<<sa_max_seats;
					cout<<"\n6.Sohail Tanveer (First Class)  | Ticket Price: 500   | Available Seats: "<<st_max_seats;
					cout<<"\n7.Yasir Arafat (General)        | Ticket Price: 250   | Available Seats: "<<ya_max_seats;
					cout<<"\n8.Miran Buksh (General)         | Ticket Price: 250   | Available Seats: "<<mk_max_seats;
					cout<<"\nEnter Choice (1-8): ";
					cin>>ticket_choice;
					
					switch(ticket_choice){
							case 1:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}
								
								break;
							case 2:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							case 3:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 4:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 5:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += premium_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 6:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += first_class_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 7:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 8:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							default:
								cout <<"\nInvalid Input!";
								
								break;
							
					}
					
					break;
				case 6:
					ja_max_seats = rand() % 2000 + 1; 
					ik_max_seats = rand() % 2000 + 1; 
					am_max_seats = rand() % 2000 + 1;
					jm_max_seats = rand() % 2000 + 1;
					sa_max_seats = rand() % 1000 + 1;
					st_max_seats = rand() % 500 + 1;
					ya_max_seats = rand() % 250 + 1;
					mk_max_seats = rand() % 250 + 1;
					vip_price = 2000;
					premium_price = 1000;
					first_class_price = 500;
					general_price = 250;
					cout<<"\n1.Javed Akhter Enclosure (VIP)  | Ticket Price: 2000 | Available Seats: "<<ja_max_seats;
					cout<<"\n2.Imran Khan Enclosure (VIP)    | Ticket Price: 2000 | Available Seats: "<<ik_max_seats;
					cout<<"\n3.Azhar Mehmood Enclosure (VIP) | Ticket Price: 2000 | Available Seats: "<<am_max_seats;
					cout<<"\n4.Javed Miandad Enclosure (VIP) | Ticket Price: 2000 | Available Seats: "<<jm_max_seats;
					cout<<"\n5.Shoaib Akhter (Premium)       | Ticket Price: 1000 | Available Seats: "<<sa_max_seats;
					cout<<"\n6.Sohail Tanveer (First Class)  | Ticket Price: 500  | Available Seats: "<<st_max_seats;
					cout<<"\n7.Yasir Arafat (General)        | Ticket Price: 250  | Available Seats: "<<ya_max_seats;
					cout<<"\n8.Miran Buksh (General)         | Ticket Price: 250  | Available Seats: "<<mk_max_seats;
					cout<<"\nEnter Choice (1-8): ";
					cin>>ticket_choice;
					
					switch(ticket_choice){
							case 1:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}
								
								break;
							case 2:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							case 3:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 4:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 5:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += premium_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 6:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += first_class_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 7:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 8:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							default:
								cout <<"\nInvalid Input!";
								
								break;
							
					}
					
					break;
				case 7:
					ja_max_seats = rand() % 2000 + 1; 
					ik_max_seats = rand() % 2000 + 1; 
					am_max_seats = rand() % 2000 + 1;
					jm_max_seats = rand() % 2000 + 1;
					sa_max_seats = rand() % 1000 + 1;
					st_max_seats = rand() % 500 + 1;
					ya_max_seats = rand() % 250 + 1;
					mk_max_seats = rand() % 250 + 1;
					vip_price = 2000;
					premium_price = 1000;
					first_class_price = 500;
					general_price = 250;
					cout<<"\n1.Javed Akhter Enclosure (VIP)  | Ticket Price: 2000 | Available Seats: "<<ja_max_seats;
					cout<<"\n2.Imran Khan Enclosure (VIP)    | Ticket Price: 2000 | Available Seats: "<<ik_max_seats;
					cout<<"\n3.Azhar Mehmood Enclosure (VIP) | Ticket Price: 2000 | Available Seats: "<<am_max_seats;
					cout<<"\n4.Javed Miandad Enclosure (VIP) | Ticket Price: 2000 | Available Seats: "<<jm_max_seats;
					cout<<"\n5.Shoaib Akhter (Premium)       | Ticket Price: 1000 | Available Seats: "<<sa_max_seats;
					cout<<"\n6.Sohail Tanveer (First Class)  | Ticket Price: 500  | Available Seats: "<<st_max_seats;
					cout<<"\n7.Yasir Arafat (General)        | Ticket Price: 250  | Available Seats: "<<ya_max_seats;
					cout<<"\n8.Miran Buksh (General)         | Ticket Price: 250  | Available Seats: "<<mk_max_seats;
					cout<<"\nEnter Choice (1-8): ";
					cin>>ticket_choice;
					
					switch(ticket_choice){
							case 1:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}
								
								break;
							case 2:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							case 3:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 4:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 5:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += premium_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 6:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += first_class_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 7:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 8:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							default:
								cout <<"\nInvalid Input!";
								
								break;
							
					}
					
					break;
				case 8:
					ja_max_seats = rand() % 1500 + 1; 
					ik_max_seats = rand() % 1500 + 1; 
					am_max_seats = rand() % 1500 + 1;
					jm_max_seats = rand() % 1500 + 1;
					sa_max_seats = rand() % 1000 + 1;
					st_max_seats = rand() % 500 + 1;
					ya_max_seats = rand() % 250 + 1;
					mk_max_seats = rand() % 250 + 1;
					vip_price = 1500;
					premium_price = 1000;
					first_class_price = 500;
					general_price = 250;
					cout<<"\n1.Javed Akhter Enclosure (VIP)  | Ticket Price: 1500 | Available Seats: "<<ja_max_seats;
					cout<<"\n2.Imran Khan Enclosure (VIP)    | Ticket Price: 1500 | Available Seats: "<<ik_max_seats;
					cout<<"\n3.Azhar Mehmood Enclosure (VIP) | Ticket Price: 1500 | Available Seats: "<<am_max_seats;
					cout<<"\n4.Javed Miandad Enclosure (VIP) | Ticket Price: 1500 | Available Seats: "<<jm_max_seats;
					cout<<"\n5.Shoaib Akhter (Premium)       | Ticket Price: 1000 | Available Seats: "<<sa_max_seats;
					cout<<"\n6.Sohail Tanveer (First Class)  | Ticket Price: 500  | Available Seats: "<<st_max_seats;
					cout<<"\n7.Yasir Arafat (General)        | Ticket Price: 250  | Available Seats: "<<ya_max_seats;
					cout<<"\n8.Miran Buksh (General)         | Ticket Price: 250  | Available Seats: "<<mk_max_seats;
					cout<<"\nEnter Choice (1-8): ";
					cin>>ticket_choice;
					
					switch(ticket_choice){
							case 1:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}
								
								break;
							case 2:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							case 3:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 4:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += vip_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += vip_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 5:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += premium_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += premium_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 6:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += first_class_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += first_class_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 7:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
							
								break;
							case 8:
								cout <<"\nDo you wish to buy tickets for family (1 for yes, 0 for no)? ";
								cin >> family_choice;
								if (family_choice == 1){
									cout<<"\nEnter Number of Adults (max 4): ";
									cin >> num_adults;
									if (num_adults > 4 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									else{
										cout<<"\nEnter Number of Children (max 5): ";
										cin>> num_children;
										if (num_children > 5 || num_adults <= 0){
												cout<<"\nInvalid Input!";
												break;
										}
										else{
											cout<<"\nEnter CNIC: ";
											cin>>cnic;
										}
									}
									
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									for (int i=0; i<num_children; i++){
										child_total += general_price;
									}
									
									total = adult_total + child_total;
									cout<<"\nTotal without discount: "<<total;
									total = adult_total * 0.90 + child_total * 0.80;
									cout<<"\n\nTotal Ticket Price after Discount: "<<total;
									
								}
								else if (family_choice == 0){
									cout<<"\nEnter Number of Adults: ";
									cin >> num_adults;
									if (num_adults > 8 || num_adults <= 0){
											cout<<"\nInvalid Input!";
											break;
									}
									for (int i=0; i<num_adults; i++){
										adult_total += general_price;
									}
									total = adult_total;
									if (num_adults > 4){
											cout<<"\nYou have received 10% discount on your total bill!";
											cout<<"\nTotal before discount: "<<total;
											total = adult_total * 0.90;
											cout<<"\nTotal Ticket Price after discount: "<<total;
				
									}
									else{
										cout<<"\n\nTotal Ticket Price: "<<total;
									}
								}	
								else{
										cout<<"\nInvalid Input!";
										break;
								}							
								
								break;
							default:
								cout <<"\nInvalid Input!";
								
								break;
							
					}	
					
					break;
				default:
					cout <<"\nInvalid Input!";
					break;
		}
		return 0; 
}