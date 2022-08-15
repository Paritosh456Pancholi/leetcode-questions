/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int rangeSumBST(TreeNode root, int low, int high) {
       int res=preorder(root,low,high);  
        return res;
    }
    int preorder(TreeNode root, int l, int h){
        int sum=0;
        if(root==null){
            return 0;
        }
       if(root.val>l)
        sum+= preorder(root.left,l,h);
        if(root.val<h)
        sum+=preorder(root.right,l,h);
        if(root.val>=l && root.val<=h){
            sum+=root.val;
        }
        return sum;
    }
}