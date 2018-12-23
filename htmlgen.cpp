//html gen
#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
//#include <dos.h>
//for sleep fuction
#ifdef WIN32
	#include <conio.h> 
#else
	#include <curses.h>
#endif
//C libs to use system function
#include<stdio.h>
#include<stdlib.h>

using namespace std;

//global variables
string mystrimgwid;
string mystrhrcolour;
string mystrhrcolour2;
string mystrimgname;
string mystrimgheight;
string mystralttext;
string mystrbuttonnum;
string mystrbut1;
string mystrbut2;
string mystrbut3;
string mystrbut4;
string mystrbut5;
string mystrbut6;
string mystrref;
string myref1;
string myref2;
string myref3;
string myref4;
string myref5;
string myref6;
string mystrjust;
string mystrjust2;
string mystrjust3;
string mystrjust4;
string mystrjust5;
string mystrparnum;
string mystr4;
string mystr5;
string mystr6;
string mystr7;
string mystr8;
string mystriconchoice;
string mystricon;

int main()
{
	//Use Before Every Input:
	//cout << "HTML_Gen>";
	system("color 02");
	cout << " |||||	   ||||| " << endl;
	cout << " |   |	   |   | " << endl;
	cout << " |||||	   ||||| " << endl;
	cout << "       ||       " << endl;
	cout << " |	      | " << endl;
	cout << "  |	     | " << endl;
	cout << "   |||||||||| " << endl;
	cout << "Welcome to the HTML gen" << endl;
	cout << "Done By The Watch_Dog" << endl;

	string mystr;
	cout << "What is the webpage name? " << endl;
	cout << "HTML_Gen>";
	getline(cin, mystr);
	
	cout << "Do you want to display an icon for your webpage?" << endl;
	cout << "HTML_Gen>";
	getline(cin, mystriconchoice);
	if(mystriconchoice == "yes")
		{
			cout << "Please write the name of the image file(with extension)" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystricon);
		}

	string mystr2;
	cout << "What colour do you want the page to be?" << endl;
	cout << "Choices are:" << endl;
	cout << "1.Black" << endl;//#000000
	cout << "2.White" << endl;//#ffffff
	cout << "3.Light Green" << endl;//#00ff0f
	cout << "4.Dark Green" << endl;//#006600
	cout << "5.Light Blue" << endl;//#0ff0ff
	cout << "6.Blue" << endl;//#0000cc
	cout << "7.Red" << endl;//#ff0000
	cout << "8.Yellow" << endl;//#ffff00
	cout << "9.Purple" << endl;//#660066
	cout << "10.Orange" << endl;//#ff9900
	cout << "11.Pink" << endl;//#ff00ff
	cout << "12.No Colour" << endl;	
	cout << "Enter the number only" << endl;
	cout << "HTML_Gen>";
	getline(cin, mystr2);

	string mystrimg;
	cout << "Do you want to add an image in the top left of the page?" << endl;
	cout << "HTML_Gen>";
	getline(cin, mystrimg);
	
	if (mystrimg == "yes")
	{
		cout << "Please put the image in the current folder" << endl;		
		cout << "Type the name of the image file with exetensing eg .png,.jpeg etc:" << endl;
		cout << "HTML_Gen>";
		getline(cin, mystrimgname);

		cout << "Enter the width:" << endl;
		cout << "HTML_Gen>";
		getline(cin, mystrimgwid);
	
		cout << "Enter the Height:" << endl;
		cout << "HTML_Gen>";
		getline(cin, mystrimgheight);

		cout << "Enter the text that will be shown if the image does not load:" << endl;
		cout << "HTML_Gen>";
		getline(cin, mystralttext);
	}

	string mystrhr;	
	cout << "Do you want to add a horizontal line at the top of the page?" << endl;
	cout << "HTML_Gen>";
	getline(cin,mystrhr);

	if (mystrhr == "yes")
	{
		cout << "Do you want to add colour to the line?(Default is black)" << endl;
		cout << "Choices are:" << endl;
		cout << "1.Black" << endl;//#000000
		cout << "2.White" << endl;//#ffffff
		cout << "3.Light Green" << endl;//#00ff0f
		cout << "4.Dark Green" << endl;//#006600
		cout << "5.Light Blue" << endl;//#0ff0ff
		cout << "6.Blue" << endl;//#0000cc
		cout << "7.Red" << endl;//#ff0000
		cout << "8.Yellow" << endl;//#ffff00
		cout << "9.Purple" << endl;//#660066
		cout << "10.Orange" << endl;//#ff9900
		cout << "11.Pink" << endl;//#ff00ff		
		cout << "Enter the number only" << endl;
		cout << "HTML_Gen>";
		getline(cin, mystrhrcolour);
	}

	string mystrbutton;
	cout << "Do you want buttons at the top of the page?" << endl;
	cout << "HTML_Gen>";
	getline(cin, mystrbutton);
	if (mystrbutton == "yes")
	{
			loop:			
				cout << "How many buttons do you want?(Max is 6)" << endl;
				cout << "HTML_Gen>";
				getline(cin, mystrbuttonnum);
				if(mystrbuttonnum > "6")
				{
					cout << "Nice try" << endl;
					goto loop;
				}
		
		if(mystrbuttonnum == "1")
		{
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut1);
			string mystrref;
			cout << "Do you want to add a hyperlink to the button?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrref);
				if(mystrref == "yes")
				{
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref1);
				}
		}	
		if(mystrbuttonnum == "2")
		{
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut1);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut2);
			string mystrref;
			cout << "Do you want to add a hyperlink to the button?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrref);
				if(mystrref == "yes")
				{
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref1);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref2);
				}
		}
		if(mystrbuttonnum == "3")
		{
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut1);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut2);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut3);
			string mystrref;
			cout << "Do you want to add a hyperlink to the button?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrref);
				if(mystrref == "yes")
				{
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref1);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref2);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref3);
				}		
		}
		if(mystrbuttonnum == "4")
		{
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut1);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut2);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut3);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut4);
			string mystrref;
			cout << "Do you want to add a hyperlink to the button?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrref);
				if(mystrref == "yes")
				{
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref1);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref2);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref3);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref4);
				}
		}
		if(mystrbuttonnum == "5")
		{
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut1);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut2);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut3);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut4);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut5);string mystrref;
			cout << "Do you want to add a hyperlink to the button?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrref);
				if(mystrref == "yes")
				{
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref1);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref2);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref3);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref4);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref5);
				}
		}
		if(mystrbuttonnum == "6")
		{
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut1);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut2);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut3);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut4);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut5);
			cout << "Enter what will be displayed on the button" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrbut6);
			string mystrref;
			cout << "Do you want to add a hyperlink to the button?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystrref);
				if(mystrref == "yes")
				{
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref1);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref2);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref3);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref4);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref5);
					cout << "Enter the hyperlink:" << endl;
					cout << "HTML_Gen>";
					getline(cin, myref6);
				}
		}
	}
	
	string mystrhr2;	
	cout << "Do you want to add a horizontal line after buttons?" << endl;
	cout << "HTML_Gen>";
	getline(cin,mystrhr2);

	if (mystrhr2 == "yes")
	{
		cout << "Do you want to add colour to the line?(Default is black)" << endl;
		cout << "Choices are:" << endl;
		cout << "1.Black" << endl;//#000000
		cout << "2.White" << endl;//#ffffff
		cout << "3.Light Green" << endl;//#00ff0f
		cout << "4.Dark Green" << endl;//#006600
		cout << "5.Light Blue" << endl;//#0ff0ff
		cout << "6.Blue" << endl;//#0000cc
		cout << "7.Red" << endl;//#ff0000
		cout << "8.Yellow" << endl;//#ffff00
		cout << "9.Purple" << endl;//#660066
		cout << "10.Orange" << endl;//#ff9900
		cout << "11.Pink" << endl;//#ff00ff		
		cout << "Enter the number only" << endl;
		cout << "HTML_Gen>";
		getline(cin, mystrhrcolour2);
	} 	
	
	loop2:
	cout << "How many paragraphs do you want?(Max is five)" << endl;
	cout << "HTML_Gen>";
	getline(cin, mystrparnum);
	if (mystrparnum > "5")
		{
			goto loop2;
		}	
	if (mystrparnum == "1")
		{	
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr4);
		
			string mystr4_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr4_1);
			if(mystr4_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust);
				}
		}

		if (mystrparnum == "2")
		{	
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr4);
		
			string mystr4_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr4_1);
			if(mystr4_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust);
				}
			
			cout << "Please type the Second paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr5);
		
			string mystr5_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr5_1);
			if(mystr5_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust2);
				}
		}

		if (mystrparnum == "3")
		{	
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr4);
		
			string mystr4_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr4_1);
			if(mystr4_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust);
				}
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr5);
		
			string mystr5_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr5_1);
			if(mystr5_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust2);
				}
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr6);
		
			string mystr6_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr6_1);
			if(mystr6_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust2);
				}
		}

		if (mystrparnum == "4")
		{	
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr4);
		
			string mystr4_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr4_1);
			if(mystr4_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust);
				}
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr5);
		
			string mystr5_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr5_1);
			if(mystr5_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust2);
				}
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr6);
		
			string mystr6_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr6_1);
			if(mystr6_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust2);
				}
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr7);
		
			string mystr7_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr7_1);
			if(mystr7_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust2);
				}
		}

		if (mystrparnum == "5")
		{	
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr4);
		
			string mystr4_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr4_1);
			if(mystr4_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust);
				}
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr5);
		
			string mystr5_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr5_1);
			if(mystr5_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust2);
				}
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr6);
		
			string mystr6_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr6_1);
			if(mystr6_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust2);
				}
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr7);
		
			string mystr7_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr7_1);
			if(mystr7_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust2);
				}
			cout << "Please type the first paragraph:" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr8);
		
			string mystr8_1;
			cout << "Do you want to justify the paragrahp?" << endl;
			cout << "HTML_Gen>";
			getline(cin, mystr8_1);
			if(mystr5_1 == "yes")
				{
					cout << "Left" << endl;
					cout << "Center" << endl;
					cout << "Right" << endl;
					cout << "HTML_Gen>";
					getline(cin, mystrjust2);
				}
		}
	string mystr10;
	cout << "Are you done?" << endl;
	cout << "Yes or No" << endl;
	cout << "HTML_Gen>";
	getline(cin, mystr10);
	
//writting of the main html file
	 if ( mystr10 == "yes")
	 {
		ofstream myfile("index.html");
		if (myfile.is_open())
			{
				myfile << "<!--The following website was generated by HTML gen-->" << endl;
				myfile << "<!--created by the watch_dog-->" << endl;
				myfile << "<html>" <<	endl;
				myfile << "<head>" <<	endl;
				myfile << "<title>" <<	endl;
				myfile << mystr << endl;
				myfile << "</title>" << endl;
				if(mystriconchoice == "yes")
				{
					myfile << "<link rel=icon href=" << mystricon;
					myfile << " />" << endl;
				}
				myfile << "</head>" << endl;
// body			
				if (mystr2 == "1")
					{
						myfile << "<body bgcolor = #000000>" << endl;
					}	
				if (mystr2 == "2")
					{
						myfile << "<body bgcolor = #ffffff>" <<endl;
					}
				if (mystr2 == "3")
					{
						myfile << "<body bgcolor = #00ff0f>" <<endl;
					}
				if (mystr2 == "4")
					{
						myfile << "<body bgcolor = #006600>" <<endl;
					}
				if (mystr2 == "5")
					{
						myfile << "<body bgcolor = #0ff0ff>" <<endl;
					}
				if (mystr2 == "6")
					{
						myfile << "<body bgcolor = #0000cc>" <<endl;
					}
				if (mystr2 == "7")
					{
						myfile << "<body bgcolor = ff0000>" <<endl;
					}
				if (mystr2 == "8")
				{
						myfile << "<body bgcolor = #ffff00>" <<endl;
					}
				if (mystr2 == "9")
					{
						myfile << "<body bgcolor = #660066>" <<endl;
					}
				if (mystr2 == "10")
					{
						myfile << "<body bgcolor = #ff9900>" <<endl;
					}
				if (mystr2 == "11")
					{
						myfile << "<body bgcolor = #ff00ff>" <<endl;
					}
				if (mystr2 == "12")
					{
						myfile << "<body>" << endl;		
					}
// image(logo)
				if (mystrimg == "yes")
					{
						myfile << "<img src= " << mystrimgname;
						myfile << " ";						
						myfile << "width = " << mystrimgwid;
						myfile << " ";
						myfile << "height = " << mystrimgheight;
						myfile << " ";
						myfile << "alt = " << mystralttext;
						myfile << "/>" << endl;
					}

//	line_horizontial
				if (mystrhrcolour == "1")
					{
						myfile << "<hr color = #000000/>" << endl;
					}
				if (mystrhrcolour == "2")
					{
						myfile << "<hr color = #ffffff/>" << endl;
					}
				if (mystrhrcolour == "3")
					{
						myfile << "<hr color = #00ff0f/>" << endl;
					}
				if (mystrhrcolour == "4")
					{
					myfile << "<hr color = #006600/>" << endl;
					}
				if (mystrhrcolour == "5")
					{
						myfile << "<hr color = 0ff0ff/>" << endl;
					}
				if (mystrhrcolour == "6")
					{
						myfile << "<hr color = #0000cc/>" << endl;
					}
				if (mystrhrcolour == "7")
					{
						myfile << "<hr color = #ff0000/>" << endl;
					}
				if (mystrhrcolour == "8")
					{
						myfile << "<hr color = #ffff00/>" << endl;
					}
				if (mystrhrcolour == "9")
					{
						myfile << "<hr color = #660066/>" << endl;
					}
				if (mystrhrcolour == "10")
					{
						myfile << "<hr color = #ff9900/>" << endl;
					}
				if (mystrhrcolour == "11")
					{
						myfile << "<hr color = #ff00ff/>" << endl;
					}
// buttons
				if(mystrbuttonnum == "1")
					{
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref1;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut1 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
					}
				if(mystrbuttonnum == "2")
					{
						if(mystrref == "yes")
							{
						myfile << "<a href = " << myref1;
						myfile << ">" << endl;
							}						
						myfile << "<button>" << endl;
						myfile << mystrbut1 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{						
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref2;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut2 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
					}
				if(mystrbuttonnum == "3")
					{
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref1;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut1 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref2;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut2 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref3;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut3 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
					}
				if(mystrbuttonnum == "4")
					{
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref1;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut1 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref2;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut2 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref3;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut3 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref4;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut4 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
					}
				if(mystrbuttonnum == "5")
					{
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref1;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut1 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref2;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut2 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref3;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut3 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref4;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut4 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref5;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut5 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
					}
				if(mystrbuttonnum == "6")
					{
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref1;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut1 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref2;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut2 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref3;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut3 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref4;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut4 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref5;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut5 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
						if(mystrref == "yes")
							{
								myfile << "<a href = " << myref6;
								myfile << ">" << endl;
							}
						myfile << "<button>" << endl;
						myfile << mystrbut6 << endl;
						myfile << "</button>" << endl;
						if(mystrref == "yes")
							{
								myfile << "</a>" << endl;
							}
					}

//	line_horizontial
				if (mystrhrcolour2 == "1")
					{
						myfile << "<hr color = #000000/>" << endl;
					}
				if (mystrhrcolour2 == "2")
					{
						myfile << "<hr color = #ffffff/>" << endl;
					}
				if (mystrhrcolour2 == "3")
					{
						myfile << "<hr color = #00ff0f/>" << endl;
					}
				if (mystrhrcolour2 == "4")
					{
					myfile << "<hr color = #006600/>" << endl;
					}
				if (mystrhrcolour2 == "5")
					{
						myfile << "<hr color = 0ff0ff/>" << endl;
					}
				if (mystrhrcolour2 == "6")
					{
						myfile << "<hr color = #0000cc/>" << endl;
					}
				if (mystrhrcolour2 == "7")
					{
						myfile << "<hr color = #ff0000/>" << endl;
					}
				if (mystrhrcolour2 == "8")
					{
						myfile << "<hr color = #ffff00/>" << endl;
					}
				if (mystrhrcolour2 == "9")
					{
						myfile << "<hr color = #660066/>" << endl;
					}
				if (mystrhrcolour2 == "10")
					{
						myfile << "<hr color = #ff9900/>" << endl;
					}
				if (mystrhrcolour2 == "11")
					{
						myfile << "<hr color = #ff00ff/>" << endl;
					}				
				
				myfile << "<br />" << endl;

//Paragraghs
				if(mystrparnum == "1")
					{				
						if(mystrjust == "center")
							{
								myfile << "<p";
								myfile << " ";
								myfile << "align = center";
								myfile << ">" << endl;
							}
						if(mystrjust == "left")
							{
								myfile << "<p";
								myfile << " ";
								myfile << "align = left";
								myfile << ">" << endl;
							}
						if(mystrjust == "right")
							{
							myfile << "<p";
							myfile << " ";
							myfile << "align = right";
							myfile << ">" << endl;
							}
						myfile << mystr4 << endl;
						myfile << "</p>" << endl;
					}
					
					if(mystrparnum == "5")
					{				
						if(mystrjust == "center")
							{
								myfile << "<p";
								myfile << " ";
								myfile << "align = center";
								myfile << ">" << endl;
							}
						if(mystrjust == "left")
							{
								myfile << "<p";
								myfile << " ";
								myfile << "align = left";
								myfile << ">" << endl;
							}
						if(mystrjust == "right")
							{
							myfile << "<p";
							myfile << " ";
							myfile << "align = right";
							myfile << ">" << endl;
							}
						myfile << mystr4 << endl;
						myfile << "</p>" << endl;

						if(mystrjust2 == "center")
							{
								myfile << "<p";
								myfile << " ";
								myfile << "align = center";
								myfile << ">" << endl;
							}
						if(mystrjust2 == "left")
							{
								myfile << "<p";
								myfile << " ";
								myfile << "align = left";
								myfile << ">" << endl;
							}
						if(mystrjust2 == "right")
							{
							myfile << "<p";
							myfile << " ";
							myfile << "align = right";
							myfile << ">" << endl;
							}
						myfile << mystr5 << endl;
						myfile << "</p>" << endl;

						if(mystrjust3 == "center")
							{
								myfile << "<p";
								myfile << " ";
								myfile << "align = center";
								myfile << ">" << endl;
							}
						if(mystrjust3 == "left")
							{
								myfile << "<p";
								myfile << " ";
								myfile << "align = left";
								myfile << ">" << endl;
							}
						if(mystrjust3 == "right")
							{
							myfile << "<p";
							myfile << " ";
							myfile << "align = right";
							myfile << ">" << endl;
							}
						myfile << mystr6 << endl;
						myfile << "</p>" << endl;

						if(mystrjust4 == "center")
							{
								myfile << "<p";
								myfile << " ";
								myfile << "align = center";
								myfile << ">" << endl;
							}
						if(mystrjust4 == "left")
							{
								myfile << "<p";
								myfile << " ";
								myfile << "align = left";
								myfile << ">" << endl;
							}
						if(mystrjust4 == "right")
							{
							myfile << "<p";
							myfile << " ";
							myfile << "align = right";
							myfile << ">" << endl;
							}
						myfile << mystr7 << endl;
						myfile << "</p>" << endl;
	
						if(mystrjust5 == "center")
							{
								myfile << "<p";
								myfile << " ";
								myfile << "align = center";
								myfile << ">" << endl;
							}
						if(mystrjust5 == "left")
							{
								myfile << "<p";
								myfile << " ";
								myfile << "align = left";
								myfile << ">" << endl;
							}
						if(mystrjust5 == "right")
							{
							myfile << "<p";
							myfile << " ";
							myfile << "align = right";
							myfile << ">" << endl;
							}
						myfile << mystr8 << endl;
						myfile << "</p>" << endl;
					}	
				myfile << "</body>" << endl;
				myfile << "</html>" << endl;
			}
	}
	if(mystr10 != "yes")
		{
			main();		
		}
	 return 0;
}
