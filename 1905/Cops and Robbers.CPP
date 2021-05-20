#include <iostream>
#include <vector>
using namespace std;

class coordinate

{
public:
	int x, y;
	bool visit;
};

int winner;

void look(vector<vector <int> > mat, vector<vector <coordinate> > coordinates, int i, int j)
{
	if(i >= 0 && i < 5 && j >= 0 && j < 5 && !winner)
	{
		coordinates[i][j].visit = true;
		if(i == 4 && j == 4)
			winner = 1;
		else


			if(i + 1 < 5 && mat[i + 1][j] == 0 && !coordinates[i + 1][j].visit)
				look(mat, coordinates, i + 1, j);
			if(i - 1 >= 0 && mat[i - 1][j] == 0 && !coordinates[i - 1][j].visit)
				look(mat, coordinates, i - 1, j);
			if(j + 1 < 5 && mat[i][j + 1] == 0 && !coordinates[i][j + 1].visit)
				look(mat, coordinates, i, j + 1);
			if(j - 1 >= 0 && mat[i][j - 1] == 0 && !coordinates[i][j - 1].visit)
				look(mat, coordinates, i, j - 1);
		}
	}

int main(int argc, char *argv[])
{
	int T;

	cin >> T;

	for(int i = 0; i < T; i++)
	{
		vector<vector <int> > mat(5);
		vector<vector <coordinate
> > coordinates(5);
		for(int j = 0; j < 5; j++)
		{
			mat[j].resize(5);
			coordinates[j].resize(5);
		}
		int a[5]={10,20,30,40,50};
		int b[5]={11,22,33,44,55};
		int c[5];
		for(int i=0;i<5;i++)
        {
            c[i]=a[i]+b[i];
        }

		for(int j = 0; j < 5; j++)
		{
			for(int k = 0; k < 5; k++)
			{
				int e;
				cin >> e;
				mat[j][k] = e;

				coordinates[j][k].x = j;
				coordinates[j][k].y = k;
				coordinates[j][k].visit = false;
			}
		}

		winner = 0;
		look(mat, coordinates, 0, 0);

		if(winner)
			cout << "COPS\n";
		else
			cout << "ROBBERS\n";
	}

	return 0;
}
