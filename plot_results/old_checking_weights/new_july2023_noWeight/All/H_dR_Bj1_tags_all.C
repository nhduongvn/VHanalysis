void H_dR_Bj1_tags_all()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_all/H_dR_Bj1_tags_all
//=========  (Thu Aug  3 12:23:27 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_all = new TCanvas("H_dR_Bj1_tags_all", "H_dR_Bj1_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_all->SetHighLightColor(2);
   H_dR_Bj1_tags_all->Range(0,0,1,1);
   H_dR_Bj1_tags_all->SetFillColor(0);
   H_dR_Bj1_tags_all->SetFillStyle(4000);
   H_dR_Bj1_tags_all->SetBorderMode(0);
   H_dR_Bj1_tags_all->SetBorderSize(2);
   H_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-215.397,6.314516,215481.6);
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
   st->SetMinimum(0.3);
   st->SetMaximum(184678);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",30,0,6);
   st_stack_48->SetMinimum(0.3);
   st_stack_48->SetMaximum(193911.9);
   st_stack_48->SetDirectory(0);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->GetXaxis()->SetRange(1,30);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetLabelSize(0.035);
   st_stack_48->GetXaxis()->SetTitleSize(0.035);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/0.2");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetLabelSize(0.05);
   st_stack_48->GetYaxis()->SetTitleSize(0.057);
   st_stack_48->GetYaxis()->SetTitleOffset(1.2);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetLabelSize(0.035);
   st_stack_48->GetZaxis()->SetTitleSize(0.035);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(1,20216.02);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(2,75332.18);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(3,64354.16);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(4,56382.05);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(5,44675.96);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(6,51217.11);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(7,36082.33);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(8,28096.58);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(9,22026.74);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(10,30588.5);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(11,38431.58);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(12,20186.53);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(13,21049.96);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(14,16983.02);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(15,11589.42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(16,15869.1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(17,9339.573);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(18,7037.592);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(19,4918.871);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(20,5113.145);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(21,2208.682);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(22,3346.535);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(23,2785.766);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(24,1640.754);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(25,2368.848);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(26,879.493);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(27,1536.572);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(28,655.0074);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(29,259.2413);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(30,47.89564);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(31,888.7332);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(1,1458.14);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(2,4088.345);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(3,3453.361);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(4,3409.62);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(5,3049.755);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(6,15026.07);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(7,3012.311);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(8,2553.71);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(9,2294.5);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(10,3717.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(11,15016.03);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(12,2559.199);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(13,2585.927);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(14,2167.404);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(15,1275.533);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(16,2761.127);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(17,1304.596);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(18,1065.334);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(19,789.1293);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(20,1533.493);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(21,419.0935);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(22,727.5349);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(23,718.3494);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(24,543.8569);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(25,669.3645);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(26,286.7673);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(27,544.331);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(28,377.3772);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(29,61.87369);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(30,32.9307);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(31,527.0957);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetEntries(30262);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(1,116.6411);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(2,356.0754);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(3,373.9069);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(4,318.1281);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(5,262.1063);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(6,220.2094);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(7,182.1875);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(8,153.5862);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(9,137.7487);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(10,123.5318);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(11,102.5257);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(12,91.6969);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(13,80.4932);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(14,77.57626);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(15,66.66143);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(16,63.22491);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(17,48.62135);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(18,41.74129);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(19,30.86359);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(20,27.90219);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(21,23.51289);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(22,21.4821);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(23,16.63296);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(24,12.47815);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(25,11.41464);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(26,7.435723);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(27,5.396666);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(28,3.333062);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(29,2.592177);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(30,1.863559);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(31,3.11434);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(1,4.499093);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(2,7.608534);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(3,7.687177);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(4,7.071701);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(5,6.446327);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(6,6.00382);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(7,5.421707);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(8,4.991091);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(9,4.73007);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(10,4.497794);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(11,4.010479);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(12,3.751014);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(13,3.435564);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(14,3.530151);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(15,3.222648);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(16,3.176481);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(17,2.796761);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(18,2.525455);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(19,2.111391);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(20,2.1025);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(21,1.916913);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(22,1.908442);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(23,1.608324);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(24,1.368483);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(25,1.362311);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(26,1.11478);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(27,0.9579722);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(28,0.6844866);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(29,0.6431967);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(30,0.5840847);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(31,0.6755083);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetEntries(36361);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(1,1695.995);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(2,6265.965);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(3,7567.236);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(4,6758.636);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(5,5495.418);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(6,4387.585);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(7,3566.654);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(8,2961.243);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(9,2589.702);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(10,2269.711);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(11,2073.853);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(12,1895.855);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(13,1697.299);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(14,1502.063);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(15,1336.608);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(16,1152.628);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(17,928.678);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(18,774.5442);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(19,640.6477);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(20,512.5549);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(21,407.1527);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(22,330.785);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(23,254.9517);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(24,199.6417);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(25,147.3463);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(26,105.451);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(27,77.18944);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(28,50.57163);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(29,33.27533);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(30,22.29346);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(31,40.93858);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(1,10.24615);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(2,19.68903);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(3,21.70465);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(4,20.53522);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(5,18.52472);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(6,16.54903);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(7,14.90523);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(8,13.57538);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(9,12.70203);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(10,11.88611);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(11,11.36803);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(12,10.88932);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(13,10.29143);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(14,9.678375);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(15,9.132529);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(16,8.474682);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(17,7.587814);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(18,6.929704);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(19,6.305072);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(20,5.630357);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(21,5.01305);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(22,4.517476);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(23,3.966178);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(24,3.513659);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(25,3.013649);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(26,2.53799);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(27,2.169635);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(28,1.76052);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(29,1.430033);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(30,1.165744);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(31,1.568811);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetEntries(965144);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(1,314.6697);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(2,981.5258);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(3,1052.365);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(4,876.1174);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(5,659.7786);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(6,517.1618);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(7,434.3264);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(8,376.444);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(9,336.9368);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(10,306.3079);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(11,266.8916);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(12,258.7989);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(13,226.1206);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(14,211.4666);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(15,168.6721);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(16,139.4255);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(17,121.6507);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(18,102.3127);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(19,77.76783);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(20,62.10484);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(21,53.36375);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(22,33.61578);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(23,25.69909);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(24,25.31557);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(25,17.06621);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(26,12.49155);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(27,7.647977);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(28,6.437413);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(29,2.88348);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(30,1.391243);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(31,5.094861);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(1,7.58255);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(2,19.22435);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(3,22.65202);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(4,22.84778);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(5,20.63179);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(6,16.32188);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(7,15.57618);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(8,14.10879);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(9,13.98669);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(10,13.95012);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(11,11.02309);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(12,12.54192);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(13,11.12866);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(14,11.98529);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(15,8.732337);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(16,7.578813);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(17,8.863022);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(18,7.207686);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(19,6.856502);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(20,6.009299);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(21,5.183453);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(22,2.896146);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(23,2.357985);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(24,3.373663);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(25,1.986645);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(26,1.628272);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(27,1.110372);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(28,1.166553);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(29,0.6867999);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(30,0.4231465);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(31,1.174166);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetEntries(50664);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(1,50.92992);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(2,117.0918);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(3,96.10545);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(4,65.65128);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(5,64.94637);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(6,59.91087);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(7,42.84543);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(8,34.04728);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(9,27.79223);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(10,24.80982);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(11,20.69232);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(12,32.66817);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(13,24.83772);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(14,14.1014);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(15,15.30046);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(16,13.41644);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(17,11.41644);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(18,7.942443);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(19,8.007461);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(20,5.619693);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(21,5.613278);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(22,5.489137);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(23,3.492658);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(24,1.688328);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(25,3.343686);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(26,0.4110021);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(27,0.7717338);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(28,0.5124588);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(29,0.1406808);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(30,0.4939055);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(31,0.4128568);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(1,2.636573);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(2,14.05821);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(3,9.157828);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(4,5.364142);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(5,8.956982);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(6,8.835864);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(7,5.357103);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(8,4.437354);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(9,3.623423);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(10,3.095924);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(11,3.638199);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(12,4.931182);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(13,3.873654);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(14,2.296843);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(15,2.934755);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(16,2.151324);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(17,2.427299);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(18,1.544431);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(19,2.480765);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(20,1.425439);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(21,1.496998);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(22,2.438959);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(23,0.6759218);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(24,0.4686903);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(25,1.277932);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(26,0.1694635);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(27,0.3190705);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(28,0.2331269);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(29,0.08569386);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(30,0.2099338);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(31,0.2113682);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetEntries(8033);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(1,0.6306118);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(2,1.351393);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(3,1.172824);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(6,0.2687386);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(9,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(12,0.4520427);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(17,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(1,0.4459099);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(2,0.6627884);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(3,0.6669298);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(4,0.3153059);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(5,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(6,0.1900269);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(9,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(11,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(12,0.4520427);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(15,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(17,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(1,1.066846);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(2,2.173241);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(3,1.449379);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(4,1.078716);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(5,0.2181173);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(6,0.6543518);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(7,0.1090586);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(8,0.1090586);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(11,0.2181173);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(12,0.5611013);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(16,0.3271759);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(17,0.2181173);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(30,0.1090586);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(1,0.4963978);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(2,0.722576);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(3,0.6842179);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(4,0.4274042);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(5,0.1542322);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(6,0.267138);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(7,0.1090586);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(8,0.1090586);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(11,0.1542322);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(12,0.4650122);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(14,0.1090586);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(15,0.1542322);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(16,0.1888951);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(17,0.1542322);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(30,0.1090586);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(1,5.638155);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(2,21.23344);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(3,23.02399);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(4,14.1201);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(5,11.91325);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(6,8.365811);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(7,9.625787);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(8,7.087379);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(9,5.125327);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(10,6.486191);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(11,5.509496);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(12,5.062931);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(13,4.954534);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(14,4.944515);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(15,3.652199);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(16,3.119559);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(17,3.615991);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(18,1.893505);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(19,1.029073);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(20,0.8020359);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(21,0.4864143);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(22,0.5588287);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(23,0.7658287);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(24,1.344694);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(25,0.5588287);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(1,1.232063);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(2,2.349127);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(3,2.458152);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(4,1.924806);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(5,1.759909);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(6,1.482068);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(7,1.585288);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(8,1.366713);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(9,1.147779);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(10,1.299552);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(11,1.204684);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(12,1.133368);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(13,1.13846);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(14,1.136274);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(15,0.978035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(16,0.9024173);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(17,0.9683129);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(18,0.7166832);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(19,0.5152364);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(20,0.4639984);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(21,0.3439469);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(22,0.3951516);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(23,0.4431386);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(24,0.6020495);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(25,0.3951516);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(26,0.2532256);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(27,0.2432072);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(1,5.199646);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(2,19.3806);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(3,22.14845);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(4,18.0273);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(5,13.22587);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(6,9.676974);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(7,7.815929);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(8,6.601992);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(9,6.138324);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(10,6.216275);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(11,6.009592);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(12,5.800473);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(13,5.083557);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(14,4.109127);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(15,3.210427);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(16,2.494927);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(17,1.705915);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(18,1.284111);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(19,0.9281038);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(20,0.6750417);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(21,0.5322445);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(22,0.4496252);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(23,0.3713665);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(24,0.3135999);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(25,0.2445695);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(26,0.1664565);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(27,0.1023522);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(28,0.04475834);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(29,0.02838622);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(30,0.01216481);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(31,0.01859265);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(1,0.09874697);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(2,0.1896245);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(3,0.2013529);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(4,0.1811093);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(5,0.154876);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(6,0.1326985);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(7,0.1194763);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(8,0.1098495);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(9,0.106134);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(10,0.1068839);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(11,0.1052261);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(12,0.1034379);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(13,0.09662308);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(14,0.08680897);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(15,0.07659069);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(16,0.06763704);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(17,0.05576652);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(18,0.04877623);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(19,0.04120898);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(20,0.03490254);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(21,0.03136458);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(22,0.02853216);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(23,0.02621191);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(24,0.02447665);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(25,0.02142005);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(26,0.01750157);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(27,0.01361643);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(28,0.008964934);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(29,0.0075136);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(30,0.004695834);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(31,0.005985807);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetEntries(84585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(1,2.029955);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(2,8.013051);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(3,10.17167);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(4,8.75495);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(5,6.5799);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(6,4.74158);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(7,3.743713);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(8,3.07573);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(9,2.754059);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(10,2.63634);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(11,2.483033);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(12,2.272235);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(13,2.028586);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(14,1.743872);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(15,1.377029);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(16,1.069046);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(17,0.9143693);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(18,0.6447125);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(19,0.4955115);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(20,0.402432);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(21,0.33536);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(22,0.2491246);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(23,0.2395429);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(24,0.1519386);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(25,0.09855478);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(26,0.1026612);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(27,0.04106449);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(28,0.03011396);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(29,0.008212898);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(30,0.001368816);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(31,0.005475266);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(1,0.03117862);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(2,0.06194591);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(3,0.06979269);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(4,0.06475011);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(5,0.05613366);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(6,0.04765135);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(7,0.04234138);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(8,0.03837849);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(9,0.03631619);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(10,0.03553157);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(11,0.03448299);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(12,0.03298681);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(13,0.03116811);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(14,0.02889821);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(15,0.02567942);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(16,0.02262621);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(17,0.02092544);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(18,0.01757101);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(19,0.01540425);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(20,0.01388225);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(21,0.01267271);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(22,0.0109225);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(23,0.01071039);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(24,0.008529976);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(25,0.006869934);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(26,0.007011597);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(27,0.004434523);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(28,0.003797499);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(29,0.001983179);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(30,0.0008096295);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(31,0.001619259);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetEntries(147270);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(1,0.01518779);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(2,0.08289404);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(3,0.06171667);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(4,0.05539567);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(5,0.03631812);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(6,0.02724882);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(7,0.02201507);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(8,0.01318204);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(9,0.01318204);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(10,0.009292277);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(11,0.007712026);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(12,0.003856013);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(13,0.0143368);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(14,0.008630517);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(15,0.007286531);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(16,0.005010769);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(18,0.004315259);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(21,0.004551524);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(23,0.00659102);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(1,0.005506761);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(2,0.01335818);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(3,0.0113643);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(4,0.01091598);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(5,0.00873904);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(6,0.007774413);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(7,0.006772126);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(8,0.005505734);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(9,0.005505734);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(10,0.004224898);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(11,0.003918236);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(12,0.002770611);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(13,0.005941058);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(14,0.004467093);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(15,0.004223559);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(16,0.003557999);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(17,0.002275762);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(18,0.003158712);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(19,0.002234813);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(20,0.002234813);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(21,0.003218413);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(23,0.003893142);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(28,0.002275762);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(1,0.006028868);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(2,0.03079991);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(3,0.03092837);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(4,0.02415187);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(5,0.02080797);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(6,0.01002902);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(7,0.009868423);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(8,0.009636641);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(9,0.005095455);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(10,0.006236137);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(11,0.003666055);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(12,0.004622298);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(13,0.004772295);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(14,0.003193235);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(15,0.002801191);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(16,0.004207423);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(17,0.003250844);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(18,0.001429736);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(19,0.001314182);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(20,0.001164185);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(21,0.002478367);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(22,0.001072134);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(23,0.001521787);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(24,0.0009221373);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(25,0.001371791);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(1,0.001309753);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(2,0.003018582);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(3,0.002986559);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(4,0.002573484);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(5,0.002427802);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(6,0.001679299);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(7,0.001635962);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(8,0.00168586);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(9,0.001198842);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(10,0.001355669);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(11,0.00100297);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(12,0.001180025);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(13,0.00118225);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(14,0.0009390978);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(15,0.0009081298);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(16,0.00110769);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(17,0.0009590356);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(18,0.0005932865);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(19,0.0005963076);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(20,0.0005918846);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(21,0.0008401846);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(22,0.0005510293);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(23,0.0006314134);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(24,0.0005462398);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(25,0.000627238);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all__131 = new TH1D("VbbHcc_tags_H_dR_Bj1_all__131","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(1,19554);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(2,61025);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(3,60490);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(4,49197);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(5,40051);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(6,33454);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(7,27721);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(8,23796);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(9,21017);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(10,19064);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(11,17438);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(12,16017);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(13,14442);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(14,13029);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(15,11436);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(16,9908);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(17,7972);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(18,6765);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(19,5681);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(20,4618);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(21,3926);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(22,3212);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(23,2481);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(24,1982);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(25,1494);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(26,1134);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(27,849);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(28,518);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(29,373);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(30,241);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(31,426);
   VbbHcc_tags_H_dR_Bj1_all__131->SetEntries(479340);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all__131->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all__131->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1_all__131->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1_all__131->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fx1095[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fy1095[30] = {
   22408.85,
   83105.1,
   73501.83,
   64442.96,
   51190.34,
   56425.73,
   40329.67,
   31638.8,
   25133.09,
   33328.22,
   40909.91,
   22479.7,
   23090.8,
   18799.14,
   13185.27,
   17244.81,
   10456.53,
   7967.96,
   5678.615,
   5723.21,
   2699.686,
   3739.165,
   3087.927,
   1881.689,
   2548.924,
   1005.805,
   1627.965,
   715.9392,
   298.1696,
   74.0607};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fex1095[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fey1095[30] = {
   1458.205,
   4088.47,
   3453.526,
   3409.771,
   3049.901,
   15026.09,
   3012.398,
   2553.795,
   2294.586,
   3717.084,
   15016.04,
   2559.261,
   2585.977,
   2167.463,
   1275.603,
   2761.153,
   1304.654,
   1065.386,
   789.1912,
   1533.518,
   419.1627,
   727.5614,
   718.3664,
   543.881,
   669.377,
   286.7855,
   544.3374,
   377.3838,
   61.89743,
   32.96007};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fx1095,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fy1095,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fex1095,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fey1095);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetMinimum(36.99057);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetMaximum(95908.82);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__132 = new TH1D("data_mc_ratio__132","",30,0,6);
   data_mc_ratio__132->SetBinContent(1,0.8726019);
   data_mc_ratio__132->SetBinContent(2,0.7343111);
   data_mc_ratio__132->SetBinContent(3,0.8229727);
   data_mc_ratio__132->SetBinContent(4,0.7634193);
   data_mc_ratio__132->SetBinContent(5,0.7823937);
   data_mc_ratio__132->SetBinContent(6,0.5928856);
   data_mc_ratio__132->SetBinContent(7,0.6873599);
   data_mc_ratio__132->SetBinContent(8,0.7521146);
   data_mc_ratio__132->SetBinContent(9,0.8362283);
   data_mc_ratio__132->SetBinContent(10,0.5720078);
   data_mc_ratio__132->SetBinContent(11,0.4262537);
   data_mc_ratio__132->SetBinContent(12,0.7125094);
   data_mc_ratio__132->SetBinContent(13,0.625444);
   data_mc_ratio__132->SetBinContent(14,0.6930634);
   data_mc_ratio__132->SetBinContent(15,0.8673317);
   data_mc_ratio__132->SetBinContent(16,0.5745496);
   data_mc_ratio__132->SetBinContent(17,0.7623941);
   data_mc_ratio__132->SetBinContent(18,0.8490253);
   data_mc_ratio__132->SetBinContent(19,1.00042);
   data_mc_ratio__132->SetBinContent(20,0.8068898);
   data_mc_ratio__132->SetBinContent(21,1.454243);
   data_mc_ratio__132->SetBinContent(22,0.8590153);
   data_mc_ratio__132->SetBinContent(23,0.8034515);
   data_mc_ratio__132->SetBinContent(24,1.053309);
   data_mc_ratio__132->SetBinContent(25,0.5861298);
   data_mc_ratio__132->SetBinContent(26,1.127455);
   data_mc_ratio__132->SetBinContent(27,0.5215101);
   data_mc_ratio__132->SetBinContent(28,0.7235252);
   data_mc_ratio__132->SetBinContent(29,1.250966);
   data_mc_ratio__132->SetBinContent(30,3.254088);
   data_mc_ratio__132->SetBinContent(31,0.4540039);
   data_mc_ratio__132->SetBinError(1,0.006240197);
   data_mc_ratio__132->SetBinError(2,0.00297253);
   data_mc_ratio__132->SetBinError(3,0.003346136);
   data_mc_ratio__132->SetBinError(4,0.003441865);
   data_mc_ratio__132->SetBinError(5,0.003909477);
   data_mc_ratio__132->SetBinError(6,0.003241506);
   data_mc_ratio__132->SetBinError(7,0.004128381);
   data_mc_ratio__132->SetBinError(8,0.004875644);
   data_mc_ratio__132->SetBinError(9,0.005768189);
   data_mc_ratio__132->SetBinError(10,0.004142809);
   data_mc_ratio__132->SetBinError(11,0.003227898);
   data_mc_ratio__132->SetBinError(12,0.005629891);
   data_mc_ratio__132->SetBinError(13,0.005204449);
   data_mc_ratio__132->SetBinError(14,0.0060718);
   data_mc_ratio__132->SetBinError(15,0.00811051);
   data_mc_ratio__132->SetBinError(16,0.005772109);
   data_mc_ratio__132->SetBinError(17,0.008538781);
   data_mc_ratio__132->SetBinError(18,0.01032254);
   data_mc_ratio__132->SetBinError(19,0.01327303);
   data_mc_ratio__132->SetBinError(20,0.01187373);
   data_mc_ratio__132->SetBinError(21,0.02320929);
   data_mc_ratio__132->SetBinError(22,0.015157);
   data_mc_ratio__132->SetBinError(23,0.01613044);
   data_mc_ratio__132->SetBinError(24,0.02365941);
   data_mc_ratio__132->SetBinError(25,0.01516416);
   data_mc_ratio__132->SetBinError(26,0.03348056);
   data_mc_ratio__132->SetBinError(27,0.01789818);
   data_mc_ratio__132->SetBinError(28,0.03178987);
   data_mc_ratio__132->SetBinError(29,0.06477257);
   data_mc_ratio__132->SetBinError(30,0.2096142);
   data_mc_ratio__132->SetBinError(31,0.2559834);
   data_mc_ratio__132->SetMinimum(0.4);
   data_mc_ratio__132->SetMaximum(1.6);
   data_mc_ratio__132->SetEntries(237.7536);
   data_mc_ratio__132->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__132->SetLineColor(ci);
   data_mc_ratio__132->SetLineWidth(2);
   data_mc_ratio__132->SetMarkerStyle(20);
   data_mc_ratio__132->SetMarkerSize(1.2);
   data_mc_ratio__132->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__132->GetXaxis()->SetRange(1,30);
   data_mc_ratio__132->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__132->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__132->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__132->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__132->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__132->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__132->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__132->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__132->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__132->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__132->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__132->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__132->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__132->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1096[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1096[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1096[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1096[30] = {
   0.06507275,
   0.04919638,
   0.04698557,
   0.05291146,
   0.05957962,
   0.2662985,
   0.07469433,
   0.08071718,
   0.0912974,
   0.1115297,
   0.3670515,
   0.1138476,
   0.1119916,
   0.1152959,
   0.09674459,
   0.160115,
   0.1247693,
   0.1337087,
   0.138976,
   0.2679471,
   0.1552635,
   0.1945786,
   0.2326371,
   0.2890387,
   0.2626116,
   0.2851303,
   0.3343669,
   0.5271171,
   0.2075914,
   0.4450413};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1096,Graph_from_mc_statistical_error_fy1096,Graph_from_mc_statistical_error_fex1096,Graph_from_mc_statistical_error_fey1096);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1096 = new TH1F("Graph_Graph_from_mc_statistical_error1096","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1096->SetMinimum(0.3674595);
   Graph_Graph_from_mc_statistical_error1096->SetMaximum(1.632541);
   Graph_Graph_from_mc_statistical_error1096->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1096->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1096);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_all->cd();
   H_dR_Bj1_tags_all->Modified();
   H_dR_Bj1_tags_all->cd();
   H_dR_Bj1_tags_all->SetSelected(H_dR_Bj1_tags_all);
}
