//
//  ChatRoom.m
//  18.MediatorPattern
//
//  Created by Layne on 2020/11/11.
//

#import "ChatRoom.h"
#import "User.h"

@implementation ChatRoom

+ (void)showMessage:(User *)user Message:(NSString *)message {
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"YYYY-MM-dd hh:mm:ss:SSS"];
    NSString *date = [formatter stringFromDate:[NSDate date]];
    NSString *timeLocal = [[NSString alloc] initWithFormat:@"%@", date];
    NSLog(@"%@ [%@] : %@", timeLocal, [user name], message);
}

@end
