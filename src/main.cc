#include "employee.h"
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
        DocManager()
        {
        }
        ~DocManager()
        {
            if(user.size() != 0)
            {
                for(auto it : user)
                {
                    user.erase(user.begin());
                    delete it;
                }
            }
        }
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
                    user.push_back(new QA(user.size()));
                    break;
                case RESUSER:
                    user.push_back(new Researcher(user.size()));
                    break;
                case PMUSER:
                    user.push_back(new PM(user.size()));
                    break;
                case MAXUSER:
                default:
                    break;
            }

        }
        void removeUser(void)
        {
            std::cout << "======================================="<<std::endl;
            std::cout <<
                "Choose a index of job you would like to remove" << std::endl;
            this->printUserList();
            std::cout << "======================================="<<std::endl;
            std::cout << "Input ID : ";
            int index;
            std::cin >> index;
            for(auto it : user)
            {
                if(it->getID() == index)
                {
                    delete it;
                    user.erase(user.begin() + index);
                }
            }
        }
        void addDoc(void)
        {
#if 0
            std::cout << "======================================="<<std::endl;
            std::cout <<
                "Choose a index of job you would like to remove" << std::endl;
            this->printUserList();
            std::cout << "======================================="<<std::endl;
            std::cout << "Input : ";
            int index;
            if(index >= 0 && index < user.size())
            {
            }
#endif

        }
        void removeDoc(void)
        {
        }
        void printAll(void)
        {
            for(auto it : user)
                it->printEmp(true);
        }
    private:
        void printUserList(void)
        {
            for(auto it : user)
                it->printEmp(false);
        }
        std::vector <employee*> user;
};

int main(int argc, char* argv[])
{

    int num =0;

    DocManager dm;
    do
    {
        usage();
        std::cin >> num;
        if(std::cin.fail())
        {
        //buffer clear when input char type
        std::cin.clear();
        std::cin.ignore(256, '\n');
        num = -1;
        //           continue;
            continue;
        }
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
