/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
void inorderEnquee(struct TreeNode* root,int* quee,int* returnSize);

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *quee = (int *)malloc(sizeof(int)*1024);
    *returnSize = 0;
    inorderEnquee(root,quee,returnSize);
    return quee;
}

void inorderEnquee(struct TreeNode* root,int* quee,int* returnSize) {
    if(root == NULL)
        return;
    inorderEnquee(root->left,quee,returnSize);
    quee[*returnSize] = root->val;
    (*returnSize)++;
    inorderEnquee(root->right,quee,returnSize);
}
