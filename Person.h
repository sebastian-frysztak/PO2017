#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>
#include <vector>
#include <memory>

#include "Work.h"

enum class AcademicTitle
{
    Bachelor,
    Master,
    PhD,
    Professor
};

enum class Gender
{
    Female,
    Male,
    Other
};

class EnumToString
{
    public:
        static std::string GenderToString(Gender);
        static std::string AcademicTitleToString(AcademicTitle);
};

class Person
{
    protected:
        std::string name;
        uint32_t age;
        Gender gender;
        std::vector<std::unique_ptr<Work>> work;

    public:
        Person();
        Person(std::string name, uint32_t age, Gender gender);
        
        virtual std::string getInfo() = 0;
        virtual void doWork() = 0;
};

#endif