//
//  MediaAdapter.h
//  6.AdapterPattern
//
//  Created by Layne on 2020/10/22.
//

#import "MediaPlayerProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface MediaAdapter : NSObject <MediaPlayerProtocol>

- (instancetype)initWithType:(NSString *)audioType;

@end

NS_ASSUME_NONNULL_END
