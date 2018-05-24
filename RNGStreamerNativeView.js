//  Created by react-native-create-bridge

import React, { Component } from 'react'
import { requireNativeComponent } from 'react-native'

const RNGStreamer = requireNativeComponent('RNGStreamer', RNGStreamerView)

export default class RNGStreamerView extends Component {
  render () {
    return <RNGStreamer {...this.props} />
  }
}

RNGStreamerView.propTypes = {
  exampleProp: React.PropTypes.any
}
