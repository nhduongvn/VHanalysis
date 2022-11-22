void H_dR_VbbHcc_17()
{
//=========Macro generated from canvas: H_dR_VbbHcc_17/H_dR_VbbHcc_17
//=========  (Tue Nov 22 09:15:08 2022) by ROOT version 6.14/09
   TCanvas *H_dR_VbbHcc_17 = new TCanvas("H_dR_VbbHcc_17", "H_dR_VbbHcc_17",0,0,600,600);
   H_dR_VbbHcc_17->SetHighLightColor(2);
   H_dR_VbbHcc_17->Range(0,0,1,1);
   H_dR_VbbHcc_17->SetFillColor(0);
   H_dR_VbbHcc_17->SetFillStyle(4000);
   H_dR_VbbHcc_17->SetBorderMode(0);
   H_dR_VbbHcc_17->SetBorderSize(2);
   H_dR_VbbHcc_17->SetFrameFillStyle(1000);
   H_dR_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-5657.451,10.52419,5651803);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(4843864);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",50,0,10);
   st_stack_22->SetMinimum(0.01);
   st_stack_22->SetMaximum(5086057);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetRange(1,50);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetLabelSize(0.035);
   st_stack_22->GetXaxis()->SetTitleSize(0.035);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetLabelSize(0.05);
   st_stack_22->GetYaxis()->SetTitleSize(0.057);
   st_stack_22->GetYaxis()->SetTitleOffset(1.2);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetLabelSize(0.035);
   st_stack_22->GetZaxis()->SetTitleSize(0.035);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",50,0,10);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,749698.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,1056304);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,864452.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,844562.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,864608.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,791672.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,985047.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,1061379);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,1134364);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,1286200);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,1309261);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,1608133);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,1875415);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,1853673);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,1324999);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,931196.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,736820.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,605537.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,462214.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,368968.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,227802.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,176980.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,95058.93);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,51678.89);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,26298.63);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,10093.96);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,2345.768);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,31376.14);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,37429.33);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,33682.54);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,33354.23);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,33659.21);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,31966.33);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,35949.34);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,37443.27);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,38588.57);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,41012.35);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,41263.64);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,45639.78);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,49491.01);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,49385.69);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,41856.52);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,34784.14);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,30965.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,28205.73);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,24525.23);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,22137.86);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,17261.36);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,15031.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,11123.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,8245.971);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,5719.996);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,3300.627);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,1781.285);
   VbbHcc_tags_H_dR_stack_1->SetEntries(17117);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",50,0,10);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,5.200026);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,5084.271);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,8193.532);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,9168.452);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,10855.61);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,12075.66);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,12706.44);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,12918.29);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,13128.72);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,13551.81);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,14409.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,15613.49);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,16784.53);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,18078.12);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,18334.45);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,11308.16);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,7941.752);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,5902.771);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,4349.364);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,3113.018);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,2209.444);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,1528.586);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,970.4611);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,554.0213);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,291.9635);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,122.2541);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,34.41151);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,3.271961);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,1.020274);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,32.17909);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,40.56736);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,42.44948);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,44.95389);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,46.46004);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,47.12725);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,47.31591);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,47.76021);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,48.79974);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,50.68241);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,52.79075);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,54.78614);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,56.69756);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,56.68884);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,42.69976);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,34.48955);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,28.97104);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,24.07547);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,19.64211);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,16.31004);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,13.27167);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,10.32328);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,7.778068);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,5.702106);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,3.503349);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.747994);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.5725382);
   VbbHcc_tags_H_dR_stack_2->SetEntries(2959104);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",50,0,10);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,45.24723);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,63808.89);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,115909.6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,140894);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,169477.4);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,185284.1);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,190811.2);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,193430.8);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,197449.3);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,206293.6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,219614.1);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,236758.9);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,255801.1);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,274619.6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,271403.9);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,156005.6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,100157.8);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,67922.81);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,46459.03);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,31334.72);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,20649.24);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,13206.93);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,7910.913);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,4285.637);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,2065.958);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,845.8207);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,227.5205);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,13.63341);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,1.791436);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,67.87149);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,91.63137);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,101.0324);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,110.7596);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,115.8234);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,117.6179);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,118.5357);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,119.9058);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,122.7215);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,126.7846);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,131.7931);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,137.1858);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,142.2464);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,141.4634);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,106.9173);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,85.2961);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,69.9229);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,57.53022);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,46.99917);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,37.9485);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,30.17684);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,23.21008);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,16.95325);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,11.7141);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,7.421404);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,3.802125);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,0.8928358);
   VbbHcc_tags_H_dR_stack_3->SetEntries(4.843218e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",50,0,10);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(2,0.8185439);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,1881.382);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,2482.592);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,2432.027);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,2416.127);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,2420.231);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,2411.09);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,2562.181);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,2737.801);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,2963.378);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,3236.697);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,3639.262);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,4151.063);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,4659.75);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,4847.656);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,3031.112);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,1999.352);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,1539);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,1107.545);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,816.6748);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,578.8785);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,369.0655);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,230.6091);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,125.9783);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,71.37024);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,33.74713);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,6.148654);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,0.3188814);
   VbbHcc_tags_H_dR_stack_4->SetBinError(2,0.5922928);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,27.1617);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,31.21428);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,30.93176);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,30.73786);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,30.79143);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,30.77568);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,31.60961);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,32.70856);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,34.0442);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,35.66309);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,37.72007);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,40.34664);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,42.69626);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,43.59226);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,34.45765);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,27.93013);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,24.39816);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,20.66453);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,17.71157);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,14.95489);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,11.86136);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,9.303246);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,6.893029);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,5.074742);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,3.548404);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,1.411006);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,0.3188814);
   VbbHcc_tags_H_dR_stack_4->SetEntries(141537);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",50,0,10);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,1013.245);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,1880.598);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,1872.139);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,1695.789);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,1602.323);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,1645.436);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,1761.877);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,1639.564);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,1784.798);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,1970.155);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,2200.122);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,2494.602);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,2721.184);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,2739.627);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,1679.413);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,1085.758);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,819.9233);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,608.0013);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,444.2883);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,333.748);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,245.138);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,129.6381);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,83.5987);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,42.98985);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,20.5231);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,4.36538);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,36.58675);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,49.89982);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,50.00144);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,47.42669);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,45.97794);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,46.66357);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,48.41523);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,46.73243);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,48.79568);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,51.20109);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,54.04056);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,57.38724);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,60.16246);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,60.42925);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,47.22766);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,37.90327);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,32.97374);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,28.26084);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,24.28119);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,21.02518);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,17.67605);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,12.72577);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,10.32926);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,7.26936);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,5.082481);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,2.248013);
   VbbHcc_tags_H_dR_stack_5->SetEntries(25853);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",50,0,10);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(3,28.62518);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(4,44.33619);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,42.99536);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(6,53.86737);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(7,48.80868);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(8,58.2164);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(9,54.54035);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(10,61.86905);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(11,66.70084);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(12,71.855);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(13,78.68648);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(14,83.37508);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(15,100.9097);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(16,99.07427);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(17,54.7989);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,38.14145);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(19,23.01791);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(20,13.82192);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(21,9.641347);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(22,11.44098);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(23,5.203905);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(24,3.410681);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(25,1.873132);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(26,0.4070028);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(27,0.2786512);
   VbbHcc_tags_H_dR_stack_6->SetBinError(3,2.562582);
   VbbHcc_tags_H_dR_stack_6->SetBinError(4,3.203172);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,3.186183);
   VbbHcc_tags_H_dR_stack_6->SetBinError(6,3.584282);
   VbbHcc_tags_H_dR_stack_6->SetBinError(7,3.395856);
   VbbHcc_tags_H_dR_stack_6->SetBinError(8,3.688118);
   VbbHcc_tags_H_dR_stack_6->SetBinError(9,3.56083);
   VbbHcc_tags_H_dR_stack_6->SetBinError(10,3.786227);
   VbbHcc_tags_H_dR_stack_6->SetBinError(11,3.939547);
   VbbHcc_tags_H_dR_stack_6->SetBinError(12,4.076705);
   VbbHcc_tags_H_dR_stack_6->SetBinError(13,4.32908);
   VbbHcc_tags_H_dR_stack_6->SetBinError(14,4.400836);
   VbbHcc_tags_H_dR_stack_6->SetBinError(15,4.872778);
   VbbHcc_tags_H_dR_stack_6->SetBinError(16,4.824355);
   VbbHcc_tags_H_dR_stack_6->SetBinError(17,3.610245);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,2.97815);
   VbbHcc_tags_H_dR_stack_6->SetBinError(19,2.328784);
   VbbHcc_tags_H_dR_stack_6->SetBinError(20,1.790447);
   VbbHcc_tags_H_dR_stack_6->SetBinError(21,1.451487);
   VbbHcc_tags_H_dR_stack_6->SetBinError(22,1.635652);
   VbbHcc_tags_H_dR_stack_6->SetBinError(23,1.125654);
   VbbHcc_tags_H_dR_stack_6->SetBinError(24,0.8458996);
   VbbHcc_tags_H_dR_stack_6->SetBinError(25,0.6018724);
   VbbHcc_tags_H_dR_stack_6->SetBinError(26,0.2888319);
   VbbHcc_tags_H_dR_stack_6->SetBinError(27,0.2786512);
   VbbHcc_tags_H_dR_stack_6->SetEntries(4750);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",50,0,10);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,62.43168);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,87.66487);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,95.7046);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(6,103.071);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,99.65539);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(8,105.8934);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(9,107.5198);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,104.2379);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(11,110.1169);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,127.7574);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,128.9132);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,149.8386);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,156.4052);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,173.4689);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,101.1666);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,61.67612);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,40.09122);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,34.27189);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,23.34784);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(22,18.89546);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(23,11.48009);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,8.745381);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(25,2.783423);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(26,1.837643);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(27,1.532474);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(28,0.1804438);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,3.284398);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,3.848409);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,4.002342);
   VbbHcc_tags_H_dR_stack_7->SetBinError(6,4.187436);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,4.076835);
   VbbHcc_tags_H_dR_stack_7->SetBinError(8,4.208325);
   VbbHcc_tags_H_dR_stack_7->SetBinError(9,4.257133);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,4.177714);
   VbbHcc_tags_H_dR_stack_7->SetBinError(11,4.309645);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,4.653921);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,4.668705);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,5.01953);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,5.155327);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,5.434718);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,4.125574);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,3.242096);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,2.578869);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,2.403742);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,1.960324);
   VbbHcc_tags_H_dR_stack_7->SetBinError(22,1.791602);
   VbbHcc_tags_H_dR_stack_7->SetBinError(23,1.376079);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,1.221666);
   VbbHcc_tags_H_dR_stack_7->SetBinError(25,0.6683597);
   VbbHcc_tags_H_dR_stack_7->SetBinError(26,0.5316208);
   VbbHcc_tags_H_dR_stack_7->SetBinError(27,0.5210979);
   VbbHcc_tags_H_dR_stack_7->SetBinError(28,0.1804438);
   VbbHcc_tags_H_dR_stack_7->SetEntries(11906);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",50,0,10);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,41.1887);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,75.72455);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,80.04549);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,95.669);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,95.96308);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,103.0739);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,107.2548);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,112.5885);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,121.0327);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,115.667);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,139.81);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,150.2428);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,156.2289);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,150.7214);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,81.46577);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,41.44975);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,31.07064);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,24.94694);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,13.00507);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,11.47757);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,8.156062);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,4.292193);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(25,2.342112);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,0.5561542);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,0.200508);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,0.5628852);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,2.994038);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,4.045501);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,4.238794);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,4.545848);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,4.563694);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,4.73049);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,4.835535);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,4.9325);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,5.181069);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,5.018192);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,5.533799);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,5.742559);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,5.831979);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,5.769286);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,4.203874);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,3.010208);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,2.705867);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,2.321396);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,1.654251);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,1.572608);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,1.324077);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.9364557);
   VbbHcc_tags_H_dR_stack_8->SetBinError(25,0.6681684);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.2811805);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.200508);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.3312822);
   VbbHcc_tags_H_dR_stack_8->SetEntries(8452);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",50,0,10);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(2,0.010497);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,21.68441);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,32.95365);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,35.70172);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,38.68809);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,39.16618);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,37.57587);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,37.01416);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,36.21115);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,36.74964);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,38.11852);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,40.8007);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,43.88467);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,47.76759);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,46.1935);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,22.36523);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,12.82285);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,8.470214);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,6.003116);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,4.199744);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,3.007739);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,1.833169);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,1.259343);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.6883979);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.3247423);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.1248721);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.02661954);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.001381472);
   VbbHcc_tags_H_dR_stack_9->SetBinError(2,0.004301733);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.2054502);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.253659);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.2635374);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.2743452);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.2760881);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.2701431);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.2680981);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.2643764);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.266275);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.2705999);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.2800712);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.2902044);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.3029121);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.2985973);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.2070353);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.1559099);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.1262018);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.1062136);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.08845282);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.07507788);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.05812862);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.04824633);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.03579896);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.02427752);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.01541143);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.006745591);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.001381472);
   VbbHcc_tags_H_dR_stack_9->SetEntries(337563);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",50,0,10);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(2,0.003553443);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,5.970461);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,9.915268);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,11.5391);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,12.37478);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,10.96346);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,8.988417);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,7.910486);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,7.620046);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,7.930108);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,8.909099);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,9.758261);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,11.04282);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,12.21637);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,12.0411);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,6.827697);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,4.429022);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,3.051365);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,2.240521);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,1.5664);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,1.065459);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,0.7539824);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.4911182);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.2757959);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.1445713);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.06535795);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.02317685);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.001414101);
   VbbHcc_tags_H_dR_stack_10->SetBinError(2,0.001264242);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.05144693);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.06635679);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.0716548);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.07426922);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.06986911);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.06322808);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.05925976);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.05816599);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.05930814);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.06285494);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.06578212);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.0699823);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.07356392);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.07305791);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.05494851);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.04418115);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.03661179);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.03132179);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.02612779);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.02151264);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.01807857);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.01454709);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.01082326);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.007788861);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.00520942);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.003095471);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.0007428886);
   VbbHcc_tags_H_dR_stack_10->SetEntries(363165);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",50,0,10);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.171375);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.3265542);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.41205);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.5381931);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.6247172);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.6620456);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.735938);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.7191382);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.6853054);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.6525969);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.7209327);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.7647028);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.8482607);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.8350467);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.2823639);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.1601488);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.07796861);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.05614215);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.03816939);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.03362289);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.01394623);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.009029115);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.003138135);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.002923655);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.01762607);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.02481752);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.02721192);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.03153187);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.03352193);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.03498379);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.03684842);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.03593726);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.03555977);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.03497386);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.03653479);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.0369347);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.03952737);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.03930406);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.02294938);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.01684078);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.01174748);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.009664777);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.008068308);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.007702677);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.005123368);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.003862408);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.002296413);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.001905132);
   VbbHcc_tags_H_dR_stack_11->SetEntries(6268);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",50,0,10);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,981.6402);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,1985.353);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,3092.078);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,4552.198);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,5043.841);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,4922.946);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,4946.41);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,3827.99);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,3574.915);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,3310.925);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,3157.146);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,3567.513);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,3770.911);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,3749.661);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,1927.618);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,1001.657);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,638.8155);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,386.7139);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,283.5232);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,197.7135);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,108.1485);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(24,51.6207);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,67.52697);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,14.1771);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,4.776608);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,71.20825);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,101.0252);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,127.6135);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,154.1274);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,162.5023);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,160.4152);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,161.6448);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,141.202);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,137.3227);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,131.5719);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,127.0611);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,135.9755);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,139.6226);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,140.2358);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,99.96858);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,72.22012);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,57.5093);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,44.94538);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,38.34594);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,31.572);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,23.57838);
   VbbHcc_tags_H_dR_stack_12->SetBinError(24,15.77318);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,18.99548);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,8.2814);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,4.776608);
   VbbHcc_tags_H_dR_stack_12->SetEntries(12187);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__43 = new TH1D("VbbHcc_tags_H_dR__43","",50,0,10);
   VbbHcc_tags_H_dR__43->SetBinContent(2,134);
   VbbHcc_tags_H_dR__43->SetBinContent(3,156545);
   VbbHcc_tags_H_dR__43->SetBinContent(4,183891);
   VbbHcc_tags_H_dR__43->SetBinContent(5,148428);
   VbbHcc_tags_H_dR__43->SetBinContent(6,148944);
   VbbHcc_tags_H_dR__43->SetBinContent(7,152167);
   VbbHcc_tags_H_dR__43->SetBinContent(8,157673);
   VbbHcc_tags_H_dR__43->SetBinContent(9,166951);
   VbbHcc_tags_H_dR__43->SetBinContent(10,180275);
   VbbHcc_tags_H_dR__43->SetBinContent(11,195325);
   VbbHcc_tags_H_dR__43->SetBinContent(12,216190);
   VbbHcc_tags_H_dR__43->SetBinContent(13,240667);
   VbbHcc_tags_H_dR__43->SetBinContent(14,269014);
   VbbHcc_tags_H_dR__43->SetBinContent(15,303551);
   VbbHcc_tags_H_dR__43->SetBinContent(16,318297);
   VbbHcc_tags_H_dR__43->SetBinContent(17,210458);
   VbbHcc_tags_H_dR__43->SetBinContent(18,153001);
   VbbHcc_tags_H_dR__43->SetBinContent(19,115173);
   VbbHcc_tags_H_dR__43->SetBinContent(20,86966);
   VbbHcc_tags_H_dR__43->SetBinContent(21,64765);
   VbbHcc_tags_H_dR__43->SetBinContent(22,47055);
   VbbHcc_tags_H_dR__43->SetBinContent(23,32696);
   VbbHcc_tags_H_dR__43->SetBinContent(24,21198);
   VbbHcc_tags_H_dR__43->SetBinContent(25,12495);
   VbbHcc_tags_H_dR__43->SetBinContent(26,6416);
   VbbHcc_tags_H_dR__43->SetBinContent(27,2746);
   VbbHcc_tags_H_dR__43->SetBinContent(28,770);
   VbbHcc_tags_H_dR__43->SetBinContent(29,53);
   VbbHcc_tags_H_dR__43->SetEntries(3591844);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__43->SetLineColor(ci);
   VbbHcc_tags_H_dR__43->SetLineWidth(2);
   VbbHcc_tags_H_dR__43->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__43->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__43->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR__43->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__43->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__43->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__43->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__43->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__43->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__43->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__43->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__43->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__43->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__43->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__43->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__43->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__43->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1043[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1043[50] = {
   0,
   51.27985,
   822628.1,
   1187007,
   1022178,
   1033864,
   1071330,
   1004484,
   1200982,
   1280486,
   1362875,
   1529104,
   1571028,
   1891371,
   2179739,
   2155231,
   1499218,
   1043541,
   813749.3,
   658529.3,
   498258.2,
   392983.1,
   243288.1,
   186291.8,
   100183.7,
   54168.63,
   27327.96,
   10367.2,
   2362.995,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1043[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1043[50] = {
   0,
   2.145002,
   31376.34,
   37429.65,
   33683.01,
   33354.85,
   33659.88,
   31967.04,
   35949.98,
   37443.8,
   38589.09,
   41012.84,
   41264.13,
   45640.27,
   49491.5,
   49386.18,
   41856.84,
   34784.37,
   30965.97,
   28205.86,
   24525.33,
   22137.94,
   17261.42,
   15031.74,
   11123.63,
   8245.99,
   5720.008,
   3300.631,
   1781.286,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_H_dR_fx1043,Graph_from_VbbHcc_tags_H_dR_fy1043,Graph_from_VbbHcc_tags_H_dR_fex1043,Graph_from_VbbHcc_tags_H_dR_fey1043);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1043 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1043","",100,0,11);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetMaximum(2452153);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1043);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_VbbHcc_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__44 = new TH1D("data_mc_ratio__44","",50,0,10);
   data_mc_ratio__44->SetBinContent(2,2.613112);
   data_mc_ratio__44->SetBinContent(3,0.1902986);
   data_mc_ratio__44->SetBinContent(4,0.1549199);
   data_mc_ratio__44->SetBinContent(5,0.1452076);
   data_mc_ratio__44->SetBinContent(6,0.1440653);
   data_mc_ratio__44->SetBinContent(7,0.1420356);
   data_mc_ratio__44->SetBinContent(8,0.1569692);
   data_mc_ratio__44->SetBinContent(9,0.1390121);
   data_mc_ratio__44->SetBinContent(10,0.1407864);
   data_mc_ratio__44->SetBinContent(11,0.1433183);
   data_mc_ratio__44->SetBinContent(12,0.1413834);
   data_mc_ratio__44->SetBinContent(13,0.1531907);
   data_mc_ratio__44->SetBinContent(14,0.1422323);
   data_mc_ratio__44->SetBinContent(15,0.1392603);
   data_mc_ratio__44->SetBinContent(16,0.1476858);
   data_mc_ratio__44->SetBinContent(17,0.1403785);
   data_mc_ratio__44->SetBinContent(18,0.1466171);
   data_mc_ratio__44->SetBinContent(19,0.1415338);
   data_mc_ratio__44->SetBinContent(20,0.1320609);
   data_mc_ratio__44->SetBinContent(21,0.1299828);
   data_mc_ratio__44->SetBinContent(22,0.119738);
   data_mc_ratio__44->SetBinContent(23,0.1343921);
   data_mc_ratio__44->SetBinContent(24,0.1137892);
   data_mc_ratio__44->SetBinContent(25,0.1247209);
   data_mc_ratio__44->SetBinContent(26,0.1184449);
   data_mc_ratio__44->SetBinContent(27,0.1004832);
   data_mc_ratio__44->SetBinContent(28,0.07427271);
   data_mc_ratio__44->SetBinContent(29,0.02242916);
   data_mc_ratio__44->SetBinError(2,0.2257385);
   data_mc_ratio__44->SetBinError(3,0.0004809679);
   data_mc_ratio__44->SetBinError(4,0.000361266);
   data_mc_ratio__44->SetBinError(5,0.0003769046);
   data_mc_ratio__44->SetBinError(6,0.0003732914);
   data_mc_ratio__44->SetBinError(7,0.0003641137);
   data_mc_ratio__44->SetBinError(8,0.0003953081);
   data_mc_ratio__44->SetBinError(9,0.0003402186);
   data_mc_ratio__44->SetBinError(10,0.0003315835);
   data_mc_ratio__44->SetBinError(11,0.0003242819);
   data_mc_ratio__44->SetBinError(12,0.000304075);
   data_mc_ratio__44->SetBinError(13,0.0003122657);
   data_mc_ratio__44->SetBinError(14,0.0002742274);
   data_mc_ratio__44->SetBinError(15,0.0002527618);
   data_mc_ratio__44->SetBinError(16,0.0002617716);
   data_mc_ratio__44->SetBinError(17,0.0003059975);
   data_mc_ratio__44->SetBinError(18,0.0003748327);
   data_mc_ratio__44->SetBinError(19,0.0004170467);
   data_mc_ratio__44->SetBinError(20,0.0004478161);
   data_mc_ratio__44->SetBinError(21,0.0005107586);
   data_mc_ratio__44->SetBinError(22,0.0005519872);
   data_mc_ratio__44->SetBinError(23,0.0007432356);
   data_mc_ratio__44->SetBinError(24,0.0007815445);
   data_mc_ratio__44->SetBinError(25,0.001115761);
   data_mc_ratio__44->SetBinError(26,0.001478715);
   data_mc_ratio__44->SetBinError(27,0.001917534);
   data_mc_ratio__44->SetBinError(28,0.002676603);
   data_mc_ratio__44->SetBinError(29,0.003080882);
   data_mc_ratio__44->SetMinimum(0.4);
   data_mc_ratio__44->SetMaximum(1.6);
   data_mc_ratio__44->SetEntries(586.4941);
   data_mc_ratio__44->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__44->SetLineColor(ci);
   data_mc_ratio__44->SetLineWidth(2);
   data_mc_ratio__44->SetMarkerStyle(20);
   data_mc_ratio__44->SetMarkerSize(1.2);
   data_mc_ratio__44->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__44->GetXaxis()->SetRange(1,50);
   data_mc_ratio__44->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__44->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__44->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__44->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__44->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__44->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__44->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__44->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__44->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__44->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__44->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__44->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__44->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__44->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__44->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__44->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__44->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1044[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1044[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1044[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1044[50] = {
   0,
   0.04182934,
   0.03814159,
   0.0315328,
   0.0329522,
   0.03226231,
   0.03141878,
   0.03182434,
   0.02993382,
   0.02924187,
   0.02831446,
   0.02682148,
   0.02626568,
   0.02413079,
   0.02270524,
   0.02291457,
   0.02791911,
   0.03333301,
   0.03805346,
   0.04283159,
   0.04922214,
   0.05633305,
   0.07095056,
   0.08068921,
   0.1110324,
   0.1522282,
   0.2093097,
   0.3183725,
   0.7538253,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1044,Graph_from_mc_statistical_error_fy1044,Graph_from_mc_statistical_error_fex1044,Graph_from_mc_statistical_error_fey1044);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1044 = new TH1F("Graph_Graph_from_mc_statistical_error1044","",100,0,11);
   Graph_Graph_from_mc_statistical_error1044->SetMinimum(0.0954096);
   Graph_Graph_from_mc_statistical_error1044->SetMaximum(1.90459);
   Graph_Graph_from_mc_statistical_error1044->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1044->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1044);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_VbbHcc_17->cd();
   H_dR_VbbHcc_17->Modified();
   H_dR_VbbHcc_17->cd();
   H_dR_VbbHcc_17->SetSelected(H_dR_VbbHcc_17);
}
