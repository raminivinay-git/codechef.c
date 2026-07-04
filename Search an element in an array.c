char * solve(int n, int x, int a[]) {

    for (int i = 0; i < n; i++) {

        if (a[i] == x) {
            return "yes";
        }
    }
    return "no";
}
