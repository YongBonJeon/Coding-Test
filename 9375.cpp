#include <bits/stdc++.h>
using namespace std;
// 3 2 1 
// 4*3*2-1
// 2 1
// 3*2-1
// 3
// 4-1
typedef struct _X{
    string data;
    int count;
}X;

int main()
{
    int num_tc;

    scanf("%d",&num_tc);

    for(int i = 0 ; i < num_tc ; i++)
    {
        int num;
        scanf("%d",&num);

        //X table[num];
        map<string, int> X;
        /*int num_idx = 0;
        for(int j = 0 ; j < num ; j++)
            table[j].count = 0;
        */
        for(int j = 0 ; j < num ; j++)
        {
            string name, kind;
            cin >> name >> kind;
            
            if(X.find(kind) == X.end())
            {
                X.insert({kind, 1});
            }
            else{
                X[kind]++;
            }
            

            /*int newflag = 0;
            for(int k = 0 ; k < num_idx ; k++)
            {
                if(table[k].data.compare(kind) == 0){
                    table[k].count++;
                    newflag = 1;
                    break;
                }
            }
            if(!newflag)
            {
                table[num_idx].data = kind;
                table[num_idx++].count++;
            }*/
        }
        int ans = 1;
        /*
        for(int j = 0 ; j < X.size() ; j++)
            ans*=(X[j].count+1);
        */
        for(auto &a : X)
            ans*=(a.second+1);

        printf("%d\n",ans-1);
    }
        
}