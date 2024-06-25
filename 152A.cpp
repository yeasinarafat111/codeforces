#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, k;  // Loop variables
    int n, m;     // Dimensions of the matrix
    int count = 0; // Counter for students who have at least one maximum score in any subject

    cin >> n >> m; // Input number of students and subjects

    char a[n][m], ch[n], max; // `a` is the matrix of scores, `ch` is an array to store scores of a particular subject, `max` to store the maximum score in a subject
    int s[n]; // Array to count how many times each student has the highest score in any subject

    // Initialize the s array to zero
    for (i = 0; i < n; i++) {
        s[i] = 0;
    }

    // Input the scores into the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // For each subject (column)
    for (i = 0; i < m; i++) {
        // Extract the scores for this subject into the `ch` array
        for (j = 0; j < n; j++) {
            ch[j] = a[j][i];
        }

        // Sort the `ch` array to find the maximum score
        sort(ch, ch + n);
        max = ch[n - 1];

        // Check each student's score for this subject
        for (j = 0; j < n; j++) {
            if (a[j][i] == max) {
                s[j]++; // Increment the student's count if they have the maximum score
            }
        }
    }

    // Count how many students have at least one maximum score
    for (i = 0; i < n; i++) {
        if (s[i] > 0) {
            count++;
        }
    }

    // Output the result
    cout << count << endl;

    return 0;
}
