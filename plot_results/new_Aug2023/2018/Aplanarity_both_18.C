void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Aug 22 09:23:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(0,0,1,1);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-508.4361,1.052419,507937.6);
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
   st->SetMaximum(435326.7);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(0.01);
   st_stack_255->SetMaximum(457093);
   st_stack_255->SetDirectory(0);
   st_stack_255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_255->SetLineColor(ci);
   st_stack_255->GetXaxis()->SetRange(1,50);
   st_stack_255->GetXaxis()->SetLabelFont(42);
   st_stack_255->GetXaxis()->SetLabelSize(0.035);
   st_stack_255->GetXaxis()->SetTitleSize(0.035);
   st_stack_255->GetXaxis()->SetTitleFont(42);
   st_stack_255->GetYaxis()->SetTitle("Events/0.02");
   st_stack_255->GetYaxis()->SetLabelFont(42);
   st_stack_255->GetYaxis()->SetLabelSize(0.05);
   st_stack_255->GetYaxis()->SetTitleSize(0.057);
   st_stack_255->GetYaxis()->SetTitleOffset(1.2);
   st_stack_255->GetYaxis()->SetTitleFont(42);
   st_stack_255->GetZaxis()->SetLabelFont(42);
   st_stack_255->GetZaxis()->SetLabelSize(0.035);
   st_stack_255->GetZaxis()->SetTitleSize(0.035);
   st_stack_255->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_255);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,134681.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,34707.82);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,19222.52);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,13644.3);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,5977.99);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,2608.145);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2666.018);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1098.095);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,4029.542);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,663.0852);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,300.0613);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,919.038);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,525.7964);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,124.2436);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,575.5873);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,84.9854);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,5.698439);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,32.81787);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,5305.978);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2696.838);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,2984.951);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,1977.598);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,1608.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,524.2106);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,752.6633);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,394.0937);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,2295.956);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,397.7487);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,91.77863);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,693.3174);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,332.6342);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,53.40315);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,530.8954);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,54.49469);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,5.698439);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,32.81787);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(9895);

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
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,798.553);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,230.7486);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,115.6962);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,66.02672);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,37.93054);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,25.45511);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,17.38953);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,10.76175);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,8.055933);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,4.956123);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.828938);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,2.342669);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,1.856236);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,1.137268);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.9103231);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.4213183);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.3276047);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.1295059);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.05215649);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,0.06807733);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,12.78972);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,6.812291);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,4.805839);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,3.641559);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.691488);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,2.245561);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.820042);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.404217);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.317521);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,1.020433);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.6672147);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.7241443);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.6860598);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.447983);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.480954);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.3612998);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.281063);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.07778502);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.05215649);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.06807733);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(14948);

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
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,16200.05);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,5279.408);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,2564.992);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1469.484);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,897.5387);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,595.9044);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,399.6393);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,272.5855);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,184.8136);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,132.9606);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,88.39441);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,62.13282);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,42.29757);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,26.08443);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,18.35542);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,11.29098);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,7.334017);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,4.632851);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,2.131534);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.6872998);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.2830287);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.09285314);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,37.42931);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,20.65169);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,15.14475);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,11.07812);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,9.051221);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,7.135935);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,5.854191);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,5.558855);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,4.033497);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,3.399209);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,2.604968);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,2.294233);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.846562);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.424418);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,1.178028);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.9051558);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.7861773);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.6412772);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.3880286);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.2166404);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.1323774);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.05948789);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(416844);

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
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,2232.831);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,621.2672);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,301.8641);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,166.4628);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,103.5626);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,59.83252);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,33.66355);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,27.68485);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,18.71704);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,10.92306);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,5.232518);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.314203);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,5.889109);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.305989);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,0.8699813);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.9199764);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,1.289409);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.5340569);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,37.17976);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,20.5254);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,17.40626);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,10.18268);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,9.720523);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,6.654799);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,3.639199);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,5.046343);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,2.732409);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,1.893887);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,1.241395);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.8958003);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,1.551431);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.6004905);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.6451643);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.6010823);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.755739);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.5340569);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(18425);

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
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,213.8024);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,70.51054);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,27.13798);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,16.58786);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,9.535265);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.508427);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,3.940671);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.68294);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.474643);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,1.095567);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.4687398);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,2.096559);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.204541);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.3803888);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.372236);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,14.59101);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,8.407591);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,5.138766);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.832318);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,3.545322);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.6799315);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,2.27496);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.6087876);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.2516532);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.5345436);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3217151);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,2.095509);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.1736176);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.2201744);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.263211);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2210);

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
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,1.05042);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,0.7554117);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(2);

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
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,5.331348);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,3.529178);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,1.257629);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,0.9724009);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.4226771);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(6,1.306572);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(8,0.3443727);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(15,0.4655805);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,1.524619);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,1.186571);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.7317479);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.632343);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.4226771);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(6,1.022854);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(8,0.3443727);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(15,0.4655805);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(33);

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
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,43.65665);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,12.34903);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,4.102368);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,3.535524);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,1.668772);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.9313203);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,1.408667);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.6417413);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(11,0.2561662);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,3.684088);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.986372);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.077091);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,1.050357);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.7591625);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.54032);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.6435799);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.4590848);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(11,0.2561662);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(232);

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
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,40.46299);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,11.65309);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,5.480812);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,3.069476);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.886883);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,1.235537);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.7886912);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.4603503);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.3150992);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.2151999);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1403595);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.09474494);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.07361663);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.03275244);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.03991108);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.01149448);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.008387903);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.003025839);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.004193629);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.3961097);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.2037899);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.1366601);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.1129114);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.07869961);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.08448761);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.05152544);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.03760799);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.03224284);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.03021918);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.02099913);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01748672);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.01566778);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.009796313);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.01351046);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.006637146);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.005939109);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.003025839);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.004193629);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(22331);

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
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,12.83287);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,4.240713);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,2.19677);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.289208);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.8083278);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.5169148);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.3585441);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.2582322);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.1591162);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.1076506);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.05962759);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.05302242);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.03580025);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.02707394);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.007607243);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.007130505);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.00662911);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.001048583);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.002292348);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0005004825);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.08499602);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.04856527);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.03491928);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.02669699);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.02114648);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01686203);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01404208);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.01191824);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.009340661);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.007677196);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.005652116);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.005433472);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.004416797);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.003822719);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.002042707);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001990907);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001858136);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0007493824);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.00115036);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0005004825);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(41891);

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
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.1203078);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.03255801);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.01444439);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.01100467);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.00624892);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.003312494);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(11,0.002398405);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.0166175);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.009109964);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.006014741);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.004996531);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.003667772);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.003312494);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(11,0.002398405);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(84);

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
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.06107997);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.01725008);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.006697497);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.005908734);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.002464391);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.004380724);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.001479786);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0006839927);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.001239565);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0004431752);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.00028101);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(12,0.0002922094);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(13,0.0004012604);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.004465407);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.002343545);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001488028);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.001373142);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0008759474);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.001299727);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0006733011);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0004891914);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.0006326036);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0003385539);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.00028101);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(12,0.0002922094);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(13,0.0004012604);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(330);

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
   
   TH1D *VbbHcc_both_Aplanarity__700 = new TH1D("VbbHcc_both_Aplanarity__700","",50,0,1);
   VbbHcc_both_Aplanarity__700->SetBinContent(1,195897);
   VbbHcc_both_Aplanarity__700->SetBinContent(2,56672);
   VbbHcc_both_Aplanarity__700->SetBinContent(3,26410);
   VbbHcc_both_Aplanarity__700->SetBinContent(4,14760);
   VbbHcc_both_Aplanarity__700->SetBinContent(5,8936);
   VbbHcc_both_Aplanarity__700->SetBinContent(6,5563);
   VbbHcc_both_Aplanarity__700->SetBinContent(7,3696);
   VbbHcc_both_Aplanarity__700->SetBinContent(8,2407);
   VbbHcc_both_Aplanarity__700->SetBinContent(9,1662);
   VbbHcc_both_Aplanarity__700->SetBinContent(10,1150);
   VbbHcc_both_Aplanarity__700->SetBinContent(11,783);
   VbbHcc_both_Aplanarity__700->SetBinContent(12,549);
   VbbHcc_both_Aplanarity__700->SetBinContent(13,355);
   VbbHcc_both_Aplanarity__700->SetBinContent(14,199);
   VbbHcc_both_Aplanarity__700->SetBinContent(15,153);
   VbbHcc_both_Aplanarity__700->SetBinContent(16,99);
   VbbHcc_both_Aplanarity__700->SetBinContent(17,62);
   VbbHcc_both_Aplanarity__700->SetBinContent(18,33);
   VbbHcc_both_Aplanarity__700->SetBinContent(19,18);
   VbbHcc_both_Aplanarity__700->SetBinContent(20,13);
   VbbHcc_both_Aplanarity__700->SetBinContent(21,3);
   VbbHcc_both_Aplanarity__700->SetBinContent(22,1);
   VbbHcc_both_Aplanarity__700->SetBinContent(24,1);
   VbbHcc_both_Aplanarity__700->SetEntries(319471);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__700->SetLineColor(ci);
   VbbHcc_both_Aplanarity__700->SetLineWidth(2);
   VbbHcc_both_Aplanarity__700->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__700->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__700->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__700->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__700->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__700->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__700->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1509[50] = {
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1509[50] = {
   154229.8,
   40941.57,
   22245.27,
   15371.75,
   7031.352,
   3295.843,
   3123.209,
   1412.516,
   4242.079,
   813.3438,
   397.4447,
   989.0723,
   576.1537,
   153.2115,
   596.6083,
   12.6509,
   93.95145,
   10.99893,
   34.95589,
   0.7394563,
   0.2835292,
   0.09285314,
   0.06807733,
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
   0,
   0};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1509[50] = {
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1509[50] = {
   5306.277,
   2697.018,
   2985.049,
   1977.661,
   1608.961,
   524.3079,
   752.7008,
   394.1686,
   2295.961,
   397.7694,
   91.82733,
   693.3253,
   332.6437,
   53.42785,
   530.8975,
   1.145073,
   54.50632,
   5.75975,
   32.82016,
   0.2228303,
   0.1323784,
   0.05948789,
   0.06807733,
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1509,Graph_from_VbbHcc_both_Aplanarity_fy1509,Graph_from_VbbHcc_both_Aplanarity_fex1509,Graph_from_VbbHcc_both_Aplanarity_fey1509);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1509 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1509","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetMaximum(175489.7);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1509);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__701 = new TH1D("data_mc_ratio__701","",50,0,1);
   data_mc_ratio__701->SetBinContent(1,1.270163);
   data_mc_ratio__701->SetBinContent(2,1.384216);
   data_mc_ratio__701->SetBinContent(3,1.187219);
   data_mc_ratio__701->SetBinContent(4,0.9602031);
   data_mc_ratio__701->SetBinContent(5,1.270879);
   data_mc_ratio__701->SetBinContent(6,1.687884);
   data_mc_ratio__701->SetBinContent(7,1.183398);
   data_mc_ratio__701->SetBinContent(8,1.704052);
   data_mc_ratio__701->SetBinContent(9,0.391789);
   data_mc_ratio__701->SetBinContent(10,1.413916);
   data_mc_ratio__701->SetBinContent(11,1.970085);
   data_mc_ratio__701->SetBinContent(12,0.5550656);
   data_mc_ratio__701->SetBinContent(13,0.6161551);
   data_mc_ratio__701->SetBinContent(14,1.298858);
   data_mc_ratio__701->SetBinContent(15,0.2564497);
   data_mc_ratio__701->SetBinContent(16,7.825531);
   data_mc_ratio__701->SetBinContent(17,0.6599153);
   data_mc_ratio__701->SetBinContent(18,3.000293);
   data_mc_ratio__701->SetBinContent(19,0.5149347);
   data_mc_ratio__701->SetBinContent(20,17.58049);
   data_mc_ratio__701->SetBinContent(21,10.58092);
   data_mc_ratio__701->SetBinContent(22,10.76969);
   data_mc_ratio__701->SetBinError(1,0.00286976);
   data_mc_ratio__701->SetBinError(2,0.005814599);
   data_mc_ratio__701->SetBinError(3,0.007305442);
   data_mc_ratio__701->SetBinError(4,0.007903509);
   data_mc_ratio__701->SetBinError(5,0.01344413);
   data_mc_ratio__701->SetBinError(6,0.02263018);
   data_mc_ratio__701->SetBinError(7,0.01946547);
   data_mc_ratio__701->SetBinError(8,0.0347332);
   data_mc_ratio__701->SetBinError(9,0.009610296);
   data_mc_ratio__701->SetBinError(10,0.04169411);
   data_mc_ratio__701->SetBinError(11,0.07040511);
   data_mc_ratio__701->SetBinError(12,0.02368962);
   data_mc_ratio__701->SetBinError(13,0.03270212);
   data_mc_ratio__701->SetBinError(14,0.09207361);
   data_mc_ratio__701->SetBinError(15,0.02073273);
   data_mc_ratio__701->SetBinError(16,0.7864955);
   data_mc_ratio__701->SetBinError(17,0.08380933);
   data_mc_ratio__701->SetBinError(18,0.5222839);
   data_mc_ratio__701->SetBinError(19,0.1213713);
   data_mc_ratio__701->SetBinError(20,4.875949);
   data_mc_ratio__701->SetBinError(21,6.108897);
   data_mc_ratio__701->SetBinError(22,10.76969);
   data_mc_ratio__701->SetMinimum(0.4);
   data_mc_ratio__701->SetMaximum(1.6);
   data_mc_ratio__701->SetEntries(16.36584);
   data_mc_ratio__701->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__701->SetLineColor(ci);
   data_mc_ratio__701->SetLineWidth(2);
   data_mc_ratio__701->SetMarkerStyle(20);
   data_mc_ratio__701->SetMarkerSize(1.2);
   data_mc_ratio__701->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__701->GetXaxis()->SetRange(1,50);
   data_mc_ratio__701->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__701->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__701->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__701->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__701->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__701->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__701->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__701->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__701->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__701->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__701->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__701->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__701->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__701->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__701->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__701->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__701->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1510[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1510[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1510[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1510[50] = {
   0.034405,
   0.06587481,
   0.134188,
   0.1286556,
   0.2288267,
   0.1590816,
   0.2410024,
   0.2790543,
   0.5412349,
   0.4890545,
   0.2310443,
   0.7009854,
   0.5773524,
   0.3487195,
   0.8898594,
   0.09051318,
   0.5801541,
   0.5236647,
   0.9389022,
   0.3013435,
   0.466895,
   0.6406664,
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
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1510,Graph_from_mc_statistical_error_fy1510,Graph_from_mc_statistical_error_fex1510,Graph_from_mc_statistical_error_fey1510);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1510 = new TH1F("Graph_Graph_from_mc_statistical_error1510","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1510->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1510->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1510->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1510->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1510->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1510);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
