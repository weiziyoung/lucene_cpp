//
// Created by weiziyang on 2021/2/9.
//

#include "DataOutput.h"

namespace store{

    void DataOutput::writeBytes(char *bytes, int length) {
        writeBytes(bytes, 0, length);
    }

    void DataOutput::writeInt(int i) {
        writeByte(char(i>>24));
        writeByte(char(i>>16));
        writeByte(char(i>>8));
        writeByte(char(i));
    }

    void DataOutput::writeVint(int i) {


    }

}


