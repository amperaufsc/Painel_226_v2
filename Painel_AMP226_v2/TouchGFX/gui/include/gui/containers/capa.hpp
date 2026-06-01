#ifndef CAPA_HPP
#define CAPA_HPP

#include <gui_generated/containers/capaBase.hpp>

class capa : public capaBase
{
public:
    capa();
    virtual ~capa() {}

    virtual void initialize();
protected:
};

#endif // CAPA_HPP
