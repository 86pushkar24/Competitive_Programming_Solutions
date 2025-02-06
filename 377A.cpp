#include <iostream>
using namespace std;

int const N = 505;
int n, m, k;
string arr[N];
bool vis[N][N];

void dfs(int x, int y){
    vis[x][y] = 1;
    if (!vis[x][y + 1] && y < m - 1 && arr[x][y + 1] == '.') dfs(x, y + 1);
    if (!vis[x][y - 1] && y > 0 && arr[x][y - 1] == '.') dfs(x, y - 1);
    if (!vis[x + 1][y] && x < n - 1 && arr[x + 1][y] == '.') dfs(x + 1, y);
    if (!vis[x - 1][y] && x > 0 && arr[x - 1][y] == '.') dfs(x - 1, y);
    if (k != 0){
        arr[x][y] = 'X';
        k--;
    }
}

int main(){
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) cin >> arr[i];
    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j)if (!vis[i][j] && arr[i][j] == '.') dfs(i, j);
    for (int i = 0; i < n; ++i) cout << arr[i] << endl;
    return 0;
}