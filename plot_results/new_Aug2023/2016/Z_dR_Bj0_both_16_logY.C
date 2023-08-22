void Z_dR_Bj0_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Tue Aug 22 09:18:39 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(0,0,1,1);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetFillStyle(4000);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.862568,6.314516,12.11163);
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
   st->SetMaximum(1.204141e+10);
   
   TH1F *st_stack_241 = new TH1F("st_stack_241","",30,0,6);
   st_stack_241->SetMinimum(0.001420386);
   st_stack_241->SetMaximum(4.113509e+10);
   st_stack_241->SetDirectory(0);
   st_stack_241->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_241->SetLineColor(ci);
   st_stack_241->GetXaxis()->SetRange(1,30);
   st_stack_241->GetXaxis()->SetLabelFont(42);
   st_stack_241->GetXaxis()->SetLabelSize(0.035);
   st_stack_241->GetXaxis()->SetTitleSize(0.035);
   st_stack_241->GetXaxis()->SetTitleFont(42);
   st_stack_241->GetYaxis()->SetTitle("Events/0.2");
   st_stack_241->GetYaxis()->SetLabelFont(42);
   st_stack_241->GetYaxis()->SetLabelSize(0.05);
   st_stack_241->GetYaxis()->SetTitleSize(0.057);
   st_stack_241->GetYaxis()->SetTitleOffset(1.2);
   st_stack_241->GetYaxis()->SetTitleFont(42);
   st_stack_241->GetZaxis()->SetLabelFont(42);
   st_stack_241->GetZaxis()->SetLabelSize(0.035);
   st_stack_241->GetZaxis()->SetTitleSize(0.035);
   st_stack_241->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_241);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,6950.485);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,32051.71);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,28524.97);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,22170.39);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,15400.16);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,12710.38);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,6715.804);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,9005.87);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,6028.315);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,8154.948);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,4419.404);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,5752.897);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,3368.122);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,3059.756);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,2972.366);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,1608.753);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,2269.547);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,2779.897);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,2421.708);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,691.0451);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,405.9754);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,894.3538);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,328.669);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,857.3907);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,506.8993);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,127.7735);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,118.4276);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,57.35179);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,59.15952);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(30,6.247706);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,55.95458);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,1004.842);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,3122.507);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,3054.085);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,3200.607);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,2275.181);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,2499.74);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,1055.209);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,2355.838);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,1714.177);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,1922.382);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,894.6108);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,1764.385);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,776.47);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,771.6334);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,710.3978);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,458.8183);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,700.412);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,1558.177);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,763.336);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,318.5482);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,83.76799);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,442.6479);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,74.70035);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,442.4245);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,314.3846);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,41.52295);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,41.68754);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,29.15317);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,37.41121);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(30,6.247706);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,37.05134);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(9183);

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
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,32.69305);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,104.0308);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,111.9338);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,92.37621);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,77.71524);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,62.53189);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,46.58327);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,40.36029);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,33.62867);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,29.37881);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,23.16214);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,23.3072);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,16.70906);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,16.65089);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,15.04892);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,14.05639);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,8.381337);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,10.63942);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,5.244784);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,6.432206);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,4.262753);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,4.283858);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,4.426882);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,2.184564);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,2.764335);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,1.844668);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,0.9802942);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,1.383995);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,0.1951352);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,0.134208);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,0.1503992);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,2.433247);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,4.072771);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,4.135574);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,3.79001);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,3.44948);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,3.204414);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,2.730247);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,2.537626);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,2.348088);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,2.184914);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,1.886185);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,1.961439);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,1.651808);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,1.649019);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,1.508083);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,1.510844);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,1.005518);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,1.328079);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.9196442);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,1.093635);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.8207649);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.8289283);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.8659436);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.5407702);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.741377);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.5195949);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.4712635);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.4987247);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.09857004);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,0.07748505);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,0.0878336);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(9517);

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
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(1,408.1411);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(2,1861.964);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(3,2254.59);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(4,1977.477);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(5,1523.145);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(6,1145.197);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(7,894.0422);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(8,718.6622);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(9,596.7219);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(10,510.009);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(11,447.5364);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(12,391.9341);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(13,341.1608);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(14,306.0803);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(15,260.342);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(16,236.1468);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(17,190.396);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(18,164.6487);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(19,140.5151);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(20,117.41);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(21,97.77273);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(22,69.03015);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(23,57.45357);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(24,42.32818);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(25,30.44236);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(26,22.82203);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(27,14.84138);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(28,9.241493);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(29,5.688294);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(30,3.358205);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(31,4.970956);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(1,5.181374);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(2,11.04957);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(3,12.17119);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(4,11.40525);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(5,10.00951);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(6,8.674231);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(7,7.665899);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(8,6.862975);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(9,6.252195);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(10,5.781206);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(11,5.420325);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(12,5.076874);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(13,4.730119);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(14,4.488652);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(15,4.131209);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(16,3.941432);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(17,3.539262);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(18,3.283649);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(19,3.039173);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(20,2.770341);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(21,2.522011);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(22,2.110895);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(23,1.941457);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(24,1.657653);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(25,1.413376);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(26,1.217495);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(27,0.9823058);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(28,0.7671661);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(29,0.6088342);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(30,0.4675141);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(31,0.5488711);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetEntries(232621);

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
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(1,78.25533);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(2,300.6415);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(3,345.3075);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(4,267.7103);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(5,175.0482);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(6,134.7456);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(7,100.9575);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(8,93.72757);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(9,72.0186);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(10,60.58765);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(11,62.20303);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(12,52.28171);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(13,48.72146);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(14,50.8606);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(15,35.36096);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(16,28.30418);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(17,25.54514);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(18,24.9311);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(19,23.06548);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(20,17.55763);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(21,15.61735);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(22,5.602779);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(23,6.967268);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(24,8.324911);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(25,4.855237);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(26,2.221591);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(27,1.88719);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(28,0.8405893);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(29,1.113939);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(31,0.4148741);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(1,2.980582);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(2,9.535834);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(3,13.41538);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(4,13.3695);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(5,10.48652);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(6,9.578171);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(7,7.505692);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(8,8.035766);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(9,6.822399);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(10,5.832796);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(11,7.013575);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(12,5.801147);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(13,5.33796);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(14,6.54188);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(15,5.015756);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(16,4.348919);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(17,3.797651);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(18,3.769076);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(19,4.23444);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(20,2.906614);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(21,2.807688);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(22,0.8128839);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(23,1.125282);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(24,1.399237);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(25,0.8765624);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(26,0.4971977);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(27,0.4686172);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(28,0.2432015);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(29,0.4061892);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(31,0.1696605);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetEntries(15013);

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
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(1,13.9301);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(2,43.32719);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(3,28.49351);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(4,27.4329);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(5,13.22235);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(6,11.15508);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(7,6.135498);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(8,9.084069);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(9,5.729652);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(10,5.404954);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(11,3.196435);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(12,8.361958);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(13,4.142573);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(14,2.782953);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(15,3.6782);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(16,2.784747);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(17,1.770062);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(18,3.128275);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(19,2.27654);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(20,1.496713);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(21,0.9413481);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(22,0.9095644);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(23,3.886084);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(24,0.5562327);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(25,1.130752);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(26,0.6350178);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(27,0.1732963);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(28,0.1553031);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(29,0.1335194);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(30,0.0004735285);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(31,0.1528792);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(1,1.48581);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(2,7.851811);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(3,3.15432);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(4,7.705719);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(5,2.097125);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(6,1.820467);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(7,0.8501365);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(8,1.984196);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(9,1.264033);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(10,1.566763);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(11,0.6107538);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(12,2.196027);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(13,1.218227);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(14,0.6204368);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(15,1.169057);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(16,1.110136);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(17,0.3967466);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(18,1.166862);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(19,1.07978);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(20,0.4812633);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(21,0.3229785);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(22,0.2954547);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(23,1.807082);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(24,0.2545022);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(25,0.3438619);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(26,0.2376438);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(27,0.1098673);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(28,0.1091472);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(29,0.0907932);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(30,0.0003348352);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(31,0.1528792);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetEntries(3486);

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
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(1,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(2,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(5,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(7,0.3022236);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(8,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(11,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(12,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(19,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(21,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(1,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(2,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(5,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(7,0.2137044);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(8,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(11,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(12,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(19,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(21,0.1511118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetEntries(10);

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
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,1.010026);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,1.234476);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,0.3366753);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(6,0.2244502);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(7,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,0.2244502);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(9,0.4489005);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(10,0.4489005);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(11,0.2244502);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,0.2244502);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(13,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(14,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(15,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(16,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(17,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(19,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(20,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,0.3366753);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,0.3722086);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,0.1943796);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(6,0.1587103);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(7,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.1587103);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(9,0.2244502);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(10,0.2244502);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(11,0.1587103);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.1587103);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(13,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(14,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(15,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(16,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(17,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(19,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(20,0.1122251);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(49);

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
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(1,0.7981875);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(2,7.44975);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(3,9.57825);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(4,3.724875);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(5,2.926687);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(6,2.1285);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(7,1.330312);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(8,1.862437);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(9,1.330312);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(10,1.862437);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(11,1.06425);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(12,1.596375);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(13,1.330312);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(14,0.532125);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(15,0.532125);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(16,0.532125);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(17,0.532125);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(18,0.532125);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(20,0.2660625);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(21,0.2660625);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(23,0.2660625);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(24,0.7981875);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(25,0.2660625);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(26,0.2660625);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(28,0.2660625);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(1,0.4608338);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(2,1.40787);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(3,1.596375);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(4,0.9955147);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(5,0.8824295);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(6,0.7525384);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(7,0.5949338);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(8,0.7039352);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(9,0.5949338);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(10,0.7039352);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(11,0.532125);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(12,0.6517174);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(13,0.5949338);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(14,0.3762692);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(15,0.3762692);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(16,0.3762692);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(17,0.3762692);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(18,0.3762692);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(20,0.2660625);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(21,0.2660625);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(23,0.2660625);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(24,0.4608338);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(25,0.2660625);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(26,0.2660625);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(28,0.2660625);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetEntries(158);

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
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(1,1.492111);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(2,6.747472);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(3,7.552607);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(4,5.53977);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(5,3.594255);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(6,2.301368);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(7,1.782014);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(8,1.430283);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(9,1.320367);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(10,1.22419);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(11,1.115648);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(12,1.00848);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(13,0.9013117);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(14,0.7433074);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(15,0.6402611);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(16,0.502866);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(17,0.419055);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(18,0.3118868);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(19,0.2528069);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(20,0.1827355);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(21,0.1744917);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(22,0.1456388);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(23,0.1002984);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(24,0.0810631);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(25,0.07007149);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(26,0.05770593);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(27,0.02885297);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(28,0.01648741);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(29,0.006869754);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(30,0.001373951);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(31,0.001373951);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(1,0.04527788);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(2,0.09628445);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(3,0.1018671);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(4,0.08724317);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(5,0.07027325);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(6,0.05623136);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(7,0.04948131);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(8,0.04432988);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(9,0.04259247);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(10,0.04101191);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(11,0.03915157);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(12,0.03722367);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(13,0.03519031);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(14,0.03195728);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(15,0.02965952);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(16,0.02628523);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(17,0.02399502);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(18,0.02070066);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(19,0.01863718);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(20,0.01584517);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(21,0.01548364);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(22,0.01414569);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(23,0.01173904);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(24,0.01055352);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(25,0.009811971);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(26,0.008904219);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(27,0.006296233);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(28,0.004759505);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(29,0.003072247);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(30,0.001373951);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(31,0.001373951);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetEntries(28929);

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
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(1,0.587685);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(2,2.856047);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(3,3.445006);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(4,2.528659);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(5,1.678554);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(6,1.134181);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(7,0.8292982);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(8,0.6942665);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(9,0.5524408);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(10,0.5405513);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(11,0.4794048);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(12,0.3927808);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(13,0.3498934);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(14,0.3057321);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(15,0.2815283);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(16,0.2233543);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(17,0.1885348);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(18,0.1566877);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(19,0.1176219);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(20,0.1074308);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(21,0.08067929);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(22,0.07600839);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(23,0.06794046);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(24,0.03949039);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(25,0.03184709);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(26,0.01783437);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(27,0.01443735);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(28,0.004246279);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(29,0.005095534);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(30,0.0004246279);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(31,0.0004246279);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(1,0.01579707);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(2,0.03482466);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(3,0.03824716);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(4,0.03276796);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(5,0.02669758);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(6,0.0219455);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(7,0.01876548);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(8,0.01716988);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(9,0.01531606);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(10,0.01515035);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(11,0.01426775);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(12,0.01291455);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(13,0.01218911);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(14,0.01139396);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(15,0.01093365);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(16,0.009738708);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(17,0.008947464);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(18,0.008156835);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(19,0.007067216);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(20,0.00675412);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(21,0.005853091);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(22,0.005681134);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(23,0.005371165);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(24,0.004094963);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(25,0.003677385);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(26,0.002751903);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(27,0.002475985);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(28,0.001342791);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(29,0.001470954);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(30,0.0004246279);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(31,0.0004246279);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetEntries(41891);

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
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.01914505);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.01914505);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.01367504);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(14,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.00723615);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.00723615);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.006115663);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.003867885);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(11,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(12,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(14,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(36);

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
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(1,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(2,0.01143251);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(3,0.01143251);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(4,0.009646178);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(5,0.003215393);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(6,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(7,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(8,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(9,0.001786329);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(11,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(12,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(13,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(16,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(17,0.001071798);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(19,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(1,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(2,0.002021001);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(3,0.002021001);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(4,0.001856408);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(5,0.001071798);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(6,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(7,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(8,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(9,0.0007988707);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(11,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(12,0.0005052502);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(13,0.0005052502);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(16,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(17,0.0006188026);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(19,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetEntries(137);

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
   
   TH1D *VbbHcc_both_Z_dR_Bj0__661 = new TH1D("VbbHcc_both_Z_dR_Bj0__661","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(1,5050);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(2,16568);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(3,15215);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(4,11335);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(5,8583);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(6,6782);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(7,5300);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(8,4439);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(9,3698);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(10,3072);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(11,2720);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(12,2516);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(13,2103);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(14,1965);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(15,1714);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(16,1502);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(17,1272);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(18,1104);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(19,943);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(20,774);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(21,646);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(22,545);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(23,393);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(24,344);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(25,306);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(26,236);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(27,141);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(28,93);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(29,60);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(30,32);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(31,40);
   VbbHcc_both_Z_dR_Bj0__661->SetEntries(99520);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0__661->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0__661->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0__661->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0__661->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__661->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fx1481[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fy1481[30] = {
   7486.65,
   34379.92,
   31287.13,
   24547.54,
   17197.77,
   14069.81,
   7767.88,
   9872.074,
   6740.071,
   8764.407,
   4958.54,
   6232.159,
   3781.55,
   3437.835,
   3288.362,
   1891.417,
   2496.892,
   2984.245,
   2593.444,
   834.6105,
   525.2423,
   974.4018,
   401.8398,
   911.7034,
   546.4603,
   155.6384,
   136.353,
   69.25997,
   66.30238,
   9.74239};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fex1481[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fey1481[30] = {
   1004.864,
   3122.554,
   3054.144,
   3200.667,
   2275.231,
   2499.776,
   1055.268,
   2355.864,
   1714.204,
   1922.402,
   894.6571,
   1764.404,
   776.5057,
   771.6763,
   710.4302,
   458.8598,
   700.4322,
   1558.186,
   763.3552,
   318.5759,
   83.85816,
   442.6545,
   74.76138,
   442.4305,
   314.3902,
   41.54855,
   41.70455,
   29.16996,
   37.4186,
   6.265652};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_fx1481,Graph_from_VbbHcc_both_Z_dR_Bj0_fy1481,Graph_from_VbbHcc_both_Z_dR_Bj0_fex1481,Graph_from_VbbHcc_both_Z_dR_Bj0_fey1481);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetMinimum(3.129064);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetMaximum(41252.37);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__662 = new TH1D("data_mc_ratio__662","",30,0,6);
   data_mc_ratio__662->SetBinContent(1,0.674534);
   data_mc_ratio__662->SetBinContent(2,0.4819093);
   data_mc_ratio__662->SetBinContent(3,0.4863022);
   data_mc_ratio__662->SetBinContent(4,0.461757);
   data_mc_ratio__662->SetBinContent(5,0.4990764);
   data_mc_ratio__662->SetBinContent(6,0.4820251);
   data_mc_ratio__662->SetBinContent(7,0.6822969);
   data_mc_ratio__662->SetBinContent(8,0.4496522);
   data_mc_ratio__662->SetBinContent(9,0.5486589);
   data_mc_ratio__662->SetBinContent(10,0.3505086);
   data_mc_ratio__662->SetBinContent(11,0.5485485);
   data_mc_ratio__662->SetBinContent(12,0.4037124);
   data_mc_ratio__662->SetBinContent(13,0.5561211);
   data_mc_ratio__662->SetBinContent(14,0.5715807);
   data_mc_ratio__662->SetBinContent(15,0.5212321);
   data_mc_ratio__662->SetBinContent(16,0.7941135);
   data_mc_ratio__662->SetBinContent(17,0.5094333);
   data_mc_ratio__662->SetBinContent(18,0.3699428);
   data_mc_ratio__662->SetBinContent(19,0.3636092);
   data_mc_ratio__662->SetBinContent(20,0.9273787);
   data_mc_ratio__662->SetBinContent(21,1.229909);
   data_mc_ratio__662->SetBinContent(22,0.5593175);
   data_mc_ratio__662->SetBinContent(23,0.9780016);
   data_mc_ratio__662->SetBinContent(24,0.3773157);
   data_mc_ratio__662->SetBinContent(25,0.5599675);
   data_mc_ratio__662->SetBinContent(26,1.516335);
   data_mc_ratio__662->SetBinContent(27,1.03408);
   data_mc_ratio__662->SetBinContent(28,1.342767);
   data_mc_ratio__662->SetBinContent(29,0.9049449);
   data_mc_ratio__662->SetBinContent(30,3.284615);
   data_mc_ratio__662->SetBinContent(31,0.6488715);
   data_mc_ratio__662->SetBinError(1,0.009492009);
   data_mc_ratio__662->SetBinError(2,0.003743952);
   data_mc_ratio__662->SetBinError(3,0.003942487);
   data_mc_ratio__662->SetBinError(4,0.004337133);
   data_mc_ratio__662->SetBinError(5,0.005387007);
   data_mc_ratio__662->SetBinError(6,0.005853165);
   data_mc_ratio__662->SetBinError(7,0.009372068);
   data_mc_ratio__662->SetBinError(8,0.006748919);
   data_mc_ratio__662->SetBinError(9,0.009022336);
   data_mc_ratio__662->SetBinError(10,0.006323945);
   data_mc_ratio__662->SetBinError(11,0.01051794);
   data_mc_ratio__662->SetBinError(12,0.008048534);
   data_mc_ratio__662->SetBinError(13,0.0121269);
   data_mc_ratio__662->SetBinError(14,0.01289426);
   data_mc_ratio__662->SetBinError(15,0.01259);
   data_mc_ratio__662->SetBinError(16,0.02049027);
   data_mc_ratio__662->SetBinError(17,0.0142838);
   data_mc_ratio__662->SetBinError(18,0.01113397);
   data_mc_ratio__662->SetBinError(19,0.01184074);
   data_mc_ratio__662->SetBinError(20,0.03333394);
   data_mc_ratio__662->SetBinError(21,0.04839011);
   data_mc_ratio__662->SetBinError(22,0.02395853);
   data_mc_ratio__662->SetBinError(23,0.04933365);
   data_mc_ratio__662->SetBinError(24,0.0203435);
   data_mc_ratio__662->SetBinError(25,0.03201121);
   data_mc_ratio__662->SetBinError(26,0.09870501);
   data_mc_ratio__662->SetBinError(27,0.08708528);
   data_mc_ratio__662->SetBinError(28,0.1392385);
   data_mc_ratio__662->SetBinError(29,0.1168279);
   data_mc_ratio__662->SetBinError(30,0.5806434);
   data_mc_ratio__662->SetBinError(31,0.4033157);
   data_mc_ratio__662->SetMinimum(0.4);
   data_mc_ratio__662->SetMaximum(1.6);
   data_mc_ratio__662->SetEntries(79.53786);
   data_mc_ratio__662->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__662->SetLineColor(ci);
   data_mc_ratio__662->SetLineWidth(2);
   data_mc_ratio__662->SetMarkerStyle(20);
   data_mc_ratio__662->SetMarkerSize(1.2);
   data_mc_ratio__662->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__662->GetXaxis()->SetRange(1,30);
   data_mc_ratio__662->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__662->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__662->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__662->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__662->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__662->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__662->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__662->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__662->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__662->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__662->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__662->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__662->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__662->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1482[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1482[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1482[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1482[30] = {
   0.1342208,
   0.09082494,
   0.09761661,
   0.1303865,
   0.132298,
   0.1776695,
   0.1358501,
   0.2386393,
   0.2543303,
   0.2193419,
   0.1804275,
   0.2831129,
   0.2053406,
   0.2244658,
   0.2160438,
   0.2426011,
   0.2805216,
   0.5221373,
   0.2943404,
   0.381706,
   0.1596562,
   0.4542833,
   0.1860477,
   0.485279,
   0.5753212,
   0.2669556,
   0.3058572,
   0.4211662,
   0.5643629,
   0.643133};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1482,Graph_from_mc_statistical_error_fy1482,Graph_from_mc_statistical_error_fex1482,Graph_from_mc_statistical_error_fey1482);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1482 = new TH1F("Graph_Graph_from_mc_statistical_error1482","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1482->SetMinimum(0.2282404);
   Graph_Graph_from_mc_statistical_error1482->SetMaximum(1.77176);
   Graph_Graph_from_mc_statistical_error1482->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1482->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1482->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1482);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}
