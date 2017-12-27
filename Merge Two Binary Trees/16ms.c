/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    if(t1 == NULL && t2 == NULL) {
        return NULL;
    }
    if(t1 != NULL && t2 == NULL) {
        struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        node->val = t1->val;
        node->left = mergeTrees(t1->left, NULL);
        node->right = mergeTrees(t1->right, NULL);
        return node;
    }else if(t1 == NULL && t2 != NULL) {
        struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        node->val = t2->val;
        node->left = mergeTrees(NULL, t2->left);
        node->right = mergeTrees(NULL, t2->right);
        return node;
    }else{
        struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        node->val = t1->val+t2->val;
        node->left = mergeTrees(t1->left, t2->left);
        node->right = mergeTrees(t1->right, t2->right);
        return node;
    }
}
