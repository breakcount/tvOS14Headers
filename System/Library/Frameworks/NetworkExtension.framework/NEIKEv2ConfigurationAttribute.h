/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NEIKEv2ConfigurationAttribute : NSObject {

	NSString* _customAttributeName;

}

@property (retain) NSString * customAttributeName;                  //@synthesize customAttributeName=_customAttributeName - In the implementation block
@property (readonly) unsigned long long attributeType; 
@property (readonly) unsigned long long valueType; 
+(id)copyTypeDescription;
-(unsigned long long)attributeType;
-(unsigned long long)valueType;
-(id)attributeName;
-(NSString *)customAttributeName;
-(id)initEmptyRequest;
-(void)setCustomAttributeName:(NSString *)arg1 ;
@end

