#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cout<<"Enter number of memory blocks: ";
    cin>>m;

    int block[m];

    cout<<"Enter size of each block:\n";
    for(int i=0;i<m;i++)
    {
        cin>>block[i];
    }

    cout<<"Enter number of processes: ";
    cin>>n;

    int process[n];

    cout<<"Enter size of each process:\n";
    for(int i=0;i<n;i++)
    {
        cin>>process[i];
    }

    int allocation[n];

    for(int i=0;i<n;i++)
    {
        allocation[i] = -1;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(block[j] >= process[i])
            {
                allocation[i] = j;
                block[j] = block[j] - process[i];
                break;
            }
        }
    }

    cout<<"\nProcess No\tProcess Size\tBlock No\n";

    for(int i=0;i<n;i++)
    {
        cout<<i+1<<"\t\t\t"<<process[i]<<"\t\t\t\t";

        if(allocation[i] != -1)
            cout<<allocation[i]+1;
        else
            cout<<"Not Allocated";

        cout<<endl;
    }

    return 0;
}

