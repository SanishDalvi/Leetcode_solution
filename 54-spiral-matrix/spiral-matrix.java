class Solution {
    public List<Integer> spiralOrder(int[][] mat) {
        List<Integer> ans = new ArrayList<>();

int srow = 0;
int scol = 0;
int erow = mat.length - 1;
int ecol = mat[0].length - 1;

while (srow <= erow && scol <= ecol) {

    // top
    for (int i = scol; i <= ecol; i++) {
        ans.add(mat[srow][i]);
    }

    // right
    for (int i = srow + 1; i <= erow; i++) {
        ans.add(mat[i][ecol]);
    }

    // bottom
    for (int i = ecol - 1; i >= scol; i--) {
        if (srow == erow) {
            break;
        }
        ans.add(mat[erow][i]);
    }

    // left
    for (int i = erow - 1; i >= srow + 1; i--) {
        if (scol == ecol) {
            break;
        }
        ans.add(mat[i][scol]);
    }

    srow++;
    erow--;
    scol++;
    ecol--;
}

return ans;

    }
}