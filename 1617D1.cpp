#include<bits/stdc++.h>

void push(){
    long long n;
    std::cin>>n;
    long long crew=-1,imp=-1;
    long long a,b,c;
    long long x,y,z;
    for(long long i=1;i<=n;i+=3){
        long long xx;
        std::cout<<"? "<<i<<" "<<i+1<<" "<<i+2<<std::endl;
        std::cin>>xx;
        if(xx==1){
            a=i;
            b=i+1;
            c=i+2;
        }
        else{
            x=i;
            y=i+1;
            z=i+2;
        }
    }
    long long xx;
    std::cout<<"? "<<x<<" "<<b<<" "<<c<<std::endl;
    std::cin>>xx;
    if(xx==0){
        crew=a;
        imp=x;
    }
    else{
        std::cout<<"? "<<y<<" "<<b<<" "<<c<<std::endl;
        std::cin>>xx;
        if(xx==0){
            crew=x;
            imp=y;
        }
        else
        {
            crew=c;
            std::cout<<"? "<<x<<" "<<y<<" "<<c<<std::endl;
            std::cin>>xx;
            if(xx==0) imp=x;
            else imp=z;
        }
    }
    std::vector<long long> ans;
    ans.push_back(imp);
    for(long long i=1;i<=n;++i){
        if(i!=crew&&i!=imp){
            std::cout<<"? "<<crew<<" "<<imp<<" "<<i<<std::endl;
            long long x;
            std::cin>>x;
            if(x==0)ans.push_back(i);
        }
    }
    std::cout<<"! "<<ans.size()<<" ";
    for(auto&i:ans)std::cout<<i<<" ";
    std::cout<<std::endl;
}

signed main(){
    long long tc;
    std::cin>>tc;
    while(tc--)
        push();
    return 0;
}
