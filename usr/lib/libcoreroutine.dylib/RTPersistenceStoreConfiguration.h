/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, RTPersistenceStore;

@interface RTPersistenceStoreConfiguration : NSObject {

	BOOL _readOnly;
	NSString* _name;
	RTPersistenceStore* _store;

}

@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (getter=isReadOnly,readonly) BOOL readOnly;                //@synthesize readOnly=_readOnly - In the implementation block
@property (__weak,readonly) RTPersistenceStore * store;              //@synthesize store=_store - In the implementation block
-(NSString *)name;
-(id)init;
-(RTPersistenceStore *)store;
-(BOOL)isReadOnly;
-(id)initWithName:(id)arg1 readOnly:(BOOL)arg2 store:(id)arg3 ;
@end

