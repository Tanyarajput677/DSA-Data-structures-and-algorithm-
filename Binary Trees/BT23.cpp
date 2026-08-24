class Solution{	
	public:	
		bool uniqueBinaryTree(int a, int b){
			//your code goes here
            if((a==2|| b==2)&& a!=b){
                return true;
            }
            return false;
		}
};
