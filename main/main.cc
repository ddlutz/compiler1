#include <iostream>
#include <string>
#include <vector>

#include "absl/strings/str_join.h"
#include "binary_op.h"
#include "call_node.h"
#include "id_node.h"
#include "not_node.h"
#include "number_node.h"

int main() {
  std::vector<std::string> v = {"foo", "bar", "baz"};
  std::string s = absl::StrJoin(v, "-");

  std::cout << "Joined string: " << s << "\n";



  return 0;
}