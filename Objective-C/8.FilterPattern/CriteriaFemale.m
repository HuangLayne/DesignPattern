//
//  CriteriaFemale.m
//  8.FilterPattern
//
//  Created by Layne on 2020/10/25.
//

#import "CriteriaFemale.h"

@implementation CriteriaFemale

- (nonnull NSMutableArray<Person *> *)meetCriteria:(nonnull NSMutableArray<Person *> *)persons {
    NSMutableArray<Person *> *femalePersons = [[NSMutableArray alloc] init];
    for (Person *person in persons) {
        if (NSOrderedSame == [person.gender compare:@"FEMALE" options:NSCaseInsensitiveSearch]) {
            [femalePersons addObject:person];
        }
    }
    return femalePersons;
}

@end
