void Z_dR_VbbHcc_all()
{
//=========Macro generated from canvas: Z_dR_VbbHcc_all/Z_dR_VbbHcc_all
//=========  (Mon Nov 21 13:02:20 2022) by ROOT version 6.14/09
   TCanvas *Z_dR_VbbHcc_all = new TCanvas("Z_dR_VbbHcc_all", "Z_dR_VbbHcc_all",0,0,600,600);
   Z_dR_VbbHcc_all->SetHighLightColor(2);
   Z_dR_VbbHcc_all->Range(0,0,1,1);
   Z_dR_VbbHcc_all->SetFillColor(0);
   Z_dR_VbbHcc_all->SetFillStyle(4000);
   Z_dR_VbbHcc_all->SetBorderMode(0);
   Z_dR_VbbHcc_all->SetBorderSize(2);
   Z_dR_VbbHcc_all->SetFrameFillStyle(1000);
   Z_dR_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-11608.33,10.52419,1.159702e+07);
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
   st->SetMaximum(9939199);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",50,0,10);
   st_stack_20->SetMinimum(0.3);
   st_stack_20->SetMaximum(1.043616e+07);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetRange(1,50);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetLabelSize(0.035);
   st_stack_20->GetXaxis()->SetTitleSize(0.035);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetLabelSize(0.05);
   st_stack_20->GetYaxis()->SetTitleSize(0.057);
   st_stack_20->GetYaxis()->SetTitleOffset(1.2);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetLabelSize(0.035);
   st_stack_20->GetZaxis()->SetTitleSize(0.035);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",50,0,10);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,2994839);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,4219225);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,3122380);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,2885687);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,2490982);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,2390823);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,2374562);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,2408937);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,2333200);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,2571321);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,2873365);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,3054487);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,3467274);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,3642225);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,2250538);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,1382663);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,1042288);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,685914.3);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,532220.5);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,318037.5);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,244895.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,188332);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,81394.57);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,59714.75);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,21784.84);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(28,5872.652);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,63707.66);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,75285.26);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,64848.09);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,62294.84);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,57942.22);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,56786.96);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,56482.81);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,56954.93);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,55897.12);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,58799.05);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,62197.46);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,63997.2);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,68302.83);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,69864.48);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,54822.83);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,43183.23);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,37376.54);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,30234.71);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,26642.22);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,20621.38);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,17944.45);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,15825.65);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,10477.8);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,8874.514);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,5369.274);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(28,2563.395);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(36691);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",50,0,10);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,6.032982);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,7811.098);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,14741.89);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,17435.01);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,21173.91);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,25023.08);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,28348.65);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,31602.4);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,34689.74);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,37983.05);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,41348.86);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,44189.77);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,47200.86);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,49356.3);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,48035.54);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,26457.84);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,16128.36);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,10425.99);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,6733.775);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,4378.551);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,2697.746);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,1615.065);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,915.2334);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,451.3813);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,198.4458);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,78.08168);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,20.77414);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(29,0.7922407);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,1.072228);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,35.95123);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,48.94338);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,53.34233);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,58.83095);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,64.11594);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,68.02308);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,71.97119);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,75.19511);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,78.70023);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,82.11525);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,84.8124);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,87.85783);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,89.71001);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,88.81142);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,66.98292);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,53.08031);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,43.03651);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,34.7442);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,28.19883);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,22.18569);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,17.09332);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,12.87149);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,8.959441);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,5.715131);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,3.565234);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,1.86904);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(29,0.3594227);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(7498678);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_3 = new TH1D("VbbHcc_tags_Z_dR_all_stack_3","",50,0,10);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(2,74.00578);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(3,103739.9);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(4,204622);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(5,245282.7);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(6,299405.7);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(7,350524.2);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(8,398637.5);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(9,446232.6);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(10,495784.5);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(11,547722.5);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(12,604463.4);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(13,664251.6);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(14,723129.1);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(15,776540.8);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(16,761234);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(17,399396);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(18,227398.4);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(19,134494.4);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(20,79239.89);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(21,45644.66);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(22,25661.53);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(23,13761.74);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(24,7021.811);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(25,3286.42);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(26,1369.83);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(27,465.8076);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(28,107.8305);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinContent(29,4.574897);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(2,2.234257);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(3,83.9978);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(4,118.2359);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(5,129.5652);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(6,143.1952);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(7,154.9912);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(8,165.3163);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(9,174.9391);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(10,184.427);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(11,193.9134);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(12,203.8121);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(13,213.7549);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(14,223.1983);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(15,231.4359);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(16,229.3036);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(17,166.127);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(18,125.3253);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(19,96.36781);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(20,73.93232);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(21,56.06781);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(22,41.9534);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(23,30.65825);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(24,21.78818);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(25,14.90136);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(26,9.581421);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(27,5.529159);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(28,2.63672);
   VbbHcc_tags_Z_dR_all_stack_3->SetBinError(29,0.5348841);
   VbbHcc_tags_Z_dR_all_stack_3->SetEntries(1.191464e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_4 = new TH1D("VbbHcc_tags_Z_dR_all_stack_4","",50,0,10);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(2,3.275609);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(3,3632.017);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(4,9525.188);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(5,14199.96);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(6,13897.18);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(7,11119.99);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(8,8971.862);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(9,7583.413);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(10,6577.446);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(11,6226.027);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(12,6199.62);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(13,6355.418);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(14,6830.766);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(15,7351.574);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(16,7035.984);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(17,3691.257);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(18,2321.939);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(19,1592.605);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(20,1098.228);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(21,778.4529);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(22,498.6809);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(23,332.7458);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(24,198.4404);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(25,102.4422);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(26,53.65459);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(27,26.8271);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinContent(28,6.830304);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(2,1.039895);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(3,35.0116);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(4,56.69588);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(5,69.13492);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(6,68.4236);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(7,61.18345);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(8,54.91897);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(9,50.53634);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(10,47.04334);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(11,45.80691);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(12,45.73483);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(13,46.2164);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(14,47.96447);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(15,49.70844);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(16,48.6797);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(17,35.16203);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(18,27.96958);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(19,23.09551);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(20,19.24058);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(21,16.12577);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(22,12.8931);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(23,10.46637);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(24,8.009572);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(25,5.765746);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(26,4.131955);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(27,2.831537);
   VbbHcc_tags_Z_dR_all_stack_4->SetBinError(28,1.661843);
   VbbHcc_tags_Z_dR_all_stack_4->SetEntries(393203);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_5 = new TH1D("VbbHcc_tags_Z_dR_all_stack_5","",50,0,10);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(2,6.301682);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(3,6349.251);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(4,6987.206);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(5,4958.953);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(6,4107.123);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(7,3608.666);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(8,3398.665);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(9,3349.131);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(10,3489.663);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(11,3636.946);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(12,3974.302);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(13,4488.418);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(14,4992.157);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(15,5431.833);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(16,5518.549);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(17,3115.344);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(18,2165.969);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(19,1501.119);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(20,1115.559);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(21,739.9394);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(22,545.0387);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(23,352.5198);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(24,204.1114);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(25,136.6168);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(26,65.69251);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(27,31.12547);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinContent(28,5.88515);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(2,2.921052);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(3,87.29523);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(4,91.55474);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(5,76.98221);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(6,70.17863);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(7,65.79418);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(8,63.7085);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(9,63.01182);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(10,64.55143);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(11,66.04042);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(12,68.91762);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(13,73.08305);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(14,77.18449);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(15,80.72007);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(16,81.31783);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(17,61.03982);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(18,50.78277);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(19,42.29923);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(20,36.33846);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(21,29.47271);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(22,25.07401);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(23,20.26283);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(24,15.32065);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(25,12.35045);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(26,8.539049);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(27,5.804079);
   VbbHcc_tags_Z_dR_all_stack_5->SetBinError(28,2.645498);
   VbbHcc_tags_Z_dR_all_stack_5->SetEntries(64923);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_6 = new TH1D("VbbHcc_tags_Z_dR_all_stack_6","",50,0,10);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(3,104.4463);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(4,109.2221);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(5,98.10912);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(6,100.997);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(7,95.1453);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(8,107.2383);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(9,104.1151);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(10,133.3119);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(11,131.3272);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(12,151.1944);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(13,176.1689);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(14,189.1703);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(15,207.6225);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(16,221.7066);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(17,124.7825);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(18,78.88981);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(19,53.3804);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(20,41.58612);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(21,26.29371);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(22,24.80389);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(23,11.22442);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(24,9.428954);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(25,4.921991);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(26,1.136278);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinContent(27,0.7882069);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(3,3.940377);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(4,4.07988);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(5,3.832867);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(6,3.96778);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(7,3.829847);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(8,4.131125);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(9,4.012233);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(10,4.648948);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(11,4.60985);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(12,4.899195);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(13,5.258805);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(14,5.524229);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(15,5.645221);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(16,5.89115);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(17,4.44031);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(18,3.520526);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(19,2.846377);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(20,2.576544);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(21,2.017974);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(22,1.98978);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(23,1.346555);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(24,1.316051);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(25,0.8707186);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(26,0.3770876);
   VbbHcc_tags_Z_dR_all_stack_6->SetBinError(27,0.2650259);
   VbbHcc_tags_Z_dR_all_stack_6->SetEntries(18694);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_7 = new TH1D("VbbHcc_tags_Z_dR_all_stack_7","",50,0,10);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(2,0.3139038);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(3,173.4567);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(4,297.0803);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(5,324.4452);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(6,364.6856);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(7,384.2611);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(8,360.4349);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(9,326.0246);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(10,286.7276);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(11,263.1816);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(12,255.016);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(13,244.54);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(14,253.1405);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(15,269.4582);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(16,256.6444);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(17,117.2006);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(18,60.25468);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(19,40.68694);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(20,29.16613);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(21,16.48491);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(22,12.82261);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(23,9.541728);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(24,4.875287);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(25,3.280115);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(26,1.744572);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(27,0.4594143);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(28,0.1334389);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinContent(29,0.09975579);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(2,0.2035079);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(3,4.381069);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(4,5.713335);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(5,5.98649);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(6,6.313838);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(7,6.529744);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(8,6.347771);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(9,6.028157);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(10,5.683431);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(11,5.495462);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(12,5.440423);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(13,5.348908);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(14,5.345754);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(15,5.615437);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(16,5.39607);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(17,3.635376);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(18,2.555701);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(19,2.148698);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(20,1.843067);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(21,1.330616);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(22,1.187124);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(23,1.027789);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(24,0.7477612);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(25,0.6627289);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(26,0.4301859);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(27,0.1917634);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(28,0.09435555);
   VbbHcc_tags_Z_dR_all_stack_7->SetBinError(29,0.07053799);
   VbbHcc_tags_Z_dR_all_stack_7->SetEntries(48302);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_8 = new TH1D("VbbHcc_tags_Z_dR_all_stack_8","",50,0,10);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(3,113.5034);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(4,223.4369);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(5,269.7834);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(6,311.1218);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(7,309.9301);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(8,307.6384);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(9,305.1382);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(10,292.372);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(11,276.4451);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(12,275.1982);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(13,279.3536);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(14,303.7916);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(15,326.2156);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(16,293.742);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(17,106.7365);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(18,53.05238);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(19,30.83506);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(20,24.33456);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(21,13.16087);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(22,6.368812);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(23,8.370352);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(24,2.250773);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(25,1.370366);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(26,0.8611173);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinContent(27,0.2802145);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(3,4.783037);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(4,6.733364);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(5,7.370546);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(6,7.96262);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(7,7.958688);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(8,7.914449);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(9,7.865887);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(10,7.705164);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(11,7.508361);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(12,7.486627);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(13,7.57091);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(14,7.887137);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(15,8.16321);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(16,7.735402);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(17,4.644594);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(18,3.268348);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(19,2.507579);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(20,2.197045);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(21,1.613659);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(22,1.128366);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(23,1.306638);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(24,0.6858833);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(25,0.5201335);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(26,0.3921516);
   VbbHcc_tags_Z_dR_all_stack_8->SetBinError(27,0.1981415);
   VbbHcc_tags_Z_dR_all_stack_8->SetEntries(21018);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_9 = new TH1D("VbbHcc_tags_Z_dR_all_stack_9","",50,0,10);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(2,0.03022714);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(3,25.989);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(4,59.30948);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(5,80.36277);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(6,100.3984);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(7,112.9914);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(8,117.2698);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(9,117.1555);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(10,114.244);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(11,110.1387);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(12,106.6145);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(13,106.0596);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(14,110.5365);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(15,116.6166);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(16,110.1495);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(17,35.78801);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(18,12.98742);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(19,5.781005);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(20,2.889937);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(21,1.755119);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(22,1.163906);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(23,0.6388962);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(24,0.3679678);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(25,0.1795671);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(26,0.09822846);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(27,0.03168386);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinContent(28,0.02346274);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(2,0.007006079);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(3,0.2077784);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(4,0.3155336);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(5,0.3674896);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(6,0.4104228);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(7,0.436109);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(8,0.4446822);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(9,0.4445244);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(10,0.4392108);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(11,0.4308882);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(12,0.4240899);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(13,0.4224505);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(14,0.431227);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(15,0.4430818);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(16,0.430585);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(17,0.244953);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(18,0.1467827);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(19,0.09771986);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(20,0.06882073);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(21,0.05357499);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(22,0.04362374);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(23,0.03210923);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(24,0.02435426);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(25,0.0171239);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(26,0.01233547);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(27,0.007491486);
   VbbHcc_tags_Z_dR_all_stack_9->SetBinError(28,0.00601942);
   VbbHcc_tags_Z_dR_all_stack_9->SetEntries(942593);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_10 = new TH1D("VbbHcc_tags_Z_dR_all_stack_10","",50,0,10);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(2,0.01253082);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(3,11.90603);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(4,25.49449);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(5,35.22759);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(6,43.85293);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(7,47.01401);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(8,43.89194);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(9,36.34986);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(10,29.34573);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(11,24.7435);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(12,22.34744);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(13,22.26932);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(14,22.85742);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(15,24.23343);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(16,23.15215);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(17,9.32338);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(18,4.292041);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(19,2.185547);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(20,1.197232);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(21,0.6872516);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(22,0.39593);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(23,0.2206265);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(24,0.1229015);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(25,0.0535386);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(26,0.01378121);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(27,0.01127068);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinContent(28,0.002247734);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(2,0.002298658);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(3,0.06927571);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(4,0.1013848);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(5,0.1193162);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(6,0.1332399);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(7,0.1380912);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(8,0.1334663);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(9,0.1214738);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(10,0.1091421);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(11,0.1001639);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(12,0.09519178);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(13,0.09497552);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(14,0.09623537);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(15,0.09909355);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(16,0.0969213);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(17,0.06137424);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(18,0.04161411);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(19,0.0296923);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(20,0.02191323);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(21,0.01658894);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(22,0.01256183);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(23,0.00938183);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(24,0.007000268);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(25,0.004520079);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(26,0.002315813);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(27,0.002072958);
   VbbHcc_tags_Z_dR_all_stack_10->SetBinError(28,0.0009282793);
   VbbHcc_tags_Z_dR_all_stack_10->SetEntries(1089495);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_11 = new TH1D("VbbHcc_tags_Z_dR_all_stack_11","",50,0,10);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(3,0.7260337);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(4,1.235833);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(5,1.751938);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(6,2.023157);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(7,1.901278);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(8,1.882309);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(9,1.687737);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(10,1.370747);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(11,1.334228);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(12,1.375255);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(13,1.380896);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(14,1.393473);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(15,1.423254);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(16,1.377845);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(17,0.5171924);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(18,0.2571443);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(19,0.1141509);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(20,0.08630037);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(21,0.03094125);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(22,0.03712173);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(23,0.01062894);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(24,0.01215182);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(25,0.01117555);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinContent(26,0.002986568);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(3,0.03481038);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(4,0.04534938);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(5,0.05443997);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(6,0.05837879);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(7,0.05638444);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(8,0.05604705);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(9,0.05318431);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(10,0.04870294);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(11,0.04737404);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(12,0.04800476);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(13,0.04836886);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(14,0.04809309);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(15,0.04812233);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(16,0.04842832);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(17,0.02935242);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(18,0.02078822);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(19,0.01329438);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(20,0.01195844);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(21,0.007117003);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(22,0.007398018);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(23,0.00427903);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(24,0.004406416);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(25,0.00425206);
   VbbHcc_tags_Z_dR_all_stack_11->SetBinError(26,0.002111822);
   VbbHcc_tags_Z_dR_all_stack_11->SetEntries(15438);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_12 = new TH1D("VbbHcc_tags_Z_dR_all_stack_12","",50,0,10);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(3,6695.11);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(4,12886.65);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(5,18919.46);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(6,20390.58);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(7,16659.42);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(8,11857.62);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(9,8603.537);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(10,7327.68);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(11,6606.855);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(12,6799.092);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(13,6659.995);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(14,7242.79);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(15,7494.921);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(16,7683.376);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(17,3617.75);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(18,1975.443);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(19,1195.32);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(20,766.9539);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(21,513.0793);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(22,248.6471);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(23,168.4227);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(24,75.18413);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(25,24.05772);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(26,1.703769);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(27,11.11381);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinContent(29,7.81923);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(3,171.2091);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(4,238.5046);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(5,291.2572);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(6,302.8879);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(7,274.314);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(8,230.4637);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(9,195.6842);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(10,180.316);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(11,171.3705);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(12,173.8357);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(13,171.4776);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(14,179.6366);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(15,181.5958);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(16,183.8735);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(17,127.1942);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(18,93.76173);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(19,73.13488);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(20,57.31668);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(21,47.56553);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(22,32.96966);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(23,26.11113);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(24,17.73008);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(25,9.944779);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(26,1.204747);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(27,6.78772);
   VbbHcc_tags_Z_dR_all_stack_12->SetBinError(29,5.529031);
   VbbHcc_tags_Z_dR_all_stack_12->SetEntries(38867);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_all__39 = new TH1D("VbbHcc_tags_Z_dR_all__39","",50,0,10);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(2,1298);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(3,1643858);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(4,1733623);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(5,1214963);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(6,1066668);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(7,987896);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(8,942188);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(9,931073);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(10,943038);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(11,976592);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(12,1035544);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(13,1113270);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(14,1220829);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(15,1347133);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(16,1392044);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(17,830366);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(18,542975);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(19,371274);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(20,256545);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(21,173507);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(22,115000);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(23,73551);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(24,43679);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(25,23652);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(26,11397);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(27,4706);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(28,1281);
   VbbHcc_tags_Z_dR_all__39->SetBinContent(29,64);
   VbbHcc_tags_Z_dR_all__39->SetEntries(1.899801e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all__39->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all__39->SetLineWidth(2);
   VbbHcc_tags_Z_dR_all__39->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_all__39->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_all__39->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_all__39->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all__39->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all__39->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all__39->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all__39->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all__39->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all__39->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all__39->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_all__39->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all__39->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all__39->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_all__39->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_all__39->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all__39->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fx1039[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fy1039[50] = {
   0,
   89.97271,
   3123496,
   4468704,
   3423985,
   3245585,
   2898869,
   2842976,
   2872823,
   2957664,
   2936183,
   3234918,
   3600140,
   3844763,
   4314395,
   4472640,
   2687210,
   1632863,
   1191630,
   774968,
   584333.6,
   347734.8,
   261156.2,
   196763.8,
   85405.3,
   61407.93,
   22399.37,
   6014.131,
   13.28612,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fex1039[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_all_fey1039[50] = {
   0,
   3.974541,
   63708.02,
   75285.82,
   64848.98,
   62295.84,
   57943.18,
   56787.77,
   56483.53,
   56955.63,
   55897.83,
   58799.78,
   62198.18,
   63997.97,
   68303.58,
   69865.22,
   54823.31,
   43183.58,
   37376.79,
   30234.9,
   26642.36,
   20621.48,
   17944.52,
   15825.69,
   10477.83,
   8874.526,
   5369.286,
   2563.399,
   5.566906,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Z_dR_all_fx1039,Graph_from_VbbHcc_tags_Z_dR_all_fy1039,Graph_from_VbbHcc_tags_Z_dR_all_fex1039,Graph_from_VbbHcc_tags_Z_dR_all_fey1039);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_all1039 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_all1039","",100,0,11);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetMaximum(4998389);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_all1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_all1039);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_VbbHcc_all->cd();
  
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
   
   TH1D *data_mc_ratio__40 = new TH1D("data_mc_ratio__40","",50,0,10);
   data_mc_ratio__40->SetBinContent(2,14.4266);
   data_mc_ratio__40->SetBinContent(3,0.5262878);
   data_mc_ratio__40->SetBinContent(4,0.3879476);
   data_mc_ratio__40->SetBinContent(5,0.3548388);
   data_mc_ratio__40->SetBinContent(6,0.328652);
   data_mc_ratio__40->SetBinContent(7,0.3407867);
   data_mc_ratio__40->SetBinContent(8,0.3314091);
   data_mc_ratio__40->SetBinContent(9,0.3240969);
   data_mc_ratio__40->SetBinContent(10,0.3188456);
   data_mc_ratio__40->SetBinContent(11,0.332606);
   data_mc_ratio__40->SetBinContent(12,0.3201145);
   data_mc_ratio__40->SetBinContent(13,0.3092296);
   data_mc_ratio__40->SetBinContent(14,0.3175303);
   data_mc_ratio__40->SetBinContent(15,0.3122415);
   data_mc_ratio__40->SetBinContent(16,0.3112354);
   data_mc_ratio__40->SetBinContent(17,0.3090067);
   data_mc_ratio__40->SetBinContent(18,0.3325294);
   data_mc_ratio__40->SetBinContent(19,0.3115681);
   data_mc_ratio__40->SetBinContent(20,0.3310395);
   data_mc_ratio__40->SetBinContent(21,0.2969314);
   data_mc_ratio__40->SetBinContent(22,0.3307118);
   data_mc_ratio__40->SetBinContent(23,0.2816361);
   data_mc_ratio__40->SetBinContent(24,0.2219869);
   data_mc_ratio__40->SetBinContent(25,0.2769383);
   data_mc_ratio__40->SetBinContent(26,0.1855949);
   data_mc_ratio__40->SetBinContent(27,0.2100952);
   data_mc_ratio__40->SetBinContent(28,0.2129983);
   data_mc_ratio__40->SetBinContent(29,4.817056);
   data_mc_ratio__40->SetBinError(2,0.4004299);
   data_mc_ratio__40->SetBinError(3,0.0004104792);
   data_mc_ratio__40->SetBinError(4,0.0002946427);
   data_mc_ratio__40->SetBinError(5,0.0003219212);
   data_mc_ratio__40->SetBinError(6,0.0003182158);
   data_mc_ratio__40->SetBinError(7,0.0003428681);
   data_mc_ratio__40->SetBinError(8,0.0003414252);
   data_mc_ratio__40->SetBinError(9,0.0003358791);
   data_mc_ratio__40->SetBinError(10,0.0003283339);
   data_mc_ratio__40->SetBinError(11,0.0003365685);
   data_mc_ratio__40->SetBinError(12,0.0003145727);
   data_mc_ratio__40->SetBinError(13,0.0002930764);
   data_mc_ratio__40->SetBinError(14,0.0002873808);
   data_mc_ratio__40->SetBinError(15,0.0002690205);
   data_mc_ratio__40->SetBinError(16,0.0002637926);
   data_mc_ratio__40->SetBinError(17,0.0003391042);
   data_mc_ratio__40->SetBinError(18,0.0004512739);
   data_mc_ratio__40->SetBinError(19,0.0005113353);
   data_mc_ratio__40->SetBinError(20,0.0006535789);
   data_mc_ratio__40->SetBinError(21,0.0007128492);
   data_mc_ratio__40->SetBinError(22,0.000975216);
   data_mc_ratio__40->SetBinError(23,0.00103847);
   data_mc_ratio__40->SetBinError(24,0.001062163);
   data_mc_ratio__40->SetBinError(25,0.001800732);
   data_mc_ratio__40->SetBinError(26,0.001738484);
   data_mc_ratio__40->SetBinError(27,0.003062599);
   data_mc_ratio__40->SetBinError(28,0.00595116);
   data_mc_ratio__40->SetBinError(29,0.602132);
   data_mc_ratio__40->SetMinimum(0.4);
   data_mc_ratio__40->SetMaximum(1.6);
   data_mc_ratio__40->SetEntries(149.1901);
   data_mc_ratio__40->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__40->SetLineColor(ci);
   data_mc_ratio__40->SetLineWidth(2);
   data_mc_ratio__40->SetMarkerStyle(20);
   data_mc_ratio__40->SetMarkerSize(1.2);
   data_mc_ratio__40->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__40->GetXaxis()->SetRange(1,50);
   data_mc_ratio__40->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__40->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__40->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__40->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__40->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__40->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__40->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__40->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__40->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__40->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__40->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__40->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__40->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__40->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1040[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1040[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1040[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1040[50] = {
   0,
   0.04417495,
   0.02039638,
   0.01684735,
   0.01893962,
   0.01919403,
   0.0199882,
   0.01997476,
   0.01966133,
   0.01925696,
   0.01903759,
   0.01817659,
   0.0172766,
   0.01664549,
   0.01583156,
   0.01562058,
   0.02040157,
   0.02644655,
   0.0313661,
   0.03901439,
   0.04559443,
   0.05930232,
   0.06871182,
   0.08042986,
   0.1226836,
   0.1445176,
   0.239707,
   0.4262292,
   0.4190015,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1040,Graph_from_mc_statistical_error_fy1040,Graph_from_mc_statistical_error_fex1040,Graph_from_mc_statistical_error_fey1040);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1040 = new TH1F("Graph_Graph_from_mc_statistical_error1040","",100,0,11);
   Graph_Graph_from_mc_statistical_error1040->SetMinimum(0.4885249);
   Graph_Graph_from_mc_statistical_error1040->SetMaximum(1.511475);
   Graph_Graph_from_mc_statistical_error1040->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1040->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1040);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_VbbHcc_all->cd();
   Z_dR_VbbHcc_all->Modified();
   Z_dR_VbbHcc_all->cd();
   Z_dR_VbbHcc_all->SetSelected(Z_dR_VbbHcc_all);
}
