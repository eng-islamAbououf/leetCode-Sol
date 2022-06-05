class Solution {
    public boolean isValidSudoku(char[][] board) {
        boolean is_valid = true , isF = true;
        Set<Character> a ;
        Set<Character> x ;
        for (int i =0 ; i< 9 && is_valid; i++){
            a = new HashSet<>();
            x = new HashSet<>() ;
            is_valid = isValid(i,board) ;
            if (!is_valid)
                break;
            for (int j =0 ; j<9 && isF; j++){
                if (board[i][j]=='.' && board[j][i]=='.')
                    continue;
                else if (board[i][j]=='.')
                    isF = x.add(board[j][i]);
                else if (board[j][i]=='.')
                    isF = a.add(board[i][j]);
                else if (!a.add(board[i][j]) || !x.add(board[j][i])){
                    isF = false ;
                    break;
                }

            }
            is_valid = isF;
        }
        return is_valid ;
    }
    
    boolean isValid(int i,char[][] board){
        boolean isfound = true;
        int x = (i/3) * 3;
        int y = (i%3) * 3 ;
        Set<Character> a = new HashSet<>();
        int count = 0;
        while (isfound && count<3){
            if (board[x][y+count]!='.')
                isfound = a.add(board[x][y+count]);
            count++ ;
        }

        count = 0;
        while (isfound && count<3){
            if (board[x+1][y+count]!='.')
                isfound = a.add(board[x+1][y+count]);
            count++ ;
        }
        count = 0 ;
        while (isfound && count<3){
            if (board[x+2][y+count]!='.')
                isfound = a.add(board[x+2][y+count]);
            count++ ;
        }
        return isfound;
    }
}