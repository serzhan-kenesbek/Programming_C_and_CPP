/*
CH-230-A
a13_p7.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>

// class derived from exception
class OwnException : public std::exception
{
private:
    std::string excp;

public:
    OwnException() {}
    OwnException(std::string s) { excp = s; }
    
    // overriding the what function
    // throw() is used to solve the lax error
    const char *what() const throw()
    {
        return "OwnException\n";
    }

    // the destructor is declared as virtual and had to be overridden
    ~OwnException() throw() {}
};

void throw_function(int parameter)
{
    // switch statement for different parameter cases
    switch (parameter)
    {
    case 1:
        throw 'a';
        break;
    case 2:
        throw 12;
    case 3:
        throw true;
    default:
        throw OwnException("Default case exception");
    }
}

int main(int argc, char **argv)
{
    int i = 1;
    // try and catch block for every error type
    while (i != 5)
    {
        try
        {
            throw_function(i);
        }
        catch (char &c)
        {
            std::cerr << "Caught in main: " << c << std::endl;
        }

        catch (int &i)
        {
            std::cerr << "Caught in main: " << i << std::endl;
        }

        catch (bool &b)
        {
            std::cerr << "Caught in main: " << b << std::endl;
        }

        catch (OwnException &e)
        {
            std::cerr << "Caught in main: " << e.what();
        }
        i++;
    }

    return 0;
}