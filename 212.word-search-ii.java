class TrieNode {

    public Map < Character, TrieNode > children;
    public boolean isEnd;

    TrieNode() {
        this.children = new HashMap < > ();
        this.isEnd = false;
    }

    boolean isPresent(char c) {
        return this.children.containsKey(c);
    }

    TrieNode child(char c) {
        return children.get(c);

    }

    void addIfAbsent(char c) {
        children.putIfAbsent(c, new TrieNode());
    }
    
    


}






class Solution {

    private void search(char[][] board, int i, int j, TrieNode node, String word, Set < String > result) {
        if (i >= board.length || i < 0 || j >= board[i].length || j < 0 || board[i][j] == '*' || node.child(board[i][j]) == null) {
            return;
        }

        char temp = board[i][j];
        

        node = node.child(board[i][j]);
        if (node.isEnd) {
            result.add(word + board[i][j]);
        }
        
         board[i][j] = '*';
        search(board, i - 1, j, node, word +temp, result);
        search(board, i + 1, j, node, word + temp, result);
        search(board, i, j - 1, node, word + temp, result);
        search(board, i, j + 1, node, word + temp, result);

        board[i][j] = temp;
    }

    private void addWords(String[] words, TrieNode root) {
        for (String word: words) {
            TrieNode curr = root;
            char[] ch = word.toCharArray();
            for (char c: ch) {
                curr.addIfAbsent(c);
                TrieNode node = curr.child(c);
                curr = node;
            }
            curr.isEnd = true;
        }
    }


    public List < String > findWords(char[][] board, String[] words) {
        TrieNode root = new TrieNode();
        Set < String > result = new HashSet < > ();

        addWords(words, root);
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[i].length; j++) {
                if (root.isPresent(board[i][j])) {
                   // System.out.println(board[i][j]);
                    search(board, i, j, root, "", result);
                }
            }
        }
       return   new LinkedList<> (result);

    }
   
}