#include<iostream>
#include<list>
#include<unordered_map>
#include<cstring>

using namespace std;

class Graph
{
    unordered_map<string,list<pair<string,int>>> m;

    public:

    void addEdge(string x,string y,bool isbid,int wt)
    {
        m[x].push_back(make_pair(y,wt));
        if(isbid)
            m[y].push_back(make_pair(x,wt));
        
    }

    void print()
    {
        for(auto p:m)
        {
            string city = p.first;
            list<pair<string,int>> l =p.second;
            cout << city<<"-->";
            for(auto nbr:l)
            {
                cout << '('<<nbr.first<<','<<nbr.second<<')'<<" ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g;

    g.addEdge("A","B",true,20);
    g.addEdge("B","D",true,30);
    g.addEdge("A","C",true,10);
    g.addEdge("C","D",true,40);

    g.addEdge("A","D",false,50);
    g.print();
}