/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSMutableDictionary;



@interface ABPersonLinker : NSObject 
{
    void *_addressBook;
    NSMutableDictionary *_peopleByFirstName;
    NSMutableDictionary *_peopleByLastName;
    NSMutableDictionary *_peopleByOrganization;
}

+ (void)log:(id)arg1;
+ (BOOL)shouldLog;
+ (BOOL)isLinkDataValidForAddressBook:(void*)arg1;
+ (void)startAutoLinkingNewPeopleInAddressBook:(void*)arg1 inProcess:(BOOL)arg2;

- (id)otherPeopleInDatabaseMatchingPerson:(void*)arg1 notIncludingPeople:(id)arg2;
- (id)otherPeopleInArray:(id)arg1 matchingPerson:(void*)arg2;
- (BOOL)shouldLinkPerson:(void*)arg1 toPeopleInDatabase:(id)arg2 andNewlyAddedPeople:(id)arg3 inInitialLinking:(BOOL)arg4;
- (id)suggestedPeopleToLinkWithPerson:(void*)arg1 isInitialLinking:(BOOL)arg2;
- (void)addPerson:(void*)arg1 toDictionary:(id)arg2 withProperty:(NSInteger)arg3;
- (void)presortPeople:(id)arg1;
- (void)makeLinksForAddedPeople:(id)arg1 inInitialLinking:(BOOL)arg2 countingOuterIterations:(NSInteger*)arg3;
- (void)removeAllLinks;
- (void)makeInitialLinksCountingOuterIterations:(NSInteger*)arg1;
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(NSInteger)arg1 withLimit:(NSInteger)arg2;
- (BOOL)linkRecentlyAddedPeopleWithLimit:(NSInteger)arg1;
- (void)linkRecentlyAddedPeople;
- (void)linkNewlyAddedPerson:(void*)arg1;
- (void)makeInitialLinks;
- (id)init;
- (void)dealloc;
- (id)initWithAddressBook:(void*)arg1;

@end
