

class Solution {
    public Node cloneGraph(Node node) {
        
        if(node==null)
            return node;
        
        Queue<Node>q=new ArrayDeque<>();
        Map<Node,Node>map=new HashMap<>();
        
        
        q.add(node);
        map.put(node,new Node(node.val,new ArrayList<>()));
        
        while(!q.isEmpty())
        {
            Node cur=q.poll();
            for(Node neigh:cur.neighbors)
            {
                if(!map.containsKey(neigh))
                {
                    map.put(neigh,new Node(neigh.val,new ArrayList<>()));
                    q.add(neigh);
                }
                
                map.get(cur).neighbors.add(map.get(neigh));
                
            }
        }
        return map.get(node);
        
        
    }
}