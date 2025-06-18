#pragma once
#include <string>
#include "tree_node.hpp"

class Directory {

public:
  Directory() {
    // init the root
    root = std::make_unique<TreeNode>();
  }

  void insert(const std::string& word) {
    TreeNode* node = root.get();

    for (auto& c : word) {

      int i = c - 'a';
      if (node->children[i] == nullptr) {
        node->children[i] = std::make_unique<TreeNode>();
      }
      node = node->children[i].get();
    }
    node->isEnd = true;
  }
  bool search(const std::string& word) const {

    TreeNode* node = root.get();

    for (auto c : word) {
      int i = c - 'a';
      if (node->children[i] == nullptr) {
        return false;
      }
      node = node->children[i].get();
    }
    return node->isEnd;
  }
  bool startsWith(const std::string& prefix) const {
    TreeNode* node = root.get();

    for (auto& c : prefix) {
      int i = c - 'a';
      if (node->children[i] == nullptr)
        return false;

      node = node->children[i].get();
    }
    return true;
  }

private:
  std::unique_ptr<TreeNode> root;
};