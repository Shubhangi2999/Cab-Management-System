#include<bits/stdc++.h>
using namespace std;

cab hash_table[15];

void insert_by_hash1(cab ob)
{
    int index=(ob.id%13);
    if(a1.hash_table[index].id!=-1)
    {
        a1.hash_table[index]=ob;
    }
    else
    {
        while(a1.hash_table[index].id==-1 && index<15)
        {
            index++;
            if(index==15)
                index=0;
        }
        a1.hash_table[index]=ob;
    }
}
