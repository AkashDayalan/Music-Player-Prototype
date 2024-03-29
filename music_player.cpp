#include <iostream>
#include <bits/stdc++.h>
#include "musicly.h"
using namespace std;

int main()
{
	int choice, sch,ych;
	map<string, node*> m;
	node n;
	do {
		cout << "\n";
		cout << "  ****************************************************************************************** \n";
		cout << "  *                                                                                        *" <<endl;
		cout << "  *                      ********* WELCOME TO THE MUSIC LIBRARY ***********                *" << endl;
		cout << "  *                                                                                        *"<<endl;
		cout << "  *                             1.CREATE A NEW PLAYLIST AND ADD A SONG                     *" << endl;
		cout << "  *                             2.ADD A SONG TO AN EXISTING PLAYLIST                       *" << endl;
		cout << "  *                             3.SHOW ALL PLAYLISTS                                       *" << endl;
		cout << "  *                             4.SHOW SONGS IN A PARTICULAR PLAYLIST                      *" << endl;
		cout << "  *                             5.DELETE A PLAYLIST                                        *" << endl;
		cout << "  *                             6.DELETE A SONG IN A PLAYLIST                              *"<<endl;
		cout << "  *                             7.SHOW SEARCH OPTIONS                                      *" << endl;
		cout << "  *                             8.SHOW TIMELY SONGS                                        *"<<endl;
		cout << "  *                             9.EXIT                                                     *" << endl;
		cout << "  *                                                                                        *"<< endl;
		cout << "  ****************************************************************************************** \n";
		cout << "Please enter your choice : ";
		cin>>choice;
		if(choice ==8){
			do {
				cout << "\n\t\t*******TIMELY SONGS MENU*******\n";
				cout << "\t1.VERY OLD SONGS " << endl;
				cout << "\t2.RETRO" << endl;
				cout << "\t3.NEW SONGS" << endl;
				cout << "\t4.RECENT SONGS" << endl;
				cout << "\t5.VERY RECENT SONGS" << endl;
				cout << "\t6.EXIT" << endl;
				cout << "========================================================================== \n";
				cout << "Please enter your choice : :";
				cin >> ych;
				switch (ych)
				{
		case 1:
				{
					string playlist;
							cin.ignore();
							cout << "\n Select playlist : ";
							getline(cin, playlist);
							cout<<endl;
							cout<<"________________________________________"<<endl;
							cout <<"SONG NAME" <<"\t"<<"SINGER"<<"\t"<<"YEAR"<< endl;
							cout<<"________________________________________"<<endl;
							old(m[playlist]);
					break;
				}
			case 2:
				{
					string playlist;
							cin.ignore();
							cout << "\n Select playlist : ";
							getline(cin, playlist);
							cout<<endl;
							cout<<"________________________________________"<<endl;
							cout <<"SONG NAME" <<"\t"<<"SINGER"<<"\t"<<"YEAR"<< endl;
							cout<<"________________________________________"<<endl;
							retro(m[playlist]);
							cout<<"________________________________________"<<endl;
					break;
				}
				case 3:
				{
					string playlist;
							cin.ignore();
							cout << "\n Select playlist : ";
							getline(cin, playlist);
							cout<<endl;
							cout<<"________________________________________"<<endl;
							cout <<"SONG NAME" <<"\t"<<"SINGER"<<"\t"<<"YEAR"<< endl;
							cout<<"________________________________________"<<endl;
								New(m[playlist]);
							cout<<"________________________________________"<<endl;
					break;
				}
				case 4:
				{
					string playlist;
							cin.ignore();
							cout << "\n Select playlist : ";
							getline(cin, playlist);
							cout<<endl;
							cout<<"________________________________________"<<endl;
							cout <<"SONG NAME" <<"\t"<<"SINGER"<<"\t"<<"YEAR"<< endl;
							cout<<"________________________________________"<<endl;
								vNew(m[playlist]);
							cout<<"________________________________________"<<endl;
					break;
				}
				case 5:
				{
					string playlist;
							cin.ignore();
							cout << "\n Select playlist : ";
							getline(cin, playlist);
							cout<<endl;
							cout<<"_______________"<<endl;
							cout <<"SONG NAME" <<"\t"<<"SINGER"<<"\t"<<"YEAR"<< endl;
							cout<<"________________"<<endl;
								rNew(m[playlist]);
							cout<<"________________________________________"<<endl;
					break;
				}
				case 6:
						{
							break;
						}
			}
		}while(ych!=6);
			}
		if (choice == 7)
		{
			do {
				cout << "\n\t\t*SEARCHING MENU*\n";
				cout << "\t1.RECENT SONGS SEARCHED " << endl;
				cout << "\t2.PARTIAL SEARCH YOUR PREFERRED SONGS" << endl;
				cout << "\t3.SEARCH WITH SONG NAME" << endl;
				cout << "\t4.SEARCH WITH GENRE" << endl;
				cout << "\t5.SEARCH WITH SINGER NAME" << endl;
				cout << "\t6.EXIT" << endl;
				cout << "========================================================================== \n";
				cout << "Please enter your choice : :";
				cin >> sch;
				switch (sch)
				{
					case 1:
						{
							node * t;
							string playlist;
							vector<pair<int, string> > k;
							cin.ignore();
							cout << "Select playlist : ";
							getline(cin, playlist);
							cout<<endl;
							cout<<"________________________________________"<<endl;
							cout<<"SONGNAME"<<"\tFREQUENCY OF SEARCH"<<endl;
							cout<<"________________________________________"<<endl;
							freq(m[playlist], k);
							int n = k.size();
							sort(k.begin(), k.end());
							for (int i = n - 1; i >= 0; i--)
							{
								cout << k[i].second <<"\t\t"<< k[i].first << endl;
							}

							break;
						}

					case 2:
						{
							string song, playlist;
							cin.ignore();
							cout << "\nEnter the playlist : " << endl;
							getline(cin, playlist);
							cin.ignore();
							cout << "\nEnter first 3 characters of the song to be searched : " << endl;
							getline(cin, song);
							cout<<endl;
							cout<<"________________________________________"<<endl;
							cout <<"S.NO"<<"\tSONG NAME" << "\tGENRE" << "\tSINGER" << endl;
							cout<<"________________________________________"<<endl;
							Partial_Match_Names(m[playlist], song);
							break;
						}

					case 3:
						{
							string songname, playlist;
							cin.ignore();
							cout << "\n Enter a playlist:  ";
							getline(cin, playlist);
							cin.ignore();
							cout << "\n Enter the song name to be searched:  " << endl;
							getline(cin, songname);
							cout<<endl;
							cout<<"________________________________________"<<endl;
							cout<<"SONG NAME "<<"\t\t"<<"GENRE"<<"\t\t"<<"SINGER"<<"\t\t"<<"YEAR OF RELEASE"<<endl;
							cout<<"________________________________________"<<endl;
							search1(m[playlist], songname);
							break;
						}

					case 4:
						{
							string genre, playlist;
							cin.ignore();
							cout << "\n Select playlist : ";
							getline(cin, playlist);
							cin.ignore();
							cout << "\n Enter the genre to be searched: " << endl;
							getline(cin, genre);
							cout<<endl;
							cout<<"________________________________________"<<endl;
							cout <<"GENRE" <<"\t"<<"SONG NAME" << endl;
							cout<<"_________________________________________"<<endl;
							check1(m[playlist], genre);
							break;
						}

					case 5:
						{
							string singer, playlist;
							cin.ignore();
							cout << "Select playlist : ";
							getline(cin, playlist);
							cin.ignore();
							cout << "\n Enter the singer to be searched: " << endl;
							getline(cin, singer);
							cout<<endl;
							cout<<"_____________"<<endl;
							cout << "SINGER" << "\t" << "SONG NAME " << endl;
							cout<<"____________"<<endl;
							sing(m[playlist], singer);
							break;
						}

					case 6:
						{
							break;
						}
				}
			} while (sch != 6);
		}

		switch (choice)
		{
			case 1:
				{
					cout << "\n========================= \n";
					string playlist;
					string genre, songname, singer;
					int year;
					cout << "Enter the genre : ";
					cin >> genre;
					cin.ignore();
					cout << "Name of the song : ";
					cin >> songname;
					cin.ignore();
					cout << "Enter the singer : ";
					cin >> singer;
					cin.ignore();
					cout << "Enter the year : ";
					cin >> year;
					node *root = newNode(genre, songname, singer, year);
					cout << "Name of the playlist : ";
					cin >> playlist;
					cin.ignore();
					cout << "\n========================= \n";
					m.insert(pair<string, node*> (playlist, root));
					break;
				}

			case 2:
				{
					cout << "\n========================= \n";
					string playlist;
					string genre, songname, singer;
					int year;
					cout << "Enter the genre : ";
					cin >> genre;
					cin.ignore();
					cout << "Name of the song : ";
					cin >> songname;
					cin.ignore();
					cout << "Enter the singer : ";
					cin >> singer;
					cin.ignore();
					cout << "Enter the year : ";
					cin >> year;
					cout << "Select playlist : ";
					cin >> playlist;
					cin.ignore();
					cout << "\n========================= \n";
					m[playlist] = Insert(m[playlist], genre, songname, singer, year);
					break;
				}

			case 3:
				{
					map<string, node*>::iterator itr;
					cout << "\n \t*Your Current Playlists* \n";
					for (itr = m.begin(); itr != m.end(); ++itr)
					{
						cout << "\t\t" << itr->first << "\n";
					}
					cout << "\n========================= \n";
					cout << endl;
					break;
				}

			case 4:
				{
					string s;
					cin.ignore();
					cout << "Select playlist : \n";
					getline(cin, s);
					display(m[s]);
					cout << "\n========================= \n";
					break;
				}

			case 5:
				
				{
					string s;
					cin.ignore();
					cout << "Select playlist : \n";
					getline(cin, s);
					m.erase(s);
					cout << "\n========================= \n";
					break;
				}
				case 6:
					{
					string playlist,songname;
					cin.ignore();
					cout << "Select playlist : \n";
					getline(cin, playlist);
					cin.ignore();
					cout << "Name of the song : ";
					getline(cin, songname);
					m[playlist] = delete_key(m[playlist],songname);
					cout << "\n========================= \n";
					break;	
					}
			case 9:
				{
					cout<<"\n THANK YOU! ";
					cout << "\n========================= \n";
					exit(1);
					break;
				}
			
			
			default:
				{
					cout << "INVALID CHOICE!!!" << endl << endl;
					break;
				}
		}
	} while (choice != 10);
	return 0;
}
