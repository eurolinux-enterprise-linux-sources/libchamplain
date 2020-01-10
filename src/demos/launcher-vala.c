/* launcher-vala.c generated by valac 0.22.1, the Vala compiler
 * generated from launcher-vala.vala, do not modify */

/*
 * Copyright (C) 2010 Simon Wenner <simon@wenner.ch>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <glib.h>
#include <glib-object.h>
#include <champlain/champlain.h>
#include <clutter/clutter.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_LAUNCHER (launcher_get_type ())
#define LAUNCHER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_LAUNCHER, Launcher))
#define LAUNCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_LAUNCHER, LauncherClass))
#define IS_LAUNCHER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_LAUNCHER))
#define IS_LAUNCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_LAUNCHER))
#define LAUNCHER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_LAUNCHER, LauncherClass))

typedef struct _Launcher Launcher;
typedef struct _LauncherClass LauncherClass;
typedef struct _LauncherPrivate LauncherPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define TYPE_DEMO_LAYER (demo_layer_get_type ())
#define DEMO_LAYER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DEMO_LAYER, DemoLayer))
#define DEMO_LAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DEMO_LAYER, DemoLayerClass))
#define IS_DEMO_LAYER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DEMO_LAYER))
#define IS_DEMO_LAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DEMO_LAYER))
#define DEMO_LAYER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DEMO_LAYER, DemoLayerClass))

typedef struct _DemoLayer DemoLayer;
typedef struct _DemoLayerClass DemoLayerClass;

struct _Launcher {
	GObject parent_instance;
	LauncherPrivate * priv;
};

struct _LauncherClass {
	GObjectClass parent_class;
};

struct _LauncherPrivate {
	ChamplainView* view;
	ClutterStage* stage;
};


static gpointer launcher_parent_class = NULL;

GType launcher_get_type (void) G_GNUC_CONST;
#define LAUNCHER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_LAUNCHER, LauncherPrivate))
enum  {
	LAUNCHER_DUMMY_PROPERTY
};
#define LAUNCHER_PADDING 10
Launcher* launcher_new (void);
Launcher* launcher_construct (GType object_type);
ClutterActor* launcher_make_button (Launcher* self, const gchar* text);
static gboolean __lambda2_ (Launcher* self, ClutterButtonEvent* event);
static gboolean ___lambda2__clutter_actor_button_release_event (ClutterActor* _sender, ClutterButtonEvent* event, gpointer self);
static gboolean __lambda3_ (Launcher* self, ClutterButtonEvent* event);
static gboolean ___lambda3__clutter_actor_button_release_event (ClutterActor* _sender, ClutterButtonEvent* event, gpointer self);
GType demo_layer_get_type (void) G_GNUC_CONST;
DemoLayer* demo_layer_new (void);
DemoLayer* demo_layer_construct (GType object_type);
static gboolean launcher_button_release_cb (Launcher* self, ClutterButtonEvent* event);
static gboolean _launcher_button_release_cb_clutter_actor_button_release_event (ClutterActor* _sender, ClutterButtonEvent* event, gpointer self);
void launcher_show (Launcher* self);
gint launcher_main (gchar** args, int args_length1);
static void launcher_finalize (GObject* obj);


static gboolean __lambda2_ (Launcher* self, ClutterButtonEvent* event) {
	gboolean result = FALSE;
	ChamplainView* _tmp0_ = NULL;
	g_return_val_if_fail (event != NULL, FALSE);
	_tmp0_ = self->priv->view;
	champlain_view_zoom_in (_tmp0_);
	result = TRUE;
	return result;
}


static gboolean ___lambda2__clutter_actor_button_release_event (ClutterActor* _sender, ClutterButtonEvent* event, gpointer self) {
	gboolean result;
	result = __lambda2_ (self, event);
	return result;
}


static gboolean __lambda3_ (Launcher* self, ClutterButtonEvent* event) {
	gboolean result = FALSE;
	ChamplainView* _tmp0_ = NULL;
	g_return_val_if_fail (event != NULL, FALSE);
	_tmp0_ = self->priv->view;
	champlain_view_zoom_out (_tmp0_);
	result = TRUE;
	return result;
}


static gboolean ___lambda3__clutter_actor_button_release_event (ClutterActor* _sender, ClutterButtonEvent* event, gpointer self) {
	gboolean result;
	result = __lambda3_ (self, event);
	return result;
}


static gboolean _launcher_button_release_cb_clutter_actor_button_release_event (ClutterActor* _sender, ClutterButtonEvent* event, gpointer self) {
	gboolean result;
	result = launcher_button_release_cb (self, event);
	return result;
}


Launcher* launcher_construct (GType object_type) {
	Launcher * self = NULL;
	gfloat width = 0.0F;
	gfloat total_width = 0.0F;
	ClutterStage* _tmp0_ = NULL;
	ClutterStage* _tmp1_ = NULL;
	ClutterStage* _tmp2_ = NULL;
	ChamplainView* _tmp3_ = NULL;
	ChamplainView* _tmp4_ = NULL;
	ClutterStage* _tmp5_ = NULL;
	ChamplainView* _tmp6_ = NULL;
	ClutterActor* buttons = NULL;
	ClutterActor* _tmp7_ = NULL;
	ClutterActor* button = NULL;
	ClutterActor* _tmp8_ = NULL;
	ClutterActor* _tmp9_ = NULL;
	ClutterActor* _tmp10_ = NULL;
	ClutterActor* _tmp11_ = NULL;
	gfloat _tmp12_ = 0.0F;
	gfloat _tmp13_ = 0.0F;
	gfloat _tmp14_ = 0.0F;
	ClutterActor* _tmp15_ = NULL;
	ClutterActor* _tmp16_ = NULL;
	ClutterActor* _tmp17_ = NULL;
	ClutterActor* _tmp18_ = NULL;
	ClutterActor* _tmp19_ = NULL;
	gfloat _tmp20_ = 0.0F;
	ClutterActor* _tmp21_ = NULL;
	gfloat _tmp22_ = 0.0F;
	gfloat _tmp23_ = 0.0F;
	gfloat _tmp24_ = 0.0F;
	ClutterActor* _tmp25_ = NULL;
	ClutterStage* _tmp26_ = NULL;
	DemoLayer* layer = NULL;
	DemoLayer* _tmp27_ = NULL;
	ChamplainView* _tmp28_ = NULL;
	ChamplainView* _tmp29_ = NULL;
	ChamplainView* _tmp30_ = NULL;
	ChamplainView* _tmp31_ = NULL;
	ChamplainView* _tmp32_ = NULL;
	ChamplainView* _tmp33_ = NULL;
	self = (Launcher*) g_object_new (object_type, NULL);
	total_width = (gfloat) 0;
	_tmp0_ = (ClutterStage*) clutter_stage_new ();
	g_object_ref_sink (_tmp0_);
	_g_object_unref0 (self->priv->stage);
	self->priv->stage = _tmp0_;
	_tmp1_ = self->priv->stage;
	clutter_stage_set_title (_tmp1_, "Champlain Vala Example");
	_tmp2_ = self->priv->stage;
	clutter_actor_set_size ((ClutterActor*) _tmp2_, (gfloat) 800, (gfloat) 600);
	_tmp3_ = (ChamplainView*) champlain_view_new ();
	g_object_ref_sink (_tmp3_);
	_g_object_unref0 (self->priv->view);
	self->priv->view = _tmp3_;
	_tmp4_ = self->priv->view;
	clutter_actor_set_size ((ClutterActor*) _tmp4_, (gfloat) 800, (gfloat) 600);
	_tmp5_ = self->priv->stage;
	_tmp6_ = self->priv->view;
	clutter_actor_add_child ((ClutterActor*) _tmp5_, (ClutterActor*) _tmp6_);
	_tmp7_ = clutter_actor_new ();
	g_object_ref_sink (_tmp7_);
	buttons = _tmp7_;
	clutter_actor_set_position (buttons, (gfloat) LAUNCHER_PADDING, (gfloat) LAUNCHER_PADDING);
	_tmp8_ = launcher_make_button (self, "Zoom in");
	button = _tmp8_;
	_tmp9_ = button;
	clutter_actor_add_child (buttons, _tmp9_);
	_tmp10_ = button;
	clutter_actor_set_reactive (_tmp10_, TRUE);
	_tmp11_ = button;
	clutter_actor_get_size (_tmp11_, &_tmp12_, NULL);
	width = _tmp12_;
	_tmp13_ = total_width;
	_tmp14_ = width;
	total_width = _tmp13_ + (_tmp14_ + LAUNCHER_PADDING);
	_tmp15_ = button;
	g_signal_connect_object (_tmp15_, "button-release-event", (GCallback) ___lambda2__clutter_actor_button_release_event, self, 0);
	_tmp16_ = launcher_make_button (self, "Zoom out");
	_g_object_unref0 (button);
	button = _tmp16_;
	_tmp17_ = button;
	clutter_actor_add_child (buttons, _tmp17_);
	_tmp18_ = button;
	clutter_actor_set_reactive (_tmp18_, TRUE);
	_tmp19_ = button;
	_tmp20_ = total_width;
	clutter_actor_set_position (_tmp19_, _tmp20_, (gfloat) 0);
	_tmp21_ = button;
	clutter_actor_get_size (_tmp21_, &_tmp22_, NULL);
	width = _tmp22_;
	_tmp23_ = total_width;
	_tmp24_ = width;
	total_width = _tmp23_ + (_tmp24_ + LAUNCHER_PADDING);
	_tmp25_ = button;
	g_signal_connect_object (_tmp25_, "button-release-event", (GCallback) ___lambda3__clutter_actor_button_release_event, self, 0);
	_tmp26_ = self->priv->stage;
	clutter_actor_add_child ((ClutterActor*) _tmp26_, buttons);
	_tmp27_ = demo_layer_new ();
	g_object_ref_sink (_tmp27_);
	layer = _tmp27_;
	_tmp28_ = self->priv->view;
	champlain_view_add_layer (_tmp28_, (ChamplainLayer*) layer);
	_tmp29_ = self->priv->view;
	clutter_actor_set_reactive ((ClutterActor*) _tmp29_, TRUE);
	_tmp30_ = self->priv->view;
	g_signal_connect_object ((ClutterActor*) _tmp30_, "button-release-event", (GCallback) _launcher_button_release_cb_clutter_actor_button_release_event, self, 0);
	_tmp31_ = self->priv->view;
	champlain_view_set_zoom_level (_tmp31_, (guint) 7);
	_tmp32_ = self->priv->view;
	champlain_view_set_kinetic_mode (_tmp32_, TRUE);
	_tmp33_ = self->priv->view;
	champlain_view_center_on (_tmp33_, 45.466, -73.75);
	_g_object_unref0 (layer);
	_g_object_unref0 (button);
	_g_object_unref0 (buttons);
	return self;
}


Launcher* launcher_new (void) {
	return launcher_construct (TYPE_LAUNCHER);
}


void launcher_show (Launcher* self) {
	ClutterStage* _tmp0_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->stage;
	clutter_actor_show ((ClutterActor*) _tmp0_);
}


static gboolean launcher_button_release_cb (Launcher* self, ClutterButtonEvent* event) {
	gboolean result = FALSE;
	gdouble lat = 0.0;
	gdouble lon = 0.0;
	gboolean _tmp0_ = FALSE;
	ClutterButtonEvent _tmp1_ = {0};
	guint32 _tmp2_ = 0U;
	gboolean _tmp5_ = FALSE;
	ChamplainView* _tmp6_ = NULL;
	ClutterButtonEvent _tmp7_ = {0};
	gfloat _tmp8_ = 0.0F;
	gdouble _tmp9_ = 0.0;
	ChamplainView* _tmp10_ = NULL;
	ClutterButtonEvent _tmp11_ = {0};
	gfloat _tmp12_ = 0.0F;
	gdouble _tmp13_ = 0.0;
	gdouble _tmp14_ = 0.0;
	gdouble _tmp15_ = 0.0;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (event != NULL, FALSE);
	_tmp1_ = *event;
	_tmp2_ = _tmp1_.button;
	if (_tmp2_ != ((guint32) 1)) {
		_tmp0_ = TRUE;
	} else {
		ClutterButtonEvent _tmp3_ = {0};
		guint _tmp4_ = 0U;
		_tmp3_ = *event;
		_tmp4_ = _tmp3_.click_count;
		_tmp0_ = _tmp4_ > ((guint) 1);
	}
	_tmp5_ = _tmp0_;
	if (_tmp5_) {
		result = FALSE;
		return result;
	}
	_tmp6_ = self->priv->view;
	_tmp7_ = *event;
	_tmp8_ = _tmp7_.y;
	_tmp9_ = champlain_view_y_to_latitude (_tmp6_, (gdouble) _tmp8_);
	lat = _tmp9_;
	_tmp10_ = self->priv->view;
	_tmp11_ = *event;
	_tmp12_ = _tmp11_.x;
	_tmp13_ = champlain_view_x_to_longitude (_tmp10_, (gdouble) _tmp12_);
	lon = _tmp13_;
	_tmp14_ = lat;
	_tmp15_ = lon;
	g_print ("Map clicked at %f, %f \n", _tmp14_, _tmp15_);
	result = TRUE;
	return result;
}


ClutterActor* launcher_make_button (Launcher* self, const gchar* text) {
	ClutterActor* result = NULL;
	ClutterColor white = {0};
	ClutterColor _tmp0_ = {0};
	ClutterColor black = {0};
	ClutterColor _tmp1_ = {0};
	gfloat width = 0.0F;
	gfloat height = 0.0F;
	ClutterActor* button = NULL;
	ClutterActor* _tmp2_ = NULL;
	ClutterActor* button_bg = NULL;
	ClutterActor* _tmp3_ = NULL;
	ClutterColor _tmp4_ = {0};
	ClutterText* button_text = NULL;
	const gchar* _tmp5_ = NULL;
	ClutterColor _tmp6_ = {0};
	ClutterText* _tmp7_ = NULL;
	gfloat _tmp8_ = 0.0F;
	gfloat _tmp9_ = 0.0F;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (text != NULL, NULL);
	_tmp0_.red = (guint8) 0xff;
	_tmp0_.green = (guint8) 0xff;
	_tmp0_.blue = (guint8) 0xff;
	_tmp0_.alpha = (guint8) 0xff;
	white = _tmp0_;
	_tmp1_.red = (guint8) 0x00;
	_tmp1_.green = (guint8) 0x00;
	_tmp1_.blue = (guint8) 0x00;
	_tmp1_.alpha = (guint8) 0xff;
	black = _tmp1_;
	_tmp2_ = clutter_actor_new ();
	g_object_ref_sink (_tmp2_);
	button = _tmp2_;
	_tmp3_ = clutter_actor_new ();
	g_object_ref_sink (_tmp3_);
	button_bg = _tmp3_;
	_tmp4_ = white;
	clutter_actor_set_background_color (button_bg, &_tmp4_);
	clutter_actor_add_child (button, button_bg);
	clutter_actor_set_opacity (button_bg, (guint) 0xcc);
	_tmp5_ = text;
	_tmp6_ = black;
	_tmp7_ = (ClutterText*) clutter_text_new_full ("Sans 10", _tmp5_, &_tmp6_);
	g_object_ref_sink (_tmp7_);
	button_text = _tmp7_;
	clutter_actor_add_child (button, (ClutterActor*) button_text);
	clutter_actor_get_size ((ClutterActor*) button_text, &_tmp8_, &_tmp9_);
	width = _tmp8_;
	height = _tmp9_;
	clutter_actor_set_size (button_bg, width + (LAUNCHER_PADDING * 2), height + (LAUNCHER_PADDING * 2));
	clutter_actor_set_position (button_bg, (gfloat) 0, (gfloat) 0);
	clutter_actor_set_position ((ClutterActor*) button_text, (gfloat) LAUNCHER_PADDING, (gfloat) LAUNCHER_PADDING);
	result = button;
	_g_object_unref0 (button_text);
	_g_object_unref0 (button_bg);
	return result;
}


gint launcher_main (gchar** args, int args_length1) {
	gint result = 0;
	ClutterInitError _tmp0_ = 0;
	Launcher* launcher = NULL;
	Launcher* _tmp1_ = NULL;
	Launcher* _tmp2_ = NULL;
	_tmp0_ = clutter_init (&args_length1, &args);
	if (_tmp0_ != CLUTTER_INIT_SUCCESS) {
		result = 1;
		return result;
	}
	_tmp1_ = launcher_new ();
	launcher = _tmp1_;
	_tmp2_ = launcher;
	launcher_show (_tmp2_);
	clutter_main ();
	result = 0;
	_g_object_unref0 (launcher);
	return result;
}


int main (int argc, char ** argv) {
	g_type_init ();
	return launcher_main (argv, argc);
}


static void launcher_class_init (LauncherClass * klass) {
	launcher_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (LauncherPrivate));
	G_OBJECT_CLASS (klass)->finalize = launcher_finalize;
}


static void launcher_instance_init (Launcher * self) {
	self->priv = LAUNCHER_GET_PRIVATE (self);
}


static void launcher_finalize (GObject* obj) {
	Launcher * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_LAUNCHER, Launcher);
	_g_object_unref0 (self->priv->view);
	_g_object_unref0 (self->priv->stage);
	G_OBJECT_CLASS (launcher_parent_class)->finalize (obj);
}


GType launcher_get_type (void) {
	static volatile gsize launcher_type_id__volatile = 0;
	if (g_once_init_enter (&launcher_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LauncherClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) launcher_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Launcher), 0, (GInstanceInitFunc) launcher_instance_init, NULL };
		GType launcher_type_id;
		launcher_type_id = g_type_register_static (G_TYPE_OBJECT, "Launcher", &g_define_type_info, 0);
		g_once_init_leave (&launcher_type_id__volatile, launcher_type_id);
	}
	return launcher_type_id__volatile;
}



