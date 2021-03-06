#ifndef __DATA_BLOCK_DM_H__
#define __DATA_BLOCK_DM_H__

/*
 *  DataBlock.h
 *  zxing
 *
 *  Created by Luiz Silva on 09/02/2010.
 *  Copyright 2010 ZXing authors All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <vector>
#include <common/Counted.h>
#include <common/Array.h>
#include <datamatrix/Version.h>

namespace zxing {
namespace datamatrix {

class DataBlock : public Counted {
private:
  int numDataCodewords_;
  ArrayRef<unsigned char> codewords_;

  DataBlock(int numDataCodewords, ArrayRef<unsigned char> codewords);

public:  
  static std::vector<Ref<DataBlock> > getDataBlocks(ArrayRef<unsigned char> rawCodewords, Version *version);

  int getNumDataCodewords();
  ArrayRef<unsigned char> getCodewords();
};

}
}

#endif // __DATA_BLOCK_DM_H__
