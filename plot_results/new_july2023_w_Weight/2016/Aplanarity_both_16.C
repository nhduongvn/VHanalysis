void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:25:08 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(0,0,1,1);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-322.2437,1.052419,321931.4);
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
   st->SetMaximum(275910.5);
   
   TH1F *st_stack_253 = new TH1F("st_stack_253","",50,0,1);
   st_stack_253->SetMinimum(0.01);
   st_stack_253->SetMaximum(289706);
   st_stack_253->SetDirectory(0);
   st_stack_253->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_253->SetLineColor(ci);
   st_stack_253->GetXaxis()->SetRange(1,50);
   st_stack_253->GetXaxis()->SetLabelFont(42);
   st_stack_253->GetXaxis()->SetLabelSize(0.035);
   st_stack_253->GetXaxis()->SetTitleSize(0.035);
   st_stack_253->GetXaxis()->SetTitleFont(42);
   st_stack_253->GetYaxis()->SetTitle("Events/0.02");
   st_stack_253->GetYaxis()->SetLabelFont(42);
   st_stack_253->GetYaxis()->SetLabelSize(0.05);
   st_stack_253->GetYaxis()->SetTitleSize(0.057);
   st_stack_253->GetYaxis()->SetTitleOffset(1.2);
   st_stack_253->GetYaxis()->SetTitleFont(42);
   st_stack_253->GetZaxis()->SetLabelFont(42);
   st_stack_253->GetZaxis()->SetLabelSize(0.035);
   st_stack_253->GetZaxis()->SetTitleSize(0.035);
   st_stack_253->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_253);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,113558.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,31361.47);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,18054.19);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,6776.331);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,6202.575);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,4160.451);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,3054.805);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1232.582);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,858.1481);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,490.4321);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,657.5793);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,49.52582);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,73.58862);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,103.6704);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,31.59457);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.1834851);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,7.115152);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,4.527797);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,6438.866);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,3203.046);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,2945.251);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,1042.023);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,1856.355);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,924.0626);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,1587.716);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,494.7305);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,409.5096);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,279.6582);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,368.0673);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,29.44491);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,36.40722);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,40.53945);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,27.62419);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.1834851);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,7.115152);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,4.527797);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(9914);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,444.0713);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,134.6541);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,69.84852);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,38.98419);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,23.42775);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,17.35114);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,11.036);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,4.882184);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,4.188602);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,2.365678);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.37003);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,1.181875);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.9377275);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.4186522);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.9658472);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.4921032);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.3775911);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.3123042);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,0.04501684);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,8.972125);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,4.936577);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,3.626076);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,2.667126);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.048652);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,1.891956);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.52617);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.936718);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.8986087);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.6382094);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.7063456);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.4874315);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.3446637);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.1697459);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.4453146);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.302228);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.2898107);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.3123042);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,0.04501684);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(9807);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,8672.747);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,2903.227);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,1436.464);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,827.1738);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,522.7152);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,337.5822);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,234.4693);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,156.8301);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,108.0463);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,72.67653);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,53.13575);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,35.44231);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,24.4785);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,17.07456);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,10.10075);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,6.81641);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,4.285966);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,2.619052);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,2.084276);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.871534);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.2378967);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.07882061);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(24,0.08377996);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,24.57626);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,14.22496);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,10.01617);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,7.603242);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,6.040317);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,4.865537);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,4.05835);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,3.312444);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,2.748473);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,2.265298);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,1.934889);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.576084);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.312377);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.091262);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.8399574);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.6956658);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.5434185);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.4175578);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.389875);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.2462995);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.1204602);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.07882061);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(24,0.08377996);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(238439);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,1288.464);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,411.797);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,195.8689);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,102.5348);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,53.37246);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,41.88802);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,26.69035);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,20.38456);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,10.56048);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,9.773878);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,8.381654);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.021681);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,1.872756);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.56196);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,4.110481);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.8165869);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.4933998);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.3358854);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(20,0.09198592);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,26.35119);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,18.05876);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,12.56739);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,8.726899);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,4.753363);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,5.935087);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,4.13841);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,4.114068);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,1.446563);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,3.069365);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,2.852432);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.8037709);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,0.6110492);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.5159105);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,2.670063);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.477395);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.3111615);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.3358854);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(20,0.09198592);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(15488);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,128.9621);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,37.02671);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,22.33121);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,9.021934);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,4.272167);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.939867);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,1.175482);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,0.6837748);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.8091705);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.1721693);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.8164799);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.3919019);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.0002752946);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.0002697563);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,6.491469);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,7.865222);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,7.797612);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.186979);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,1.262428);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,1.087761);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,0.4350771);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.251904);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.453194);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.1558901);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.4659171);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.2424831);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.0002752946);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.0002697563);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(3431);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_6 = new TH1D("VbbHcc_both_Aplanarity_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,0.9667761);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(2,0.5817051);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,0.3709487);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(2,0.2910315);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_7 = new TH1D("VbbHcc_both_Aplanarity_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,3.688802);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,0.9502463);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,0.7189392);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,0.3025681);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.242823);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(10,0.1145399);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,0.654881);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,0.336662);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.2938068);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.1842507);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.1717599);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(10,0.1145399);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,28.21016);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,8.078291);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,5.256174);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,2.434795);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,0.2916701);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.7957098);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,0.2665388);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.2672004);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(9,0.255359);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,2.73642);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.458164);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.1783);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,0.8126701);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.2916701);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.4595859);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.2665388);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.2672004);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(9,0.255359);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,23.85403);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,7.396533);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,3.693346);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.156585);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.386499);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.8783481);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.5776792);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.393722);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.251777);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1601349);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.09757869);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.07841168);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.04582404);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.03111231);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.01791424);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.01029347);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.0107981);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.004742532);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.002978615);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(20,0.001517649);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(22,0.00166245);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.1923961);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1073848);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.07563178);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.05782929);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.04640262);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.03700729);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.02958591);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.02482024);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.01965933);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01561194);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01252373);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.0109771);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.008292348);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.006857092);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.005180066);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.003891591);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.004087452);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002743407);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.0021063);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(20,0.001517649);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(22,0.00166245);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(28649);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,10.60792);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,3.56322);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,1.844617);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.087616);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.6761729);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.4368975);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.2975579);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.2112579);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.130829);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.08798421);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.05601734);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.04236544);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.02900905);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.02008572);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.006979479);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.005743726);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.006312252);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.001919515);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001617081);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0007696387);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.06406835);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.03715691);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.02674847);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.02051852);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.0161992);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01301331);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01074611);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.009059993);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.007117597);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.005851209);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.004656969);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.004069512);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.003349075);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.002780029);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001646997);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001487658);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001548202);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0008589504);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0008090303);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0005442168);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.07064627);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.0172159);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.005248339);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.002869221);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.002873955);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(9,0.002909221);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(10,0.002933256);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.01444048);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.007069131);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.00371585);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.002869221);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.002873955);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(9,0.002909221);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(10,0.002933256);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.02572871);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.01288687);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.004937743);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.003004115);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.001920865);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.001049259);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.001202616);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0008069498);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0004167629);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.003140913);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.00221593);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001371819);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.001070521);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0008591316);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.0006096707);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0006951089);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0005710992);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0004167629);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity__694 = new TH1D("VbbHcc_both_Aplanarity__694","",50,0,1);
   VbbHcc_both_Aplanarity__694->SetBinContent(1,63192);
   VbbHcc_both_Aplanarity__694->SetBinContent(2,17937);
   VbbHcc_both_Aplanarity__694->SetBinContent(3,8536);
   VbbHcc_both_Aplanarity__694->SetBinContent(4,4638);
   VbbHcc_both_Aplanarity__694->SetBinContent(5,2880);
   VbbHcc_both_Aplanarity__694->SetBinContent(6,1834);
   VbbHcc_both_Aplanarity__694->SetBinContent(7,1179);
   VbbHcc_both_Aplanarity__694->SetBinContent(8,810);
   VbbHcc_both_Aplanarity__694->SetBinContent(9,557);
   VbbHcc_both_Aplanarity__694->SetBinContent(10,387);
   VbbHcc_both_Aplanarity__694->SetBinContent(11,272);
   VbbHcc_both_Aplanarity__694->SetBinContent(12,168);
   VbbHcc_both_Aplanarity__694->SetBinContent(13,101);
   VbbHcc_both_Aplanarity__694->SetBinContent(14,72);
   VbbHcc_both_Aplanarity__694->SetBinContent(15,44);
   VbbHcc_both_Aplanarity__694->SetBinContent(16,33);
   VbbHcc_both_Aplanarity__694->SetBinContent(17,19);
   VbbHcc_both_Aplanarity__694->SetBinContent(18,13);
   VbbHcc_both_Aplanarity__694->SetBinContent(19,8);
   VbbHcc_both_Aplanarity__694->SetBinContent(20,1);
   VbbHcc_both_Aplanarity__694->SetEntries(102730);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__694->SetLineColor(ci);
   VbbHcc_both_Aplanarity__694->SetLineWidth(2);
   VbbHcc_both_Aplanarity__694->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__694->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__694->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__694->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__694->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__694->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__694->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__694->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__694->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__694->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__694->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__694->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__694->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__694->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__694->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__694->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__694->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1505[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1505[50] = {
   124159.7,
   34868.78,
   19790.22,
   7760.033,
   6808.962,
   4562.327,
   3329.32,
   1416.236,
   982.3935,
   575.7863,
   722.4368,
   89.68437,
   100.9524,
   122.777,
   46.79681,
   8.324623,
   12.28922,
   7.801701,
   2.088872,
   0.9650376,
   0.2386664,
   0.1254999,
   0,
   0.08377996,
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1505[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1505[50] = {
   6438.977,
   3203.142,
   2945.307,
   1042.093,
   1856.372,
   924.0972,
   1587.727,
   494.7597,
   409.5227,
   279.685,
   368.0844,
   29.50304,
   36.43763,
   40.55777,
   27.76921,
   0.914813,
   7.148532,
   4.570083,
   0.3898815,
   0.2629204,
   0.1204615,
   0.09078529,
   0,
   0.08377996,
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
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1505,Graph_from_VbbHcc_both_Aplanarity_fy1505,Graph_from_VbbHcc_both_Aplanarity_fex1505,Graph_from_VbbHcc_both_Aplanarity_fey1505);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1505 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1505","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetMinimum(-13059.87);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetMaximum(143658.6);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1505);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_both_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__695 = new TH1D("data_mc_ratio__695","",50,0,1);
   data_mc_ratio__695->SetBinContent(1,0.5089573);
   data_mc_ratio__695->SetBinContent(2,0.5144143);
   data_mc_ratio__695->SetBinContent(3,0.4313241);
   data_mc_ratio__695->SetBinContent(4,0.5976779);
   data_mc_ratio__695->SetBinContent(5,0.422972);
   data_mc_ratio__695->SetBinContent(6,0.4019878);
   data_mc_ratio__695->SetBinContent(7,0.3541264);
   data_mc_ratio__695->SetBinContent(8,0.5719387);
   data_mc_ratio__695->SetBinContent(9,0.5669826);
   data_mc_ratio__695->SetBinContent(10,0.6721243);
   data_mc_ratio__695->SetBinContent(11,0.3765035);
   data_mc_ratio__695->SetBinContent(12,1.873236);
   data_mc_ratio__695->SetBinContent(13,1.000471);
   data_mc_ratio__695->SetBinContent(14,0.5864288);
   data_mc_ratio__695->SetBinContent(15,0.940235);
   data_mc_ratio__695->SetBinContent(16,3.964144);
   data_mc_ratio__695->SetBinContent(17,1.546071);
   data_mc_ratio__695->SetBinContent(18,1.666303);
   data_mc_ratio__695->SetBinContent(19,3.829819);
   data_mc_ratio__695->SetBinContent(20,1.036229);
   data_mc_ratio__695->SetBinError(1,0.002024652);
   data_mc_ratio__695->SetBinError(2,0.003840946);
   data_mc_ratio__695->SetBinError(3,0.004668491);
   data_mc_ratio__695->SetBinError(4,0.008776105);
   data_mc_ratio__695->SetBinError(5,0.007881617);
   data_mc_ratio__695->SetBinError(6,0.009386706);
   data_mc_ratio__695->SetBinError(7,0.01031339);
   data_mc_ratio__695->SetBinError(8,0.02009588);
   data_mc_ratio__695->SetBinError(9,0.02402382);
   data_mc_ratio__695->SetBinError(10,0.034166);
   data_mc_ratio__695->SetBinError(11,0.02282888);
   data_mc_ratio__695->SetBinError(12,0.1445233);
   data_mc_ratio__695->SetBinError(13,0.0995506);
   data_mc_ratio__695->SetBinError(14,0.0691113);
   data_mc_ratio__695->SetBinError(15,0.1417458);
   data_mc_ratio__695->SetBinError(16,0.6900688);
   data_mc_ratio__695->SetBinError(17,0.3546929);
   data_mc_ratio__695->SetBinError(18,0.4621494);
   data_mc_ratio__695->SetBinError(19,1.354045);
   data_mc_ratio__695->SetBinError(20,1.036229);
   data_mc_ratio__695->SetMinimum(0.4);
   data_mc_ratio__695->SetMaximum(1.6);
   data_mc_ratio__695->SetEntries(63.86581);
   data_mc_ratio__695->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__695->SetLineColor(ci);
   data_mc_ratio__695->SetLineWidth(2);
   data_mc_ratio__695->SetMarkerStyle(20);
   data_mc_ratio__695->SetMarkerSize(1.2);
   data_mc_ratio__695->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__695->GetXaxis()->SetRange(1,50);
   data_mc_ratio__695->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__695->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__695->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__695->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__695->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__695->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__695->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__695->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__695->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__695->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__695->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__695->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__695->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__695->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__695->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__695->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__695->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1506[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1506[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1506[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1506[50] = {
   0.05186043,
   0.09186275,
   0.1488264,
   0.1342898,
   0.2726366,
   0.2025495,
   0.4768925,
   0.3493484,
   0.4168621,
   0.4857445,
   0.509504,
   0.3289652,
   0.3609385,
   0.3303368,
   0.5933997,
   0.1098924,
   0.5816914,
   0.5857804,
   0.1866469,
   0.2724458,
   0.5047275,
   0.7233893,
   0,
   1,
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
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1506,Graph_from_mc_statistical_error_fy1506,Graph_from_mc_statistical_error_fex1506,Graph_from_mc_statistical_error_fey1506);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1506 = new TH1F("Graph_Graph_from_mc_statistical_error1506","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1506->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1506->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1506->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1506->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1506->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1506->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1506);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
