class Logger {
public:
    /** Initialize your data structure here. */
    Logger() {
        
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    bool shouldPrintMessage(int timestamp, string message) {
        if(printTime.find(message) == printTime.end()){
            printTime[message] = timestamp;
            return true;
        }else{
            if(timestamp - printTime[message] >=10){
                printTime[message] = timestamp;
                return true;
            }
            else
                return false;
        }
    }
private:
    unordered_map<string, int> printTime;
};
