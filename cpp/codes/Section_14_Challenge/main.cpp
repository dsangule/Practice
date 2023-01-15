#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Mystring
{
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    friend Mystring &operator+=( Mystring &lhs, const Mystring &rhs);
    friend Mystring operator*(const Mystring &lhs, int n);
    friend Mystring &operator*=( Mystring &lhs, int n);
    friend Mystring &operator++(Mystring &obj);
    friend Mystring operator++(Mystring &obj, int);
    friend ostream &operator<<(ostream &os, const Mystring &rhs);
    friend istream &operator>>(istream &in, Mystring &rhs);

private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring( Mystring &&source);
    ~Mystring();
    
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
};

Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);

}

Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
}

Mystring::~Mystring() {
    delete [] str;
}

Mystring &Mystring::operator=(const Mystring &rhs) {

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

Mystring &Mystring::operator=( Mystring &&rhs) {
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

void Mystring::display() const {
    cout << str << " : " << get_length() << endl;
}

int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }

ostream &operator<<(ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

istream &operator>>(istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (strcmp(lhs.str, rhs.str) == 0);
}

bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    return !(strcmp(lhs.str, rhs.str) == 0);
}

bool operator<(const Mystring &lhs, const Mystring &rhs) {
    return (strcmp(lhs.str, rhs.str) < 0);
}

bool operator>(const Mystring &lhs, const Mystring &rhs) {
    return (strcmp(lhs.str, rhs.str) > 0);
}

Mystring operator-(const Mystring &obj) {
    char *buff = new char[strlen(obj.str) + 1];
    strcpy(buff, obj.str);
    for (size_t i=0; i<strlen(buff); i++) 
        buff[i] = tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring &operator+=( Mystring &lhs, const Mystring &rhs) {
     lhs =  lhs + rhs;
     return lhs;
}

 Mystring operator*(const Mystring &lhs, int n)  {
    Mystring temp;
    for (int i=1; i<= n; i++)
        temp = temp + lhs;
    return temp;
}
        
 Mystring &operator*=( Mystring &lhs, int n) {
        lhs = lhs * n;
        return lhs;
}

Mystring &operator++(Mystring &obj) {
    for (size_t i=0; i< strlen(obj.str); i++)
        obj.str[i] = toupper(obj.str[i]);
    return obj;
}

Mystring operator++(Mystring &obj, int) {
    Mystring temp {obj};
    ++obj;
    return temp;
}

int main() {
      
    cout << boolalpha << endl;
    Mystring a {"devansh"};
    Mystring b {"devansh"};
    cout << (a==b) << endl;
    cout << (a!=b) << endl;
    
    b = "priyansh";
    cout << (a==b) << endl;
    cout << (a!=b) << endl;
     cout << (a<b) << endl;
    cout << (a>b) << endl;
    Mystring s1 {"DEVANSH"};
    s1 = -s1;       
    cout << s1 << endl;

    s1 = s1 + "*****";
    cout << s1 << endl;
    
    s1 += "-----";
    cout << s1 << endl;
    
    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << s1 << endl;
    
    Mystring s3{"abcdef"};  
    s3 *= 5;
    cout << s3 << endl;
    
    Mystring repeat_string;
    int repeat_times;
    cout << "Enter a string to repeat: " << endl;
    cin >> repeat_string;
    cout << "How many times would you like it repeated? " << endl;
    cin >> repeat_times;
    repeat_string *= repeat_times;
    cout << "The resulting string is: " << repeat_string << endl;
    
    cout << (repeat_string * 12) << endl;
    
    repeat_string = "RepeatMe";
    cout << (repeat_string + repeat_string + repeat_string) << endl;
    
    Mystring s = "Devansh";
    ++s;
    cout << s << endl;
    
    s = -s; 
    cout << s << endl;
    Mystring result;
    result = ++s;
    cout << s << endl;
    cout << result << endl;
    
    s = "Devansh";
    s++;
    cout << s << endl;
    
    s = -s;
    cout << s << endl;
    result = s++;
    cout << s << endl;
    cout << result << endl;
    return 0;
}