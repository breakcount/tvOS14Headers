/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Trial/Trial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TRIAppContainer : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	long long _type;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)containerWithIdentifier:(id)arg1 type:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 ;
-(id)containerURL;
-(BOOL)isEqualToContainer:(id)arg1 ;
-(id)_containerURLWithError:(id*)arg1 ;
-(id)_appBundleContainerDirectoryAsSystemWithError:(id*)arg1 ;
-(id)_groupContainerDirectoryAsSystemWithError:(id*)arg1 ;
-(id)_appDataContainerDirectoryAsSystemWithError:(id*)arg1 ;
-(id)_appBundleContainerDirectoryAsOwner;
-(id)_groupContainerDirectoryAsOwner;
-(id)_appDataContainerDirectoryAsOwner;
-(id)sanitizedIdentifier;
-(id)_containerError:(unsigned long long)arg1 withFormat:(id)arg2 ;
-(id)_appContainerDirectoryAsSystemWithContainerClass:(unsigned long long)arg1 error:(id*)arg2 ;
-(long long)fetchStatus;
-(id)containerURLAsOwner;
-(id)copyWithReplacementIdentifier:(id)arg1 ;
-(id)copyWithReplacementType:(long long)arg1 ;
@end

