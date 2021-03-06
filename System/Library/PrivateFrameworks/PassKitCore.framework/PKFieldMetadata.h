/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKFieldMetadata : NSObject <NSSecureCoding> {

	BOOL _shouldIgnoreField;
	BOOL _foundExplicitlyRequestedPass;
	NSArray* _associatedPassIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * associatedPassIdentifiers;              //@synthesize associatedPassIdentifiers=_associatedPassIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnoreField;                                //@synthesize shouldIgnoreField=_shouldIgnoreField - In the implementation block
@property (nonatomic,readonly) BOOL foundExplicitlyRequestedPass;                     //@synthesize foundExplicitlyRequestedPass=_foundExplicitlyRequestedPass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAssociatedPassIdentifiers:(id)arg1 shouldIgnoreField:(BOOL)arg2 foundExplicitlyRequestedPass:(BOOL)arg3 ;
-(NSArray *)associatedPassIdentifiers;
-(BOOL)shouldIgnoreField;
-(BOOL)foundExplicitlyRequestedPass;
@end

