#include <iostream>
#include <fstream>
#include <string>
int main(int ac ,char **av)
{
    size_t position;
    position = 0;
    int j = 0;
    std::string line;
    if(ac ==4)
   {
    std::string file_name= av[1];
    std::string ext= ".replace";
    const std::string toreplace = av[2];
     const std::string replacement = av[3];
   std::ofstream mfile((file_name + ext).c_str());
     if (mfile.is_open())
    {
        std::ifstream infile(av[1]);
        if(infile.is_open())
            {
                while ( std::getline(infile,line))
               {
                    position = line.find(av[2]);
                    while (position != std::string::npos) 
                    {
                        line.erase(position,toreplace.length());
                        line.insert(position,replacement);
                        position = line.find(toreplace, position + replacement.length());
                        j++;
                    std::cout << position<<"\n";
                    }
                    mfile<<line<<std::endl;
               }
               infile.close();
               mfile.close();
            }
            else 
                std::cout <<"you should enter a file that exist and write the name correctly"<<std::endl;
    }
    else
        std:: cout <<"there is issue in in opening the file"<<std::endl;
        }
}