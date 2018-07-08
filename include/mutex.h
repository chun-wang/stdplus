#ifndef STDPLUS_MUTEX_
#define STDPLUS_MUTEX_

namespace stdplus {

class mutex
{
private:
    pthread_mutex_t mutex_;
public:
    mutex();
    ~mutex();
};

mutex::mutex()
{
}

mutex::~mutex()
{
}


class recursive_mutex
{
private:
    /* data */
public:
    recursive_mutex(/* args */);
    ~recursive_mutex();
};

recursive_mutex::recursive_mutex(/* args */)
{
}

recursive_mutex::~recursive_mutex()
{
}


class recursive_timed_mutex
{
private:
    /* data */
public:
    recursive_timed_mutex(/* args */);
    ~recursive_timed_mutex();
};

recursive_timed_mutex::recursive_timed_mutex(/* args */)
{
}

recursive_timed_mutex::~recursive_timed_mutex()
{
}



}

#endif // !STDPLUS_MUTEX_
