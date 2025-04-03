#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"
class ATarget
{
private:
    std::string type;
public:
    ATarget(const std::string &type);
    ATarget(const ATarget &oth);
    virtual ~ATarget();
    const std::string &getType()const;
    virtual ATarget *clone()const = 0;
    void getHitBySpell(const ASpell& asp)const;

};


#endif