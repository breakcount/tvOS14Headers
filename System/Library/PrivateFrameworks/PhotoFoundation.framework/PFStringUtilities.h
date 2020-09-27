/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:37 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFStringUtilities : NSObject
+(id)stringByRemovingInvalidXMLCharactersFromString:(id)arg1 ;
+(id)hexStringForData:(id)arg1 ;
+(id)dataForHexString:(id)arg1 ;
+(id)dataForBase64String:(id)arg1 ;
+(id)hexToBase64MapForHexStrings:(id)arg1 ;
+(id)base64ToHexMapForHexStrings:(id)arg1 ;
+(BOOL)isValidHexString:(id)arg1 ;
+(id)hexToBase64MapForBase64Strings:(id)arg1 ;
+(id)base64ToHexMapForBase64Strings:(id)arg1 ;
+(id)mapCollection:(id)arg1 transformation:(/*^block*/id)arg2 ;
+(const char*)safeCString:(id)arg1 ;
+(id)LTRString:(id)arg1 ;
+(id)descriptionForTimeInterval:(double)arg1 ;
+(id)descriptionForNSInterval:(unsigned long long)arg1 ;
+(id)descriptionForMachTimeInterval:(unsigned long long)arg1 ;
@end

