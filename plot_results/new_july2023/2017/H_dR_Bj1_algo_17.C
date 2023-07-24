void H_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Mon Jul 24 10:11:49 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(0,0,1,1);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-40.83217,6.314516,40801.33);
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
   st->SetMaximum(34968.68);
   
   TH1F *st_stack_142 = new TH1F("st_stack_142","",30,0,6);
   st_stack_142->SetMinimum(0.01);
   st_stack_142->SetMaximum(36717.12);
   st_stack_142->SetDirectory(0);
   st_stack_142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_142->SetLineColor(ci);
   st_stack_142->GetXaxis()->SetRange(1,30);
   st_stack_142->GetXaxis()->SetLabelFont(42);
   st_stack_142->GetXaxis()->SetLabelSize(0.035);
   st_stack_142->GetXaxis()->SetTitleSize(0.035);
   st_stack_142->GetXaxis()->SetTitleFont(42);
   st_stack_142->GetYaxis()->SetTitle("Events/0.2");
   st_stack_142->GetYaxis()->SetLabelFont(42);
   st_stack_142->GetYaxis()->SetLabelSize(0.05);
   st_stack_142->GetYaxis()->SetTitleSize(0.057);
   st_stack_142->GetYaxis()->SetTitleOffset(1.2);
   st_stack_142->GetYaxis()->SetTitleFont(42);
   st_stack_142->GetZaxis()->SetLabelFont(42);
   st_stack_142->GetZaxis()->SetLabelSize(0.035);
   st_stack_142->GetZaxis()->SetTitleSize(0.035);
   st_stack_142->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_142);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,7678.703);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,14160.48);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,11854.74);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,8732.844);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,11494.29);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,11451.21);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,11893.66);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,12174.99);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,7495.228);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,8129.299);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,8531.442);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,6368.307);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,6607.504);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,6313.805);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,8466.33);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,3982.696);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,3244.992);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,3922.192);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,2431.88);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,3126.409);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,2587.374);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,887.4576);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,2251.067);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,1364.63);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,1342.07);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,1237.932);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,529.7299);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(29,95.22193);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,537.781);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(31,91.48045);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,1079.172);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,1399.159);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,1343.421);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,941.9015);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,1275.623);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,1996.216);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,1387.288);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,1720.532);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,899.723);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,1501.927);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,1082.664);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,853.8499);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,855.7609);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,819.2984);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,1878.925);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,585.392);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,400.3153);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,636.266);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,454.5836);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,627.7344);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,573.3554);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,108.2896);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,618.3088);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,441.4959);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,440.9926);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,439.9773);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,256.4593);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(29,30.21792);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,352.8268);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(31,34.84221);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(13510);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.2624063);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,50.04094);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,91.35211);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,68.79683);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,85.20709);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,92.54424);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,94.49211);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,92.15189);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,84.72947);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,85.73839);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,83.96181);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,80.26428);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,69.72413);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,72.30906);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,63.32806);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,66.16408);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,53.16967);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,50.02904);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,43.58991);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,30.55429);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,24.5215);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,22.84846);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,17.96583);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,15.12017);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,10.2013);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,7.419238);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,5.006173);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,2.584552);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,2.048699);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,1.406838);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,1.552602);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.2624063);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,3.274558);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,4.258932);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,3.359715);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,3.572575);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,3.646211);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,3.621852);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,3.533084);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,3.222698);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,3.390481);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,3.386071);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,3.240763);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,2.995755);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,3.024513);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,2.713277);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,2.90853);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,2.543499);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,2.514394);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,2.370346);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,1.830515);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,1.648357);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,1.724231);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,1.473488);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.384059);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.057151);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.933653);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.7971888);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.542771);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.5176215);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.2615748);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.4337657);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(19837);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(1,0.715872);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(2,527.5661);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(3,1268.535);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(4,1277.238);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(5,1259.14);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(6,1167.371);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(7,1081.478);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(8,972.5927);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(9,890.0902);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(10,805.207);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(11,733.503);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(12,661.6783);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(13,613.1406);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(14,577.7195);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(15,547.2042);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(16,520.1473);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(17,446.3344);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(18,399.2413);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(19,347.6042);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(20,295.7055);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(21,252.6123);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(22,205.0836);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(23,160.219);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(24,121.9855);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(25,93.31818);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(26,64.27669);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(27,45.49267);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(28,25.83065);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(29,14.78804);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(30,10.23112);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(31,11.76626);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(1,0.2050378);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(2,5.700435);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(3,8.928534);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(4,9.058652);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(5,9.019298);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(6,8.634949);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(7,8.290032);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(8,7.845842);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(9,7.481924);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(10,7.125702);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(11,6.789805);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(12,6.442853);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(13,6.196918);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(14,6.01038);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(15,5.856813);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(16,5.70988);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(17,5.292295);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(18,5.0025);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(19,4.672762);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(20,4.298433);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(21,3.965471);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(22,3.580062);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(23,3.153928);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(24,2.748271);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(25,2.390064);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(26,1.973335);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(27,1.668425);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(28,1.247705);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(29,0.9399954);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(30,0.7809843);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(31,0.8339674);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetEntries(257832);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(2,63.46828);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(3,114.9906);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(4,101.6672);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(5,100.1308);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(6,80.60627);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(7,95.73662);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(8,67.66885);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(9,66.05331);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(10,63.97743);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(11,67.37491);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(12,67.0633);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(13,53.94617);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(14,49.10218);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(15,39.89982);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(16,38.51651);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(17,32.38806);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(18,35.18967);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(19,33.89976);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(20,21.71856);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(21,23.53096);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(22,15.44978);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(23,12.331);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(24,12.85567);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(25,7.242584);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(26,5.376619);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(27,3.657667);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(28,1.651755);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(29,1.55622);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(30,0.3611291);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(31,1.386693);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(2,5.356971);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(3,7.79104);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(4,7.240887);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(5,8.449005);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(6,6.291593);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(7,9.122731);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(8,5.458897);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(9,5.861745);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(10,5.243415);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(11,7.003553);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(12,6.978986);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(13,5.02952);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(14,5.49804);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(15,3.778122);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(16,3.842256);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(17,2.557352);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(18,4.547787);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(19,4.566045);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(20,2.026128);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(21,4.330554);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(22,3.210149);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(23,1.598032);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(24,1.67528);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(25,1.249835);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(26,1.139973);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(27,0.7705528);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(28,0.4839031);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(29,0.6417621);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(30,0.1636546);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(31,0.5567943);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetEntries(8463);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(1,0.0003270334);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(2,34.86672);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(3,88.21026);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(4,57.0311);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(5,57.15442);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(6,41.22436);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(7,43.66332);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(8,49.98096);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(9,30.44655);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(10,33.92736);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(11,22.21374);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(12,21.65181);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(13,22.36298);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(14,20.8368);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(15,22.9622);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(16,19.46413);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(17,21.44156);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(18,10.96497);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(19,14.20313);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(20,9.918403);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(21,10.32658);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(22,3.968216);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(23,4.64881);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(24,5.788674);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(25,7.721591);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(26,3.522669);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(27,1.779251);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(28,1.182567);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(29,0.418359);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(30,0.5757085);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(1,0.0003270334);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(2,4.91463);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(3,12.00225);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(4,9.064619);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(5,10.64749);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(6,4.996229);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(7,5.267121);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(8,12.22415);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(9,4.08393);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(10,4.615625);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(11,3.235495);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(12,3.173692);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(13,3.541955);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(14,3.193929);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(15,7.216318);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(16,3.029482);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(17,3.435016);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(18,2.236285);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(19,2.81372);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(20,2.227925);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(21,2.512388);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(22,0.761971);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(23,1.353011);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(24,1.791524);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(25,2.20416);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(26,1.675545);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(27,0.581493);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(28,0.3997344);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(29,0.1752782);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(30,0.4172739);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetEntries(3604);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(3,0.6048454);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(7,0.4032303);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(8,0.2016151);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(11,0.2016151);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(12,0.4032303);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(13,0.2016151);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(14,0.4032303);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(16,0.2016151);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(17,0.2016151);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(20,0.6048454);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(21,0.4032303);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(23,0.2016151);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(25,0.4032303);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(3,0.3492077);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(7,0.2851269);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(8,0.2016151);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(11,0.2016151);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(12,0.2851269);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(13,0.2016151);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(14,0.2851269);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(16,0.2016151);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(17,0.2016151);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(20,0.3492077);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(21,0.2851269);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(23,0.2016151);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(25,0.2851269);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetEntries(22);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(2,2.031863);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(3,4.644257);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(4,1.741596);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(5,0.4353991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(6,0.8707982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(7,0.8707982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(8,0.5805321);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(9,0.5805321);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(10,0.4353991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(11,0.7256652);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(12,0.2902661);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(13,0.145133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(15,0.145133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(16,0.4353991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(17,0.2902661);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(18,0.145133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(19,0.2902661);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(22,0.145133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(23,0.145133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(24,0.145133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(26,0.2902661);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(2,0.5430381);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(3,0.8209964);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(4,0.5027556);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(5,0.2513778);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(6,0.3555019);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(7,0.3555019);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(8,0.2902661);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(9,0.2902661);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(10,0.2513778);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(11,0.3245273);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(12,0.2052491);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(13,0.145133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(15,0.145133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(16,0.2513778);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(17,0.2052491);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(18,0.145133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(19,0.2052491);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(22,0.145133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(23,0.145133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(24,0.145133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(26,0.2052491);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetEntries(106);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(2,1.120638);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(3,3.548688);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(4,3.175142);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(5,1.120638);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(6,1.494185);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(7,0.5603192);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(8,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(9,0.5603192);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(10,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(11,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(12,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(13,0.3735461);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(16,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(17,0.3735461);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(18,0.3735461);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(19,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(20,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(21,0.3735461);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(22,0.3735461);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(24,0.5603192);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(26,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(27,0.5603192);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(2,0.4574987);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(3,0.8141249);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(4,0.7700851);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(5,0.4574987);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(6,0.528274);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(7,0.3235004);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(8,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(9,0.3235004);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(10,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(11,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(12,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(13,0.264137);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(16,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(17,0.264137);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(18,0.264137);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(19,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(20,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(21,0.264137);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(22,0.264137);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(24,0.3235004);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(26,0.1867731);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(27,0.3235004);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetEntries(86);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(2,1.1112);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(3,2.2757);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(4,1.317935);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(5,0.6557375);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(6,0.3714769);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(7,0.3230234);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(8,0.3052571);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(9,0.2616489);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(10,0.2551885);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(11,0.2438826);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(12,0.179278);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(13,0.1550512);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(14,0.1582815);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(15,0.1760477);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(16,0.1889687);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(17,0.1114431);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(18,0.1114431);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(19,0.1324396);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(20,0.08721631);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(21,0.1017524);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(22,0.07106514);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(23,0.1065977);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(24,0.08560119);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(25,0.08721631);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(26,0.07429538);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(27,0.04683839);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(28,0.01776629);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(29,0.008075584);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(2,0.04236412);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(3,0.06062607);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(4,0.04613697);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(5,0.0325437);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(6,0.02449446);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(7,0.0228412);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(8,0.02220419);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(9,0.02055708);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(10,0.0203017);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(11,0.01984689);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(12,0.01701631);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(13,0.01582485);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(14,0.01598884);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(15,0.01686232);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(16,0.01747016);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(17,0.01341617);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(18,0.01341617);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(19,0.01462551);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(20,0.01186864);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(21,0.01281959);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(22,0.01071347);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(23,0.01312127);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(24,0.01175823);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(25,0.01186864);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(26,0.01095426);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(27,0.008697671);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(28,0.005356737);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(29,0.003611511);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetEntries(5585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(2,0.4469663);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(3,1.13483);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(4,0.9474193);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(5,0.5696955);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(6,0.3926504);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(7,0.3126277);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(8,0.3043351);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(9,0.2649457);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(10,0.2400682);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(11,0.2305318);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(12,0.2039958);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(13,0.1857522);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(14,0.1803621);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(15,0.1637771);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(16,0.1534114);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(17,0.1571431);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(18,0.1380703);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(19,0.1189975);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(20,0.1094611);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(21,0.1053149);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(22,0.0762911);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(23,0.07877885);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(24,0.05182819);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(25,0.05182819);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(26,0.03814555);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(27,0.0228044);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(28,0.01202414);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(29,0.005390132);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(30,0.001243877);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(31,0.004560881);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(2,0.01361336);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(3,0.02169169);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(4,0.01981979);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(5,0.01536913);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(6,0.01275942);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(7,0.01138523);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(8,0.01123322);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(9,0.01048109);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(10,0.009976893);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(11,0.009776726);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(12,0.009196839);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(13,0.008775968);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(14,0.008647701);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(15,0.00824052);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(16,0.007975481);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(17,0.008071898);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(18,0.007566206);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(19,0.007024202);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(20,0.006736868);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(21,0.006608044);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(22,0.005624254);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(23,0.005715219);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(24,0.004635654);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(25,0.004635654);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(26,0.003976948);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(27,0.003074945);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(28,0.002232827);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(29,0.001494954);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(30,0.0007181525);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(31,0.001375157);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(2,0.02054326);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(3,0.09481507);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(4,0.1106176);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(5,0.06004954);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(6,0.03160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(8,0.009481507);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(10,0.006321005);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(11,0.009481507);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(12,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(13,0.006321005);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(16,0.007901256);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(17,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(18,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(19,0.006321005);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(21,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(22,0.007901256);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(23,0.007901256);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(24,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(25,0.009481507);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(27,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(29,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(2,0.005697677);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(3,0.01224057);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(4,0.01322133);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(5,0.009741322);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(6,0.007067098);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(7,0.003533549);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(8,0.003870809);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(9,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(10,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(11,0.003870809);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(12,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(13,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(14,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(15,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(16,0.003533549);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(17,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(18,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(19,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(20,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(21,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(22,0.003533549);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(23,0.003533549);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(24,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(25,0.003870809);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(26,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(27,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(28,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(29,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetEntries(279);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(2,0.004152113);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(3,0.03114085);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(4,0.03695381);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(5,0.02968761);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(6,0.01494761);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(7,0.007473804);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(8,0.004982536);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(9,0.004152113);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(10,0.003114085);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(11,0.002906479);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(12,0.001245634);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(13,0.00145324);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(14,0.002076057);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(15,0.00145324);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(16,0.001038028);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(17,0.001868451);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(18,0.001038028);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(19,0.003114085);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(20,0.001660845);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(21,0.003529296);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(22,0.002698874);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(23,0.002698874);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(24,0.002491268);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(25,0.002283662);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(26,0.000622817);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(27,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(2,0.0009284407);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(3,0.00254264);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(4,0.002769805);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(5,0.002482603);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(6,0.001761592);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(7,0.001245634);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(8,0.001017056);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(9,0.0009284407);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(10,0.0008040532);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(11,0.0007767892);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(12,0.0005085279);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(13,0.0005492729);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(14,0.0006565067);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(15,0.0005492729);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(16,0.0004642204);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(17,0.000622817);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(18,0.0004642204);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(19,0.0008040532);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(20,0.0005871975);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(21,0.00085598);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(22,0.0007485328);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(23,0.0007485328);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(24,0.0007191671);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(25,0.0006885501);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(26,0.0003595835);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(27,0.0002935987);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetEntries(816);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1__283 = new TH1D("VbbHcc_algo_H_dR_Bj1__283","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(1,3);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(2,1151);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(3,2111);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(4,1795);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(5,2012);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(6,2053);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(7,1814);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(8,1825);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(9,1679);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(10,1588);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(11,1499);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(12,1459);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(13,1390);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(14,1276);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(15,1231);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(16,1182);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(17,1047);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(18,820);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(19,790);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(20,673);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(21,533);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(22,448);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(23,363);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(24,273);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(25,228);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(26,185);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(27,128);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(28,85);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(29,42);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(30,31);
   VbbHcc_algo_H_dR_Bj1__283->SetBinContent(31,29);
   VbbHcc_algo_H_dR_Bj1__283->SetEntries(29772);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1__283->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1__283->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1__283->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1__283->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1__283->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1__283->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__283->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__283->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__283->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__283->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__283->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__283->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__283->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1__283->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__283->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__283->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__283->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__283->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__283->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fx1283[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fy1283[30] = {
   0.9786053,
   8359.381,
   15735.91,
   13366.81,
   10237.35,
   12879.21,
   12769.06,
   13077.65,
   13247.99,
   8485.205,
   9037.954,
   9363.369,
   7128.549,
   7328.219,
   6987.689,
   9111.798,
   4537.171,
   3741.191,
   4362.227,
   2790.77,
   3438.392,
   2835.4,
   1083.165,
   2407.668,
   1483.667,
   1423.257,
   1294.501,
   561.011,
   114.0483,
   550.357};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fex1283[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fey1283[30] = {
   0.333013,
   1079.217,
   1399.268,
   1343.507,
   942.0496,
   1275.683,
   1996.264,
   1387.38,
   1720.566,
   899.7847,
   1501.966,
   1082.715,
   853.8999,
   855.811,
   819.3643,
   1878.942,
   585.4373,
   400.3867,
   636.3102,
   454.6177,
   627.7692,
   573.3788,
   108.3661,
   618.3214,
   441.511,
   441.0027,
   439.9824,
   256.4637,
   30.24428,
   352.828};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_fx1283,Graph_from_VbbHcc_algo_H_dR_Bj1_fy1283,Graph_from_VbbHcc_algo_H_dR_Bj1_fex1283,Graph_from_VbbHcc_algo_H_dR_Bj1_fey1283);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetMinimum(0.5810331);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetMaximum(18848.63);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__284 = new TH1D("data_mc_ratio__284","",30,0,6);
   data_mc_ratio__284->SetBinContent(1,3.065587);
   data_mc_ratio__284->SetBinContent(2,0.1376896);
   data_mc_ratio__284->SetBinContent(3,0.1341518);
   data_mc_ratio__284->SetBinContent(4,0.1342879);
   data_mc_ratio__284->SetBinContent(5,0.1965353);
   data_mc_ratio__284->SetBinContent(6,0.1594042);
   data_mc_ratio__284->SetBinContent(7,0.1420621);
   data_mc_ratio__284->SetBinContent(8,0.1395511);
   data_mc_ratio__284->SetBinContent(9,0.1267362);
   data_mc_ratio__284->SetBinContent(10,0.1871493);
   data_mc_ratio__284->SetBinContent(11,0.1658561);
   data_mc_ratio__284->SetBinContent(12,0.15582);
   data_mc_ratio__284->SetBinContent(13,0.1949906);
   data_mc_ratio__284->SetBinContent(14,0.1741214);
   data_mc_ratio__284->SetBinContent(15,0.176167);
   data_mc_ratio__284->SetBinContent(16,0.1297219);
   data_mc_ratio__284->SetBinContent(17,0.2307605);
   data_mc_ratio__284->SetBinContent(18,0.2191815);
   data_mc_ratio__284->SetBinContent(19,0.1811001);
   data_mc_ratio__284->SetBinContent(20,0.2411521);
   data_mc_ratio__284->SetBinContent(21,0.1550143);
   data_mc_ratio__284->SetBinContent(22,0.1580024);
   data_mc_ratio__284->SetBinContent(23,0.335129);
   data_mc_ratio__284->SetBinContent(24,0.1133877);
   data_mc_ratio__284->SetBinContent(25,0.1536733);
   data_mc_ratio__284->SetBinContent(26,0.1299836);
   data_mc_ratio__284->SetBinContent(27,0.09887977);
   data_mc_ratio__284->SetBinContent(28,0.1515122);
   data_mc_ratio__284->SetBinContent(29,0.368265);
   data_mc_ratio__284->SetBinContent(30,0.05632707);
   data_mc_ratio__284->SetBinContent(31,0.2730939);
   data_mc_ratio__284->SetBinError(1,1.769918);
   data_mc_ratio__284->SetBinError(2,0.004058481);
   data_mc_ratio__284->SetBinError(3,0.002919795);
   data_mc_ratio__284->SetBinError(4,0.003169601);
   data_mc_ratio__284->SetBinError(5,0.004381538);
   data_mc_ratio__284->SetBinError(6,0.003518075);
   data_mc_ratio__284->SetBinError(7,0.00333549);
   data_mc_ratio__284->SetBinError(8,0.003266644);
   data_mc_ratio__284->SetBinError(9,0.003092968);
   data_mc_ratio__284->SetBinError(10,0.004696377);
   data_mc_ratio__284->SetBinError(11,0.004283815);
   data_mc_ratio__284->SetBinError(12,0.004079392);
   data_mc_ratio__284->SetBinError(13,0.005230055);
   data_mc_ratio__284->SetBinError(14,0.004874465);
   data_mc_ratio__284->SetBinError(15,0.005021061);
   data_mc_ratio__284->SetBinError(16,0.003773155);
   data_mc_ratio__284->SetBinError(17,0.00713162);
   data_mc_ratio__284->SetBinError(18,0.007654152);
   data_mc_ratio__284->SetBinError(19,0.006443254);
   data_mc_ratio__284->SetBinError(20,0.009295729);
   data_mc_ratio__284->SetBinError(21,0.006714415);
   data_mc_ratio__284->SetBinError(22,0.007464911);
   data_mc_ratio__284->SetBinError(23,0.01758971);
   data_mc_ratio__284->SetBinError(24,0.006862539);
   data_mc_ratio__284->SetBinError(25,0.01017726);
   data_mc_ratio__284->SetBinError(26,0.009556582);
   data_mc_ratio__284->SetBinError(27,0.00873982);
   data_mc_ratio__284->SetBinError(28,0.0164338);
   data_mc_ratio__284->SetBinError(29,0.05682453);
   data_mc_ratio__284->SetBinError(30,0.01011664);
   data_mc_ratio__284->SetBinError(31,0.1029984);
   data_mc_ratio__284->SetMinimum(0.4);
   data_mc_ratio__284->SetMaximum(1.6);
   data_mc_ratio__284->SetEntries(15.07139);
   data_mc_ratio__284->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__284->SetLineColor(ci);
   data_mc_ratio__284->SetLineWidth(2);
   data_mc_ratio__284->SetMarkerStyle(20);
   data_mc_ratio__284->SetMarkerSize(1.2);
   data_mc_ratio__284->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__284->GetXaxis()->SetRange(1,30);
   data_mc_ratio__284->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__284->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__284->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__284->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__284->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__284->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__284->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__284->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__284->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__284->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__284->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__284->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__284->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__284->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__284->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__284->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__284->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1284[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1284[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1284[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1284[30] = {
   0.3402935,
   0.1291025,
   0.08892198,
   0.1005107,
   0.09202087,
   0.09904978,
   0.156336,
   0.1060878,
   0.1298737,
   0.1060416,
   0.1661843,
   0.115633,
   0.1197859,
   0.1167829,
   0.1172583,
   0.2062098,
   0.1290314,
   0.1070212,
   0.1458682,
   0.1629005,
   0.1825764,
   0.2022214,
   0.1000458,
   0.2568135,
   0.2975809,
   0.3098547,
   0.3398856,
   0.4571456,
   0.2651884,
   0.6410893};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1284,Graph_from_mc_statistical_error_fy1284,Graph_from_mc_statistical_error_fex1284,Graph_from_mc_statistical_error_fey1284);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1284 = new TH1F("Graph_Graph_from_mc_statistical_error1284","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1284->SetMinimum(0.2306928);
   Graph_Graph_from_mc_statistical_error1284->SetMaximum(1.769307);
   Graph_Graph_from_mc_statistical_error1284->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1284->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1284->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1284);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}
