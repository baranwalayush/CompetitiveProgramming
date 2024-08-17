
string losingPlayer(int x, int y) {
        if(x<1 || y<4) return "Bob";
        
        int y1=y/4;
        if(x>=y1){
            if(y1%2==0) return "Bob";
            else return "Alice";
        } 
        else{
            if(x%2==0) return "Bob";
            else return "Alice";
        }
    }