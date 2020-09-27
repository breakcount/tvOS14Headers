/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFEmailAddress : NSObject <NSCopying, WFNaming, WFSerializableContent, NSSecureCoding> {

	NSString* _address;
	NSString* _label;

}

@property (nonatomic,readonly) NSString * address;                     //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * localizedLabel; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)addressWithEmailAddress:(id)arg1 ;
+(id)emailAddressesInString:(id)arg1 error:(id*)arg2 ;
+(BOOL)stringContainsEmailAddresses:(id)arg1 ;
+(id)addressesWithTextCheckingResult:(id)arg1 ;
+(id)addressesWithMailtoURL:(id)arg1 ;
+(id)addressWithEmailAddress:(id)arg1 label:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(NSString *)label;
-(NSString *)localizedLabel;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
-(id)initWithAddress:(id)arg1 label:(id)arg2 ;
@end

