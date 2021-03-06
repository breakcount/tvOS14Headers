/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACardDAV/DAContact.h>

@class NSString;

@interface DAABLegacyContact : NSObject <DAContact> {

	void* _person;

}

@property (nonatomic,readonly) void* person;                        //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void*)person;
-(id)eTag;
-(void)setETag:(id)arg1 ;
-(int)legacyIdentifier;
-(id)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1 ;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(BOOL)isContact;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)asContact;
-(id)initWithABPerson:(void*)arg1 ;
-(void*)asPerson;
@end

