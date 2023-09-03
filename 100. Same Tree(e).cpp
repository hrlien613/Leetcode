#include <iostream>
using namespace std;

bool dfs(TreeNode* p, TreeNode *q){
    if(!p&&!q) return true;
    if((!p && q) || (p &&!q))
        return false;

    if (!(p->val == q->val))
        return false;


    return dfs(p->left, q->left) and dfs(p->right, q->right);


}

bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) return true;

    return dfs(p, q);
}

/*Optimize
 *