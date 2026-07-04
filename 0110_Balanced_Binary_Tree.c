/*
 * LeetCode 110. Balanced Binary Tree
 * Difficulty: Easy
 * Topics: Tree, Depth-First Search, Binary Tree
 *
 * Time Complexity: O(n)
 * Space Complexity: O(h)
 */

int search(struct TreeNode *node)
{
    if(node == NULL)
        return 0;

    int left = search(node->left);
    if(left == -1)
        return -1;

    int right = search(node->right);
    if(right == -1)
        return -1;

    if(abs(left - right) > 1)
        return -1;

    if(left > right)
        return left + 1;
    else
        return right + 1;
}

bool isBalanced(struct TreeNode* root) 
{
    return search(root) != -1;
}
