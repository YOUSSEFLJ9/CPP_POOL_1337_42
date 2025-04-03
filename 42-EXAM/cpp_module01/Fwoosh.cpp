#include "Fwoosh.hpp"

Fwoosh::Fwoosh():ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::~Fwoosh()
{

}

Fwoosh:: Fwoosh(const Fwoosh &otr): ASpell(otr.getName(), otr.getEffects())
{
}

ASpell *Fwoosh::clone()const
{
    try
    {
       ASpell *ne = new  Fwoosh(*this);
       return ne;
    }
    catch(...)
    {
        std::cerr <<"error in allocation!" << '\n';
    }
    return NULL;
}