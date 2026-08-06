class Solution {
public:
 
    bool prince_ki_gand(int chuu, int fuckk) {
        int mkbsda = 1;
        while(chuu!=0){
            mkbsda *= chuu%10;
            chuu /= 10;
        }
        return mkbsda%fuckk == 0;
    }

    int smallestNumber(int n, int t) {

        for(int tmkc = n; tmkc < n+10; tmkc++){
            if(prince_ki_gand(tmkc, t)) return tmkc;
        }

        int maa_chud_gai_prince_ki = 404;

        return maa_chud_gai_prince_ki;
        
    }
};