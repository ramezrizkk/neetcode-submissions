class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p != nullptr && q != nullptr) {
            if (p->val == q->val) {
                return min (isSameTree(p->left, q->left), isSameTree(p->right, q->right));
            }
            else return false;
        }
        else if (p == nullptr && q == nullptr) return true;
        else return false;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (subRoot == nullptr) return true;
        if (root == nullptr) return false;
        if (isSameTree(root, subRoot)) return true;
        else {
            return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        }
    }
};
