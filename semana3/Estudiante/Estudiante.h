#include <string>

class Estudiante {
    public:
        explicit Estudiante(std::string Accountname)
            : name(Accountname){    
            }
        void setName(std::string accountName) {
            name = accountName;

        }
        std::string getName() const {
            return name;
        }

        void setAge(int ageStudent){
            age = ageStudent;
        }
        int getAge() const{
            return age;
        }

    private:
        std::string name;
        int age;
    
};