#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::~ASpell()
{

}
ASpell::ASpell(const std::string &name, const std::string &effects)
{
    this->name = name;
    this->effects = effects;
}
ASpell::ASpell(const ASpell&other)
{
    this->name = other.getName();
    this->effects = other.getEffects();
}
const std::string &ASpell::getName()const
{
    return name;

}
const std::string &ASpell::getEffects()const
{
    return effects;
}

void ASpell::launch(const ATarget &atg)const
{
    atg.getHitBySpell(*this);
}