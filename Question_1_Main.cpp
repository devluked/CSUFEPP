#include <iostream>
using namespace std;

double findAverageScore(int N, int scores[])
{
    double total;
    for (int i = 1; i < N-1; i++)
    {
        total+=scores[i];
    }
    return total/(N-2);
}

int main()
{
    int N {}, contestant {}, scores[N], x{}, high_contestant {};
    double high_score {};
    cout << "Number of Judges: ";
    cin>> N;
    
    do {
    cin >> contestant;
    if (contestant == -1)
        break;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        scores[i] = x;
    }
    cout << "Contestant " << contestant << " \t" << findAverageScore(N,scores) << endl;
    if (findAverageScore(N,scores) > high_score) {
        high_score = findAverageScore(N,scores);
        high_contestant = contestant;
    }
    } while (contestant!=-1);
    cout << "Contestant " << high_contestant << " had the highest score.\n";
    
    
    return 0;
}