class Solution {
public: 
    vector<int>t;
    int merge(vector<int>& nums,int l,int m,int h){
        int c=0,j=m+1;
        for(int i=l;i<=m;i++){
            while(j<=h && nums[i]>2*(long)nums[j]) j++;
            c+=j-(m+1);
        }
        int i=l,k=l;
        j=m+1;
        while(i<=m && j<=h){
            if(nums[i]<=nums[j])t[k++]=nums[i++];
            else t[k++]=nums[j++];
        }
        while(i<=m)t[k++]=nums[i++];
        while(j<=h)t[k++]=nums[j++];
        for(int i=l;i<=h;i++)nums[i]=t[i];
        return c;
    }
    int mergesort(vector<int>& nums,int l,int h){
        int inv=0;
        if(h>l){
            int m=l+(h-l)/2;
            inv+=mergesort(nums,l,m);
            inv+=mergesort(nums,m+1,h);
            inv+=merge(nums,l,m,h);
        }
        return inv;
    }
    int reversePairs(vector<int>& nums) {
        t=vector<int>(nums.size());
        return mergesort(nums,0,nums.size()-1);
    }
};