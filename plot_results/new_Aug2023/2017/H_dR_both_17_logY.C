void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Tue Aug 22 09:18:18 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(0,0,1,1);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.859198,6.525,11.99178);
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
   st->SetMaximum(9.458451e+09);
   
   TH1F *st_stack_214 = new TH1F("st_stack_214","",30,0,6);
   st_stack_214->SetMinimum(0.001431043);
   st_stack_214->SetMaximum(3.211299e+10);
   st_stack_214->SetDirectory(0);
   st_stack_214->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_214->SetLineColor(ci);
   st_stack_214->GetXaxis()->SetRange(1,31);
   st_stack_214->GetXaxis()->SetLabelFont(42);
   st_stack_214->GetXaxis()->SetLabelSize(0.035);
   st_stack_214->GetXaxis()->SetTitleSize(0.035);
   st_stack_214->GetXaxis()->SetTitleFont(42);
   st_stack_214->GetYaxis()->SetTitle("Events/0.2");
   st_stack_214->GetYaxis()->SetLabelFont(42);
   st_stack_214->GetYaxis()->SetLabelSize(0.05);
   st_stack_214->GetYaxis()->SetTitleSize(0.057);
   st_stack_214->GetYaxis()->SetTitleOffset(1.2);
   st_stack_214->GetYaxis()->SetTitleFont(42);
   st_stack_214->GetZaxis()->SetLabelFont(42);
   st_stack_214->GetZaxis()->SetLabelSize(0.035);
   st_stack_214->GetZaxis()->SetTitleSize(0.035);
   st_stack_214->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_214);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,5.888093);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,30174.91);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,10167.19);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8029.056);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,7210.552);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,6079.771);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,6543.029);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,5698.807);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,24303.66);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,8699.991);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,8440.766);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,10305.44);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,13043.02);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,14484.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,16376.56);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,7788.51);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,7974.289);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,5789.629);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,2129.723);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1821.918);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,966.0947);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,878.0304);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,687.4474);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,104.0494);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,309.9717);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,5.888093);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,20625.72);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1246.863);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1097.805);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,1061.777);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,909.8713);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,943.8196);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,808.857);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,16559.12);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,1310.328);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1033.422);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1213.627);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,1364.116);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,1415.496);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,1880.128);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,950.7077);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,1115.84);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,953.7844);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,476.8704);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,465.1244);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,360.707);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,348.3233);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,361.9289);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,36.20369);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,264.1796);
   VbbHcc_both_H_dR_stack_1->SetEntries(9795);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,25.05159);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,32.86297);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,35.71001);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,40.54501);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,36.20679);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,44.80454);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,48.55212);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,53.8665);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,59.41467);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,64.54183);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,71.04975);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,71.15998);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,91.02174);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,94.82211);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,54.27081);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,34.0929);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,21.95205);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,15.62442);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,10.5643);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,5.57415);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,4.317362);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,2.301287);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1.348917);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.4076019);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.04076391);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.005127414);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,2.132471);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,2.469619);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,2.454621);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,2.665172);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,2.426966);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,2.804562);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,2.915912);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,3.060453);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,3.292111);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,3.423339);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,3.54594);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,3.417178);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,4.03977);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,4.142472);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,3.174536);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,2.33158);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,1.837755);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,1.637055);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,1.287097);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.7720489);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.8654244);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.5544073);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.3897719);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.1432);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.04076391);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.005127414);
   VbbHcc_both_H_dR_stack_2->SetEntries(12402);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_stack_3 = new TH1D("VbbHcc_both_H_dR_stack_3","",30,0,6);
   VbbHcc_both_H_dR_stack_3->SetBinContent(2,0.4386401);
   VbbHcc_both_H_dR_stack_3->SetBinContent(3,504.6791);
   VbbHcc_both_H_dR_stack_3->SetBinContent(4,811.0372);
   VbbHcc_both_H_dR_stack_3->SetBinContent(5,924.4043);
   VbbHcc_both_H_dR_stack_3->SetBinContent(6,1028.076);
   VbbHcc_both_H_dR_stack_3->SetBinContent(7,1043.785);
   VbbHcc_both_H_dR_stack_3->SetBinContent(8,1082.856);
   VbbHcc_both_H_dR_stack_3->SetBinContent(9,1088.672);
   VbbHcc_both_H_dR_stack_3->SetBinContent(10,1155.349);
   VbbHcc_both_H_dR_stack_3->SetBinContent(11,1265.029);
   VbbHcc_both_H_dR_stack_3->SetBinContent(12,1386.597);
   VbbHcc_both_H_dR_stack_3->SetBinContent(13,1526.557);
   VbbHcc_both_H_dR_stack_3->SetBinContent(14,1656.072);
   VbbHcc_both_H_dR_stack_3->SetBinContent(15,1776.963);
   VbbHcc_both_H_dR_stack_3->SetBinContent(16,1773.94);
   VbbHcc_both_H_dR_stack_3->SetBinContent(17,1009.608);
   VbbHcc_both_H_dR_stack_3->SetBinContent(18,631.7906);
   VbbHcc_both_H_dR_stack_3->SetBinContent(19,405.7923);
   VbbHcc_both_H_dR_stack_3->SetBinContent(20,260.7309);
   VbbHcc_both_H_dR_stack_3->SetBinContent(21,161.6003);
   VbbHcc_both_H_dR_stack_3->SetBinContent(22,99.16119);
   VbbHcc_both_H_dR_stack_3->SetBinContent(23,57.5367);
   VbbHcc_both_H_dR_stack_3->SetBinContent(24,31.40945);
   VbbHcc_both_H_dR_stack_3->SetBinContent(25,13.81933);
   VbbHcc_both_H_dR_stack_3->SetBinContent(26,6.069065);
   VbbHcc_both_H_dR_stack_3->SetBinContent(27,2.358077);
   VbbHcc_both_H_dR_stack_3->SetBinContent(28,0.990869);
   VbbHcc_both_H_dR_stack_3->SetBinContent(29,0.06930277);
   VbbHcc_both_H_dR_stack_3->SetBinError(2,0.1752565);
   VbbHcc_both_H_dR_stack_3->SetBinError(3,5.909563);
   VbbHcc_both_H_dR_stack_3->SetBinError(4,7.451797);
   VbbHcc_both_H_dR_stack_3->SetBinError(5,7.946321);
   VbbHcc_both_H_dR_stack_3->SetBinError(6,8.324892);
   VbbHcc_both_H_dR_stack_3->SetBinError(7,8.32127);
   VbbHcc_both_H_dR_stack_3->SetBinError(8,8.468033);
   VbbHcc_both_H_dR_stack_3->SetBinError(9,8.440614);
   VbbHcc_both_H_dR_stack_3->SetBinError(10,8.680323);
   VbbHcc_both_H_dR_stack_3->SetBinError(11,9.111429);
   VbbHcc_both_H_dR_stack_3->SetBinError(12,9.528181);
   VbbHcc_both_H_dR_stack_3->SetBinError(13,10.02433);
   VbbHcc_both_H_dR_stack_3->SetBinError(14,10.48303);
   VbbHcc_both_H_dR_stack_3->SetBinError(15,10.90408);
   VbbHcc_both_H_dR_stack_3->SetBinError(16,10.88607);
   VbbHcc_both_H_dR_stack_3->SetBinError(17,8.19004);
   VbbHcc_both_H_dR_stack_3->SetBinError(18,6.465509);
   VbbHcc_both_H_dR_stack_3->SetBinError(19,5.1476);
   VbbHcc_both_H_dR_stack_3->SetBinError(20,4.115184);
   VbbHcc_both_H_dR_stack_3->SetBinError(21,3.224422);
   VbbHcc_both_H_dR_stack_3->SetBinError(22,2.52001);
   VbbHcc_both_H_dR_stack_3->SetBinError(23,1.913069);
   VbbHcc_both_H_dR_stack_3->SetBinError(24,1.409541);
   VbbHcc_both_H_dR_stack_3->SetBinError(25,0.9255316);
   VbbHcc_both_H_dR_stack_3->SetBinError(26,0.6160862);
   VbbHcc_both_H_dR_stack_3->SetBinError(27,0.3778126);
   VbbHcc_both_H_dR_stack_3->SetBinError(28,0.231024);
   VbbHcc_both_H_dR_stack_3->SetBinError(29,0.06930277);
   VbbHcc_both_H_dR_stack_3->SetEntries(333238);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,115.4178);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,161.3625);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,142.3744);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,103.8676);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,97.75139);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,95.46326);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,114.2327);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,106.2831);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,132.372);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,160.3124);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,165.8054);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,195.7208);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,211.0821);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,222.4399);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,114.5625);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,80.63892);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,42.41022);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,25.60008);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,17.29998);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,10.60624);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,5.679758);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,2.396172);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,2.327771);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,0.6810478);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,0.1380418);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,6.327704);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,7.083825);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,7.748503);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,4.737121);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,5.959985);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,4.092252);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,8.506762);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,5.497213);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,7.468956);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,9.197273);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,7.157055);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,9.013431);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,7.972977);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,8.363877);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,5.488971);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,6.905879);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,3.710187);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,1.992514);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,1.735673);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,1.40626);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,1.056254);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,0.622085);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,0.7119048);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,0.4099022);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,0.0998183);
   VbbHcc_both_H_dR_stack_4->SetEntries(18334);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,11.92124);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,13.08131);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,11.15938);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,7.264002);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,17.02732);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,10.82329);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,11.89735);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,21.12514);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,15.47924);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,14.30086);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,17.20272);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,22.49718);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,24.10408);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,20.0867);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,9.849637);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,7.334447);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,4.961277);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,5.211342);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,4.045875);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,3.040486);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,0.910234);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,0.5383456);
   VbbHcc_both_H_dR_stack_5->SetBinContent(27,0.1627641);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,1.683912);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,2.23385);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,2.042182);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,0.9575711);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,5.433898);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,2.280147);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,2.442012);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,7.97585);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,2.885249);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,2.19694);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,2.687288);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,3.306388);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,2.870476);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,2.745672);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,2.020987);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.018454);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,0.8425054);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,1.19602);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,1.367531);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,1.560286);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,0.3620587);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,0.2156015);
   VbbHcc_both_H_dR_stack_5->SetBinError(27,0.1627641);
   VbbHcc_both_H_dR_stack_5->SetEntries(2217);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_stack_6 = new TH1D("VbbHcc_both_H_dR_stack_6","",30,0,6);
   VbbHcc_both_H_dR_stack_6->SetBinContent(3,0.3049337);
   VbbHcc_both_H_dR_stack_6->SetBinContent(16,0.6108484);
   VbbHcc_both_H_dR_stack_6->SetBinContent(19,0.2950387);
   VbbHcc_both_H_dR_stack_6->SetBinContent(24,0.232904);
   VbbHcc_both_H_dR_stack_6->SetBinError(3,0.3049337);
   VbbHcc_both_H_dR_stack_6->SetBinError(16,0.4430842);
   VbbHcc_both_H_dR_stack_6->SetBinError(19,0.2950387);
   VbbHcc_both_H_dR_stack_6->SetBinError(24,0.232904);
   VbbHcc_both_H_dR_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,0.181553);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,0.8160671);
   VbbHcc_both_H_dR_stack_7->SetBinContent(6,0.4433125);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,0.269206);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,0.2711943);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.8041691);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,1.357164);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,0.8766325);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.7838816);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.1680729);
   VbbHcc_both_H_dR_stack_7->SetBinContent(19,0.2454468);
   VbbHcc_both_H_dR_stack_7->SetBinContent(21,0.2962674);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,0.181553);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.4197281);
   VbbHcc_both_H_dR_stack_7->SetBinError(6,0.3218993);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.269206);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.2711943);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.4678644);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.6108934);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.5098347);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.4577992);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.1680729);
   VbbHcc_both_H_dR_stack_7->SetBinError(19,0.2454468);
   VbbHcc_both_H_dR_stack_7->SetBinError(21,0.2962674);
   VbbHcc_both_H_dR_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,4.75624);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,3.56232);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,5.44607);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,2.970247);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.800535);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,0.4362911);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,0.2915078);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,1.075008);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,0.8969534);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,2.008751);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,0.02067347);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,3.744916);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,5.314585);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,6.802119);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,1.512731);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,1.006322);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.3720851);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,0.7135548);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.118766);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,0.9198423);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.104643);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.8440886);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.6586002);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.3196257);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.279488);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.5392289);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,0.4499635);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,0.713237);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.02067347);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,0.9939691);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.149983);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.292674);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.6246501);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.5045074);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.2631779);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.4128008);
   VbbHcc_both_H_dR_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,2.639555);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,4.758409);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,4.716314);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,3.741763);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,2.63054);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,1.586249);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,1.245266);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,1.09451);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,1.436872);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,1.973216);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,2.662301);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,3.404239);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,4.097412);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,4.297383);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,1.489847);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,0.5465929);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.2348587);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.1034567);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.0622764);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.03880195);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.01668317);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.009267816);
   VbbHcc_both_H_dR_stack_9->SetBinContent(25,0.001249111);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.001584266);
   VbbHcc_both_H_dR_stack_9->SetBinContent(27,0.0008461904);
   VbbHcc_both_H_dR_stack_9->SetBinContent(28,0.00159293);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.06805139);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.08939668);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.0869448);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.07663755);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.06359839);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.04917657);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.04423046);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.0416851);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.04793744);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.05607224);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.06501865);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.07400103);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.08162836);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.08364733);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.04906532);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.02985748);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.01920546);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.0132122);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.009946973);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.007536135);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.004774559);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.003534882);
   VbbHcc_both_H_dR_stack_9->SetBinError(25,0.001249111);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.001584266);
   VbbHcc_both_H_dR_stack_9->SetBinError(27,0.0008461904);
   VbbHcc_both_H_dR_stack_9->SetBinError(28,0.00159293);
   VbbHcc_both_H_dR_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,0.648197);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,1.381218);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,1.6131);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,1.555327);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,1.211009);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,0.9120653);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,0.6828877);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,0.6103476);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,0.6866694);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,0.8614048);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,1.013912);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,1.178645);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,1.332196);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,1.285699);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,0.5315794);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,0.23161);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,0.1101055);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.0600038);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.0345922);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.01807701);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.008190594);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.004911146);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.002357749);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.0007848554);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.0003754747);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.01632683);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.02354576);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.02508208);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.02442692);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.02143506);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.01864946);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.01624474);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.01540927);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.0163244);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.01828666);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.01979824);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.02135632);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.02276281);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.02235905);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.01435114);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.009496353);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.006558623);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.004819651);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.003685345);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.002652315);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.001762185);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.001380805);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.0009651898);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.000555009);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.0003754747);
   VbbHcc_both_H_dR_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.003434412);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.02065067);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.007809649);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.01804384);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.01747791);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.01560817);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.005833825);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.005395594);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.005945392);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.007858506);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.007268515);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.004884706);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.00641907);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.007732482);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.008269425);
   VbbHcc_both_H_dR_stack_11->SetBinContent(18,0.001131928);
   VbbHcc_both_H_dR_stack_11->SetBinContent(20,0.00182132);
   VbbHcc_both_H_dR_stack_11->SetBinContent(21,0.001052596);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.002502062);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.005987255);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.003509523);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.00525411);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.004969805);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.005128169);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.002941924);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.003132007);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.002987938);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.003582191);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.003471518);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.002835526);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.003260154);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.003504844);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.003740672);
   VbbHcc_both_H_dR_stack_11->SetBinError(18,0.001131928);
   VbbHcc_both_H_dR_stack_11->SetBinError(20,0.00182132);
   VbbHcc_both_H_dR_stack_11->SetBinError(21,0.001052596);
   VbbHcc_both_H_dR_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.002158506);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.003377075);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.005281305);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.005336965);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.006594216);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.003750005);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.003017898);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.003601316);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.004087504);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.003451191);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.003415688);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.003130115);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.005004747);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.004268586);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.001589554);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.001502024);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.0006292953);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.0006385123);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.0004687398);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.0002869359);
   VbbHcc_both_H_dR_stack_12->SetBinContent(24,8.991818e-05);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.0006909836);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.0008789628);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001043801);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.001025572);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.00116345);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.0008910617);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.0007976254);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.0008515713);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.0009277738);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.0008494566);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.0008631087);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.0007882734);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.001030938);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.0009499311);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0005805716);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0005784081);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.0003644404);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.000368734);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.0002750223);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0002869359);
   VbbHcc_both_H_dR_stack_12->SetBinError(24,8.991818e-05);
   VbbHcc_both_H_dR_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR__587 = new TH1D("VbbHcc_both_H_dR__587","",30,0,6);
   VbbHcc_both_H_dR__587->SetBinContent(2,4);
   VbbHcc_both_H_dR__587->SetBinContent(3,3169);
   VbbHcc_both_H_dR__587->SetBinContent(4,3721);
   VbbHcc_both_H_dR__587->SetBinContent(5,3014);
   VbbHcc_both_H_dR__587->SetBinContent(6,3064);
   VbbHcc_both_H_dR__587->SetBinContent(7,3022);
   VbbHcc_both_H_dR__587->SetBinContent(8,3163);
   VbbHcc_both_H_dR__587->SetBinContent(9,3317);
   VbbHcc_both_H_dR__587->SetBinContent(10,3701);
   VbbHcc_both_H_dR__587->SetBinContent(11,3918);
   VbbHcc_both_H_dR__587->SetBinContent(12,4351);
   VbbHcc_both_H_dR__587->SetBinContent(13,4743);
   VbbHcc_both_H_dR__587->SetBinContent(14,5374);
   VbbHcc_both_H_dR__587->SetBinContent(15,5849);
   VbbHcc_both_H_dR__587->SetBinContent(16,5930);
   VbbHcc_both_H_dR__587->SetBinContent(17,3561);
   VbbHcc_both_H_dR__587->SetBinContent(18,2412);
   VbbHcc_both_H_dR__587->SetBinContent(19,1703);
   VbbHcc_both_H_dR__587->SetBinContent(20,1104);
   VbbHcc_both_H_dR__587->SetBinContent(21,768);
   VbbHcc_both_H_dR__587->SetBinContent(22,512);
   VbbHcc_both_H_dR__587->SetBinContent(23,298);
   VbbHcc_both_H_dR__587->SetBinContent(24,190);
   VbbHcc_both_H_dR__587->SetBinContent(25,87);
   VbbHcc_both_H_dR__587->SetBinContent(26,40);
   VbbHcc_both_H_dR__587->SetBinContent(27,16);
   VbbHcc_both_H_dR__587->SetBinContent(28,5);
   VbbHcc_both_H_dR__587->SetEntries(67065);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR__587->SetLineColor(ci);
   VbbHcc_both_H_dR__587->SetLineWidth(2);
   VbbHcc_both_H_dR__587->SetMarkerStyle(20);
   VbbHcc_both_H_dR__587->SetMarkerSize(1.2);
   VbbHcc_both_H_dR__587->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR__587->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__587->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__587->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__587->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__587->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__587->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__587->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__587->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR__587->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__587->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__587->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__587->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__587->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__587->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_fx1427[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fy1427[30] = {
   0,
   6.326733,
   30840.33,
   11195.44,
   9155.308,
   8399.039,
   7280.476,
   7779.93,
   6964.39,
   25643.07,
   10175.59,
   10072.18,
   12091.12,
   14996.81,
   16599.3,
   18501.64,
   8980.513,
   8729.933,
   6266.003,
   2437.77,
   2015.823,
   1084.534,
   946.4996,
   724.3398,
   121.549,
   317.1318,
   2.700869,
   0.9975894,
   0.06930277,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_fex1427[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_fey1427[30] = {
   0,
   5.890701,
   20625.72,
   1246.91,
   1097.867,
   1061.824,
   909.9486,
   943.8734,
   808.9547,
   16559.13,
   1310.388,
   1033.515,
   1213.698,
   1364.195,
   1415.57,
   1880.186,
   950.7665,
   1115.883,
   953.8078,
   476.8968,
   465.1427,
   360.7227,
   348.3315,
   361.9327,
   36.22462,
   264.1807,
   0.4252772,
   0.2310864,
   0.06930277,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_fx1427,Graph_from_VbbHcc_both_H_dR_fy1427,Graph_from_VbbHcc_both_H_dR_fex1427,Graph_from_VbbHcc_both_H_dR_fey1427);
   gre->SetName("Graph_from_VbbHcc_both_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR1427 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR1427","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetMinimum(56.61266);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetMaximum(56612.66);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR1427);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR","MC unc. (stat.)","fl");

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
   H_dR_both_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__588 = new TH1D("data_mc_ratio__588","",30,0,6);
   data_mc_ratio__588->SetBinContent(2,0.6322378);
   data_mc_ratio__588->SetBinContent(3,0.1027551);
   data_mc_ratio__588->SetBinContent(4,0.3323673);
   data_mc_ratio__588->SetBinContent(5,0.3292079);
   data_mc_ratio__588->SetBinContent(6,0.3648037);
   data_mc_ratio__588->SetBinContent(7,0.4150827);
   data_mc_ratio__588->SetBinContent(8,0.4065589);
   data_mc_ratio__588->SetBinContent(9,0.4762801);
   data_mc_ratio__588->SetBinContent(10,0.1443275);
   data_mc_ratio__588->SetBinContent(11,0.3850392);
   data_mc_ratio__588->SetBinContent(12,0.4319821);
   data_mc_ratio__588->SetBinContent(13,0.3922714);
   data_mc_ratio__588->SetBinContent(14,0.3583429);
   data_mc_ratio__588->SetBinContent(15,0.3523643);
   data_mc_ratio__588->SetBinContent(16,0.3205122);
   data_mc_ratio__588->SetBinContent(17,0.3965252);
   data_mc_ratio__588->SetBinContent(18,0.2762908);
   data_mc_ratio__588->SetBinContent(19,0.2717841);
   data_mc_ratio__588->SetBinContent(20,0.452873);
   data_mc_ratio__588->SetBinContent(21,0.3809859);
   data_mc_ratio__588->SetBinContent(22,0.4720923);
   data_mc_ratio__588->SetBinContent(23,0.3148443);
   data_mc_ratio__588->SetBinContent(24,0.2623078);
   data_mc_ratio__588->SetBinContent(25,0.7157608);
   data_mc_ratio__588->SetBinContent(26,0.1261305);
   data_mc_ratio__588->SetBinContent(27,5.92402);
   data_mc_ratio__588->SetBinContent(28,5.012082);
   data_mc_ratio__588->SetBinError(2,0.3161189);
   data_mc_ratio__588->SetBinError(3,0.001825333);
   data_mc_ratio__588->SetBinError(4,0.005448645);
   data_mc_ratio__588->SetBinError(5,0.005996511);
   data_mc_ratio__588->SetBinError(6,0.006590446);
   data_mc_ratio__588->SetBinError(7,0.007550704);
   data_mc_ratio__588->SetBinError(8,0.007228929);
   data_mc_ratio__588->SetBinError(9,0.008269699);
   data_mc_ratio__588->SetBinError(10,0.002372408);
   data_mc_ratio__588->SetBinError(11,0.006151382);
   data_mc_ratio__588->SetBinError(12,0.006548942);
   data_mc_ratio__588->SetBinError(13,0.00569587);
   data_mc_ratio__588->SetBinError(14,0.004888211);
   data_mc_ratio__588->SetBinError(15,0.004607348);
   data_mc_ratio__588->SetBinError(16,0.004162145);
   data_mc_ratio__588->SetBinError(17,0.006644845);
   data_mc_ratio__588->SetBinError(18,0.005625715);
   data_mc_ratio__588->SetBinError(19,0.006585924);
   data_mc_ratio__588->SetBinError(20,0.01362988);
   data_mc_ratio__588->SetBinError(21,0.01374764);
   data_mc_ratio__588->SetBinError(22,0.02086373);
   data_mc_ratio__588->SetBinError(23,0.01823844);
   data_mc_ratio__588->SetBinError(24,0.01902981);
   data_mc_ratio__588->SetBinError(25,0.07673761);
   data_mc_ratio__588->SetBinError(26,0.01994299);
   data_mc_ratio__588->SetBinError(27,1.481005);
   data_mc_ratio__588->SetBinError(28,2.241471);
   data_mc_ratio__588->SetMinimum(0.4);
   data_mc_ratio__588->SetMaximum(1.6);
   data_mc_ratio__588->SetEntries(39.96682);
   data_mc_ratio__588->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__588->SetLineColor(ci);
   data_mc_ratio__588->SetLineWidth(2);
   data_mc_ratio__588->SetMarkerStyle(20);
   data_mc_ratio__588->SetMarkerSize(1.2);
   data_mc_ratio__588->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__588->GetXaxis()->SetRange(1,31);
   data_mc_ratio__588->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__588->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__588->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__588->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__588->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__588->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__588->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__588->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__588->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__588->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__588->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__588->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__588->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__588->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__588->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__588->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__588->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1428[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1428[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1428[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1428[30] = {
   0,
   0.9310809,
   0.6687906,
   0.1113766,
   0.1199158,
   0.1264221,
   0.1249848,
   0.1213216,
   0.1161559,
   0.6457544,
   0.1287776,
   0.1026109,
   0.1003793,
   0.09096566,
   0.0852789,
   0.1016227,
   0.10587,
   0.1278226,
   0.1522195,
   0.1956283,
   0.2307458,
   0.3326063,
   0.3680207,
   0.4996725,
   0.2980248,
   0.8330312,
   0.1574594,
   0.2316448,
   1,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1428,Graph_from_mc_statistical_error_fy1428,Graph_from_mc_statistical_error_fex1428,Graph_from_mc_statistical_error_fey1428);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1428 = new TH1F("Graph_Graph_from_mc_statistical_error1428","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1428->SetMinimum(1.998401e-16);
   Graph_Graph_from_mc_statistical_error1428->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1428->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1428->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1428->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1428);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
