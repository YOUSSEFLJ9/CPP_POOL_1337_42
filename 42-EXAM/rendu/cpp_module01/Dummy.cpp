#include "Dummy.hpp"

Dummy::Dummy():ATarget("Target Practice Dummy")
{
}

Dummy::~Dummy()
{

}

Dummy:: Dummy(const Dummy &otr): ATarget(otr.getType())
{
}

ATarget *Dummy::clone()const
{
    try
    {
       ATarget *ne = new  Dummy(*this);
       return ne;
    }
    catch(...)
    {
        std::cerr <<"error in allocation!" << '\n';
        return NULL;
    }
    
}