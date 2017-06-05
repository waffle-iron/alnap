<?php
/**
 * @file
 * alnap_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alnap_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function alnap_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function alnap_base_image_default_styles() {
  $styles = array();

  // Exported image style: 1600-32x9.
  $styles['1600-32x9'] = array(
    'label' => '1600-32x9',
    'effects' => array(
      59 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => '1920-32x9',
          'apply_all_effects' => 0,
        ),
        'weight' => -10,
      ),
      156 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      60 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 450,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 1920-32x9.
  $styles['1920-32x9'] = array(
    'label' => 'mc-1920-32x9',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1920,
          'height' => 540,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => '1920-32x9',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: 280-1x1.
  $styles['280-1x1'] = array(
    'label' => 'mc-280-1x1',
    'effects' => array(
      5 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 280,
          'height' => 280,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => '280-1x1',
        ),
        'weight' => -10,
      ),
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 280,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: 280-scaled.
  $styles['280-scaled'] = array(
    'label' => '280-scaled',
    'effects' => array(
      204 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      202 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      203 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 280,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: 380-scaled.
  $styles['380-scaled'] = array(
    'label' => '380-scaled',
    'effects' => array(
      186 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -10,
      ),
      41 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => 180,
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
      42 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#ffffff',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => 20,
            'rightdiff' => 20,
            'topdiff' => 10,
            'bottomdiff' => 10,
          ),
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: 600-1x1.
  $styles['600-1x1'] = array(
    'label' => 'mc-600-1x1',
    'effects' => array(
      84 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 600,
          'height' => 600,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => '600-1x1',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: 640-scaled.
  $styles['640-scaled'] = array(
    'label' => '640-scaled-logos',
    'effects' => array(
      63 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 630,
          'height' => 470,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      64 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#ffffff',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '10px',
            'rightdiff' => '10px',
            'topdiff' => '10px',
            'bottomdiff' => '10px',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 800-16x9.
  $styles['800-16x9'] = array(
    'label' => 'mc-800-16x9',
    'effects' => array(
      45 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 800,
          'height' => 450,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => '800-16x9',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: aside-mobile.
  $styles['aside-mobile'] = array(
    'label' => 'aside-mobile',
    'effects' => array(
      152 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => 'mc-slide-mobile',
            7 => '1920-32x9',
            8 => '280-1x1',
            9 => '600-1x1',
            10 => '800-16x9',
            11 => 'mc-480-3x4',
            12 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      158 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: aside-narrow.
  $styles['aside-narrow'] = array(
    'label' => 'aside-narrow',
    'effects' => array(
      151 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => 'mc-slide-mobile',
            7 => '1920-32x9',
            8 => '280-1x1',
            9 => '600-1x1',
            10 => '800-16x9',
            11 => 'mc-480-3x4',
            12 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      159 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: aside-normal.
  $styles['aside-normal'] = array(
    'label' => 'aside-normal',
    'effects' => array(
      150 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => 'mc-slide-mobile',
            7 => '1920-32x9',
            8 => '280-1x1',
            9 => '600-1x1',
            10 => '800-16x9',
            11 => 'mc-480-3x4',
            12 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      160 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 380,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: aside-wide.
  $styles['aside-wide'] = array(
    'label' => 'aside-wide',
    'effects' => array(
      149 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => 'mc-slide-mobile',
            7 => '1920-32x9',
            8 => '280-1x1',
            9 => '600-1x1',
            10 => '800-16x9',
            11 => 'mc-480-3x4',
            12 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      161 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 514,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: gallery-ps.
  $styles['gallery-ps'] = array(
    'label' => 'gallery-ps',
    'effects' => array(
      188 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -10,
      ),
      58 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 1600,
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: gallery-ss.
  $styles['gallery-ss'] = array(
    'label' => 'gallery-ss',
    'effects' => array(
      187 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -10,
      ),
      57 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 540,
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: grid-6-mobile.
  $styles['grid-6-mobile'] = array(
    'label' => 'grid-6-mobile',
    'effects' => array(
      218 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'mc-800-70x99',
            1 => 'mc-slide-mobile',
            2 => 'manualcrop',
            3 => 'nugget-4x3',
            4 => 'nugget-16x9',
            5 => 'nugget-1x1',
            6 => 'nugget-3x4',
            7 => 'nugget-70x99',
            8 => '1920-32x9',
            9 => '280-1x1',
            10 => '600-1x1',
            11 => '800-16x9',
            12 => 'mc-480-3x4',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      216 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      217 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 690,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: grid-6-mobile-logo.
  $styles['grid-6-mobile-logo'] = array(
    'label' => 'grid-6-mobile-logo',
    'effects' => array(
      244 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'mc-800-70x99',
            1 => 'mc-slide-mobile',
            2 => 'manualcrop',
            3 => 'nugget-4x3',
            4 => 'nugget-16x9',
            5 => 'nugget-1x1',
            6 => 'nugget-3x4',
            7 => 'nugget-70x99',
            8 => '1920-32x9',
            9 => '280-1x1',
            10 => '600-1x1',
            11 => '800-16x9',
            12 => 'mc-480-3x4',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      245 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      246 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 690,
          'height' => 460,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: grid-6-mobile-logo-16x9.
  $styles['grid-6-mobile-logo-16x9'] = array(
    'label' => 'grid-6-mobile-logo-16x9',
    'effects' => array(
      212 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      190 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      191 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 650,
          'height' => 348,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
      208 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#FFFFFF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 690,
            'height' => 388,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -7,
      ),
    ),
  );

  // Exported image style: grid-6-narrow.
  $styles['grid-6-narrow'] = array(
    'label' => 'grid-6-narrow',
    'effects' => array(
      226 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
            12 => 'mc-slide-mobile',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      224 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      225 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 460,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: grid-6-narrow-logo.
  $styles['grid-6-narrow-logo'] = array(
    'label' => 'grid-6-narrow-logo',
    'effects' => array(
      241 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
            12 => 'mc-slide-mobile',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      242 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      243 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 460,
          'height' => 460,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: grid-6-narrow-logo-16x9.
  $styles['grid-6-narrow-logo-16x9'] = array(
    'label' => 'grid-6-narrow-logo-16x9',
    'effects' => array(
      211 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      193 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      194 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 420,
          'height' => 219,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
      207 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#FFFFFF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 460,
            'height' => 259,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -7,
      ),
    ),
  );

  // Exported image style: grid-6-normal.
  $styles['grid-6-normal'] = array(
    'label' => 'grid-6-normal',
    'effects' => array(
      230 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
            12 => 'mc-slide-mobile',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      228 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      229 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 580,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: grid-6-normal-logo.
  $styles['grid-6-normal-logo'] = array(
    'label' => 'grid-6-normal-logo',
    'effects' => array(
      238 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
            12 => 'mc-slide-mobile',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      239 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      240 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 580,
          'height' => 460,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: grid-6-normal-logo-16x9.
  $styles['grid-6-normal-logo-16x9'] = array(
    'label' => 'grid-6-normal-logo-16x9',
    'effects' => array(
      210 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      196 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      197 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 540,
          'height' => 286,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
      206 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#FFFFFF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 580,
            'height' => 326,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -7,
      ),
    ),
  );

  // Exported image style: grid-6-wide.
  $styles['grid-6-wide'] = array(
    'label' => 'grid-6-wide',
    'effects' => array(
      234 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
            12 => 'mc-slide-mobile',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      232 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      233 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 780,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: grid-6-wide-logo.
  $styles['grid-6-wide-logo'] = array(
    'label' => 'grid-6-wide-logo',
    'effects' => array(
      235 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
            12 => 'mc-slide-mobile',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      236 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      237 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 780,
          'height' => 460,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: grid-6-wide-logo-16x9.
  $styles['grid-6-wide-logo-16x9'] = array(
    'label' => 'grid-6-wide-logo-16x9',
    'effects' => array(
      209 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      199 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      200 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 740,
          'height' => 299,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
      205 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#FFFFFF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 780,
            'height' => 439,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -7,
      ),
    ),
  );

  // Exported image style: grid-9-mobile.
  $styles['grid-9-mobile'] = array(
    'label' => 'grid-9-mobile',
    'effects' => array(
      247 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
            12 => 'mc-slide-mobile',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => 0,
      ),
      251 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => 2,
      ),
      258 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 690,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: grid-9-narrow.
  $styles['grid-9-narrow'] = array(
    'label' => 'grid-9-narrow',
    'effects' => array(
      248 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
            12 => 'mc-slide-mobile',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => 0,
      ),
      252 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => 2,
      ),
      257 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 690,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: grid-9-normal.
  $styles['grid-9-normal'] = array(
    'label' => 'grid-9-normal',
    'effects' => array(
      249 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
            12 => 'mc-slide-mobile',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => 0,
      ),
      253 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => 2,
      ),
      256 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 870,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: grid-9-wide.
  $styles['grid-9-wide'] = array(
    'label' => 'grid-9-wide',
    'effects' => array(
      250 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
            12 => 'mc-slide-mobile',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => 0,
      ),
      254 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => 2,
      ),
      255 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1170,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: manualcrop.
  $styles['manualcrop'] = array(
    'label' => 'free crop',
    'effects' => array(
      65 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 60,
          'height' => 60,
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'manualcrop',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: mc-480-3x4.
  $styles['mc-480-3x4'] = array(
    'label' => 'mc-480-3x4',
    'effects' => array(
      74 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 480,
          'height' => 640,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'mc-480-3x4',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: mc-800-70x99.
  $styles['mc-800-70x99'] = array(
    'label' => 'mc-800-70x99',
    'effects' => array(
      46 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 800,
          'height' => 1131,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'mc-800-70x99',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: mc-slide-mobile.
  $styles['mc-slide-mobile'] = array(
    'label' => 'mc-slide-mobile',
    'effects' => array(
      213 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 720,
          'height' => 400,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'mc-slide-mobile',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: nugget-16x9.
  $styles['nugget-16x9'] = array(
    'label' => 'wide landscape',
    'effects' => array(
      86 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 600,
          'height' => 338,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'nugget-16x9',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: nugget-1x1.
  $styles['nugget-1x1'] = array(
    'label' => 'square',
    'effects' => array(
      85 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 600,
          'height' => 600,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'nugget-1x1',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: nugget-3x4.
  $styles['nugget-3x4'] = array(
    'label' => 'standard portrait',
    'effects' => array(
      113 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 480,
          'height' => 640,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'nugget-3x4',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: nugget-4x3.
  $styles['nugget-4x3'] = array(
    'label' => 'standard landscape',
    'effects' => array(
      87 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 600,
          'height' => 450,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'nugget-4x3',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: nugget-70x99.
  $styles['nugget-70x99'] = array(
    'label' => 'publication cover',
    'effects' => array(
      112 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 420,
          'height' => 594,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'nugget-70x99',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: nugget-mobile.
  $styles['nugget-mobile'] = array(
    'label' => 'nugget-mobile',
    'effects' => array(
      144 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      178 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      137 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: nugget-narrow.
  $styles['nugget-narrow'] = array(
    'label' => 'nugget-narrow',
    'effects' => array(
      145 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      179 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      139 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 360,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: nugget-normal.
  $styles['nugget-normal'] = array(
    'label' => 'nugget-normal',
    'effects' => array(
      146 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      180 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      141 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: nugget-wide.
  $styles['nugget-wide'] = array(
    'label' => 'nugget-wide',
    'effects' => array(
      147 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
            1 => 'nugget-4x3',
            2 => 'nugget-16x9',
            3 => 'nugget-1x1',
            4 => 'nugget-3x4',
            5 => 'nugget-70x99',
            6 => '1920-32x9',
            7 => '280-1x1',
            8 => '600-1x1',
            9 => '800-16x9',
            10 => 'mc-480-3x4',
            11 => 'mc-800-70x99',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      181 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      143 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: slide-front-mobile.
  $styles['slide-front-mobile'] = array(
    'label' => 'slide-front-mobile',
    'effects' => array(
      214 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'nugget-4x3',
            1 => 'nugget-70x99',
            2 => 'mc-slide-mobile',
            3 => '1920-32x9',
            4 => '280-1x1',
            5 => '600-1x1',
            6 => '800-16x9',
            7 => 'manualcrop',
            8 => 'mc-480-3x4',
            9 => 'mc-800-70x99',
            10 => 'nugget-16x9',
            11 => 'nugget-1x1',
            12 => 'nugget-3x4',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => -10,
      ),
      182 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      34 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 720,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: slide-front-narrow.
  $styles['slide-front-narrow'] = array(
    'label' => 'slide-front-narrow',
    'effects' => array(
      35 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => '1920-32x9',
          'apply_all_effects' => 0,
        ),
        'weight' => -10,
      ),
      183 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      36 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: slide-front-normal.
  $styles['slide-front-normal'] = array(
    'label' => 'slide-front-normal',
    'effects' => array(
      37 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => '1920-32x9',
          'apply_all_effects' => 0,
        ),
        'weight' => -10,
      ),
      184 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 85,
        ),
        'weight' => -9,
      ),
      38 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function alnap_base_node_info() {
  $items = array(
    'country' => array(
      'name' => t('Country'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'footer' => array(
      'name' => t('Footer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'form' => array(
      'name' => t('Form'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'front' => array(
      'name' => t('Home page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'organisation' => array(
      'name' => t('Organisation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'organisation_group' => array(
      'name' => t('Organisation group'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'publication' => array(
      'name' => t('Peer-reviewed article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'system_page' => array(
      'name' => t('System page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function alnap_base_paragraphs_info() {
  $items = array(
    'attachments' => array(
      'name' => 'Attachments',
      'bundle' => 'attachments',
      'locked' => '1',
    ),
    'block' => array(
      'name' => 'Block',
      'bundle' => 'block',
      'locked' => '1',
    ),
    'faqs' => array(
      'name' => 'FAQs',
      'bundle' => 'faqs',
      'locked' => '1',
    ),
    'feed' => array(
      'name' => 'Feed',
      'bundle' => 'feed',
      'locked' => '1',
    ),
    'form' => array(
      'name' => 'Form',
      'bundle' => 'form',
      'locked' => '1',
    ),
    'gallery' => array(
      'name' => 'Photo gallery',
      'bundle' => 'gallery',
      'locked' => '1',
    ),
    'iframe' => array(
      'name' => 'IFrame',
      'bundle' => 'iframe',
      'locked' => '1',
    ),
    'links' => array(
      'name' => 'Box links',
      'bundle' => 'links',
      'locked' => '1',
    ),
    'map_world' => array(
      'name' => 'World map',
      'bundle' => 'map_world',
      'locked' => '1',
    ),
    'organisation_group' => array(
      'name' => 'Organisation group',
      'bundle' => 'organisation_group',
      'locked' => '1',
    ),
    'q_a' => array(
      'name' => 'Q&A',
      'bundle' => 'q_a',
      'locked' => '1',
    ),
    'quote' => array(
      'name' => 'Quote',
      'bundle' => 'quote',
      'locked' => '1',
    ),
    'slider' => array(
      'name' => 'Slideshow',
      'bundle' => 'slider',
      'locked' => '1',
    ),
    'social_links' => array(
      'name' => 'Social links',
      'bundle' => 'social_links',
      'locked' => '1',
    ),
    'tagged' => array(
      'name' => 'Tagged content',
      'bundle' => 'tagged',
      'locked' => '1',
    ),
    'team' => array(
      'name' => 'Team',
      'bundle' => 'team',
      'locked' => '1',
    ),
    'team_member' => array(
      'name' => 'Person',
      'bundle' => 'team_member',
      'locked' => '1',
    ),
    'twitter' => array(
      'name' => 'Twitter',
      'bundle' => 'twitter',
      'locked' => '1',
    ),
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
    'wysiwyg' => array(
      'name' => 'Content block',
      'bundle' => 'wysiwyg',
      'locked' => '1',
    ),
  );
  return $items;
}
