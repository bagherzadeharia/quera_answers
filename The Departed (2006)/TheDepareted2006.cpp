#include<iostream>
#include<string>
using namespace std;

struct names{
    int num=0;
    string str;
};

int main(){
    int i,j,c=0;
    string fig="FBI";
    struct names names[5];
    size_t substring_length;
    for(i=0;i<5;i++){
        cin >> names[i].str;
        substring_length = (names[i].str).find(fig);
        if(substring_length!=string::npos){
            names[i].num=i+1;
            c++;
        }
    }
    if(c==0){
        cout << "HE GOT AWAY!";
        return 0;
    }
    else{
        for(i=0;i<5;i++){
            if(names[i].num!=0){
                cout << names[i].num;
                c--;
                if(c!=0){
                    cout << " ";
                }
            }
        }
    }
}
