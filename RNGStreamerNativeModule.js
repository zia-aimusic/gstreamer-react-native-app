//  Created by react-native-create-bridge

import { NativeModules } from 'react-native'

const { RNGStreamer } = NativeModules

export default {
  exampleMethod () {
    return RNGStreamer.exampleMethod()
  },

  EXAMPLE_CONSTANT: RNGStreamer.EXAMPLE_CONSTANT
}
