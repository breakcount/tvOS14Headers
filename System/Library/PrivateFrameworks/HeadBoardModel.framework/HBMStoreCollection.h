/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoardModel/HeadBoardModel-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface HBMStoreCollection : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSDictionary* _applications;
	NSDictionary* _folders;

}

@property (nonatomic,readonly) NSDictionary * applications;              //@synthesize applications=_applications - In the implementation block
@property (nonatomic,readonly) NSDictionary * folders;                   //@synthesize folders=_folders - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSDictionary *)applications;
-(id)folderForID:(id)arg1 ;
-(NSDictionary *)folders;
-(id)initWithApplications:(id)arg1 folders:(id)arg2 ;
-(id)combinedDictionary;
-(id)applicationForID:(id)arg1 ;
-(void)enumerateApplicationsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFoldersUsingBlock:(/*^block*/id)arg1 ;
-(id)hbm_collectionByApplyingCollectionChangeSet:(id)arg1 ;
@end

