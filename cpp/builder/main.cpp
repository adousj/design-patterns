#include "Builder.h"
#include "ConcreteBuilder.h"
#include "Director.h"
#include "Product.h"
#include <memory>

int main()
{
  std::unique_ptr<Builder> builder(new ConcreteBuilder());

  std::unique_ptr<Director> director(new Director());
  director->setBuilder(builder.get());
  std::unique_ptr<Product> product( director->construct() );

  return 0;
}
