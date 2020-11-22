//
//  Shape.h
//  7.BridgePattern
//
//  Created by Layne on 2020/10/24.
//

#import "DrawAPIProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface Shape : NSObject {
   @protected
    id<DrawAPIProtocol> _drawAPI;
}

- (instancetype)initWithDrawAPI:(id<DrawAPIProtocol>)drawAPI;
- (void)draw;

@end

NS_ASSUME_NONNULL_END
