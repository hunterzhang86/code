#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void solve(vector<vector<char> > &board)
{
	vector<vector<char> >::iterator iterY = board.begin();
	for(;iterY!=board.end();iterY++)
	{
		vector<char>::iterator iterX = (*iterY).begin();

		for(;iterX!=(*iterY).end();iterX++)
		{
			if(*iterX == 'X')
				continue;

			else(*iterX == 'O')
			{
				
			}
		}
	}
}

int main()
{
    freopen("surroundedRegions.in", "r", stdin);

    vector<vector<char> >  board;

    for (int i = 0; i < 4; i++)
    {
    	vector<char> v;
        for (int j = 0; j < 4; j++)
        {
            char ch;
            cin >> ch;

            v.push_back(ch);
        }
        board.push_back(v);    	
    }

    solve(board);
    return 0;
}