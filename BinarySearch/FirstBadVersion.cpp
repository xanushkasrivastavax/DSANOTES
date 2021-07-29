// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
     int i=0,e=n,m;
while(i<=e){
m=i+(e-i)/2;
bool flag=isBadVersion(m);
bool flag2=isBadVersion(m-1);
if(flag==true&&flag2==false){
return m;
}
if(flag==true && flag2==true){
e=m-1;
}
else if(flag==false && flag2==false){
i=m+1;
}

    }
    return m;
    }
};
