void Z_dR_Bj0_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_18/Z_dR_Bj0_both_18
//=========  (Thu Aug 10 12:33:02 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_18 = new TCanvas("Z_dR_Bj0_both_18", "Z_dR_Bj0_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_18->SetHighLightColor(2);
   Z_dR_Bj0_both_18->Range(0,0,1,1);
   Z_dR_Bj0_both_18->SetFillColor(0);
   Z_dR_Bj0_both_18->SetFillStyle(4000);
   Z_dR_Bj0_both_18->SetBorderMode(0);
   Z_dR_Bj0_both_18->SetBorderSize(2);
   Z_dR_Bj0_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.876672,6.314516,12.62259);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(3.372155e+10);
   
   TH1F *st_stack_243 = new TH1F("st_stack_243","",30,0,6);
   st_stack_243->SetMinimum(0.001376661);
   st_stack_243->SetMaximum(1.182136e+11);
   st_stack_243->SetDirectory(0);
   st_stack_243->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_243->SetLineColor(ci);
   st_stack_243->GetXaxis()->SetRange(1,30);
   st_stack_243->GetXaxis()->SetLabelFont(42);
   st_stack_243->GetXaxis()->SetLabelSize(0.035);
   st_stack_243->GetXaxis()->SetTitleSize(0.035);
   st_stack_243->GetXaxis()->SetTitleFont(42);
   st_stack_243->GetYaxis()->SetTitle("Events/0.2");
   st_stack_243->GetYaxis()->SetLabelFont(42);
   st_stack_243->GetYaxis()->SetLabelSize(0.05);
   st_stack_243->GetYaxis()->SetTitleSize(0.057);
   st_stack_243->GetYaxis()->SetTitleOffset(1.2);
   st_stack_243->GetYaxis()->SetTitleFont(42);
   st_stack_243->GetZaxis()->SetLabelFont(42);
   st_stack_243->GetZaxis()->SetLabelSize(0.035);
   st_stack_243->GetZaxis()->SetTitleSize(0.035);
   st_stack_243->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_243);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,8270.5);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,38727.32);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,36944.6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,21083.53);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,20638.02);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,16747.7);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,11801.83);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,7742.211);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,7642.964);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,8433.937);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,6202.967);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,5555.439);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,3960.961);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,5068.681);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,3448.454);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,4737.808);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,2893.628);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,1732.622);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,2397.684);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,1493.502);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,728.8104);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,975.9285);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,593.1588);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,390.446);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,381.2502);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,556.7202);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,210.1875);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,461.3623);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,43.09998);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(30,41.71731);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,38.11857);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,653.1609);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,2612.795);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,3405.846);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,1963.518);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,2056.18);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,2360.832);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,2103.006);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,1158.006);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,1158.562);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,1320.953);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,1083.348);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,1017.932);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,780.6205);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,1071.617);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,682.893);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,1069.074);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,762.576);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,412.9256);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,665.1037);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,539.3417);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,128.8945);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,390.0593);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,115.5189);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,95.94037);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,92.00988);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,374.5954);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,63.94433);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,372.6889);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,33.40646);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(30,33.39486);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,32.46639);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(10726);

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
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,48.5412);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,183.7893);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,215.8798);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,170.0822);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,132.3048);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,102.5526);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,79.13363);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,64.57717);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,55.18485);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,54.52228);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,45.05421);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,36.84491);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,33.05533);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,24.30819);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,22.61662);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,21.3312);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,17.6926);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,16.32524);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,14.14717);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,10.38702);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,7.846325);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,7.092683);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,5.602029);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,5.694153);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,2.769072);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,2.117162);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,2.858877);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,1.687325);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,1.07891);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,0.7719934);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,0.8753598);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,2.929546);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,5.612695);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,6.137927);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,5.375952);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,4.755901);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,4.163264);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,3.552473);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,3.338744);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,2.987789);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,3.053995);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,2.749358);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,2.505997);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,2.443409);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,1.889227);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,1.903161);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,1.87129);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,1.71442);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,1.723359);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,1.683808);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,1.296814);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,1.055278);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,1.116311);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,1.02032);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,1.083261);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.6548296);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.5492164);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.7804506);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.5822853);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.4140231);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,0.4170168);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,0.4233961);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(15898);

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
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(1,788.9046);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(2,3524.236);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(3,4144.761);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(4,3552.768);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(5,2734.514);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(6,2103.945);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(7,1650.618);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(8,1335.582);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(9,1104.884);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(10,943.9765);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(11,823.1115);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(12,721.5657);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(13,630.4293);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(14,553.4955);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(15,486.1126);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(16,420.4698);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(17,366.7246);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(18,307.9623);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(19,268.5991);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(20,206.7244);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(21,170.7266);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(22,137.4158);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(23,109.9842);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(24,83.47254);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(25,58.50697);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(26,44.6583);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(27,28.09899);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(28,16.9974);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(29,11.31717);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(30,6.02843);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(31,11.57468);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(1,6.99582);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(2,14.75617);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(3,16.02637);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(4,14.82699);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(5,13.01137);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(6,11.40034);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(7,10.08871);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(8,9.077722);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(9,8.257199);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(10,7.635567);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(11,7.126588);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(12,6.677585);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(13,6.241198);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(14,5.841252);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(15,5.487179);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(16,5.099296);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(17,4.763393);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(18,4.364304);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(19,4.080371);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(20,3.56891);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(21,3.249432);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(22,2.908052);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(23,2.603381);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(24,2.272574);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(25,1.889795);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(26,1.660082);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(27,1.314347);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(28,1.016454);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(29,0.8255766);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(30,0.6071912);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(31,0.8364575);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetEntries(458232);

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
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(1,147.171);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(2,563.2497);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(3,572.8528);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(4,395.6726);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(5,291.0441);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(6,212.9212);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(7,169.1617);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(8,132.1801);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(9,129.2206);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(10,121.4361);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(11,90.40311);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(12,78.81324);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(13,78.19876);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(14,70.50307);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(15,58.11884);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(16,53.07049);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(17,38.37938);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(18,31.83402);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(19,32.36362);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(20,28.03041);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(21,27.72567);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(22,15.83101);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(23,8.791733);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(24,9.97653);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(25,8.693051);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(26,5.516464);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(27,4.835857);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(28,1.885132);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(29,0.8995674);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(30,0.3441296);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(31,1.455472);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(1,5.018026);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(2,14.83887);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(3,18.1392);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(4,14.04475);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(5,10.92203);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(6,9.585065);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(7,8.959731);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(8,8.188348);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(9,10.61919);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(10,9.031944);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(11,6.39301);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(12,7.140323);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(13,7.203211);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(14,7.168764);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(15,4.007976);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(16,5.412607);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(17,3.196416);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(18,2.947509);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(19,3.114472);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(20,2.944484);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(21,4.872287);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(22,2.036131);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(23,1.368589);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(24,1.485342);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(25,1.502218);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(26,1.227675);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(27,0.943687);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(28,0.617521);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(29,0.3027023);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(30,0.2005246);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(31,0.5879913);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetEntries(19394);

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
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(1,24.23246);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(2,52.06311);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(3,59.42648);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(4,32.20615);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(5,31.64068);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(6,20.17206);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(7,19.0369);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(8,13.49708);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(9,13.52743);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(10,7.651307);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(11,10.95987);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(12,13.04998);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(13,7.603334);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(14,7.810859);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(15,4.760323);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(16,2.481901);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(17,3.849382);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(18,4.889891);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(19,3.883883);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(20,3.43374);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(21,1.349672);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(22,3.577173);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(23,1.484858);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(24,0.8128607);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(25,0.3234916);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(26,1.17124);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(27,0.4164287);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(28,0.5248756);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(29,0.2980898);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(30,0.0009154413);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(31,0.1265664);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(1,4.437311);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(2,4.2635);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(3,11.9556);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(4,5.10345);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(5,4.913218);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(6,3.426693);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(7,3.918064);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(8,3.225158);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(9,2.606099);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(10,2.298665);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(11,3.177599);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(12,4.262284);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(13,2.352367);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(14,2.301634);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(15,0.9549782);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(16,0.5622524);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(17,0.8538713);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(18,2.181546);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(19,0.9727311);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(20,2.123842);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(21,0.4828219);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(22,2.131251);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(23,0.5453175);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(24,0.3415554);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(25,0.1853641);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(26,0.5343026);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(27,0.2202426);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(28,0.3154807);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(29,0.1845514);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(30,0.0009154413);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(31,0.1265664);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetEntries(2575);

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
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(1,0.9040853);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(2,0.4520427);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(3,0.4520427);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(8,0.4520427);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(1,0.6392849);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(2,0.4520427);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(3,0.4520427);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(8,0.4520427);
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
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,2.479394);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,3.541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,1.062597);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(22,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,0.9371228);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,1.120076);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,0.6134909);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(7,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(10,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(11,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(22,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(24,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(33);

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
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(1,4.47063);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(2,13.41189);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(3,10.33833);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(4,8.103016);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(5,4.750044);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(6,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(7,4.191215);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(8,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(9,3.073558);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(10,2.794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(11,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(12,2.235315);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(13,0.8382431);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(14,1.397072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(15,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(16,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(18,0.8382431);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(20,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(24,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(25,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(26,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(1,1.117657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(2,1.935839);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(3,1.699611);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(4,1.504692);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(5,1.152055);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(6,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(7,1.082167);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(8,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(9,0.9267126);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(10,0.8835858);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(11,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(12,0.7903031);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(13,0.4839599);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(14,0.6247895);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(15,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(16,0.5588287);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(18,0.4839599);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(19,0.4839599);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(20,0.3951516);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(24,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(25,0.3951516);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(26,0.2794144);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetEntries(232);

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
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(1,2.772649);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(2,12.37292);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(3,12.07577);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(4,7.769362);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(5,4.891566);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(6,3.419525);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(7,2.665218);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(8,2.384067);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(9,2.109774);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(10,1.881196);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(11,1.872053);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(12,1.808051);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(13,1.460613);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(14,1.197748);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(15,0.939455);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(16,0.8320234);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(17,0.6583042);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(18,0.4525842);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(19,0.3451526);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(20,0.2742934);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(21,0.237721);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(22,0.2285779);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(23,0.2148632);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(24,0.1508614);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(25,0.1417183);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(26,0.09143115);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(27,0.04800135);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(28,0.0320009);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(29,0.01371467);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(31,0.006857336);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(1,0.07960944);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(2,0.1681718);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(3,0.1661401);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(4,0.1332631);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(5,0.1057404);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(6,0.08840971);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(7,0.07805189);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(8,0.07382039);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(9,0.06944405);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(10,0.06557436);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(11,0.06541482);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(12,0.06428689);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(13,0.05778094);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(14,0.05232386);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(15,0.0463399);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(16,0.04360988);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(17,0.03879095);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(18,0.03216376);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(19,0.02808812);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(20,0.02503945);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(21,0.02331046);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(22,0.02285779);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(23,0.02216145);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(24,0.01856975);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(25,0.01799824);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(26,0.01445653);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(27,0.01047475);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(28,0.008552601);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(29,0.005598991);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(31,0.003959085);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetEntries(27714);

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
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(1,0.989004);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(2,4.834733);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(3,5.788564);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(4,4.243954);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(5,2.824533);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(6,1.90349);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(7,1.399151);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(8,1.141021);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(9,0.9401201);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(10,0.8912362);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(11,0.8095644);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(12,0.6700666);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(13,0.5883948);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(14,0.5204343);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(15,0.465589);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(16,0.3845133);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(17,0.3135721);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(18,0.2623036);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(19,0.1985162);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(20,0.1752665);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(21,0.140094);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(22,0.1305557);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(23,0.1102868);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(24,0.06915278);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(25,0.05424916);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(26,0.03219181);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(27,0.02563422);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(28,0.01013446);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(29,0.00774988);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(30,0.001788434);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(31,0.0005961446);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(1,0.02428146);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(2,0.05368613);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(3,0.05874369);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(4,0.05029921);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(5,0.0410345);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(6,0.03368613);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(7,0.02888073);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(8,0.0260809);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(9,0.02367377);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(10,0.02305007);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(11,0.02196856);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(12,0.01998641);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(13,0.01872881);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(14,0.01761403);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(15,0.01666008);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(16,0.0151402);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(17,0.01367239);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(18,0.01250484);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(19,0.01087862);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(20,0.01022175);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(21,0.009138724);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(22,0.008822135);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(23,0.008108444);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(24,0.006420674);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(25,0.005686857);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(26,0.004380751);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(27,0.003909182);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(28,0.002457967);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(29,0.00214943);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(30,0.001032553);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(31,0.0005961446);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetEntries(50200);

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
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.0182061);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.05916981);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.04096371);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.02730914);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.006827286);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(7,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.006827286);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.006827286);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(12,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.006436827);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.01160415);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.00965524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.00788347);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.003941735);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(7,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.003941735);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.003941735);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(12,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(17,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(18,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(84);

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
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(1,0.003296225);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(2,0.02816774);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(3,0.01977735);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(4,0.01078764);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(5,0.00659245);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(6,0.005693479);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(7,0.002696911);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(8,0.002397254);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(9,0.002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(10,0.001498284);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(11,0.003296225);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(12,0.001498284);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(13,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(15,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(16,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(17,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(19,0.0008989704);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(20,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(23,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(24,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(25,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(1,0.0009938492);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(2,0.00290528);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(3,0.002434423);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(4,0.001797941);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(5,0.001405515);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(6,0.001306174);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(7,0.0008989704);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(8,0.0008475574);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(9,0.000947598);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(10,0.000670053);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(11,0.0009938492);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(12,0.000670053);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(13,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(15,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(16,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(17,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(19,0.0005190208);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(20,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(23,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(24,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(25,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetEntries(330);

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
   
   TH1D *VbbHcc_both_Z_dR_Bj0__667 = new TH1D("VbbHcc_both_Z_dR_Bj0__667","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(1,13771);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(2,54646);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(3,50399);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(4,37349);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(5,28804);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(6,21991);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(7,17580);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(8,14343);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(9,12166);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(10,10518);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(11,9324);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(12,8380);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(13,7338);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(14,6570);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(15,5735);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(16,5024);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(17,4118);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(18,3620);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(19,3109);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(20,2475);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(21,2164);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(22,1757);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(23,1412);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(24,1134);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(25,870);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(26,659);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(27,442);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(28,265);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(29,170);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(30,84);
   VbbHcc_both_Z_dR_Bj0__667->SetBinContent(31,151);
   VbbHcc_both_Z_dR_Bj0__667->SetEntries(326397);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0__667->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0__667->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0__667->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0__667->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0__667->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__667->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__667->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__667->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fx1485[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fy1485[30] = {
   9289.216,
   43084.3,
   41969.77,
   25255.13,
   23841.07,
   19193.75,
   13728.39,
   9293.86,
   8951.912,
   9567.453,
   7176.653,
   6410.786,
   4713.137,
   5727.915,
   4022.586,
   5237.499,
   3321.249,
   2095.19,
   2718.061,
   1743.087,
   936.8365,
   1140.913,
   719.6267,
   491.2563,
   452.2981,
   610.5864,
   246.4715,
   482.4991,
   56.71518,
   48.86456};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fex1485[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fey1485[30] = {
   653.2407,
   2612.889,
   3405.96,
   1963.639,
   2056.262,
   2360.885,
   2103.056,
   1158.08,
   1158.647,
   1321.012,
   1083.399,
   1017.992,
   780.6862,
   1071.661,
   682.9304,
   1069.102,
   762.6,
   412.9688,
   665.1265,
   539.3675,
   129.0327,
   390.0832,
   115.5625,
   95.98656,
   92.04491,
   374.602,
   63.96994,
   372.6914,
   33.4211,
   33.40359};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_fx1485,Graph_from_VbbHcc_both_Z_dR_Bj0_fy1485,Graph_from_VbbHcc_both_Z_dR_Bj0_fex1485,Graph_from_VbbHcc_both_Z_dR_Bj0_fey1485);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetMinimum(13.91488);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetMaximum(50265.36);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__668 = new TH1D("data_mc_ratio__668","",30,0,6);
   data_mc_ratio__668->SetBinContent(1,1.482472);
   data_mc_ratio__668->SetBinContent(2,1.268351);
   data_mc_ratio__668->SetBinContent(3,1.20084);
   data_mc_ratio__668->SetBinContent(4,1.478868);
   data_mc_ratio__668->SetBinContent(5,1.208167);
   data_mc_ratio__668->SetBinContent(6,1.145738);
   data_mc_ratio__668->SetBinContent(7,1.280558);
   data_mc_ratio__668->SetBinContent(8,1.543277);
   data_mc_ratio__668->SetBinContent(9,1.359039);
   data_mc_ratio__668->SetBinContent(10,1.099352);
   data_mc_ratio__668->SetBinContent(11,1.299213);
   data_mc_ratio__668->SetBinContent(12,1.307172);
   data_mc_ratio__668->SetBinContent(13,1.556925);
   data_mc_ratio__668->SetBinContent(14,1.147014);
   data_mc_ratio__668->SetBinContent(15,1.4257);
   data_mc_ratio__668->SetBinContent(16,0.9592365);
   data_mc_ratio__668->SetBinContent(17,1.239895);
   data_mc_ratio__668->SetBinContent(18,1.727767);
   data_mc_ratio__668->SetBinContent(19,1.14383);
   data_mc_ratio__668->SetBinContent(20,1.419895);
   data_mc_ratio__668->SetBinContent(21,2.309901);
   data_mc_ratio__668->SetBinContent(22,1.539995);
   data_mc_ratio__668->SetBinContent(23,1.962128);
   data_mc_ratio__668->SetBinContent(24,2.308367);
   data_mc_ratio__668->SetBinContent(25,1.92351);
   data_mc_ratio__668->SetBinContent(26,1.07929);
   data_mc_ratio__668->SetBinContent(27,1.79331);
   data_mc_ratio__668->SetBinContent(28,0.5492238);
   data_mc_ratio__668->SetBinContent(29,2.997434);
   data_mc_ratio__668->SetBinContent(30,1.719037);
   data_mc_ratio__668->SetBinContent(31,2.895044);
   data_mc_ratio__668->SetBinError(1,0.01263292);
   data_mc_ratio__668->SetBinError(2,0.005425755);
   data_mc_ratio__668->SetBinError(3,0.005349021);
   data_mc_ratio__668->SetBinError(4,0.007652264);
   data_mc_ratio__668->SetBinError(5,0.0071187);
   data_mc_ratio__668->SetBinError(6,0.007726143);
   data_mc_ratio__668->SetBinError(7,0.009658056);
   data_mc_ratio__668->SetBinError(8,0.01288617);
   data_mc_ratio__668->SetBinError(9,0.01232134);
   data_mc_ratio__668->SetBinError(10,0.01071939);
   data_mc_ratio__668->SetBinError(11,0.01345486);
   data_mc_ratio__668->SetBinError(12,0.01427942);
   data_mc_ratio__668->SetBinError(13,0.01817518);
   data_mc_ratio__668->SetBinError(14,0.01415097);
   data_mc_ratio__668->SetBinError(15,0.01882614);
   data_mc_ratio__668->SetBinError(16,0.01353321);
   data_mc_ratio__668->SetBinError(17,0.01932154);
   data_mc_ratio__668->SetBinError(18,0.02871646);
   data_mc_ratio__668->SetBinError(19,0.02051404);
   data_mc_ratio__668->SetBinError(20,0.02854095);
   data_mc_ratio__668->SetBinError(21,0.04965521);
   data_mc_ratio__668->SetBinError(22,0.03673951);
   data_mc_ratio__668->SetBinError(23,0.05221678);
   data_mc_ratio__668->SetBinError(24,0.06854857);
   data_mc_ratio__668->SetBinError(25,0.0652131);
   data_mc_ratio__668->SetBinError(26,0.04204318);
   data_mc_ratio__668->SetBinError(27,0.08529908);
   data_mc_ratio__668->SetBinError(28,0.03373855);
   data_mc_ratio__668->SetBinError(29,0.2298927);
   data_mc_ratio__668->SetBinError(30,0.1875623);
   data_mc_ratio__668->SetBinError(31,1.818439);
   data_mc_ratio__668->SetMinimum(0.4);
   data_mc_ratio__668->SetMaximum(1.6);
   data_mc_ratio__668->SetEntries(272.9163);
   data_mc_ratio__668->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__668->SetLineColor(ci);
   data_mc_ratio__668->SetLineWidth(2);
   data_mc_ratio__668->SetMarkerStyle(20);
   data_mc_ratio__668->SetMarkerSize(1.2);
   data_mc_ratio__668->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__668->GetXaxis()->SetRange(1,30);
   data_mc_ratio__668->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__668->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__668->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__668->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__668->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__668->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__668->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__668->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__668->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__668->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__668->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__668->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__668->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__668->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__668->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__668->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__668->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1486[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1486[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1486[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1486[30] = {
   0.07032248,
   0.06064597,
   0.08115268,
   0.0777521,
   0.08624875,
   0.1230028,
   0.1531903,
   0.124607,
   0.1294301,
   0.1380735,
   0.1509616,
   0.1587936,
   0.1656405,
   0.1870944,
   0.169774,
   0.2041245,
   0.2296124,
   0.1971033,
   0.2447062,
   0.3094323,
   0.1377323,
   0.3419044,
   0.1605867,
   0.19539,
   0.2035049,
   0.6135119,
   0.2595429,
   0.7724188,
   0.5892797,
   0.6835953};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1486,Graph_from_mc_statistical_error_fy1486,Graph_from_mc_statistical_error_fex1486,Graph_from_mc_statistical_error_fey1486);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1486 = new TH1F("Graph_Graph_from_mc_statistical_error1486","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1486->SetMinimum(0.07309746);
   Graph_Graph_from_mc_statistical_error1486->SetMaximum(1.926903);
   Graph_Graph_from_mc_statistical_error1486->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1486->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1486->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1486);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->SetSelected(Z_dR_Bj0_both_18);
}
