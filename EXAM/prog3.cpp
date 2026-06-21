#include <iostream>
using namespace std;

class Mystring
{
    char *str;
    int len = 0;

public:
    Mystring()
    {
        str = nullptr;
    }

    Mystring(const char s[])
    {
        int i = 0;
        for (; s[i] != '\0'; i++);

        len = i+1;

        // cout << len;
        str = new char[len];

        for (int j = 0; j < len; j++)
        {
            *(str+j) = s[j];
        }
    }


    ~Mystring()
    {
        delete [] str;
    }

    void display()
    {
        for (int i = 0; i < len; i++)
        {
            cout << *(str+i);
        }
        cout << endl;
        return;
    }


    Mystring operator +(Mystring m)
    {
        
        int ln = (this->len+m.len)-1;
        char * s = new char[ln];

        int i = 0;
        for (; i < this->len-1; i++)
        {
            s[i] = this->str[i];
        }

        for (int j = 0; j < m.len; j++)
        {
            s[i+j] = m.str[j];
        }
        
        return Mystring(s);
    }

    bool operator==(Mystring m)
    {
        if (m.len != this->len)
        {
            return 0;
        }
        
        
        for (int i = 0; i < m.len; i++)
        {
            if (this->str[i] != m.str[i])
            {
                return 0;
            }
            
        }

        return 1;
        
    }
};


int main()
{
    Mystring s("hello"),b("world");
    s.display();

    Mystring a = s+b;
    a.display();

    Mystring m("okaj"),n("okay");
    if (m == n)
    {
        cout << "both same"<<endl;
    }
    else{cout << "not same" << endl;}
    
    return 0;
}