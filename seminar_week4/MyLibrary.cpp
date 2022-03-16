#include "MyLibrary.h"
#include <cstdio>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
#include <fstream>
#include <cstdarg>
#pragma warning(disable:4996)

void MyLibrary::print_books()
{
    output_stream << "Found " << books_number << " books" << endl;
    for (int i = 0; i < books_number; i++)
        output_stream << "Book: " << i << " " << books[i] << endl;
}

MyLibrary::~MyLibrary()
{
    delete[] books;
}

void MyLibrary::update_books_id_by_index(int book_index, int book_id)
{
    if (book_index < books_number)
        this->books[book_index] = book_id;
}

MyLibrary::MyLibrary(ostream& output_stream) : output_stream(output_stream)
{
    books_number = -1;
    books = nullptr;

}
MyLibrary::MyLibrary(ostream& output_stream, int books_number, int* books) : output_stream(output_stream)
{
    this->books_number = books_number;
    this->books = new int[books_number];
    for (int i = 0; i < books_number; i++)
    {
        this->books[i] = books[i];
    }
}
MyLibrary::MyLibrary(ostream& output_stream, int books_number, int min, int max) : output_stream(output_stream)
{   
    srand(time(NULL));
    this->books_number = books_number;
    books = new int[books_number];
    for (int i = 0; i < books_number; i++)
    {
       
        int number = rand() % max + min;
        books[i] = number;
    }
}
MyLibrary::MyLibrary(ostream& output_stream, const char* books_values) : output_stream(output_stream)
{
    
    int cnt = 0;
    for (int i = 0; i < strlen(books_values); i++)
        if (books_values[i] == ';')
            cnt++;
    books_number = cnt + 1;
    books = new int[books_number];
    char* p;
    char elem[256];
    strcpy(elem, books_values);
    p = strtok(elem, ";");
    int i = 0;
    while (p != NULL)
    {
        //this->books_number[i] = char_to_int(elem);
        i++;
        p = strtok(NULL, ";");

    }
}
MyLibrary::MyLibrary(ostream& output_stream, int books_count, ...) : output_stream(output_stream)
{
    this->books_number = books_count;
    books = new int[books_number];
    va_list args;
    va_start(args, books_count);
    for (int i = 0; i < books_count; i++)
    {
        this->books[i]=va_arg(args, int);
    }
    va_end(args);


}
int MyLibrary::get_book_index_by_id(int id)
{
    if (books_number <= id)
        return -1;
    return books[id];
}

MyLibrary::MyLibrary(const MyLibrary& other)
{
    books = new int[books_number];
}