#if !defined(__ABSTRACT_PRODUCT_A__)
#define __ABSTRACT_PRODUCT_A__

class AbstractProductA
{
public:
    AbstractProductA();
    virtual ~AbstractProductA();

    virtual void use() = 0;
};

#endif
