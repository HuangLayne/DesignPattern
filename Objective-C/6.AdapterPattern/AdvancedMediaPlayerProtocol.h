//
//  AdvancedMediaPlayerProtocol.h
//  6.AdapterPattern
//
//  Created by Layne on 2020/10/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AdvancedMediaPlayerProtocol <NSObject>

- (void)playVlc:(NSString*)fileName;
- (void)playMp4:(NSString*)fileName;

@end

NS_ASSUME_NONNULL_END
