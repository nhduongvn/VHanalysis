void Z_dR_VbbHcc_17()
{
//=========Macro generated from canvas: Z_dR_VbbHcc_17/Z_dR_VbbHcc_17
//=========  (Tue Nov 22 09:15:08 2022) by ROOT version 6.14/09
   TCanvas *Z_dR_VbbHcc_17 = new TCanvas("Z_dR_VbbHcc_17", "Z_dR_VbbHcc_17",0,0,600,600);
   Z_dR_VbbHcc_17->SetHighLightColor(2);
   Z_dR_VbbHcc_17->Range(0,0,1,1);
   Z_dR_VbbHcc_17->SetFillColor(0);
   Z_dR_VbbHcc_17->SetFillStyle(4000);
   Z_dR_VbbHcc_17->SetBorderMode(0);
   Z_dR_VbbHcc_17->SetBorderSize(2);
   Z_dR_VbbHcc_17->SetFrameFillStyle(1000);
   Z_dR_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-5262.551,10.52419,5257299);
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
   st->SetMaximum(4505755);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",50,0,10);
   st_stack_18->SetMinimum(0.01);
   st_stack_18->SetMaximum(4731042);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetRange(1,50);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetLabelSize(0.035);
   st_stack_18->GetXaxis()->SetTitleSize(0.035);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetLabelSize(0.05);
   st_stack_18->GetYaxis()->SetTitleSize(0.057);
   st_stack_18->GetYaxis()->SetTitleOffset(1.2);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetLabelSize(0.035);
   st_stack_18->GetZaxis()->SetTitleSize(0.035);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",50,0,10);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,1339737);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,1812364);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,1375652);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,1270756);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,1062409);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,1085630);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,1039414);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,1079212);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,1056422);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,1180538);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,1267503);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,1364302);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,1543340);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,1680586);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,1023522);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,634129.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,476545.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,327542.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,247272.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,156425.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,115977.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,88229.07);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,31815.24);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,24380.44);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,16204.41);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,4856.452);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,42055.71);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,48558.06);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,42515.19);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,40798.04);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,37412.74);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,37767.19);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,36806.27);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,37577.98);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,37134.82);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,39341.85);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,40833.55);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,42133.04);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,45061.57);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,46883.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,36547.99);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,28803.96);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,24903.78);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,20705.26);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,17951.76);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,14402.95);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,12270.68);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,10695.43);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,6428.384);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,5498.571);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,4578.553);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,2460.622);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(17117);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",50,0,10);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,2.66003);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,3248.993);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,6252.038);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,7331.053);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,8970.725);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,10559.29);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,11935.55);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,13354.91);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,14698.48);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,16074.71);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,17400.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,18647.4);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,19942.36);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,20775.05);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,20224.34);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,11212.14);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,6843.939);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,4464.175);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,2837.386);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,1874.727);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,1154.37);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,699.9783);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,404.168);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,193.9944);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,91.00432);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,35.1287);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,8.004093);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,0.5623629);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.7493722);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,23.82047);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,32.61069);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,35.45338);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,39.33782);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,42.76772);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,45.3838);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,48.00367);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,50.20084);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,52.57123);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,54.64849);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,56.50635);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,58.56255);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,59.77359);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,59.07805);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,44.71062);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,35.37484);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,28.87546);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,23.01702);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,18.8946);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,14.86501);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,11.51576);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,8.814546);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,5.982675);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,3.951382);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,2.460181);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.15652);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.3351711);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(2959104);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",50,0,10);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,27.32729);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,42880.46);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,86093.16);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,102797.8);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,125352);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,146908.6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,167428.6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,187612.6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,208267.1);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,230146.5);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,253789.1);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,278486.5);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,302737.4);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,325084.2);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,318381.9);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,167746.3);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,95951.47);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,57103.36);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,33833.46);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,19601.42);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,11088.84);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,5985.725);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,3061.037);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,1453.205);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,613.6807);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,206.7485);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,46.40868);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,2.46252);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,1.392821);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,55.55399);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,78.92885);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,86.33605);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,95.38257);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,103.3039);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,110.2985);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,116.7875);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,123.0648);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,129.4151);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,135.9705);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,142.5098);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,148.7059);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,154.1914);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,152.6952);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,110.8322);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,83.77477);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,64.59782);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,49.68501);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,37.76372);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,28.35073);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,20.76674);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,14.76301);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,10.17466);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,6.57708);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,3.752954);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,1.766964);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,0.4026955);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(4.843218e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",50,0,10);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(2,0.7363993);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,1513.267);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,4026.514);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,5831.075);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,5719.855);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,4647.421);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,3739.463);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,3141.851);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,2799.61);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,2598.011);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,2640.762);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,2659.574);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,2875.965);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,3051.231);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,2944.886);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,1524.881);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,1012.227);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,675.8661);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,491.9875);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,344.6119);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,217.059);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,137.5366);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,80.59979);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,40.64326);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,23.79022);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,7.893295);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,4.538105);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(2,0.523677);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,24.381);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,39.70876);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,47.77244);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,47.34436);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,42.6446);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,38.22208);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,35.09376);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,33.01037);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,31.92105);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,32.15693);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,32.2059);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,33.52971);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,34.52915);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,33.96145);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,24.35712);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,19.86675);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,16.19095);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,13.824);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,11.51046);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,9.13621);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,7.268061);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,5.484832);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,3.962558);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,2.922526);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,1.672245);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,1.469429);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(141537);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",50,0,10);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(2,6.301682);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,2716.328);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,3055.215);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,2101.156);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,1787.637);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,1620.767);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,1482.637);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,1429.37);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,1539.357);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,1620.556);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,1749.289);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,1949.547);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,2046.587);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,2431.288);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,2454.729);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,1414.647);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,992.9293);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,685.2818);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,500.4412);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,339.7444);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,241.3697);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,168.5582);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,98.26396);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,52.58048);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,24.85615);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,8.001398);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,1.404452);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(2,2.921052);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,60.19576);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,63.72287);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,52.91106);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,48.79606);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,46.34607);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,44.4463);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,43.32249);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,45.12112);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,46.42293);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,48.30018);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,50.68555);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,52.18911);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,56.88835);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,57.17657);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,43.28297);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,36.20222);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,30.10988);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,25.60258);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,21.03071);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,17.42654);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,14.70844);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,11.07418);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,8.097781);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,5.522436);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,3.102626);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,1.404452);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(25853);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",50,0,10);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(3,43.79843);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(4,47.68713);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(5,41.39547);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(6,44.83218);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(7,42.67731);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(8,50.84644);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(9,46.73217);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(10,63.49031);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(11,65.6674);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(12,70.85157);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(13,78.81388);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(14,89.76416);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(15,91.14282);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(16,101.4672);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(17,57.53609);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(18,36.5573);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(19,23.13934);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(20,20.6986);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(21,12.85364);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(22,12.01494);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(23,5.686928);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(24,5.849706);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(25,2.082125);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(26,0.252518);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(27,0.05813051);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(3,3.158099);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(4,3.325682);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(5,3.091946);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(6,3.253169);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(7,3.147457);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(8,3.449428);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(9,3.294988);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(10,3.896954);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(11,3.903883);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(12,4.082212);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(13,4.324486);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(14,4.619077);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(15,4.603777);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(16,4.872329);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(17,3.686325);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(18,2.918654);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(19,2.313467);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(20,2.180173);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(21,1.690375);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(22,1.674205);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(23,1.150612);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(24,1.186373);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(25,0.6989401);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(26,0.252518);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(27,0.05813051);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(4750);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",50,0,10);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(2,0.1802224);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,74.36635);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,124.009);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,137.1153);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,152.1863);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(7,161.6587);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,157.1333);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,138.7611);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,127.8036);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,119.4382);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(12,118.2224);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,116.2657);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,115.0744);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,131.3265);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,113.8715);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,50.62639);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(18,25.06295);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,18.5164);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(20,13.78276);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(21,7.088965);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(22,5.975404);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(23,4.511907);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(24,2.674426);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(25,2.278588);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(26,0.5685285);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(27,0.188822);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(2,0.1802224);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,3.533698);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,4.566196);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,4.801833);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,5.041167);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(7,5.23826);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,5.135849);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,4.852802);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,4.630668);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,4.514301);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(12,4.498172);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,4.453973);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,4.37957);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,4.709411);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,4.401225);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,2.946868);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(18,2.029131);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,1.766827);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(20,1.534891);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(21,1.067424);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(22,0.9734059);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(23,0.8526037);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(24,0.6379957);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(25,0.6099656);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(26,0.3285218);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(27,0.1357512);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(11906);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",50,0,10);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,50.61447);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,90.00501);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,115.3196);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,129.8721);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,132.9966);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,129.3556);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,129.9217);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,116.7951);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,114.3116);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,120.8131);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,120.0411);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,135.5618);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,145.1543);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,128.3845);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,46.47764);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,21.99207);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,13.22066);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,8.780343);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,6.433954);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,3.002984);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,3.403296);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(24,1.456482);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.6289882);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(26,0.1937001);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,3.319894);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,4.427424);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,4.982424);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,5.355014);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,5.417315);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,5.323969);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,5.309117);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,5.065348);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,5.009782);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,5.130856);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,5.170185);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,5.442942);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,5.62935);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,5.275122);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,3.159619);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,2.185689);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,1.702807);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,1.368204);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,1.172583);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.8120339);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.8685687);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(24,0.5591331);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.3645903);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(26,0.1937001);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(8452);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",50,0,10);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(2,0.005942507);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,9.932841);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,23.89261);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,32.5009);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,40.90135);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,46.37811);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,48.21774);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,48.82635);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,47.53573);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,45.23028);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,44.18982);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,43.82048);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,45.37104);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,47.42826);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,44.35909);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,14.32638);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,5.237638);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,2.458937);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,1.157735);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,0.7522999);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,0.5176655);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.2858935);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.167596);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.09991863);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.03247461);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.01284393);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.007867189);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(2,0.003477684);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.1379321);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.2145128);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.2506051);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.2807474);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.2992605);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.3049067);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.3069387);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.3031008);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.2956853);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.2922383);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.2909814);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.2960101);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.3027482);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.2927121);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.1662256);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.0998783);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.06823269);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.04674532);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.03764921);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.03100979);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.0227852);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.01740055);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.01304578);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.007587699);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.005508214);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.003987314);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(337563);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",50,0,10);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(2,0.004594954);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,4.365851);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,9.348631);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,12.91768);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,16.08053);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,17.23968);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,16.09483);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,13.32921);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,10.76085);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,9.073248);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,8.194633);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,8.165989);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,8.38164);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,8.88621);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,8.489714);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,3.418812);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,1.573858);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,0.8014233);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,0.4390157);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.2520098);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.1451845);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.08090202);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.04506702);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.01963219);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.005053462);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.00413287);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.0008242267);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(2,0.001456304);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.0438893);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.06423188);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.07559221);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.08441354);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.08748703);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.08455694);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.07695916);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.06914649);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.0634584);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.06030831);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.06017129);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.06096947);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.06278025);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.06140404);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.03888336);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.02636443);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.01881142);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.01388302);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.01050985);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.007958491);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.005943815);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.004434987);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.002863675);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.001467173);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.001313313);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.000588107);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(363165);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",50,0,10);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.2922892);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.4986445);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.7389377);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.8900909);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.7950448);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.7896947);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.7152139);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.6734113);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.6429228);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.5728051);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.5792646);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.6062383);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.5703916);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.5669522);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.2174776);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.1030923);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.03854201);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.03765681);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(21,0.008721292);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(22,0.01527674);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.01062894);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(24,0.005865016);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(25,0.00514705);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.02347941);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.0298707);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.0368523);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.04030867);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.03829365);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.03811259);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.03623196);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.03502323);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.0343783);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.03251869);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.0324828);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.03321626);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.03199837);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.03271205);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.01965154);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.01404992);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.007957014);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.008279681);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(21,0.003913481);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(22,0.004916016);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.00427903);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(24,0.003081434);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(25,0.002998255);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(6268);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",50,0,10);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,1813.591);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,4163.509);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,6966.86);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,7862.426);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,6534.221);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,4471.758);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,3196.725);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,2493.854);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,2445.065);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,2201.282);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,2317.274);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,2536.011);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,2531.705);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,2601.142);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,1248.475);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,766.143);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,466.5315);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,202.2484);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,167.7269);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,83.15987);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,52.59259);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(24,28.10248);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,9.903539);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,5.512161);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,97.66179);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,147.7465);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,190.781);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,202.5317);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,185.311);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,152.5226);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,128.5278);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,114.3507);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,112.8943);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,108.0681);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,109.5091);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,115.1304);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,113.7508);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,115.9547);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,81.03676);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,62.86262);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,49.48901);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,31.0261);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,29.7871);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,20.57444);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,16.00209);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(24,11.62202);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,6.920965);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,5.512161);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(12187);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR__35 = new TH1D("VbbHcc_tags_Z_dR__35","",50,0,10);
   VbbHcc_tags_Z_dR__35->SetBinContent(2,186);
   VbbHcc_tags_Z_dR__35->SetBinContent(3,326036);
   VbbHcc_tags_Z_dR__35->SetBinContent(4,340495);
   VbbHcc_tags_Z_dR__35->SetBinContent(5,235495);
   VbbHcc_tags_Z_dR__35->SetBinContent(6,205524);
   VbbHcc_tags_Z_dR__35->SetBinContent(7,189532);
   VbbHcc_tags_Z_dR__35->SetBinContent(8,179442);
   VbbHcc_tags_Z_dR__35->SetBinContent(9,176535);
   VbbHcc_tags_Z_dR__35->SetBinContent(10,177722);
   VbbHcc_tags_Z_dR__35->SetBinContent(11,183920);
   VbbHcc_tags_Z_dR__35->SetBinContent(12,194232);
   VbbHcc_tags_Z_dR__35->SetBinContent(13,208190);
   VbbHcc_tags_Z_dR__35->SetBinContent(14,228241);
   VbbHcc_tags_Z_dR__35->SetBinContent(15,251521);
   VbbHcc_tags_Z_dR__35->SetBinContent(16,258482);
   VbbHcc_tags_Z_dR__35->SetBinContent(17,152210);
   VbbHcc_tags_Z_dR__35->SetBinContent(18,97693);
   VbbHcc_tags_Z_dR__35->SetBinContent(19,65900);
   VbbHcc_tags_Z_dR__35->SetBinContent(20,44739);
   VbbHcc_tags_Z_dR__35->SetBinContent(21,29675);
   VbbHcc_tags_Z_dR__35->SetBinContent(22,19774);
   VbbHcc_tags_Z_dR__35->SetBinContent(23,12379);
   VbbHcc_tags_Z_dR__35->SetBinContent(24,7199);
   VbbHcc_tags_Z_dR__35->SetBinContent(25,3928);
   VbbHcc_tags_Z_dR__35->SetBinContent(26,1863);
   VbbHcc_tags_Z_dR__35->SetBinContent(27,742);
   VbbHcc_tags_Z_dR__35->SetBinContent(28,179);
   VbbHcc_tags_Z_dR__35->SetBinContent(29,10);
   VbbHcc_tags_Z_dR__35->SetEntries(3591844);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__35->SetLineColor(ci);
   VbbHcc_tags_Z_dR__35->SetLineWidth(2);
   VbbHcc_tags_Z_dR__35->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__35->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__35->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__35->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__35->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__35->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__35->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1035[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1035[50] = {
   0,
   37.21616,
   1392093,
   1916250,
   1501020,
   1420833,
   1233081,
   1275091,
   1248527,
   1309377,
   1309661,
   1458681,
   1571931,
   1694835,
   1897638,
   2027590,
   1206841,
   739787.1,
   539998.6,
   365453.2,
   269628,
   169231.9,
   123035.6,
   91911.44,
   33570.68,
   25134.82,
   16467.96,
   4916.816,
   3.024882,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1035[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1035[50] = {
   0,
   3.367609,
   42055.92,
   48558.42,
   42515.78,
   40798.73,
   37413.42,
   37767.73,
   36806.75,
   37578.43,
   37135.3,
   39342.32,
   40834.03,
   42133.54,
   45062.07,
   46883.88,
   36548.31,
   28804.2,
   24903.96,
   20705.38,
   17951.85,
   14403.01,
   12270.72,
   10695.46,
   6428.405,
   5498.58,
   4578.56,
   2460.624,
   0.5239307,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Z_dR_fx1035,Graph_from_VbbHcc_tags_Z_dR_fy1035,Graph_from_VbbHcc_tags_Z_dR_fex1035,Graph_from_VbbHcc_tags_Z_dR_fey1035);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1035 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1035","",100,0,11);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetMaximum(2281921);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR1035);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_VbbHcc_17->cd();
  
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
   
   TH1D *data_mc_ratio__36 = new TH1D("data_mc_ratio__36","",50,0,10);
   data_mc_ratio__36->SetBinContent(2,4.997829);
   data_mc_ratio__36->SetBinContent(3,0.2342056);
   data_mc_ratio__36->SetBinContent(4,0.1776882);
   data_mc_ratio__36->SetBinContent(5,0.15689);
   data_mc_ratio__36->SetBinContent(6,0.1446503);
   data_mc_ratio__36->SetBinContent(7,0.153706);
   data_mc_ratio__36->SetBinContent(8,0.1407288);
   data_mc_ratio__36->SetBinContent(9,0.1413946);
   data_mc_ratio__36->SetBinContent(10,0.1357302);
   data_mc_ratio__36->SetBinContent(11,0.1404332);
   data_mc_ratio__36->SetBinContent(12,0.1331559);
   data_mc_ratio__36->SetBinContent(13,0.1324422);
   data_mc_ratio__36->SetBinContent(14,0.1346686);
   data_mc_ratio__36->SetBinContent(15,0.1325442);
   data_mc_ratio__36->SetBinContent(16,0.1274824);
   data_mc_ratio__36->SetBinContent(17,0.1261227);
   data_mc_ratio__36->SetBinContent(18,0.1320556);
   data_mc_ratio__36->SetBinContent(19,0.1220374);
   data_mc_ratio__36->SetBinContent(20,0.1224206);
   data_mc_ratio__36->SetBinContent(21,0.110059);
   data_mc_ratio__36->SetBinContent(22,0.1168456);
   data_mc_ratio__36->SetBinContent(23,0.1006131);
   data_mc_ratio__36->SetBinContent(24,0.0783254);
   data_mc_ratio__36->SetBinContent(25,0.1170069);
   data_mc_ratio__36->SetBinContent(26,0.07412029);
   data_mc_ratio__36->SetBinContent(27,0.04505719);
   data_mc_ratio__36->SetBinContent(28,0.03640567);
   data_mc_ratio__36->SetBinContent(29,3.305914);
   data_mc_ratio__36->SetBinError(2,0.3664586);
   data_mc_ratio__36->SetBinError(3,0.0004101706);
   data_mc_ratio__36->SetBinError(4,0.0003045111);
   data_mc_ratio__36->SetBinError(5,0.0003232991);
   data_mc_ratio__36->SetBinError(6,0.0003190716);
   data_mc_ratio__36->SetBinError(7,0.0003530608);
   data_mc_ratio__36->SetBinError(8,0.0003322163);
   data_mc_ratio__36->SetBinError(9,0.000336525);
   data_mc_ratio__36->SetBinError(10,0.0003219629);
   data_mc_ratio__36->SetBinError(11,0.0003274579);
   data_mc_ratio__36->SetBinError(12,0.0003021343);
   data_mc_ratio__36->SetBinError(13,0.0002902662);
   data_mc_ratio__36->SetBinError(14,0.0002818833);
   data_mc_ratio__36->SetBinError(15,0.0002642857);
   data_mc_ratio__36->SetBinError(16,0.0002507466);
   data_mc_ratio__36->SetBinError(17,0.0003232746);
   data_mc_ratio__36->SetBinError(18,0.0004224983);
   data_mc_ratio__36->SetBinError(19,0.0004753901);
   data_mc_ratio__36->SetBinError(20,0.0005787772);
   data_mc_ratio__36->SetBinError(21,0.0006388962);
   data_mc_ratio__36->SetBinError(22,0.0008309312);
   data_mc_ratio__36->SetBinError(23,0.0009042987);
   data_mc_ratio__36->SetBinError(24,0.0009231378);
   data_mc_ratio__36->SetBinError(25,0.00186692);
   data_mc_ratio__36->SetBinError(26,0.001717239);
   data_mc_ratio__36->SetBinError(27,0.001654102);
   data_mc_ratio__36->SetBinError(28,0.002721088);
   data_mc_ratio__36->SetBinError(29,1.045422);
   data_mc_ratio__36->SetMinimum(0.4);
   data_mc_ratio__36->SetMaximum(1.6);
   data_mc_ratio__36->SetEntries(75.99825);
   data_mc_ratio__36->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__36->SetLineColor(ci);
   data_mc_ratio__36->SetLineWidth(2);
   data_mc_ratio__36->SetMarkerStyle(20);
   data_mc_ratio__36->SetMarkerSize(1.2);
   data_mc_ratio__36->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__36->GetXaxis()->SetRange(1,50);
   data_mc_ratio__36->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__36->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__36->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__36->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__36->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__36->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__36->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__36->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__36->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__36->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__36->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__36->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__36->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__36->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1036[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1036[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1036[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1036[50] = {
   0,
   0.0904878,
   0.03021057,
   0.02534034,
   0.0283246,
   0.02871465,
   0.03034141,
   0.02961964,
   0.02948013,
   0.02869947,
   0.02835488,
   0.02697116,
   0.02597698,
   0.02485997,
   0.0237464,
   0.02312296,
   0.03028428,
   0.0389358,
   0.04611856,
   0.05665671,
   0.06658006,
   0.08510814,
   0.09973309,
   0.116367,
   0.1914887,
   0.2187635,
   0.2780284,
   0.5004506,
   0.1732069,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1036,Graph_from_mc_statistical_error_fy1036,Graph_from_mc_statistical_error_fex1036,Graph_from_mc_statistical_error_fey1036);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1036 = new TH1F("Graph_Graph_from_mc_statistical_error1036","",100,0,11);
   Graph_Graph_from_mc_statistical_error1036->SetMinimum(0.3994592);
   Graph_Graph_from_mc_statistical_error1036->SetMaximum(1.600541);
   Graph_Graph_from_mc_statistical_error1036->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1036->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1036);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_VbbHcc_17->cd();
   Z_dR_VbbHcc_17->Modified();
   Z_dR_VbbHcc_17->cd();
   Z_dR_VbbHcc_17->SetSelected(Z_dR_VbbHcc_17);
}
