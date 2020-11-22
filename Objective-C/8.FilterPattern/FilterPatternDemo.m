//
//  FilterPatternDemo.m
//  8.FilterPattern
//
//  Created by Layne on 2020/10/25.
//

#import "AndCriteria.h"
#import "CriteriaFemale.h"
#import "CriteriaMale.h"
#import "CriteriaSingle.h"
#import "OrCriteria.h"

static void printPersons(NSMutableArray<Person*>* persons) {
    for (Person* person in persons) {
        NSLog(@"Person : [ Name : %@, Gender : %@, Marital Status : %@ ]", person.name, person.gender,
              person.maritalStatus);
    }
}

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        NSLog(@"Hello World!.");

        NSMutableArray<Person*>* persons = [[NSMutableArray alloc] init];
        [persons addObject:[[Person alloc] initWithName:@"Robert" Gender:@"Male" MaritalStatus:@"Single"]];
        [persons addObject:[[Person alloc] initWithName:@"John" Gender:@"Male" MaritalStatus:@"Married"]];
        [persons addObject:[[Person alloc] initWithName:@"Laura" Gender:@"Female" MaritalStatus:@"Married"]];
        [persons addObject:[[Person alloc] initWithName:@"Diana" Gender:@"Female" MaritalStatus:@"Single"]];
        [persons addObject:[[Person alloc] initWithName:@"Mike" Gender:@"Male" MaritalStatus:@"Single"]];
        [persons addObject:[[Person alloc] initWithName:@"Bobby" Gender:@"Male" MaritalStatus:@"Single"]];

        id<CriteriaProtocol> male = [[CriteriaMale alloc] init];
        id<CriteriaProtocol> female = [[CriteriaFemale alloc] init];
        id<CriteriaProtocol> single = [[CriteriaSingle alloc] init];
        id<CriteriaProtocol> singleMale = [[AndCriteria alloc] initWithCriteria:single OtherCriteria:male];
        id<CriteriaProtocol> singleOrFemale = [[OrCriteria alloc] initWithCriteria:single OtherCriteria:female];

        NSLog(@"Males: ");
        printPersons([male meetCriteria:persons]);

        NSLog(@"\nFemales: ");
        printPersons([female meetCriteria:persons]);

        NSLog(@"\nSingle Males: ");
        printPersons([singleMale meetCriteria:persons]);

        NSLog(@"\nSingle Or Females: ");
        printPersons([singleOrFemale meetCriteria:persons]);
    }
    return 0;
}
