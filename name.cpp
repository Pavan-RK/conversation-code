#include <iostream>
int main(){
    std::string name;
    std::string hobbies;
    while(name.empty()){
        std::cout<<" entry your name ";
        std::cin>> name;
    }
std::cout<<"Hello " << name<< '\n';


while(hobbies.empty()){
std::cout<< "what is your hobbies ?";
std::cin>> hobbies;
}

std::cout<< "thats nice " << hobbies<<'\n'<<"ok then nice to meet you bye ";
    return 0;
}