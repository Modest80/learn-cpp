#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void setContentType(string content_type) {
	cout << "Content-type: " << content_type << "\r\n\r\n";
}

void setPageTitle(string title) {
	cout << "<title>" << title << "</title>";
}

void h1(string text) {
	cout << "<h1>" << text << "</h1>";
}

void headStart(string lang) {
	cout << "<!doctype html>\n";
	cout << "<html lang=\"" << lang << "\">";
	cout << "<head>"
}

void headEnd() {
	cout << "</head>";
}

void p(string text) {
	cout << "<p>" << text << "</p>";
}

int main () {
	setContentType("text\html");
	headStart("ru");
	setPageTitle("Simple page on c++");
	headEnd();
	cout << "<body>";
	h1("Hello, World!");
	p("My first programm on c++ for web!");
	cout << "</body>\n</html>";
	return 0;	
}