#include <iostream>
#include <fstream>
#include <string>
int main(int ac ,char **av)
{
    size_t position;
    position = 0;
    int j = 0;
    std::string line;
    const std::string toreplace = av[2];
     const std::string replacement = av[2];

    std::ofstream mfile("rghda first file");
    if(ac ==4)
   {
     if (mfile.is_open())
    {
        std::ifstream infile(av[1]);
        if(infile.is_open())
            {
                while ( std::getline(infile,line))
               {
                    mfile<<line<<std::endl;
               }
               infile.close();
               mfile.close();
            }
            else 
                std::cout <<"you should enter a file that exist and write the name correctly"<<std::endl;
            std::fstream mfile("rghda first file");
            while ( std::getline(mfile,line))
            {
                position = line.find(av[2]);
                while (position != std::string::npos || j ==0) 
                {
                    line.erase(position,toreplace.length());
                    line.insert(position,av[3]);
                    position = line.find(av[2]); 
                    j++;
                }
                mfile.seekp(0, std::ios::beg);
                mfile.write(line.c_str(), line.size());
                mfile.put('\n'); 
            }
            
            
             mfile.close();
    }

    
    else
        std:: cout <<"there is issue in in opening the file"<<std::endl;
        }
    
}