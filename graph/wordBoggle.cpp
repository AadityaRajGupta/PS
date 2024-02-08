//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool sudoku(vector<vector<char>> &board, string &s, int i, int j, int m, int n, int index)
    {
        if (i < 0 || i > m || j < 0 || j > n)
            return false;

        if (s[index] == '\0')
            return true;

        if (s[index] != board[i][j])
            return false;

        char temp = board[i][j];
        board[i][j] = '*';

        bool a = sudoku(board, s, i + 1, j - 1, m, n, index + 1);
        bool b = sudoku(board, s, i, j - 1, m, n, index + 1);
        bool c = sudoku(board, s, i - 1, j - 1, m, n, index + 1);

        bool d = sudoku(board, s, i - 1, j, m, n, index + 1);
        bool e = sudoku(board, s, i + 1, j, m, n, index + 1);

        bool f = sudoku(board, s, i - 1, j + 1, m, n, index + 1);
        bool g = sudoku(board, s, i, j + 1, m, n, index + 1);
        bool h = sudoku(board, s, i + 1, j + 1, m, n, index + 1);

        board[i][j] = temp;

        return a || b || c || d || e || f || g || h;
    }
    vector<string> wordBoggle(vector<vector<char>> &board, vector<string> &dictionary)
    {
        // Code here
        int m = board.size();
        int n = board[0].size();
        vector<string> ans;
        set<string> unique_word;

        for (int k = 0; k < dictionary.size(); k++)
        {
            string s = dictionary[k];
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (sudoku(board, s, i, j, m, n, 0))
                    {
                        unique_word.insert(s);
                    }
                }
            }
        }

        for (auto i : unique_word)
            ans.push_back(i);

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<string> dictionary;
        for (int i = 0; i < N; ++i)
        {
            string s;
            cin >> s;
            dictionary.push_back(s);
        }

        int R, C;
        cin >> R >> C;
        vector<vector<char>> board(R);
        for (int i = 0; i < R; i++)
        {
            board[i].resize(C);
            for (int j = 0; j < C; j++)
                cin >> board[i][j];
        }
        Solution obj;
        vector<string> output = obj.wordBoggle(board, dictionary);
        if (output.size() == 0)
            cout << "-1";
        else
        {
            sort(output.begin(), output.end());
            for (int i = 0; i < output.size(); i++)
                cout << output[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends