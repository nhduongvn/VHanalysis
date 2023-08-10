void Z_dR_Bj0_both_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_17/Z_dR_Bj0_both_17
//=========  (Thu Aug 10 12:25:03 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_17 = new TCanvas("Z_dR_Bj0_both_17", "Z_dR_Bj0_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_17->SetHighLightColor(2);
   Z_dR_Bj0_both_17->Range(0,0,1,1);
   Z_dR_Bj0_both_17->SetFillColor(0);
   Z_dR_Bj0_both_17->SetFillStyle(4000);
   Z_dR_Bj0_both_17->SetBorderMode(0);
   Z_dR_Bj0_both_17->SetBorderSize(2);
   Z_dR_Bj0_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-127.3751,6.314516,127257.7);
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
   st->SetMaximum(109065.9);
   
   TH1F *st_stack_242 = new TH1F("st_stack_242","",30,0,6);
   st_stack_242->SetMinimum(0.01);
   st_stack_242->SetMaximum(114519.2);
   st_stack_242->SetDirectory(0);
   st_stack_242->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_242->SetLineColor(ci);
   st_stack_242->GetXaxis()->SetRange(1,30);
   st_stack_242->GetXaxis()->SetLabelFont(42);
   st_stack_242->GetXaxis()->SetLabelSize(0.035);
   st_stack_242->GetXaxis()->SetTitleSize(0.035);
   st_stack_242->GetXaxis()->SetTitleFont(42);
   st_stack_242->GetYaxis()->SetTitle("Events/0.2");
   st_stack_242->GetYaxis()->SetLabelFont(42);
   st_stack_242->GetYaxis()->SetLabelSize(0.05);
   st_stack_242->GetYaxis()->SetTitleSize(0.057);
   st_stack_242->GetYaxis()->SetTitleOffset(1.2);
   st_stack_242->GetYaxis()->SetTitleFont(42);
   st_stack_242->GetZaxis()->SetLabelFont(42);
   st_stack_242->GetZaxis()->SetLabelSize(0.035);
   st_stack_242->GetZaxis()->SetTitleSize(0.035);
   st_stack_242->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_242);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,8447.093);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,27217.61);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,45349.1);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,21882.87);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,13457.33);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,14605.41);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,7819.673);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,9634.671);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,7282.624);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,21641.57);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,4726.514);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,4506.167);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,3208.69);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,3018.096);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,3260.114);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,2280.099);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,1864.252);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,862.5862);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,1416.179);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,2388.412);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,1666.018);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,755.4874);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,1087.141);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,465.8647);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,214.3982);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,419.9659);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,157.8497);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,67.55239);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,33.02968);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(30,7.084112);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,4.59321);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,1002.863);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,1921.218);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,15028.52);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,1984.948);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,1475.613);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,1593.604);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,1038.434);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,1283.699);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,1096.577);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,14853.11);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,828.6417);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,787.7604);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,677.1614);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,569.8261);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,677.7384);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,556.4206);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,484.0877);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,124.9416);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,398.5715);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,666.7763);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,545.3869);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,284.8058);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,467.8131);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,273.1654);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,56.55352);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,271.7678);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,49.13567);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,29.92577);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,25.97605);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(30,7.084112);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,4.383179);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(10320);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,37.88842);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,142.2786);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,151.3247);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,118.9114);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,98.04283);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,77.95004);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,61.00641);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,49.3045);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,42.99881);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,34.92544);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,32.93548);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,29.99839);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,27.66278);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,23.87316);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,20.87262);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,18.18855);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,12.35168);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,9.895927);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,9.727202);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,10.04702);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,8.155568);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,7.050892);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,6.673442);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,2.948197);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,3.419303);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,2.732612);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,1.474744);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,0.737372);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,0.5794459);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,0.4710795);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,0.528712);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,2.544674);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,4.723607);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,4.836807);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,4.331907);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,3.895078);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,3.513285);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,3.076057);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,2.701719);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,2.520878);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,2.24661);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,2.320282);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,2.213732);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,2.081005);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,2.005592);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,1.879354);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,1.684172);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,1.346255);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,1.18625);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,1.205129);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,1.299515);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,1.122201);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,1.044768);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,1.060113);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.7363985);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.789308);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.7278001);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.4334165);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.3064718);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.2934268);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,0.2823901);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,0.2890121);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(12006);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(1,580.7715);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(2,2610.041);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(3,3098.17);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(4,2649.523);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(5,2072.838);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(6,1592.845);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(7,1248.832);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(8,1012.933);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(9,833.1013);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(10,728.0562);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(11,627.9562);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(12,550.2079);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(13,484.4789);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(14,429.7411);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(15,370.4598);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(16,318.6193);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(17,271.7466);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(18,234.9);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(19,201.2149);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(20,158.3597);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(21,135.1608);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(22,106.7248);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(23,81.24398);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(24,61.78708);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(25,46.5592);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(26,33.38489);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(27,22.22793);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(28,13.7903);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(29,7.99198);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(30,4.037717);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(31,7.992755);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(1,6.096798);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(2,12.89774);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(3,14.0683);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(4,13.01882);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(5,11.51327);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(6,10.07942);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(7,8.921782);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(8,8.035084);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(9,7.282271);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(10,6.812725);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(11,6.329278);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(12,5.927424);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(13,5.562391);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(14,5.238963);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(15,4.86209);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(16,4.504407);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(17,4.16684);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(18,3.872733);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(19,3.583829);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(20,3.168941);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(21,2.925261);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(22,2.601353);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(23,2.275498);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(24,1.976219);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(25,1.717501);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(26,1.460682);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(27,1.187776);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(28,0.9353313);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(29,0.7134449);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(30,0.4934047);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(31,0.7107086);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetEntries(333938);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(1,100.5285);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(2,398.1674);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(3,409.0116);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(4,303.7854);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(5,210.9744);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(6,163.0463);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(7,113.4097);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(8,109.3949);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(9,103.4271);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(10,79.96511);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(11,68.64795);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(12,61.28919);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(13,56.08545);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(14,47.86374);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(15,38.0315);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(16,45.45912);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(17,25.73579);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(18,23.32191);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(19,22.9644);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(20,13.14154);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(21,16.5802);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(22,13.73923);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(23,9.311108);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(24,5.980639);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(25,5.674105);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(26,4.230636);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(27,2.798176);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(28,2.008768);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(29,0.6465614);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(30,1.258701);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(31,1.130605);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(1,3.582905);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(2,10.62645);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(3,13.99127);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(4,12.32476);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(5,11.02663);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(6,9.159079);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(7,6.154881);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(8,7.24882);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(9,8.417378);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(10,6.151304);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(11,5.308225);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(12,5.185611);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(13,4.348869);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(14,4.045471);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(15,2.79497);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(16,5.538771);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(17,2.186265);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(18,2.166448);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(19,3.404788);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(20,1.438622);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(21,1.939305);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(22,3.118201);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(23,1.400605);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(24,1.086251);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(25,0.9801995);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(26,0.6632428);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(27,0.6496663);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(28,0.5111099);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(29,0.3881112);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(30,0.549663);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(31,0.4361117);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetEntries(18216);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(1,20.20155);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(2,48.10838);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(3,47.91186);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(4,32.84829);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(5,14.27493);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(6,13.38974);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(7,12.81035);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(8,9.651933);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(9,9.448208);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(10,6.229652);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(11,4.264689);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(12,6.053509);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(13,4.69617);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(14,4.419882);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(15,4.878763);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(16,5.054969);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(17,2.64922);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(18,1.715817);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(19,1.014962);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(20,1.721869);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(21,3.410067);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(22,2.828801);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(23,0.9729646);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(24,0.5673569);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(25,1.185926);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(26,1.7608);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(27,0.5565194);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(28,0.480729);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(29,0.1089142);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(30,0.08447854);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(31,0.08447854);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(1,2.692688);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(2,4.65245);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(3,5.016389);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(4,9.679765);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(5,2.084352);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(6,2.383242);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(7,2.554828);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(8,1.953114);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(9,1.94921);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(10,1.783537);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(11,0.8373414);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(12,1.466892);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(13,0.8143111);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(14,0.7578908);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(15,1.726792);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(16,1.785606);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(17,0.6155764);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(18,0.4051514);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(19,0.3137246);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(20,0.5245264);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(21,1.327843);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(22,1.270207);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(23,0.3054492);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(24,0.2085596);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(25,0.4468007);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(26,1.178084);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(27,0.2496675);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(28,0.2287311);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(29,0.08606893);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(30,0.08447854);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(31,0.08447854);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetEntries(2376);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(3,0.6306118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(3,0.4459099);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(5,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(7,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,0.4958844);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,1.487653);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,1.239711);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,1.239711);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(6,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,0.4958844);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(16,0.4958844);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(24,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,0.3506432);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,0.6073318);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,0.5544156);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,0.5544156);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(6,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.3506432);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(16,0.3506432);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(24,0.2479422);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(1,3.545159);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(2,10.12902);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(3,9.116122);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(4,4.304835);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(5,2.785482);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(6,2.785482);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(7,1.266128);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(8,2.785482);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(9,2.27903);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(10,1.266128);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(11,1.519354);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(12,0.7596768);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(14,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(16,0.5064512);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(17,0.7596768);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(20,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(23,0.7596768);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(25,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(1,0.9474835);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(2,1.601539);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(3,1.519354);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(4,1.044076);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(5,0.8398543);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(6,0.8398543);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(7,0.5662297);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(8,0.8398543);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(9,0.7596768);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(10,0.5662297);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(11,0.6202735);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(12,0.4385996);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(14,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(15,0.3581151);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(16,0.3581151);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(17,0.4385996);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(19,0.3581151);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(20,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(23,0.4385996);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(25,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(26,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(1,1.818609);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(2,8.54963);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(3,9.09638);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(4,6.197607);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(5,3.915594);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(6,2.65707);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(7,2.04031);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(8,1.718594);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(9,1.581907);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(10,1.475224);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(11,1.426883);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(12,1.338536);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(13,1.138506);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(14,0.8767997);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(15,0.7984545);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(16,0.6050918);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(17,0.4684044);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(18,0.3867253);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(19,0.2817094);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(20,0.206698);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(21,0.2083649);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(22,0.1700258);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(23,0.1400212);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(24,0.1216851);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(25,0.06667678);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(26,0.05334143);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(27,0.05167451);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(28,0.01833612);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(29,0.006667678);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(31,0.00166692);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(1,0.05505884);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(2,0.1193798);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(3,0.1231379);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(4,0.1016411);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(5,0.08078973);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(6,0.06655165);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(7,0.05831837);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(8,0.05352344);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(9,0.05135086);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(10,0.04958911);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(11,0.04876986);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(12,0.04723592);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(13,0.04356372);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(14,0.03823028);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(15,0.03648232);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(16,0.03175908);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(17,0.02794266);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(18,0.02538976);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(19,0.02166995);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(20,0.01856203);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(21,0.01863673);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(22,0.01683506);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(23,0.01527757);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(24,0.01424217);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(25,0.01054253);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(26,0.009429521);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(27,0.009281015);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(28,0.005528547);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(29,0.003333839);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(31,0.00166692);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetEntries(28446);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(1,0.6886874);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(2,3.361975);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(3,4.024062);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(4,2.951339);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(5,1.965066);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(6,1.324591);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(7,0.9729735);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(8,0.7925931);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(9,0.6533594);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(10,0.6188627);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(11,0.5627536);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(12,0.466329);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(13,0.4102199);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(14,0.361592);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(15,0.3237703);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(16,0.2676612);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(17,0.2182021);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(18,0.1824585);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(19,0.1384025);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(20,0.1217775);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(21,0.09725579);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(22,0.09102144);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(23,0.07689026);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(24,0.04821227);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(25,0.03740607);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(26,0.02244364);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(27,0.01745617);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(28,0.007065592);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(29,0.005403099);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(30,0.001246869);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(31,0.000415623);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(1,0.01691846);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(2,0.03738067);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(3,0.04089612);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(4,0.03502349);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(5,0.02857843);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(6,0.02346338);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(7,0.02010946);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(8,0.01814993);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(9,0.01647881);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(10,0.01603788);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(11,0.01529357);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(12,0.01392182);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(13,0.01305744);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(14,0.01225912);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(15,0.01160028);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(16,0.01054733);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(17,0.00952312);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(18,0.00870827);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(19,0.007584409);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(20,0.00711432);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(21,0.00635781);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(22,0.006150659);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(23,0.005653084);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(24,0.004476397);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(25,0.003942946);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(26,0.003054193);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(27,0.002693545);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(28,0.001713658);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(29,0.00149855);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(30,0.0007198802);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(31,0.000415623);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.009481507);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.04108653);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.03160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.02212352);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(14,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(18,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.003870809);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.008057731);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.007067098);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.005912758);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(7,0.003533549);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(11,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(14,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(15,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(17,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(18,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(1,0.003944507);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(2,0.01287155);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(3,0.01141831);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(4,0.01058789);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(5,0.007058592);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(6,0.002283662);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(7,0.001868451);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(8,0.001245634);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(9,0.001245634);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(10,0.002491268);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(11,0.001038028);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(13,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(15,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(16,0.0008304226);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(17,0.0008304226);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(18,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(19,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(21,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(22,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(1,0.0009049321);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(2,0.001634689);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(3,0.001539645);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(4,0.001482601);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(5,0.001210539);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(6,0.0006885501);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(7,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(8,0.0005085279);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(9,0.0005085279);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(10,0.0007191671);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(11,0.0004642204);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(13,0.0003595835);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(15,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(16,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(17,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(18,0.0003595835);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(19,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(21,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(22,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0__664 = new TH1D("VbbHcc_both_Z_dR_Bj0__664","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(1,3368);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(2,11253);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(3,10431);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(4,7732);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(5,5949);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(6,4521);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(7,3564);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(8,2881);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(9,2605);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(10,2144);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(11,1879);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(12,1688);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(13,1525);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(14,1286);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(15,1223);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(16,1007);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(17,782);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(18,714);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(19,631);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(20,550);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(21,450);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(22,394);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(23,306);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(24,235);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(25,183);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(26,130);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(27,101);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(28,60);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(29,38);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(30,21);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(31,33);
   VbbHcc_both_Z_dR_Bj0__664->SetEntries(67713);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0__664->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0__664->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0__664->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0__664->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__664->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fx1483[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fy1483[30] = {
   9193.044,
   30439.79,
   49079.67,
   25002.66,
   15862.7,
   16459.67,
   9260.336,
   10821.75,
   8276.117,
   22494.11,
   5464.147,
   5156.53,
   3783.164,
   3525.491,
   3695.989,
   2669.296,
   2178.184,
   1132.993,
   1652.027,
   2572.264,
   1829.632,
   886.0926,
   1186.32,
   537.566,
   271.594,
   462.4043,
   184.9764,
   84.59496,
   42.36866,
   12.93733};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fex1483[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fey1483[30] = {
   1002.896,
   1921.303,
   15028.54,
   1985.057,
   1475.706,
   1593.668,
   1038.499,
   1283.75,
   1096.639,
   14853.12,
   828.6868,
   787.8044,
   677.2019,
   569.8686,
   677.7665,
   556.472,
   484.113,
   125.0267,
   398.6043,
   666.7869,
   545.401,
   284.8395,
   467.8222,
   273.1759,
   56.59592,
   271.7762,
   49.15687,
   29.94719,
   25.99054,
   7.128611};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_fx1483,Graph_from_VbbHcc_both_Z_dR_Bj0_fy1483,Graph_from_VbbHcc_both_Z_dR_Bj0_fex1483,Graph_from_VbbHcc_both_Z_dR_Bj0_fey1483);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetMinimum(5.227851);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetMaximum(70518.45);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__665 = new TH1D("data_mc_ratio__665","",30,0,6);
   data_mc_ratio__665->SetBinContent(1,0.366364);
   data_mc_ratio__665->SetBinContent(2,0.3696806);
   data_mc_ratio__665->SetBinContent(3,0.212532);
   data_mc_ratio__665->SetBinContent(4,0.309247);
   data_mc_ratio__665->SetBinContent(5,0.3750308);
   data_mc_ratio__665->SetBinContent(6,0.2746714);
   data_mc_ratio__665->SetBinContent(7,0.3848672);
   data_mc_ratio__665->SetBinContent(8,0.266223);
   data_mc_ratio__665->SetBinContent(9,0.3147611);
   data_mc_ratio__665->SetBinContent(10,0.09531382);
   data_mc_ratio__665->SetBinContent(11,0.343878);
   data_mc_ratio__665->SetBinContent(12,0.3273519);
   data_mc_ratio__665->SetBinContent(13,0.4031017);
   data_mc_ratio__665->SetBinContent(14,0.3647719);
   data_mc_ratio__665->SetBinContent(15,0.3308992);
   data_mc_ratio__665->SetBinContent(16,0.377253);
   data_mc_ratio__665->SetBinContent(17,0.3590146);
   data_mc_ratio__665->SetBinContent(18,0.6301894);
   data_mc_ratio__665->SetBinContent(19,0.3819549);
   data_mc_ratio__665->SetBinContent(20,0.2138194);
   data_mc_ratio__665->SetBinContent(21,0.2459511);
   data_mc_ratio__665->SetBinContent(22,0.4446488);
   data_mc_ratio__665->SetBinContent(23,0.2579406);
   data_mc_ratio__665->SetBinContent(24,0.4371556);
   data_mc_ratio__665->SetBinContent(25,0.6737998);
   data_mc_ratio__665->SetBinContent(26,0.2811393);
   data_mc_ratio__665->SetBinContent(27,0.5460157);
   data_mc_ratio__665->SetBinContent(28,0.7092621);
   data_mc_ratio__665->SetBinContent(29,0.8968894);
   data_mc_ratio__665->SetBinContent(30,1.623209);
   data_mc_ratio__665->SetBinContent(31,2.302311);
   data_mc_ratio__665->SetBinError(1,0.006312868);
   data_mc_ratio__665->SetBinError(2,0.003484917);
   data_mc_ratio__665->SetBinError(3,0.002080949);
   data_mc_ratio__665->SetBinError(4,0.003516897);
   data_mc_ratio__665->SetBinError(5,0.004862336);
   data_mc_ratio__665->SetBinError(6,0.004085039);
   data_mc_ratio__665->SetBinError(7,0.006446769);
   data_mc_ratio__665->SetBinError(8,0.004959912);
   data_mc_ratio__665->SetBinError(9,0.006167047);
   data_mc_ratio__665->SetBinError(10,0.002058465);
   data_mc_ratio__665->SetBinError(11,0.007933065);
   data_mc_ratio__665->SetBinError(12,0.007967621);
   data_mc_ratio__665->SetBinError(13,0.01032238);
   data_mc_ratio__665->SetBinError(14,0.01017187);
   data_mc_ratio__665->SetBinError(15,0.009461991);
   data_mc_ratio__665->SetBinError(16,0.01188825);
   data_mc_ratio__665->SetBinError(17,0.01283834);
   data_mc_ratio__665->SetBinError(18,0.02358424);
   data_mc_ratio__665->SetBinError(19,0.01520539);
   data_mc_ratio__665->SetBinError(20,0.009117289);
   data_mc_ratio__665->SetBinError(21,0.01159425);
   data_mc_ratio__665->SetBinError(22,0.02240108);
   data_mc_ratio__665->SetBinError(23,0.01474548);
   data_mc_ratio__665->SetBinError(24,0.02851689);
   data_mc_ratio__665->SetBinError(25,0.04980871);
   data_mc_ratio__665->SetBinError(26,0.02465755);
   data_mc_ratio__665->SetBinError(27,0.05433059);
   data_mc_ratio__665->SetBinError(28,0.09156534);
   data_mc_ratio__665->SetBinError(29,0.1454947);
   data_mc_ratio__665->SetBinError(30,0.3542133);
   data_mc_ratio__665->SetBinError(31,0.8225507);
   data_mc_ratio__665->SetMinimum(0.4);
   data_mc_ratio__665->SetMaximum(1.6);
   data_mc_ratio__665->SetEntries(106.1312);
   data_mc_ratio__665->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__665->SetLineColor(ci);
   data_mc_ratio__665->SetLineWidth(2);
   data_mc_ratio__665->SetMarkerStyle(20);
   data_mc_ratio__665->SetMarkerSize(1.2);
   data_mc_ratio__665->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__665->GetXaxis()->SetRange(1,30);
   data_mc_ratio__665->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__665->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__665->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__665->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__665->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__665->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__665->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__665->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__665->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__665->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__665->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__665->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__665->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__665->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__665->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__665->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__665->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1484[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1484[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1484[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1484[30] = {
   0.1090929,
   0.06311814,
   0.306207,
   0.07939383,
   0.09302995,
   0.09682261,
   0.1121448,
   0.1186268,
   0.1325064,
   0.6603112,
   0.1516589,
   0.152778,
   0.1790041,
   0.1616424,
   0.1833789,
   0.2084714,
   0.2222553,
   0.1103508,
   0.2412819,
   0.2592218,
   0.2980933,
   0.3214557,
   0.3943476,
   0.5081719,
   0.2083843,
   0.5877458,
   0.2657467,
   0.3540068,
   0.6134379,
   0.5510108};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1484,Graph_from_mc_statistical_error_fy1484,Graph_from_mc_statistical_error_fex1484,Graph_from_mc_statistical_error_fey1484);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1484 = new TH1F("Graph_Graph_from_mc_statistical_error1484","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1484->SetMinimum(0.2076266);
   Graph_Graph_from_mc_statistical_error1484->SetMaximum(1.792373);
   Graph_Graph_from_mc_statistical_error1484->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1484->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1484->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1484);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->SetSelected(Z_dR_Bj0_both_17);
}
