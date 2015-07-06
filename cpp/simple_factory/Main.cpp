#include <memory>

#include "IProduct.h"
#include "ProductFactory.h"

int main() {
  IProduct *a = ProductFactory::createProduct("A");
  a->use();
  //std::unique_ptr<IProduct> product(a);
  //product->use();

  IProduct *b = ProductFactory::createProduct("B");
  b->use();
  //product.reset(b);
  //product->use();

  return 0;
}
