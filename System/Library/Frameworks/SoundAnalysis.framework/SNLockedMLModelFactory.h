/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@class NSMapTable;

@interface SNLockedMLModelFactory : NSObject {

	NSMapTable* _vendedModels;
	mutex _lock;

}
-(id)init;
-(id)sharedLockedModelWithKey:(id)arg1 orCreateNewModelWithWithFunction:(/*^block*/id)arg2 ;
@end

