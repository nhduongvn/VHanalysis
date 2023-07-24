void Z_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Mon Jul 24 10:11:49 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(0,0,1,1);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-141.3245,6.314516,141193.1);
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
   st->SetMaximum(121009.2);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(0.01);
   st_stack_146->SetMaximum(127059.7);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetLabelSize(0.035);
   st_stack_146->GetXaxis()->SetTitleSize(0.035);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Events/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetLabelSize(0.05);
   st_stack_146->GetYaxis()->SetTitleSize(0.057);
   st_stack_146->GetYaxis()->SetTitleOffset(1.2);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetLabelSize(0.035);
   st_stack_146->GetZaxis()->SetTitleSize(0.035);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,16143.09);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,50941.48);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,32258.04);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,20796.89);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,11246.93);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,7981.836);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,7432.059);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,4756.059);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,3170.062);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,3204.745);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,1452.763);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,2721.235);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,1368.36);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,1088.935);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,552.3631);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,366.2516);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,847.9844);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,990.0339);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,708.9754);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,406.8217);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,322.2235);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,108.5156);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,53.55249);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,49.67239);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,0.4389415);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,8.000586);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(27,0.4389415);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(29,8.000586);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,1002.612);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,2537.543);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,2607.12);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,2064.251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,1252.167);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,1522.167);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,1557.982);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,845.9881);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,674.907);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,716.8575);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,443.2076);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,1265.21);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,442.29);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,364.762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,96.98903);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,67.51931);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,360.3436);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,435.5632);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,356.8906);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,253.7473);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,251.3979);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,43.77138);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,30.9453);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,30.72191);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,0.4389415);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,7.574374);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(27,0.4389415);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(29,7.574374);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(13510);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,45.3993);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,283.3554);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,312.1636);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,230.1167);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,154.8065);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,96.80274);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,67.74427);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,53.24255);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,39.80305);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,31.5452);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,26.57455);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,22.10152);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,20.20532);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,14.99189);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,14.94538);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,15.09862);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,12.22071);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,9.502693);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,5.577623);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,5.238432);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,2.625164);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,1.858925);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,1.243636);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,0.4412161);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,0.3142877);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,0.2855719);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,0.5012401);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,0.0934762);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.0934762);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,0.1920957);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,2.768497);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,6.644884);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,6.504334);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,5.606967);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,4.667428);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,3.533866);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,2.94174);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,2.653155);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,2.282736);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,2.018997);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,1.85313);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,1.662224);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,1.600591);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,1.362763);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,1.382569);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,1.539452);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,1.223003);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,1.092392);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,0.7436789);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,0.8392347);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,0.5931101);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,0.5098118);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.4162015);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.1472718);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.267486);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.1166787);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.2833488);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.06609765);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.06609765);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.09615108);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(19837);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(1,370.1159);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(2,2553.257);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(3,3338.131);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(4,2543.625);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(5,1610.201);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(6,1076.555);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(7,761.51);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(8,570.9899);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(9,446.2646);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(10,361.2976);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(11,304.7018);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(12,253.8178);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(13,231.2607);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(14,198.9206);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(15,177.9565);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(16,157.7309);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(17,133.8983);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(18,107.2042);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(19,78.16707);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(20,50.64174);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(21,30.05151);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(22,16.98021);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(23,9.113417);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(24,5.15081);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(25,3.837161);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(26,1.98584);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(27,1.204651);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(28,0.961126);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(29,0.4995966);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(30,0.7522021);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(31,1.033794);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(1,4.89355);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(2,12.77282);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(3,14.54246);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(4,12.64997);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(5,10.04889);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(6,8.208431);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(7,6.919164);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(8,5.976644);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(9,5.268231);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(10,4.743755);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(11,4.365104);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(12,3.981257);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(13,3.80457);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(14,3.531095);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(15,3.353999);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(16,3.170819);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(17,2.910192);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(18,2.597405);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(19,2.229983);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(20,1.793649);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(21,1.369125);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(22,1.032939);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(23,0.7450522);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(24,0.5684709);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(25,0.4863344);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(26,0.3508681);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(27,0.2716003);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(28,0.2471847);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(29,0.1805322);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(30,0.2227803);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(31,0.257645);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetEntries(257832);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(1,130.649);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(2,437.932);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(3,264.7323);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(4,138.5101);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(5,75.08121);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(6,56.3483);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(7,34.7422);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(8,33.01582);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(9,19.59877);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(10,13.82127);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(11,14.75943);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(12,7.95716);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(13,8.482714);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(14,6.874483);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(15,9.159119);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(16,5.163035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(17,5.376442);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(18,4.064545);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(19,3.326473);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(20,5.08063);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(21,1.644783);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(22,1.320561);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(23,0.450047);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(24,0.1917798);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(25,0.1917798);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(26,0.09588989);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(27,0.06630981);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(28,0.06630981);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(31,0.09588989);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(1,4.754974);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(2,14.63164);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(3,13.25315);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(4,10.39912);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(5,7.600155);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(6,5.871314);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(7,4.627564);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(8,5.284594);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(9,2.25518);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(10,1.774277);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(11,1.905095);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(12,1.157806);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(13,1.43548);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(14,1.27826);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(15,2.988907);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(16,1.053496);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(17,1.098223);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(18,1.0525);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(19,0.8710097);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(20,2.832507);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(21,0.5768939);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(22,0.6317187);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(23,0.3669089);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(24,0.1356088);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(25,0.1356088);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(26,0.09588989);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(27,0.06630981);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(28,0.06630981);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(31,0.09588989);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetEntries(8463);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(1,77.30617);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(2,216.2896);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(3,124.0725);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(4,67.3013);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(5,49.6641);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(6,25.3614);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(7,18.81038);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(8,14.40446);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(9,6.053463);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(10,7.37732);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(11,5.996135);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(12,6.154578);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(13,6.713528);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(14,2.473561);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(15,2.637788);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(16,11.95897);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(17,4.026313);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(18,3.38333);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(19,1.220394);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(20,0.6918945);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(21,7.014866);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(22,0.5619053);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(23,1.156629);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(24,0.4128823);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(25,0.08109801);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(27,0.1763629);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(31,1.156629);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(1,5.446991);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(2,15.81956);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(3,11.14048);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(4,9.047345);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(5,8.505417);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(6,3.867527);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(7,7.034172);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(8,3.371265);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(9,1.821959);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(10,2.186492);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(11,1.861119);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(12,2.137735);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(13,2.400759);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(14,0.6503945);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(15,0.7236825);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(16,6.94864);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(17,1.725827);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(18,1.723551);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(19,0.5254268);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(20,0.301878);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(21,6.632827);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(22,0.278512);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(23,1.156629);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(24,0.3415519);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(25,0.08109801);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(27,0.1763629);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(31,1.156629);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetEntries(3604);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,0.4032303);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,1.209691);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,0.4032303);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,0.4032303);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,0.4032303);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(12,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(14,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(18,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(24,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,0.2851269);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,0.4938542);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,0.2851269);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,0.2851269);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.2851269);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(12,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(14,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(18,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(24,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(22);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,2.322129);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,7.401785);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,3.628326);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,0.5805321);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(17,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(19,0.2902661);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(20,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(21,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,0.5805321);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,1.036457);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,0.7256652);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,0.2902661);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(17,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(19,0.2052491);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(20,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(21,0.145133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(106);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,2.241277);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,7.470923);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,2.054504);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,1.307411);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,0.7470923);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,0.5603192);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,0.1867731);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,0.3735461);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,0.1867731);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,0.3735461);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,0.1867731);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(20,0.3735461);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,0.6470009);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,1.181257);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,0.6194562);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,0.4941551);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,0.3735461);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,0.3235004);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,0.1867731);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,0.264137);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,0.1867731);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.264137);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.1867731);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(20,0.264137);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(86);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(1,0.5685211);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(2,3.341677);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(3,2.20625);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(4,0.9868364);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(5,0.4877653);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(6,0.2632641);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(7,0.206735);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(8,0.1485908);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(9,0.1130582);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(10,0.1195186);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(11,0.09206166);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(12,0.08883143);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(13,0.06298956);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(14,0.05814421);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(15,0.05814421);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(16,0.05652909);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(17,0.03068722);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(18,0.04522327);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(19,0.03230234);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(20,0.03068722);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(21,0.008075584);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(22,0.01453605);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(1,0.03030228);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(2,0.07346563);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(3,0.05969381);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(4,0.03992313);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(5,0.02806774);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(6,0.02062043);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(7,0.01827296);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(8,0.01549166);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(9,0.01351304);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(10,0.01389376);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(11,0.01219387);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(12,0.01197803);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(13,0.0100864);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(14,0.009690701);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(15,0.009690701);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(16,0.00955516);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(17,0.007040131);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(18,0.008546395);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(19,0.007223022);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(20,0.007040131);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(21,0.003611511);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(22,0.004845351);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetEntries(5585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(1,0.3951381);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(2,2.115834);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(3,1.694575);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(4,0.8897864);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(5,0.4324544);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(6,0.2574825);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(7,0.1708257);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(8,0.1277047);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(9,0.0990955);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(10,0.08375436);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(11,0.06094995);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(12,0.04685269);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(13,0.04892581);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(14,0.05058432);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(15,0.04519418);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(16,0.04021868);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(17,0.0389748);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(18,0.03358467);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(19,0.03151154);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(20,0.01741427);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(21,0.01243877);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(22,0.004146255);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(23,0.002487753);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(25,0.001243877);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(26,0.001658502);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(31,0.0004146255);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(1,0.01279978);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(2,0.02961889);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(3,0.02650686);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(4,0.0192075);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(5,0.01339054);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(6,0.01033242);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(7,0.008415979);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(8,0.007276649);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(9,0.006409955);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(10,0.005892936);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(11,0.005027067);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(12,0.00440753);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(13,0.004503986);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(14,0.004579689);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(15,0.004328818);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(16,0.004083588);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(17,0.004019944);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(18,0.00373163);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(19,0.003614622);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(20,0.002687081);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(21,0.002270998);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(22,0.001311161);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(23,0.001015621);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(25,0.0007181525);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(26,0.0008292511);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(31,0.0004146255);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.05056804);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.2243957);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.0711113);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.03160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.01264201);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.006321005);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.01264201);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(9,0.007901256);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(10,0.006321005);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.00893925);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.01883087);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.01060065);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.007067098);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.004469625);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.004469625);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.002234813);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(9,0.003533549);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(10,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.002234813);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.002234813);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(13,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(15,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(19,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(279);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(1,0.01204113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(2,0.07992818);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(3,0.04235155);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(4,0.01245634);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(5,0.005605353);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(6,0.002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(7,0.002906479);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(8,0.00145324);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(9,0.001868451);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(10,0.002283662);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(11,0.001038028);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(12,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(13,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(14,0.00145324);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(15,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(16,0.0008304226);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(17,0.000622817);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(18,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(20,0.0008304226);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(1,0.001581078);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(2,0.004073517);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(3,0.002965202);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(4,0.001608106);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(5,0.001078751);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(6,0.0006565067);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(7,0.0007767892);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(8,0.0005492729);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(9,0.000622817);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(10,0.0006885501);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(11,0.0004642204);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(12,0.0002935987);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(13,0.0002935987);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(14,0.0005492729);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(15,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(16,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(17,0.0003595835);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(18,0.0002935987);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(20,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetEntries(816);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0__291 = new TH1D("VbbHcc_algo_Z_dR_Bj0__291","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(1,2830);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(2,8069);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(3,5602);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(4,3738);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(5,2358);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(6,1576);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(7,1088);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(8,821);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(9,654);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(10,488);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(11,421);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(12,394);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(13,321);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(14,267);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(15,220);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(16,235);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(17,169);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(18,157);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(19,101);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(20,86);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(21,55);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(22,35);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(23,19);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(24,9);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(25,12);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(26,6);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(27,3);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(28,2);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(29,1);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(30,4);
   VbbHcc_algo_Z_dR_Bj0__291->SetBinContent(31,2);
   VbbHcc_algo_Z_dR_Bj0__291->SetEntries(29772);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0__291->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0__291->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0__291->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0__291->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0__291->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0__291->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__291->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__291->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__291->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__291->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__291->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__291->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__291->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0__291->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__291->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__291->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__291->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__291->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__291->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1291[30] = {
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
   5.9};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1291[30] = {
   16772.55,
   54454.16,
   36307.24,
   23780.65,
   13138.57,
   9238.194,
   8315.591,
   5428.713,
   3682.552,
   3619.33,
   1804.952,
   3011.981,
   1635.67,
   1312.507,
   757.167,
   556.3007,
   1003.722,
   1114.47,
   797.6228,
   469.0435,
   363.7271,
   129.2559,
   65.5187,
   56.0707,
   4.864512,
   10.36955,
   2.387505,
   1.120912,
   8.593659,
   0.7522021};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1291[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1291[30] = {
   1002.654,
   2537.676,
   2607.226,
   2064.343,
   1252.268,
   1522.209,
   1558.023,
   846.0367,
   674.9377,
   716.8816,
   443.241,
   1265.22,
   442.3182,
   364.7845,
   97.10557,
   67.97555,
   360.3632,
   435.5771,
   356.8999,
   253.7712,
   251.4905,
   43.79198,
   30.98084,
   30.73038,
   0.7250564,
   7.584,
   0.6182425,
   0.2643221,
   7.576814,
   0.2227803};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1291,Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1291,Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1291,Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1291);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetMinimum(0.4764796);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetMaximum(62690.96);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_algo_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__292 = new TH1D("data_mc_ratio__292","",30,0,6);
   data_mc_ratio__292->SetBinContent(1,0.1687281);
   data_mc_ratio__292->SetBinContent(2,0.1481797);
   data_mc_ratio__292->SetBinContent(3,0.1542943);
   data_mc_ratio__292->SetBinContent(4,0.1571866);
   data_mc_ratio__292->SetBinContent(5,0.1794715);
   data_mc_ratio__292->SetBinContent(6,0.1705961);
   data_mc_ratio__292->SetBinContent(7,0.1308386);
   data_mc_ratio__292->SetBinContent(8,0.1512329);
   data_mc_ratio__292->SetBinContent(9,0.1775942);
   data_mc_ratio__292->SetBinContent(10,0.1348316);
   data_mc_ratio__292->SetBinContent(11,0.2332472);
   data_mc_ratio__292->SetBinContent(12,0.1308109);
   data_mc_ratio__292->SetBinContent(13,0.1962499);
   data_mc_ratio__292->SetBinContent(14,0.2034275);
   data_mc_ratio__292->SetBinContent(15,0.2905568);
   data_mc_ratio__292->SetBinContent(16,0.4224334);
   data_mc_ratio__292->SetBinContent(17,0.1683734);
   data_mc_ratio__292->SetBinContent(18,0.1408742);
   data_mc_ratio__292->SetBinContent(19,0.1266263);
   data_mc_ratio__292->SetBinContent(20,0.1833518);
   data_mc_ratio__292->SetBinContent(21,0.1512123);
   data_mc_ratio__292->SetBinContent(22,0.2707808);
   data_mc_ratio__292->SetBinContent(23,0.2899935);
   data_mc_ratio__292->SetBinContent(24,0.1605117);
   data_mc_ratio__292->SetBinContent(25,2.466846);
   data_mc_ratio__292->SetBinContent(26,0.5786174);
   data_mc_ratio__292->SetBinContent(27,1.256542);
   data_mc_ratio__292->SetBinContent(28,1.784261);
   data_mc_ratio__292->SetBinContent(29,0.1163649);
   data_mc_ratio__292->SetBinContent(30,5.31772);
   data_mc_ratio__292->SetBinContent(31,0.8068345);
   data_mc_ratio__292->SetBinError(1,0.003171715);
   data_mc_ratio__292->SetBinError(2,0.001649601);
   data_mc_ratio__292->SetBinError(3,0.002061476);
   data_mc_ratio__292->SetBinError(4,0.002570963);
   data_mc_ratio__292->SetBinError(5,0.00369593);
   data_mc_ratio__292->SetBinError(6,0.004297254);
   data_mc_ratio__292->SetBinError(7,0.003966627);
   data_mc_ratio__292->SetBinError(8,0.005278065);
   data_mc_ratio__292->SetBinError(9,0.006944484);
   data_mc_ratio__292->SetBinError(10,0.006103539);
   data_mc_ratio__292->SetBinError(11,0.01136777);
   data_mc_ratio__292->SetBinError(12,0.00659016);
   data_mc_ratio__292->SetBinError(13,0.0109536);
   data_mc_ratio__292->SetBinError(14,0.01244956);
   data_mc_ratio__292->SetBinError(15,0.01958933);
   data_mc_ratio__292->SetBinError(16,0.02755652);
   data_mc_ratio__292->SetBinError(17,0.0129518);
   data_mc_ratio__292->SetBinError(18,0.01124299);
   data_mc_ratio__292->SetBinError(19,0.01259978);
   data_mc_ratio__292->SetBinError(20,0.01977134);
   data_mc_ratio__292->SetBinError(21,0.02038946);
   data_mc_ratio__292->SetBinError(22,0.0457703);
   data_mc_ratio__292->SetBinError(23,0.06652908);
   data_mc_ratio__292->SetBinError(24,0.05350388);
   data_mc_ratio__292->SetBinError(25,0.712117);
   data_mc_ratio__292->SetBinError(26,0.2362196);
   data_mc_ratio__292->SetBinError(27,0.7254647);
   data_mc_ratio__292->SetBinError(28,1.261663);
   data_mc_ratio__292->SetBinError(29,0.1163649);
   data_mc_ratio__292->SetBinError(30,2.65886);
   data_mc_ratio__292->SetBinError(31,0.6900787);
   data_mc_ratio__292->SetMinimum(0.4);
   data_mc_ratio__292->SetMaximum(1.6);
   data_mc_ratio__292->SetEntries(19.91947);
   data_mc_ratio__292->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__292->SetLineColor(ci);
   data_mc_ratio__292->SetLineWidth(2);
   data_mc_ratio__292->SetMarkerStyle(20);
   data_mc_ratio__292->SetMarkerSize(1.2);
   data_mc_ratio__292->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__292->GetXaxis()->SetRange(1,30);
   data_mc_ratio__292->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__292->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__292->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__292->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__292->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__292->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__292->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__292->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__292->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__292->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__292->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__292->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__292->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__292->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__292->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__292->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__292->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1292[30] = {
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
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1292[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1292[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1292[30] = {
   0.05977945,
   0.04660207,
   0.07181008,
   0.08680767,
   0.09531234,
   0.1647735,
   0.1873616,
   0.1558448,
   0.1832799,
   0.1980703,
   0.2455694,
   0.4200623,
   0.2704203,
   0.2779296,
   0.1282485,
   0.1221921,
   0.3590271,
   0.390838,
   0.4474544,
   0.5410397,
   0.6914263,
   0.3388007,
   0.4728548,
   0.548065,
   0.1490502,
   0.7313724,
   0.2589492,
   0.2358098,
   0.8816749,
   0.2961708};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1292,Graph_from_mc_statistical_error_fy1292,Graph_from_mc_statistical_error_fex1292,Graph_from_mc_statistical_error_fey1292);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1292 = new TH1F("Graph_Graph_from_mc_statistical_error1292","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1292->SetMinimum(0.1064926);
   Graph_Graph_from_mc_statistical_error1292->SetMaximum(2.05801);
   Graph_Graph_from_mc_statistical_error1292->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1292->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1292->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1292);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
