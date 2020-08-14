class Solution {
    public boolean canCross(int[] stones) {
          if (stones.length == 0) {
        	return true;
        }
            
HashMap<Integer, HashSet<Integer>> map = new HashMap<Integer, HashSet<Integer>>(stones.length);
        
        map.put(0,new HashSet<Integer>());
        map.get(0).add(1);
        
        for(int i=1;i<stones.length;i++)
        {
            map.put(stones[i],new HashSet<Integer>() );
        }
        
        for(int i=0;i<stones.length;i++)
        {
            int stone=stones[i];
            for(int step:map.get(stone))
            {
                int reach=step+stone;
                if(reach==stones[stones.length-1])
                    return true;
                
                else
                {
                    HashSet<Integer>s=map.get(reach);
                    
                    if(s!=null)
                    {
                        s.add(step);
                        if(step-1>0)
                            s.add(step-1);
                        s.add(step+1);
                        
                    }
                }
            }
            
        }
        return false;
        
        
    }
}