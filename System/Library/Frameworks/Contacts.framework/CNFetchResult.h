/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface CNFetchResult : NSObject {

	id _value;
	NSData* _currentHistoryToken;

}

@property (nonatomic,readonly) id value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSData * currentHistoryToken;              //@synthesize currentHistoryToken=_currentHistoryToken - In the implementation block
-(id)description;
-(id)value;
-(NSData *)currentHistoryToken;
-(id)initWithValue:(id)arg1 currentHistoryToken:(id)arg2 ;
@end

