#include "ATarget.hpp"

ATarget::ATarget(const std::string &type)
{
    this->type = type;

}
ATarget::~ATarget()
{
    
}
ATarget::ATarget(const ATarget &oth)
{
    this->type = oth.getType();
}
const std::string &ATarget::getType()const
{
    return type;
}

void ATarget::getHitBySpell(const ASpell& asp)const
{
    std::cout << this->type<< " has been " << asp.getEffects()<<"!"<<std::endl;
}