//
//  VisitorPatternDemo.m
//  25.VisitorPattern
//
//  Created by Layne on 2020/11/21.
//

#import "Computer.h"
#import "ComputerPartDisplayVisitor.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        id<ComputerPartProtocol> computer = [[Computer alloc] init];
        [computer accept:[[ComputerPartDisplayVisitor alloc] init]];
    }
    return 0;
}
