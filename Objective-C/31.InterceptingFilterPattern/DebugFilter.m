//
//  DebugFilter.m
//  31.InterceptingFilterPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "DebugFilter.h"

@implementation DebugFilter

- (void)execute:(nonnull NSString *)request {
    NSLog(@"request log: %@", request);
}

@end
