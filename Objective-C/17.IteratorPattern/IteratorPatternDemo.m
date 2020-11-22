//
//  IteratorPatternDemo.m
//  17.IteratorPattern
//
//  Created by Layne on 2020/11/09.
//

#import "NameRepository.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        NSLog(@"Hello World!.");
        NameRepository* namesRepository = [[NameRepository alloc] init];

        for (id<IteratorProtocol> iter = [namesRepository getIterator];[iter hasNext];) {
            NSString* name = [iter next];
            NSLog(@"Name: %@", name);
        }
    }
    return 0;
}
