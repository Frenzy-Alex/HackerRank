class Matrix{
public:
	vector<vector<int>> a;
	void push_back(vector<int> _in){
		a.push_back(_in);
	}
};

inline Matrix operator+(const Matrix _a, const Matrix _b)
{
	Matrix c;
	c.a = _a.a;
	for (int i = 0; i < c.a.size(); i++){
		for (int j = 0; j < c.a[i].size(); j++){
			c.a[i][j] += _b.a[i][j];
		}
	}
    return c;
}
