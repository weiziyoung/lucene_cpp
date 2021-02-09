//
// Created by weiziyang on 2021/2/9.
//

#ifndef LUCENE_CPP_DATAOUTPUT_H
#define LUCENE_CPP_DATAOUTPUT_H

namespace store{
class DataOutput {
public:
    /**
     * @brief
     * @param b
     */
    virtual void writeByte(char b);

    /**
     * @brief
     * @param bytes
     * @param length
     */
    void writeBytes(char * bytes, int length);

    virtual void writeBytes(char * bytes, int offset, int length);

    void writeInt(int i);

    void writeVint(int i);



};
}



#endif //LUCENE_CPP_DATAOUTPUT_H
