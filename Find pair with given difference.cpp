 //code
    
    /*
    ROUGH WORK
    
    5,20,3,2,5,80
    
    sorted
    2,3,5,5,20,80
    
    z=abs(diff-a[i])
    check
    
    */
    
    //sort the array
    sort(arr,arr+size);
    
    //map fill karo
    unordered_map<int,int> m;
    
    int value=1,key,count=0,z;
    
    for(int i=0;i<size;i++)
    {
        key=arr[i];
        if(m.find(key)!=m.end())
        {
            m.insert(make_pair(key,value));
        }
    }
    
    for(int i=0;i<size;i++)
    {
        //third variable
        z=abs(n-arr[i]);
    
        //agar z map me hai to true
        if(m.find(z)!=m.end())
        {
            count++;
        }
    }
    if(count==0)
    {
        return true;
    }
    else if(count!=0)
    {
        return false;
    }
    
}
