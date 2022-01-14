class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour==12) hour=0;
        double hrs = (1.0*hour*30)+(1.0*minutes*(0.5));
        double min = (1.0*minutes*6);
        return abs(hrs-min)>360-abs(hrs-min)?360-abs(hrs-min):abs(min-hrs);
    }
};