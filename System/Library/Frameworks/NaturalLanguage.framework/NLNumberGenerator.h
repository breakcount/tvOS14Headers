/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@interface NLNumberGenerator : NSObject {

	unsigned long long state[2];

}
-(id)init;
-(void)reset;
-(unsigned long long)numberInRange:(NSRange)arg1 ;
-(void)resetWithSeed:(unsigned long long)arg1 ;
@end
