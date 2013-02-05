//
//  HCPaperFoldGalleryViewDelegate.h
//  Demo
//
//  Created by honcheng on 4/2/13.
//  Copyright (c) 2013 Hon Cheng Muh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HCPaperFoldGalleyMultiFoldView.h"
@class HCPaperFoldGalleryView;
@class HCPaperFoldGalleryCellView;
@class HCPaperFoldGalleyMultiFoldView;

@protocol HCPaperFoldGalleryViewDelegate <NSObject>
- (HCPaperFoldGalleryCellView*)paperFoldGalleryView:(HCPaperFoldGalleryView*)galleryView viewAtPageNumber:(int)pageNumber;
@end

@protocol HCPaperFoldGalleryViewDatasource <NSObject>
- (NSInteger)numbeOfItemsInPaperFoldGalleryView:(HCPaperFoldGalleryView*)galleryView;
@end