int summ;
    vector<int> ans;
    for(int i=0;i<n;i++){
        summ=0;
        for(int j=i ;j<n ;j++){
            summ=summ+arr[j];
            if(summ==sum){
                ans.push_back(i+1);
                ans.push_back(j+1);
                //cout<<i+1<<endl;
                //cout<<j+1<<endl;
                return ans;
            }
        }

    }