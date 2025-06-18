## Trie-Based Prefix Directory
# Scenario

You’re designing a prefix directory system. The idea is to efficiently support the following operations on string keys:

     insert(word): Add a word to the directory.

     search(word): Return true if the exact word exists.

     startsWith(prefix): Return true if any word in the directory starts with the given prefix.

Think of this like building a basic autocomplete backend or a file path router.

## Requirements

    Implement a class PrefixDirectory with:

    void insert(const std::string& word);
    bool search(const std::string& word) const;
    bool startsWith(const std::string& prefix) const;

    Use a Trie (prefix tree) under the hood — not a map or a set.

    Keep the node structure clean (e.g., a TrieNode class with a std::unordered_map<char, TrieNode*> or similar).

    No STL shortcuts for core logic (e.g., no std::search, no regex).

## Example

PrefixDirectory dir;
dir.insert("apple");
dir.insert("app");
dir.insert("apply");

dir.search("apple");     // true
dir.search("appl");      // false
dir.startsWith("appl");  // true
dir.startsWith("banana");// false

## Notes

    You're allowed to dynamically allocate nodes (new) but keep memory safe — smart pointers preferred unless you're explicitly managing cleanup.

    Try to follow your class/struct best practices.

    Time target: ~45 minutes.
