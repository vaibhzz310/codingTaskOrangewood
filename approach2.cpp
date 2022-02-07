int main(){
    string a="";
    string b="";
    string ai="",ad="",bi="",bd="";
    cin>>a;
    cin>>b;
    
    // cout<<a<<" "<<b<<" ";
    
    //split string a by decimal point
    for(int x=0;x<a.length();x++){
        if(a[x]=='.'){
            ai=a.substr(0,x);
            ad=a.substr(x+1,a.length()-x-1);
            break;
        }
    }
    
    //split string a by decimal point
    for(int x=0;x<b.length();x++){
        if(b[x]=='.'){
            bi=b.substr(0,x);
            bd=b.substr(x+1,b.length()-x-1);
            break;
        }
    }
    
    //adding decimal parts
    if(ad.length()<bd.length()){
        ad=ad+string((bd.length()-ad.length()),'0');
    }
    if(bd.length()<ad.length()){
        bd=bd+string((ad.length()-bd.length()),'0');
    }
    //determining carry after addition
    int len = ad.length();
    string sum1=to_string(stoi(ad)+stoi(bd));
    int carry=0;
    if(sum1.length()>len){
        carry=1;
    }
    
    //adding integer parts
    int result = stoi(ai)+stoi(bi)+carry;
    
    cout<<result;
    
}
