/**
 * @brief 
 * 
 * @file block_queue.h
 * @author chun-wang
 * @date 2018-07-08
 */
#ifndef STDPLUS_BLOCK_QUEUE_
#define STDPLUS_BLOCK_QUEUE_

#include <queue>

namespace stdplus {

template<typename T>
class block_queue
{
private:
    std::queue<T> queue_;
    size_t limit_;
public:
    /**
     * @brief Construct a new block queue object
     * 
     * @param size max limited size of the queue
     */
    block_queue(size_t size);

    /**
     * @brief Destroy the block queue object
     */
    ~block_queue();

    /**
     * @brief get current size of the queue
     * 
     * @return size_t 
     */
    size_t size();

    /**
     * @brief get max size of the queue
     * 
     * @return size_t 
     */
    size_t limit();

    /**
     * @brief 
     * 
     * @param data 
     */
    void push(const T& data);

    /**
     * @brief 
     * 
     * @return T 
     */
    T pop();
};

template<typename T>
block_queue::block_queue(size_t size)
{

}

block_queue::~block_queue()
{

}


}

#endif // !STDPLUS_BLOCK_QUEUE_