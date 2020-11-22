//
//  CompositeEntity.h
//  28.CompositeEntityPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CompositeEntity : NSObject

- (void)setData1:(NSString*)data1 Data2:(NSString*)data2;
- (NSMutableArray<NSString*>*)getData;

@end

NS_ASSUME_NONNULL_END
