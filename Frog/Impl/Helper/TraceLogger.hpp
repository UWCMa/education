
class TraceLogger {
public:
	TraceLogger(const char* funcName, int lineNumber);
	~TraceLogger();

    template<typename T, typename... Args >
    void print( T item, Args... args )
    {
        std::cout << " : " << item;
        print(args...);
    }
    void print();

private:
	const char* _funcName;
};

#define LOG_INF(...) TraceLogger ( __FUNCTION__, __LINE__ ).print(  __VA_ARGS__ )
