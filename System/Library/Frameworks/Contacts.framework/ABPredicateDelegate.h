/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABPredicateDelegate <NSObject>
@optional
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(BOOL)arg3;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3 moreComing:(BOOL)arg4;

@required
-(BOOL)predicateShouldContinue:(id)arg1;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;

@end

