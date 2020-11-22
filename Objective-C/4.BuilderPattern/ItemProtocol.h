//
//  ItemProtocol.h
//  4.BuilderPatternDemo
//
//  Created by Layne on 2020/10/18.
//

#import "PackingProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ItemProtocol <NSObject>

- (NSString*)name;
- (id<PackingProtocol>)packing;
- (float)price;

@end

NS_ASSUME_NONNULL_END
