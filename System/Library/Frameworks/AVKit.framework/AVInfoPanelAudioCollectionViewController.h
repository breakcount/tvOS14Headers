/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVInfoPanelMediaOptionCollectionViewController.h>

@class NSString;

@interface AVInfoPanelAudioCollectionViewController : AVInfoPanelMediaOptionCollectionViewController {

	NSString* _sectionTitle;

}

@property (nonatomic,readonly) double widthOfWidestCell; 
@property (nonatomic,retain) NSString * sectionTitle;                 //@synthesize sectionTitle=_sectionTitle - In the implementation block
-(NSString *)sectionTitle;
-(void)setSectionTitle:(NSString *)arg1 ;
-(void)viewDidLoad;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(double)widthOfWidestCell;
@end

