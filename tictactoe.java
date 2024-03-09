public class tictactoe {
    public static void printBoard(){
        for(int i = 0;i<3;i++){
            for (int j = 0;j<3;j++){
                if(j<2){
                    System.out.println("|");
                }
                if(i<2){
                    System.out.println("---");
                }
            }
        }
    }
    public static void main(String[] args) {
        char[][] board = new char[3][3]; //create a 2D array to represent the game board.
        for (int i=0; i<board.length; i++) {
    }

    printBoard();
}
}
