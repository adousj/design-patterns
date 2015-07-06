#if !defined(__ABSTRACT_PRODUCT_B__)
#define __ABSTRACT_PRODUCT_B__

class AbstractProductB
{
public:
    AbstractProductB();
    virtual ~AbstractProductB();

    virtual void eat() = 0;
};

#endif
