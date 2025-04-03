#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <vector>
#include "ASpell.hpp"
class Warlock
{
private:
    std::string name;
    std::string title;
    std::vector<ASpell *> spells;
public:
    Warlock(const std::string &name, const std::string &title);
    ~Warlock();
    const std::string &getName()const;
    const std::string &getTitle()const;
    void setTitle(const std::string &title);
    void introduce() const;
    void learnSpell(const ASpell* spell);
    void forgetSpell(const std::string &spl_name);
    void launchSpell(const std::string &spl_name, const ATarget &target);

};

#endif