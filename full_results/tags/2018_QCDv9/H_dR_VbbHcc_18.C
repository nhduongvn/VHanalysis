void H_dR_VbbHcc_18()
{
//=========Macro generated from canvas: H_dR_VbbHcc_18/H_dR_VbbHcc_18
//=========  (Mon Nov 21 13:02:20 2022) by ROOT version 6.14/09
   TCanvas *H_dR_VbbHcc_18 = new TCanvas("H_dR_VbbHcc_18", "H_dR_VbbHcc_18",0,0,600,600);
   H_dR_VbbHcc_18->SetHighLightColor(2);
   H_dR_VbbHcc_18->Range(0,0,1,1);
   H_dR_VbbHcc_18->SetFillColor(0);
   H_dR_VbbHcc_18->SetFillStyle(4000);
   H_dR_VbbHcc_18->SetBorderMode(0);
   H_dR_VbbHcc_18->SetBorderSize(2);
   H_dR_VbbHcc_18->SetFrameFillStyle(1000);
   H_dR_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-7268.773,10.52419,7261513);
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
   st->SetMaximum(6223462);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",50,0,10);
   st_stack_23->SetMinimum(0.01);
   st_stack_23->SetMaximum(6534635);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetRange(1,50);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetLabelSize(0.035);
   st_stack_23->GetXaxis()->SetTitleSize(0.035);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetLabelSize(0.05);
   st_stack_23->GetYaxis()->SetTitleSize(0.057);
   st_stack_23->GetYaxis()->SetTitleOffset(1.2);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetLabelSize(0.035);
   st_stack_23->GetZaxis()->SetTitleSize(0.035);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",50,0,10);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,1063859);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,1356229);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,1077742);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,978390.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,999371.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,1147388);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,1150326);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,1368834);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,1493289);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,1671195);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,1727531);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,2024710);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,2247698);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,2383856);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,1561912);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,1238461);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,926669);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,763625.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,559799.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,434407.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,321116.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,180080.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,140157);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,96183.03);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,22377.96);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,8634.957);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,47828.58);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,84666.69);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,43254.39);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,41980.25);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,43028.68);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,44756.34);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,52110.55);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,52036.26);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,87954.96);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,87586.98);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,57735.33);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,59994.81);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,65394.45);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,65032.42);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,52249.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,47320.35);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,40149.41);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,36622.72);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,31330.42);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,28083.37);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,23583.52);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,17377.83);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,15694.78);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,18089.91);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,6278.857);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,3682.472);
   VbbHcc_tags_H_dR_stack_1->SetEntries(16133);

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
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,6.699285);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,7190.537);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,11072.16);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,12553.02);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,14881.03);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,16597.82);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,17405.39);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,17668.14);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,17867.41);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,18579.04);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,19645);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,21092.19);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,22831.58);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,24668.98);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,24862.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,15402.65);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,10775.85);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,7916.119);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,5848.003);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,4206.409);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,2960.547);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,2028.411);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,1316.141);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,744.3554);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,387.1162);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,169.8167);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,49.49399);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,4.532262);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,1.306794);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,41.62134);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,50.6804);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,54.60066);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,59.00374);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,59.6292);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,63.13161);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,58.85437);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,60.83122);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,62.70632);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,65.14068);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,67.53944);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,70.33194);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,74.28137);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,71.15967);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,57.86655);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,43.46902);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,38.56404);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,31.18562);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,24.66839);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,20.58622);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,17.64155);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,13.05372);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,9.480338);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,6.762632);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,5.163744);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,2.364884);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,1.148679);
   VbbHcc_tags_H_dR_stack_2->SetEntries(3753295);

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
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,80.37165);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,90249.53);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,160787.1);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,195865);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,235348.8);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,257360.4);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,265275.4);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,267909.6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,273713.6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,285376.9);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,304023.6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,327635.1);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,353939.9);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,379733.1);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,375863.8);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,214897.4);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,137415);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,92376.04);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,62726.01);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,42200.9);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,27783.38);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,17688.67);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,10610.34);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,5700.026);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,2810.149);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,1166.751);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,318.685);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,23.32302);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,4.019815);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,87.66193);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,115.8078);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,128.3236);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,139.8935);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,146.1995);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,149.59);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,149.5865);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,152.0295);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,154.9103);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,159.645);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,166.3545);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,172.9125);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,179.0588);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,178.2352);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,134.8921);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,107.9162);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,87.91628);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,71.85241);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,58.01216);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,47.6745);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,37.76566);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,29.19958);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,20.80289);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,15.50843);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,9.385611);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,5.400109);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,1.286902);
   VbbHcc_tags_H_dR_stack_3->SetEntries(6.525334e+07);

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
   VbbHcc_tags_H_dR_stack_4->SetBinContent(2,2.277818);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,2516.523);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,3296.662);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,3214.517);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,3284.424);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,3265.272);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,3341.422);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,3476.609);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,3658.604);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,3869.101);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,4442.93);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,4920.436);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,5595.806);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,6294.456);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,6402.431);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,4080.476);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,2768.198);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,1963.479);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,1520.976);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,1027.704);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,731.9376);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,525.1373);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,323.9805);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,185.3718);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,76.05105);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,41.5806);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,8.407723);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,1.402916);
   VbbHcc_tags_H_dR_stack_4->SetBinError(2,1.151988);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,40.60595);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,45.75312);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,44.32237);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,44.39774);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,44.74508);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,45.32776);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,51.81558);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,47.91087);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,48.03643);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,51.62188);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,56.42375);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,58.96016);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,67.01496);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,66.98199);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,55.34996);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,41.90303);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,35.06442);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,32.28391);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,25.25177);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,21.28621);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,17.72132);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,13.87019);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,10.1974);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,6.442782);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,4.903984);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,2.202643);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,0.9922542);
   VbbHcc_tags_H_dR_stack_4->SetEntries(129105);

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
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,1305.076);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,2420.73);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,2331.219);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,2192.753);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,2004.997);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,2077.71);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,2082.863);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,2100.756);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,2272.067);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,2608.955);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,2772.7);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,3176.462);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,3472.267);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,3441.594);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,2058.19);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,1456.953);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,1055.004);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,722.6048);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,570.3046);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,397.785);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,293.7117);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,217.7121);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,111.7917);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,62.74318);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,29.27644);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,7.200765);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,58.3332);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,79.60383);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,78.16495);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,86.99693);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,71.54349);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,76.93049);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,79.73022);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,72.8405);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,76.05671);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,81.27255);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,86.57236);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,92.82109);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,93.69626);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,94.24525);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,76.88111);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,64.08189);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,51.58581);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,42.14576);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,37.718);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,31.68984);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,26.89483);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,23.56954);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,16.44331);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,12.42187);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,8.391875);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,4.263719);
   VbbHcc_tags_H_dR_stack_5->SetEntries(17149);

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
   VbbHcc_tags_H_dR_stack_6->SetBinContent(3,36.51987);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(4,51.8549);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,63.39774);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(6,59.04607);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(7,74.93478);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(8,68.62741);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(9,69.9678);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(10,81.24268);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(11,77.06305);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(12,87.97397);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(13,100.7305);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(14,102.2898);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(15,116.7257);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(16,125.3343);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(17,69.83611);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,39.39634);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(19,30.81885);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(20,16.27779);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(21,16.78941);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(22,9.703942);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(23,3.916449);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(24,5.401535);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(25,3.469248);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(26,1.501683);
   VbbHcc_tags_H_dR_stack_6->SetBinError(3,3.670998);
   VbbHcc_tags_H_dR_stack_6->SetBinError(4,4.461565);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,4.88514);
   VbbHcc_tags_H_dR_stack_6->SetBinError(6,4.796253);
   VbbHcc_tags_H_dR_stack_6->SetBinError(7,5.566569);
   VbbHcc_tags_H_dR_stack_6->SetBinError(8,5.094591);
   VbbHcc_tags_H_dR_stack_6->SetBinError(9,5.222793);
   VbbHcc_tags_H_dR_stack_6->SetBinError(10,5.705487);
   VbbHcc_tags_H_dR_stack_6->SetBinError(11,5.6344);
   VbbHcc_tags_H_dR_stack_6->SetBinError(12,5.900339);
   VbbHcc_tags_H_dR_stack_6->SetBinError(13,6.206381);
   VbbHcc_tags_H_dR_stack_6->SetBinError(14,6.458346);
   VbbHcc_tags_H_dR_stack_6->SetBinError(15,7.141287);
   VbbHcc_tags_H_dR_stack_6->SetBinError(16,6.910715);
   VbbHcc_tags_H_dR_stack_6->SetBinError(17,5.135367);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,3.89704);
   VbbHcc_tags_H_dR_stack_6->SetBinError(19,3.402716);
   VbbHcc_tags_H_dR_stack_6->SetBinError(20,2.405883);
   VbbHcc_tags_H_dR_stack_6->SetBinError(21,2.543639);
   VbbHcc_tags_H_dR_stack_6->SetBinError(22,1.863946);
   VbbHcc_tags_H_dR_stack_6->SetBinError(23,1.277182);
   VbbHcc_tags_H_dR_stack_6->SetBinError(24,1.467633);
   VbbHcc_tags_H_dR_stack_6->SetBinError(25,1.101797);
   VbbHcc_tags_H_dR_stack_6->SetBinError(26,0.7614863);
   VbbHcc_tags_H_dR_stack_6->SetEntries(3629);

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
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,82.60874);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,121.2939);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,131.3328);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(6,139.0544);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,142.8316);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(8,131.6316);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(9,145.991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,144.6903);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(11,150.6713);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,157.1275);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,165.5088);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,198.1939);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,208.9763);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,214.1242);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,112.7328);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,75.49244);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,55.83479);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,38.18668);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,30.53723);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(22,21.23249);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(23,11.47103);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,4.766729);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(25,2.845723);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(26,2.343227);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(27,1.468949);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(28,0.2276773);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,4.910307);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,5.436488);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,5.62947);
   VbbHcc_tags_H_dR_stack_7->SetBinError(6,5.820049);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,6.800623);
   VbbHcc_tags_H_dR_stack_7->SetBinError(8,5.674032);
   VbbHcc_tags_H_dR_stack_7->SetBinError(9,5.979348);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,6.382409);
   VbbHcc_tags_H_dR_stack_7->SetBinError(11,6.522323);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,6.104635);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,6.278584);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,7.06889);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,7.347335);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,7.263005);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,5.205989);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,4.506462);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,3.693042);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,3.06239);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,2.696538);
   VbbHcc_tags_H_dR_stack_7->SetBinError(22,2.261316);
   VbbHcc_tags_H_dR_stack_7->SetBinError(23,1.64171);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,1.047672);
   VbbHcc_tags_H_dR_stack_7->SetBinError(25,0.7902036);
   VbbHcc_tags_H_dR_stack_7->SetBinError(26,0.7525706);
   VbbHcc_tags_H_dR_stack_7->SetBinError(27,0.6579333);
   VbbHcc_tags_H_dR_stack_7->SetBinError(28,0.2276773);
   VbbHcc_tags_H_dR_stack_7->SetEntries(10826);

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
   VbbHcc_tags_H_dR_stack_8->SetBinContent(2,0.2191845);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,63.66496);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,93.54484);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,101.0002);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,126.1827);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,140.1346);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,149.7821);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,135.1729);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,159.9902);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,151.6206);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,176.8802);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,182.8291);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,193.5802);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,220.8836);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,213.6701);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,100.1833);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,69.48062);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,44.67164);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,27.77638);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,19.4991);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,11.60107);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,8.301497);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,5.63872);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(25,2.888365);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,0.843363);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,1.032887);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,0.2170818);
   VbbHcc_tags_H_dR_stack_8->SetBinError(2,0.2191845);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,3.949812);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,4.728703);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,5.549892);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,5.806489);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,5.916203);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,7.348225);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,5.71442);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,6.737331);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,6.049434);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,11.44063);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,6.686856);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,7.409284);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,7.438462);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,7.341023);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,5.406625);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,4.094345);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,3.823104);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,2.665054);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,2.163242);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,1.660382);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,1.40554);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,1.160964);
   VbbHcc_tags_H_dR_stack_8->SetBinError(25,0.8252099);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.4243227);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.4696164);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.2170818);
   VbbHcc_tags_H_dR_stack_8->SetEntries(10313);

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
   VbbHcc_tags_H_dR_stack_9->SetBinContent(2,0.01614315);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,30.02607);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,45.61228);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,49.73886);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,54.41826);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,53.92358);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,52.81263);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,51.07162);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,50.53056);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,50.51189);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,53.2049);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,56.40614);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,60.60798);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,66.07968);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,64.84908);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,30.50249);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,17.6793);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,11.75638);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,7.776468);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,5.571601);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,3.814207);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,2.5055);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,1.608344);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.8853675);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.4575126);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.1746509);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.06381549);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.007527908);
   VbbHcc_tags_H_dR_stack_9->SetBinError(2,0.006728669);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.3031467);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.3980281);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.4179165);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.4029652);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.3992117);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.4164672);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.4140197);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.3903063);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.392485);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.429441);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.4497453);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.4410163);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.4465272);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.4359966);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.296135);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.2221787);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.1849951);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.1500437);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.1242368);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.102515);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.08405786);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.0689935);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.05022585);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.03513447);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.02138706);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.01301085);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.004347588);
   VbbHcc_tags_H_dR_stack_9->SetEntries(326928);

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
   VbbHcc_tags_H_dR_stack_10->SetBinContent(2,0.005109106);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,8.584272);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,14.25608);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,16.59081);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,17.79234);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,15.76316);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,12.92346);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,11.37362);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,10.95603);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,11.40183);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,12.80942);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,14.03034);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,15.87726);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,17.56458);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,17.31259);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,9.816798);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,6.368006);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,4.387223);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,3.2214);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,2.252155);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,1.531907);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,1.084069);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.7061251);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.3965368);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.2078632);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.09397103);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.03332345);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.002033181);
   VbbHcc_tags_H_dR_stack_10->SetBinError(2,0.001817716);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.07396991);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.09540717);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.1030246);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.1067836);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.1004571);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.09090874);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.08520312);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.08363051);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.08527268);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.09037224);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.09458091);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.1006199);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.1057695);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.105042);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.07900444);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.06352323);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.05264009);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.04503417);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.03756629);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.03093067);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.0259932);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.02091567);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.01556158);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.01119875);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.007490054);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.004450638);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.001068118);
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
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.2171813);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.4815141);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.6413923);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.7197608);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.8752478);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.975588);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,1.031769);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,1.02734);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,1.087023);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,1.009811);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,1.024907);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,1.057159);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,1.059962);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,1.100095);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.4589339);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.23579);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.1246748);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.07223211);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.04726983);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.03534498);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.01664687);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.009530682);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.002496094);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.003915935);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(27,0.002177811);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.02324556);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.03542982);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.04156839);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.04320794);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.04885807);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.05083333);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.05421028);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.05194842);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.05414256);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.05195598);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.05158456);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.05270328);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.05177623);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.05533775);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.0367392);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.02431405);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.01801135);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.013115);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.01086321);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.009099648);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.006311494);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.004442169);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.002496094);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.00286248);
   VbbHcc_tags_H_dR_stack_11->SetBinError(27,0.002177811);
   VbbHcc_tags_H_dR_stack_11->SetEntries(5951);

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
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,2083.559);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,3861.95);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,4997.197);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,6628.097);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,8090.715);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,8363.812);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,7077.644);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,6507.961);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,5477.28);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,5396.478);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,5319.679);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,5557.055);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,6040.585);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,5495.622);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,2859.481);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,1733.072);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,1108.613);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,678.3242);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,520.538);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,282.7268);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,217.1426);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(24,164.5343);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,50.04804);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,44.77489);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,21.5202);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,123.4706);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,164.3828);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,187.0706);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,215.9348);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,240.2584);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,244.6628);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,222.5634);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,214.2045);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,194.6921);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,194.6117);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,193.5127);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,197.273);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,206.5096);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,197.8892);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,138.69);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,108.9171);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,87.80097);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,67.93925);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,59.8185);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,43.0546);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,38.72292);
   VbbHcc_tags_H_dR_stack_12->SetBinError(24,33.7179);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,18.12586);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,16.42927);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,15.95626);
   VbbHcc_tags_H_dR_stack_12->SetEntries(14113);

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
   
   TH1D *VbbHcc_tags_H_dR__45 = new TH1D("VbbHcc_tags_H_dR__45","",50,0,10);
   VbbHcc_tags_H_dR__45->SetBinContent(2,490);
   VbbHcc_tags_H_dR__45->SetBinContent(3,546342);
   VbbHcc_tags_H_dR__45->SetBinContent(4,618478);
   VbbHcc_tags_H_dR__45->SetBinContent(5,495155);
   VbbHcc_tags_H_dR__45->SetBinContent(6,492314);
   VbbHcc_tags_H_dR__45->SetBinContent(7,499031);
   VbbHcc_tags_H_dR__45->SetBinContent(8,516755);
   VbbHcc_tags_H_dR__45->SetBinContent(9,548683);
   VbbHcc_tags_H_dR__45->SetBinContent(10,593041);
   VbbHcc_tags_H_dR__45->SetBinContent(11,652986);
   VbbHcc_tags_H_dR__45->SetBinContent(12,726132);
   VbbHcc_tags_H_dR__45->SetBinContent(13,814650);
   VbbHcc_tags_H_dR__45->SetBinContent(14,920364);
   VbbHcc_tags_H_dR__45->SetBinContent(15,1032701);
   VbbHcc_tags_H_dR__45->SetBinContent(16,1084487);
   VbbHcc_tags_H_dR__45->SetBinContent(17,747948);
   VbbHcc_tags_H_dR__45->SetBinContent(18,567055);
   VbbHcc_tags_H_dR__45->SetBinContent(19,441535);
   VbbHcc_tags_H_dR__45->SetBinContent(20,345074);
   VbbHcc_tags_H_dR__45->SetBinContent(21,265866);
   VbbHcc_tags_H_dR__45->SetBinContent(22,199500);
   VbbHcc_tags_H_dR__45->SetBinContent(23,144659);
   VbbHcc_tags_H_dR__45->SetBinContent(24,96888);
   VbbHcc_tags_H_dR__45->SetBinContent(25,58357);
   VbbHcc_tags_H_dR__45->SetBinContent(26,31435);
   VbbHcc_tags_H_dR__45->SetBinContent(27,13943);
   VbbHcc_tags_H_dR__45->SetBinContent(28,4037);
   VbbHcc_tags_H_dR__45->SetBinContent(29,284);
   VbbHcc_tags_H_dR__45->SetEntries(1.245819e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__45->SetLineColor(ci);
   VbbHcc_tags_H_dR__45->SetLineWidth(2);
   VbbHcc_tags_H_dR__45->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__45->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__45->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR__45->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__45->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__45->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__45->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__45->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__45->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__45->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__45->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__45->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__45->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__45->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__45->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__45->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__45->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1045[50] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1045[50] = {
   0,
   89.58919,
   1167426,
   1537995,
   1297065,
   1241122,
   1287119,
   1444268,
   1448956,
   1673131,
   1809306,
   2007801,
   2089792,
   2416382,
   2668539,
   2800558,
   1801534,
   1392818,
   1031236,
   835214.6,
   608399.7,
   466612.2,
   341896.8,
   192731.8,
   146959.1,
   99569.23,
   23809.68,
   9019.286,
   29.26776,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1045[50] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1045[50] = {
   0,
   4.386547,
   47828.89,
   84667,
   43255.11,
   41981.19,
   43029.73,
   44757.4,
   52111.36,
   52037.04,
   87955.38,
   87587.42,
   57736.03,
   59995.52,
   65395.17,
   65033.11,
   52249.97,
   47320.68,
   40149.67,
   36622.91,
   31330.58,
   28083.47,
   23583.61,
   17377.91,
   15694.82,
   18089.94,
   6278.894,
   3682.48,
   1.990017,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_H_dR_fx1045,Graph_from_VbbHcc_tags_H_dR_fy1045,Graph_from_VbbHcc_tags_H_dR_fex1045,Graph_from_VbbHcc_tags_H_dR_fey1045);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1045 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1045","",100,0,11);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetMaximum(3152150);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1045);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_VbbHcc_18->cd();
  
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
   
   TH1D *data_mc_ratio__46 = new TH1D("data_mc_ratio__46","",50,0,10);
   data_mc_ratio__46->SetBinContent(2,5.46941);
   data_mc_ratio__46->SetBinContent(3,0.4679886);
   data_mc_ratio__46->SetBinContent(4,0.4021326);
   data_mc_ratio__46->SetBinContent(5,0.3817503);
   data_mc_ratio__46->SetBinContent(6,0.3966684);
   data_mc_ratio__46->SetBinContent(7,0.3877115);
   data_mc_ratio__46->SetBinContent(8,0.3577971);
   data_mc_ratio__46->SetBinContent(9,0.3786748);
   data_mc_ratio__46->SetBinContent(10,0.3544499);
   data_mc_ratio__46->SetBinContent(11,0.3609042);
   data_mc_ratio__46->SetBinContent(12,0.3616553);
   data_mc_ratio__46->SetBinContent(13,0.3898235);
   data_mc_ratio__46->SetBinContent(14,0.3808851);
   data_mc_ratio__46->SetBinContent(15,0.3869912);
   data_mc_ratio__46->SetBinContent(16,0.3872396);
   data_mc_ratio__46->SetBinContent(17,0.4151729);
   data_mc_ratio__46->SetBinContent(18,0.4071277);
   data_mc_ratio__46->SetBinContent(19,0.428161);
   data_mc_ratio__46->SetBinContent(20,0.4131561);
   data_mc_ratio__46->SetBinContent(21,0.4369923);
   data_mc_ratio__46->SetBinContent(22,0.4275499);
   data_mc_ratio__46->SetBinContent(23,0.4231071);
   data_mc_ratio__46->SetBinContent(24,0.502709);
   data_mc_ratio__46->SetBinContent(25,0.397097);
   data_mc_ratio__46->SetBinContent(26,0.31571);
   data_mc_ratio__46->SetBinContent(27,0.5856022);
   data_mc_ratio__46->SetBinContent(28,0.4475964);
   data_mc_ratio__46->SetBinContent(29,9.703511);
   data_mc_ratio__46->SetBinError(2,0.2470827);
   data_mc_ratio__46->SetBinError(3,0.0006331447);
   data_mc_ratio__46->SetBinError(4,0.000511337);
   data_mc_ratio__46->SetBinError(5,0.0005425113);
   data_mc_ratio__46->SetBinError(6,0.0005653358);
   data_mc_ratio__46->SetBinError(7,0.000548839);
   data_mc_ratio__46->SetBinError(8,0.0004977308);
   data_mc_ratio__46->SetBinError(9,0.0005112175);
   data_mc_ratio__46->SetBinError(10,0.0004602698);
   data_mc_ratio__46->SetBinError(11,0.0004466218);
   data_mc_ratio__46->SetBinError(12,0.0004244114);
   data_mc_ratio__46->SetBinError(13,0.0004318992);
   data_mc_ratio__46->SetBinError(14,0.0003970217);
   data_mc_ratio__46->SetBinError(15,0.0003808148);
   data_mc_ratio__46->SetBinError(16,0.0003718499);
   data_mc_ratio__46->SetBinError(17,0.0004800576);
   data_mc_ratio__46->SetBinError(18,0.0005406523);
   data_mc_ratio__46->SetBinError(19,0.000644354);
   data_mc_ratio__46->SetBinError(20,0.0007033283);
   data_mc_ratio__46->SetBinError(21,0.0008475053);
   data_mc_ratio__46->SetBinError(22,0.000957228);
   data_mc_ratio__46->SetBinError(23,0.001112443);
   data_mc_ratio__46->SetBinError(24,0.001615034);
   data_mc_ratio__46->SetBinError(25,0.001643804);
   data_mc_ratio__46->SetBinError(26,0.001780662);
   data_mc_ratio__46->SetBinError(27,0.004959348);
   data_mc_ratio__46->SetBinError(28,0.007044614);
   data_mc_ratio__46->SetBinError(29,0.5757974);
   data_mc_ratio__46->SetMinimum(0.4);
   data_mc_ratio__46->SetMaximum(1.6);
   data_mc_ratio__46->SetEntries(684.6547);
   data_mc_ratio__46->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__46->SetLineColor(ci);
   data_mc_ratio__46->SetLineWidth(2);
   data_mc_ratio__46->SetMarkerStyle(20);
   data_mc_ratio__46->SetMarkerSize(1.2);
   data_mc_ratio__46->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__46->GetXaxis()->SetRange(1,50);
   data_mc_ratio__46->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__46->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__46->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__46->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__46->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__46->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__46->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__46->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1046[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1046[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1046[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1046[50] = {
   0,
   0.0489629,
   0.04096953,
   0.05505024,
   0.03334845,
   0.03382518,
   0.03343103,
   0.03098967,
   0.03596477,
   0.0311016,
   0.04861278,
   0.04362355,
   0.02762764,
   0.02482866,
   0.02450599,
   0.02322148,
   0.02900305,
   0.03397476,
   0.03893355,
   0.0438485,
   0.0514967,
   0.0601859,
   0.06897874,
   0.0901663,
   0.1067972,
   0.181682,
   0.2637118,
   0.4082895,
   0.06799349,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1046,Graph_from_mc_statistical_error_fy1046,Graph_from_mc_statistical_error_fex1046,Graph_from_mc_statistical_error_fey1046);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1046 = new TH1F("Graph_Graph_from_mc_statistical_error1046","",100,0,11);
   Graph_Graph_from_mc_statistical_error1046->SetMinimum(0.5100526);
   Graph_Graph_from_mc_statistical_error1046->SetMaximum(1.489947);
   Graph_Graph_from_mc_statistical_error1046->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1046->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1046);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_VbbHcc_18->cd();
   H_dR_VbbHcc_18->Modified();
   H_dR_VbbHcc_18->cd();
   H_dR_VbbHcc_18->SetSelected(H_dR_VbbHcc_18);
}
