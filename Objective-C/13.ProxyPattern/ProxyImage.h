//
//  ProxyImage.h
//  13.ProxyPattern
//
//  Created by Layne on 2020/11/3.
//

#import "ImageProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface ProxyImage : NSObject <ImageProtocol>

- (instancetype)initWithFileName:(NSString*)fileName;

@end

NS_ASSUME_NONNULL_END
