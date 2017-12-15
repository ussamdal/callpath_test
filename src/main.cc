#include <employee.h>
#include <iostream>
enum command
{
    ADDUSER = 1,
    RMVUSER,
    ADDDOC,
    RMVDOC,
    PRINTALL
};
enum userlist
{
    QAUSER =1,
    RESUSER,
    PMUSER,
    MAXUSER
};

void usage(void)
{
    std::cout << "======================================="<<std::endl;
    std::cout << "Document Managing System!!" << std::endl;
    std::cout << "1. Add user " << std::endl;
    std::cout << "2. Remove user " << std::endl;
    std::cout << "3. Add document to user" << std::endl;
    std::cout << "4. Remove document from user" << std::endl;
    std::cout << "5. Print user info" << std::endl;
    std::cout << "0. Quit" << std::endl;
    std::cout << "======================================="<<std::endl;
    std::cout << "Input : ";
}

class DocManager
{
    public:
        void addUser(void)
        {
            int input = 0;
            std::cout << "======================================="<<std::endl;
            std::cout << 
                "Choose the type of job you would like to add" << std::endl;
            std::cout << "1. QA" << std::endl;
            std::cout << "2. Resercher " << std::endl;
            std::cout << "3. PM " << std::endl;
            std::cout << "0. Quit" << std::endl;
            std::cout << "======================================="<<std::endl;
            std::cout << "Input : ";

            std::cin >> input;

            switch(input)
            {
                case QAUSER:
                    break;
                case RESUSER:
                    break;
                case PMUSER:
                    break;
                case MAXUSER:
                default:
                    break;

            }

        }
        void removeUser(void)
        {
        }
        void addDoc(void)
        {
        }
        void removeDoc(void)
        {
        }
        void printAll(void)
        {
        }
    private:
        std::vector <employee> user;
};

int main(int argc, char* argv[])
{

    int num =0;

    DocManager dm;
    do
    {
        usage();
        std::cin >> num;

        switch(num)
        {
            case ADDUSER:
                dm.addUser();
                break;
            case RMVUSER:
                dm.removeUser();
                break;
            case ADDDOC:
                dm.addDoc();
                break;
            case RMVDOC:
                dm.removeDoc();
                break;
            case PRINTALL:
                dm.printAll();
                break;
            default:
                continue;
        }
    }
    while(num != 0);

    return 0;
}
