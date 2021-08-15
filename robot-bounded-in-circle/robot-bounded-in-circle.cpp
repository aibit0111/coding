class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0;
        int y = 0;
        int direction = 0; 
        char element;
        for(int i =0; i<instructions.length(); i++){
            element = instructions[i];
            if(element == 'G'){
                if(direction == 0){
                    y = y + 1;
                }
                if(direction == 1){
                    x = x-1;
                }
                if(direction == 2){
                    y = y-1;
                }
                if(direction == 3){
                    x = x+1;
                }
                
            }
            if(element == 'L'){
                direction = (direction + 1) % 4;
            }
            if(element == 'R'){
                if(direction == 0){
                    direction = 3;
                }
                else{
                    direction = direction - 1;
                }
            }
        }
        
        if(x == 0 && y ==0) return true;
        if(direction != 0) return true;
        return false;
        
        
    }
};