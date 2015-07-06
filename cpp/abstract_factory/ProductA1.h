#if !define(__PRODUCT_A_1__)
#define __PRODUCT_A_1__

#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA
{
public:
    ProudctA1();
    virtual ~ProductA1();

    void use();
};

#endif
