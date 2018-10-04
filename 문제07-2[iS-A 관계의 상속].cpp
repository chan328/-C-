#include <iostream>
using namespace std;

// 문제 1번

class Rectangle
{
protected:
	int width;
	int height;
public:
	Rectangle(int wid, int hei)
		: width(wid), height(hei)
	{ }
	void ShowAreaInfo()
	{
		cout << "면적: " << width * height << endl;
	}
};

class Square : public Rectangle
{
public:
	Square(int side)
		: Square (side, side)
	{ }
};

/*
int main(void)
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}
*/

// 문제 2번

class Book
{
private:
	char * title;
	char * isbn;
	int price;
public:
	Book(char * title, char * isbn, int value)
		: price(value)
	{
		this->title = new char(strlen(title) + 1);
		this->isbn = new char(strlen(isbn) + 1);
		strcpy(this->title, title);
		strcpy(this->isbn, isbn);
	}
	void ShowBookInfo()
	{
		cout << "제목: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "가격: " << price << endl;
	}
	~Book()
	{
		delete[] title;
		delete[] isbn;
	}
};

class EBook : public Book
{
private:
	char * DRMKey;
public:
	EBook(char * title, char * isbn, int value, char * key)
		: Book(title, isbn, value)
	{
		DRMKey = new char(strlen(key) + 1);
		strcpy(this->DRMKey, key);
	};

	void ShowEBookInfo()
	{
		ShowBookInfo();
		cout << "인증키: " << DRMKey;
	}
	~EBook()
	{
		delete[] DRMKey;
	}
};

int main(void)
{
	Book book("좋은 C++", "555-12345-890-0", 2000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();
	return 0;
}