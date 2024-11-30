#include <bits/stdc++.h>
using namespace std;

#define i64 long long
#define idb double

bool valid(int i , int j){
	return (0 <= i and i < 7 and 0 <= j and j < 7);
}
int Mx[] = {-1 , -1 , 1 , 1};
int My[] = {-1 , 1  , -1 , 1};

void MainProgram() {
	string v[7];
	for(int i = 0 ; i < 7 ; i++){
		cin >> v[i];
	}
	int P[7][7];
	bool pant[7][7];
	memset(pant , 0 , sizeof(pant));
	memset(P , 0 , sizeof(P));
	for(int i = 0 ; i < 7 ; i++){
		for(int j = 0 ; j < 7 ; j++){
			int tem = 0;
			if(v[i][j] == 'W')continue;
			for(int k = 0 ; k < 4 ; k++){
				int Nx = i + Mx[k] , Ny = j + My[k];
				if(valid(Nx , Ny)){
					if(v[Nx][Ny] == 'B'){
						tem++;
					}
				}
			}
			if(tem == 4){
				pant[i][j] = 1;
				for(int k = 0 ; k < 4 ; k++){
					int Nx = i + Mx[k] , Ny = j + My[k];
					P[Nx][Ny]++;
				}
			}
		}
	}
	int ans = 0;
	while(true){
		int tem = 0 , ii = -1 , jj = -1;
		for(int i = 0 ; i < 7 ; i++){
			for(int j = 0 ; j < 7 ; j++){
				if(P[i][j] > tem){
					tem = P[i][j];
					ii = i;
					jj = j;
				}
			}
		}	
		if(tem == 0)break;
		if(pant[ii][jj]){
			for(int k = 0 ; k < 4 ; k++){
				int Nx = ii + Mx[k] , Ny = jj + My[k];
				P[Nx][Ny]--;
			}
		}
		for(int k = 0 ; k < 4 ; k++){
			int Nx = ii + Mx[k] , Ny = jj + My[k];
			if(valid(Nx , Ny)){
				if(pant[Nx][Ny]){
					pant[Nx][Ny] = 0;
					for(int i = 0 ; i < 4 ; i++){
						int Nxx = Nx + Mx[i] , Nyy = Ny + My[i];
					    P[Nxx][Nyy]--;
					}
				}
			}
		}
		ans++;
		//break;
	}
	cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for (int it = 1; it <= tc; it++) {
        MainProgram();
    }
    return 0;
}
