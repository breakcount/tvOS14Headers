/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSString, NSNumber;

@interface MPStoreItemOffer : NSObject <NSSecureCoding> {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,copy,readonly) NSString * buyParameters; 
@property (nonatomic,copy,readonly) NSString * formattedPrice; 
@property (nonatomic,copy,readonly) NSString * offerType; 
@property (nonatomic,copy,readonly) NSNumber * price; 
@property (nonatomic,copy,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)price;
-(NSArray *)assets;
-(NSString *)buyParameters;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(id)actionTextForType:(id)arg1 ;
-(NSString *)formattedPrice;
-(NSString *)offerType;
@end
