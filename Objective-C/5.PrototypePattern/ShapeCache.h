//
//  ShapeCache.h
//  5.PrototypePattern
//
//  Created by Layne on 2020/10/21.
//

#import "Shape.h"

NS_ASSUME_NONNULL_BEGIN

@interface ShapeCache : NSObject

+ (void)loadCache;
+ (Shape*)getShape:(NSString*)shapeId;

@end

NS_ASSUME_NONNULL_END
