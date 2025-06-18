#include <memory>
#include <array>

struct TreeNode {
  std::array<std::unique_ptr<TreeNode>, 26> children;
  bool isEnd = false;
};