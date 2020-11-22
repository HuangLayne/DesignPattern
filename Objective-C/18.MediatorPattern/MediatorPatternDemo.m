//
//  MediatorPatternDemo.m
//  18.MediatorPattern
//
//  Created by Layne on 2020/11/11.
//

#import "User.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        User* robert = [[User alloc] initWithName:@"Robert"];
        User* john = [[User alloc] initWithName:@"John"];
        [robert sendMessage:@"Hi John!"];
        [john sendMessage:@"Hello! Robert!"];
    }
    return 0;
}
