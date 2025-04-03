#include "Warlock.hpp"

const std::string &Warlock::getName()const
{
    return name;
}
const std::string &Warlock::getTitle()const 
{
    return title;
}

void Warlock::setTitle(const std::string &title)
{
    this->title = title;
}
void Warlock::introduce()const
{
    std::cout << this->name<<": I am "<<this->name << ", "<<this->title <<"!"<<std::endl;
}

Warlock::Warlock(const std::string &name, const std::string &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day."<<std::endl;
}
Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!"<<std::endl;
}

void Warlock::learnSpell(const ASpell* spell)
{
    ASpell *clone  = spell->clone();
    if (clone)
    {
        this->spells.push_back(clone);
    }
}
void Warlock::forgetSpell(const std::string &spl_name)
{
    for (int i = 0 ; i < spells.size(); i++)
    {
        if (spells[i]->getName() == spl_name)
        {
            delete spells[i];
            spells.erase(spells.begin() + i);
            return ;     
        }
    }
}

void Warlock::launchSpell(const std::string &spl_name, const ATarget &tgt)
{
       for (int i = 0 ; i < spells.size(); i++)
    {
        if (spells[i]->getName() == spl_name)
        {
            spells[i]->launch(tgt);
            return; 
        }
    }

}