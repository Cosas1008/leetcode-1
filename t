struct Node {
    int depth;
    int idx;
};
int findMutationDistance(string start, string end, vector < string > bank) {
    if(start == end) return 0;
    int bank_size = bank.size() , str_size = start.size();
    bool *mark = new bool [ bank_size ]();
    queue<Node> BFS;
    for(int i = 0; i < bank_size; i++){
        int dif = 0;
        for(int j=0; j < str_size; j++)
            if(start[j] != bank[i][j]) dif++;
        if(dif == 1)
        {
            mark[i] = 1;
            Node push_node; push_node.depth = 1; push_node.idx = i;
            BFS.push(push_node);
        }
    }
    while(!BFS.empty()){
        Node node = BFS.front();
        BFS.pop();
        if(bank[node.idx] == end) return node.depth;
        for(int i = 0; i < bank_size; i++){
            if(!mark[i]){
                int dif = 0;
                for(int j=0; j < str_size; j++)
                    if(bank[node.idx][j] != bank[i][j]) dif++;
                if(dif == 1)
                {
                    mark[i] = 1;
                    Node push_node; push_node.depth = node.depth + 1; push_node.idx = i;
                    BFS.push(push_node);
                }
            }
        }   
    }
    return -1;

}
