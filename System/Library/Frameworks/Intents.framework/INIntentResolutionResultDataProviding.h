/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INIntentResolutionResultDataProviding <NSObject>
@required
-(void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(/*^block*/id)arg4;
-(id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id*)arg3;
-(id)_JSONDictionaryRepresentationForIntent:(id)arg1 parameterName:(id)arg2;

@end

