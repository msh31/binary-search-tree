# Binary Search Tree
This project was created for me to learn about binary tree searches.

## Implementation
The latest version uses the `in-order predecessor`, but earlier versions used the `in-order successor`.

> In short: when deleting a node with two children, this version replaces it with the largest value from the left subtree instead of the smallest value from the right subtree.

I wrote this in C++ since it’s the language I use the most and want to get better at. I specifically chose C++17 because it’s less “bloated” than newer standards and still very common in existing codebases.

## Example Output
```bash
# print initial tree (sorted list of integers)
└──25
    ├──10
    │   ├──5
    │   │   ├──2
    │   └──20
    └──40
        ├──30
        │   └──35
        └──50
            └──69
                └──420
# search for 999 and 69
999 was not found!
found 69!
# attempt to delete 5
deleted 5!
└──25
    ├──10
    │   ├──2
    │   └──20
    └──40
        ├──30
        │   └──35
        └──50
            └──69
                └──420
# attempt to delete 40
deleted 40!
└──25
    ├──10
    │   ├──2
    │   └──20
    └──35
        ├──30
        └──50
            └──69
                └──420
```
