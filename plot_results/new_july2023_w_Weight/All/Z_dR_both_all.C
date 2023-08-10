void Z_dR_both_all()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Thu Aug 10 12:24:47 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(0,0,1,1);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-171.9715,6.314516,172099.5);
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
   st->SetMaximum(147497.5);
   
   TH1F *st_stack_212 = new TH1F("st_stack_212","",30,0,6);
   st_stack_212->SetMinimum(0.3);
   st_stack_212->SetMaximum(154872.4);
   st_stack_212->SetDirectory(0);
   st_stack_212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_212->SetLineColor(ci);
   st_stack_212->GetXaxis()->SetRange(1,30);
   st_stack_212->GetXaxis()->SetLabelFont(42);
   st_stack_212->GetXaxis()->SetLabelSize(0.035);
   st_stack_212->GetXaxis()->SetTitleSize(0.035);
   st_stack_212->GetXaxis()->SetTitleFont(42);
   st_stack_212->GetYaxis()->SetTitle("Events/0.2");
   st_stack_212->GetYaxis()->SetLabelFont(42);
   st_stack_212->GetYaxis()->SetLabelSize(0.05);
   st_stack_212->GetYaxis()->SetTitleSize(0.057);
   st_stack_212->GetYaxis()->SetTitleOffset(1.2);
   st_stack_212->GetYaxis()->SetTitleFont(42);
   st_stack_212->GetZaxis()->SetLabelFont(42);
   st_stack_212->GetZaxis()->SetLabelSize(0.035);
   st_stack_212->GetZaxis()->SetTitleSize(0.035);
   st_stack_212->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_212);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,50356.47);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,51436.8);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,61757.66);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,31667.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,27576.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,29067.24);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,19450.23);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,20966.54);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,26529.39);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,26504.84);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,28114.49);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,28511.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,34931.16);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,32545.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,30817.28);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,38762.67);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,20867.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,19505.29);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,14140.33);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,13757.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,12276.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,9939.22);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(25,10487.83);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(26,6840.245);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(27,5828.217);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(28,5777.017);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(29,4558.809);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(30,2249.682);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(31,2794.929);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,3289.826);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,3503.199);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,22016.75);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,2927.209);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,2269.506);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,3417.325);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,1700.947);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,1929.259);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,3005.676);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,2534.644);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,2907.996);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,2924.554);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,3766.367);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,3616.771);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,2624.925);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,15419.06);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,2050.168);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,2010.451);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,2106.874);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,1649.248);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,2075.781);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,1530.997);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(25,2077.966);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(26,1163.469);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(27,981.92);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(28,940.9948);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(29,767.7119);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(30,309.3991);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(31,709.0271);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(30761);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,0.1485684);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,130.5106);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,174.9375);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,152.737);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,169.7351);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,170.2109);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,166.6127);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,167.1945);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,153.7533);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,158.5086);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,164.9503);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,171.4157);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,150.6996);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,172.7002);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,150.6435);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,124.2791);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,131.6469);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,106.9459);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,93.1972);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,92.18412);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,78.5152);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,74.20223);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,57.31705);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,51.1644);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,49.80998);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(27,32.28553);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(28,38.83491);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(29,25.1022);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(30,20.04543);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(31,14.81446);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,0.1055053);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,5.164555);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,5.942968);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,5.503592);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,5.968244);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,5.883535);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,5.827362);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,5.818677);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,5.57745);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,5.63133);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,5.712081);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,5.981134);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,5.459726);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,6.07226);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,5.404661);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,4.948056);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,5.221875);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,4.53803);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,4.286347);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,4.34173);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,3.949214);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,3.913421);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,3.540615);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,3.14309);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,3.238738);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(27,2.492021);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(28,3.725549);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(29,2.215678);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(30,1.981403);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(31,1.73111);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(36922);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_3 = new TH1D("VbbHcc_both_Z_dR_all_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(2,2.654278);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(3,2381.75);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(4,3555.843);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(5,3700.472);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(6,3855.309);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(7,3821.665);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(8,3688.271);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(9,3555.281);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(10,3449.823);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(11,3395.427);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(12,3347.16);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(13,3352.527);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(14,3299.149);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(15,3214.455);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(16,3105.697);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(17,2878.958);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(18,2643.687);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(19,2368.985);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(20,2134.442);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(21,1880.7);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(22,1650.687);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(23,1448.454);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(24,1263.613);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(25,1066.941);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(26,934.618);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(27,809.935);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(28,654.1092);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(29,522.1786);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(30,340.7854);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(31,257.9986);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(2,0.4767391);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(3,14.04801);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(4,17.44046);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(5,17.50598);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(6,17.81973);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(7,17.86565);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(8,17.84339);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(9,17.43426);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(10,16.83023);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(11,16.53383);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(12,16.75038);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(13,16.56);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(14,16.60746);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(15,16.47163);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(16,16.26914);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(17,15.81601);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(18,15.5109);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(19,13.97418);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(20,13.76738);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(21,12.62239);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(22,11.68682);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(23,10.78515);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(24,10.15475);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(25,9.222102);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(26,8.753728);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(27,8.787522);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(28,8.09071);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(29,7.181747);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(30,5.360698);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(31,4.570151);
   VbbHcc_both_Z_dR_all_stack_3->SetEntries(956114);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_4 = new TH1D("VbbHcc_both_Z_dR_all_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(2,0.2383759);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(3,478.696);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(4,703.0208);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(5,667.002);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(6,606.8455);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(7,482.1962);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(8,401.1385);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(9,359.1229);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(10,314.8074);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(11,344.2485);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(12,349.3029);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(13,370.7672);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(14,418.158);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(15,373.3844);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(16,390.9281);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(17,355.3389);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(18,311.7589);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(19,304.1944);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(20,278.4175);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(21,204.6706);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(22,190.3079);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(23,154.9119);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(24,136.0188);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(25,118.464);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(26,119.4135);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(27,98.79484);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(28,89.67423);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(29,76.94092);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(30,60.12096);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(31,30.46846);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(2,0.1378608);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(3,9.718745);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(4,14.83988);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(5,18.24646);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(6,23.03208);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(7,18.95222);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(8,14.63905);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(9,15.11336);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(10,12.76562);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(11,17.53777);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(12,13.706);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(13,18.57494);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(14,18.34928);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(15,13.927);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(16,17.01304);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(17,14.03609);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(18,12.32889);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(19,16.74038);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(20,13.82738);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(21,9.896306);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(22,9.990277);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(23,9.847231);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(24,10.10999);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(25,7.878227);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(26,11.41172);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(27,6.026497);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(28,6.122834);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(29,6.214855);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(30,8.06624);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(31,2.779388);
   VbbHcc_both_Z_dR_all_stack_4->SetEntries(52923);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_5 = new TH1D("VbbHcc_both_Z_dR_all_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(2,0.0002729972);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(3,94.79076);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(4,81.97336);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(5,46.33746);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(6,51.6309);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(7,34.95706);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(8,43.46127);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(9,43.36668);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(10,28.44452);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(11,36.65222);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(12,32.02014);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(13,32.92032);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(14,37.78072);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(15,41.20172);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(16,36.09785);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(17,31.85728);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(18,28.81458);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(19,19.26917);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(20,19.08732);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(21,20.1553);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(22,13.2783);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(23,17.25117);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(24,10.63253);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(25,17.35421);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(26,18.34702);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(27,8.540073);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(28,8.757702);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(29,8.083506);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(30,6.896298);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(31,3.959521);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(2,0.0002729972);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(3,9.454928);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(4,6.948143);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(5,4.709147);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(6,10.17493);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(7,3.451952);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(8,5.995467);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(9,7.339226);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(10,4.422544);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(11,5.623094);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(12,3.997724);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(13,4.680503);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(14,5.135839);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(15,8.699651);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(16,5.561962);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(17,4.414002);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(18,3.88036);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(19,2.115175);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(20,3.583254);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(21,3.262649);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(22,1.729238);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(23,3.985516);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(24,1.935);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(25,8.201407);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(26,4.671702);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(27,1.759054);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(28,1.826836);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(29,1.321205);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(30,1.232204);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(31,1.613093);
   VbbHcc_both_Z_dR_all_stack_5->SetEntries(8398);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_6 = new TH1D("VbbHcc_both_Z_dR_all_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(3,0.08576627);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(4,0.5029805);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(5,0.589601);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(7,0.139529);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(9,0.7351881);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(10,0.1535887);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(11,1.289031);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(12,0.2678449);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(13,0.1440206);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(14,0.5153152);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(17,0.3983715);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(22,0.2997942);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(25,0.1622891);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(28,0.1587488);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(3,0.08576627);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(4,0.5029805);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(5,0.4218469);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(7,0.139529);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(9,0.5199435);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(10,0.1535887);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(11,0.8345814);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(12,0.1893967);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(13,0.1440206);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(14,0.3647133);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(17,0.3983715);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(22,0.2121205);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(25,0.1622891);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(28,0.1587488);
   VbbHcc_both_Z_dR_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_7 = new TH1D("VbbHcc_both_Z_dR_all_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(3,0.7055546);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(4,1.203123);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(5,0.9477802);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(6,0.2376896);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(7,0.1245709);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(8,0.1145399);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(9,0.9770255);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(10,0.2330157);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(11,1.383737);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(13,0.4203461);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(14,0.9244442);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(15,0.4969443);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(16,0.2404927);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(17,0.7642488);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(18,0.1159231);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(19,0.1168895);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(21,0.1175925);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(22,0.2008158);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(24,0.3410012);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(25,0.1275401);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(29,0.1182308);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(3,0.2891677);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(4,0.5787468);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(5,0.4699356);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(6,0.168074);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(7,0.1245709);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(8,0.1145399);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(9,0.5474169);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(10,0.1647843);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(11,0.8394235);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(13,0.2122846);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(14,0.422263);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(15,0.2487912);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(16,0.1701639);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(17,0.4510735);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(18,0.1159231);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(19,0.1168895);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(21,0.1175925);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(22,0.1432223);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(24,0.1968949);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(25,0.1275401);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(29,0.1182308);
   VbbHcc_both_Z_dR_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_8 = new TH1D("VbbHcc_both_Z_dR_all_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(3,10.98588);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(4,19.54954);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(5,22.94072);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(6,10.69181);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(7,5.426878);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(8,5.427046);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(9,5.431798);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(10,2.83221);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(11,4.865038);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(12,4.35293);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(13,6.739494);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(14,7.968608);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(15,10.36977);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(16,7.115247);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(17,5.391186);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(18,6.849854);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(19,5.657012);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(20,5.182704);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(21,3.089376);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(22,2.794809);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(23,3.025945);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(24,1.328107);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(25,0.9963514);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(26,1.994923);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(27,1.662691);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(28,3.375642);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(29,1.682804);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(30,1.898181);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(31,0.6087679);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(3,1.821437);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(4,2.416363);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(5,2.657681);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(6,1.780698);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(7,1.277371);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(8,1.293993);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(9,1.258521);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(10,0.8800227);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(11,1.155662);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(12,1.094966);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(13,1.421308);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(14,1.546574);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(15,1.82148);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(16,1.487182);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(17,1.231959);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(18,1.423094);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(19,1.318263);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(20,1.295949);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(21,0.9912877);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(22,0.8872563);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(23,0.9823099);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(24,0.6653099);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(25,0.6268912);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(26,0.7557352);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(27,0.6812304);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(28,1.035465);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(29,0.6887808);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(30,0.7205437);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(31,0.4308394);
   VbbHcc_both_Z_dR_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_9 = new TH1D("VbbHcc_both_Z_dR_all_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(2,0.001653484);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(3,9.439801);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(4,17.94957);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(5,17.43458);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(6,13.58121);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(7,8.77738);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(8,5.556758);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(9,4.023238);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(10,3.840385);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(11,4.234832);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(12,5.188439);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(13,6.253722);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(14,7.50078);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(15,8.030235);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(16,8.295963);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(17,7.966147);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(18,7.032332);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(19,5.863508);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(20,4.484941);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(21,3.137182);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(22,2.357921);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(23,1.80876);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(24,1.363478);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(25,1.316247);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(26,1.541994);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(27,1.645681);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(28,1.870526);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(29,1.602303);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(30,0.9350132);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(31,0.4810073);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(2,0.001653484);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(3,0.1486311);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(4,0.2086208);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(5,0.2078366);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(6,0.1766429);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(7,0.1437576);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(8,0.1094468);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(9,0.09626955);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(10,0.09058313);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(11,0.0988339);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(12,0.1120228);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(13,0.1201192);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(14,0.1356454);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(15,0.1360299);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(16,0.1490611);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(17,0.1401262);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(18,0.1272898);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(19,0.1191039);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(20,0.1006213);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(21,0.08582394);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(22,0.07282776);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(23,0.121919);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(24,0.0577429);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(25,0.05293047);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(26,0.05759055);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(27,0.06104528);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(28,0.06831743);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(29,0.06007598);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(30,0.04666336);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(31,0.03173809);
   VbbHcc_both_Z_dR_all_stack_9->SetEntries(84809);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_10 = new TH1D("VbbHcc_both_Z_dR_all_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(3,3.01948);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(4,6.300262);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(5,7.625137);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(6,6.868985);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(7,5.108777);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(8,3.624808);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(9,2.667249);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(10,2.41485);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(11,2.350864);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(12,2.614108);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(13,2.828311);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(14,2.872191);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(15,2.907275);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(16,2.908696);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(17,2.765754);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(18,2.555937);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(19,2.164767);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(20,1.903403);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(21,1.52707);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(22,1.289251);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(23,0.9722875);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(24,0.8908351);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(25,0.8550545);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(26,0.9431543);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(27,0.9817038);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(28,0.8195908);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(29,0.6659448);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(30,0.416931);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(31,0.2138562);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(3,0.03950257);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(4,0.05703159);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(5,0.06284613);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(6,0.05967003);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(7,0.05138283);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(8,0.04334774);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(9,0.03711685);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(10,0.03538038);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(11,0.03490025);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(12,0.03682153);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(13,0.03831304);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(14,0.03859997);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(15,0.03884377);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(16,0.03883109);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(17,0.03792144);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(18,0.03639833);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(19,0.03355383);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(20,0.03139358);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(21,0.02812917);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(22,0.02591423);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(23,0.02236335);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(24,0.02145705);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(25,0.02104324);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(26,0.02207368);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(27,0.02252803);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(28,0.02062223);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(29,0.01852003);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(30,0.01464959);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(31,0.01054923);
   VbbHcc_both_Z_dR_all_stack_10->SetEntries(150219);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_11 = new TH1D("VbbHcc_both_Z_dR_all_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(3,0.0630635);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(4,0.07170636);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(5,0.07805733);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(6,0.05239723);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(7,0.01380286);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(8,0.01342945);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(9,0.01076488);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(10,0.006799856);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(11,0.01640905);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(12,0.012462);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(13,0.01328841);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(14,0.01055646);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(15,0.01972108);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(16,0.0109894);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(17,0.008742692);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(18,0.005721983);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(19,0.004865599);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(20,0.002127615);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(22,0.004335175);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(23,0.01849807);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(25,0.00394522);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(26,0.004058264);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(27,0.004186663);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(28,0.004322923);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(29,0.01547399);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(31,0.001370852);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(3,0.01266686);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(4,0.01390342);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(5,0.01386419);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(6,0.01163801);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(7,0.005556493);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(8,0.005591657);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(9,0.005040677);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(10,0.004056321);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(11,0.006748219);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(12,0.004790093);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(13,0.006155437);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(14,0.005374173);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(15,0.007162648);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(16,0.005076248);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(17,0.005063277);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(18,0.004048752);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(19,0.003444844);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(20,0.001771275);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(22,0.003085562);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(23,0.007202974);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(25,0.002789905);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(26,0.002872144);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(27,0.003139072);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(28,0.003077958);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(29,0.006941098);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(31,0.001370852);
   VbbHcc_both_Z_dR_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_12 = new TH1D("VbbHcc_both_Z_dR_all_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(3,0.01732273);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(4,0.03260044);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(5,0.03675718);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(6,0.02513076);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(7,0.01440546);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(8,0.009018922);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(9,0.006688971);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(10,0.006627472);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(11,0.007025681);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(12,0.007318192);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(13,0.007510029);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(14,0.004996707);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(15,0.004826486);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(16,0.004448835);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(17,0.005846529);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(18,0.005458059);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(19,0.005531597);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(20,0.005109959);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(21,0.004215753);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(22,0.00217744);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(23,0.003831127);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(24,0.002009315);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(25,0.003098764);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(26,0.001752174);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(27,0.003108989);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(28,0.00409784);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(29,0.001908331);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(30,0.00082826);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(31,0.001061616);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(3,0.002382493);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(4,0.003280717);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(5,0.003454134);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(6,0.002900568);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(7,0.002161102);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(8,0.001664251);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(9,0.00153629);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(10,0.001459328);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(11,0.001533291);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(12,0.001544448);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(13,0.001574076);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(14,0.001243795);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(15,0.001202457);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(16,0.001155171);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(17,0.001421082);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(18,0.001297228);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(19,0.001345005);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(20,0.001271882);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(21,0.001185763);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(22,0.0007859309);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(23,0.001115452);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(24,0.0008417506);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(25,0.0009246015);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(26,0.0007386079);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(27,0.001023345);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(28,0.001150746);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(29,0.0008049691);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(30,0.0004876588);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(31,0.0005571722);
   VbbHcc_both_Z_dR_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_all__582 = new TH1D("VbbHcc_both_Z_dR_all__582","",30,0,6);
   VbbHcc_both_Z_dR_all__582->SetBinContent(2,26);
   VbbHcc_both_Z_dR_all__582->SetBinContent(3,35349);
   VbbHcc_both_Z_dR_all__582->SetBinContent(4,39709);
   VbbHcc_both_Z_dR_all__582->SetBinContent(5,30027);
   VbbHcc_both_Z_dR_all__582->SetBinContent(6,26511);
   VbbHcc_both_Z_dR_all__582->SetBinContent(7,24050);
   VbbHcc_both_Z_dR_all__582->SetBinContent(8,22342);
   VbbHcc_both_Z_dR_all__582->SetBinContent(9,21440);
   VbbHcc_both_Z_dR_all__582->SetBinContent(10,20759);
   VbbHcc_both_Z_dR_all__582->SetBinContent(11,20686);
   VbbHcc_both_Z_dR_all__582->SetBinContent(12,20664);
   VbbHcc_both_Z_dR_all__582->SetBinContent(13,21372);
   VbbHcc_both_Z_dR_all__582->SetBinContent(14,21670);
   VbbHcc_both_Z_dR_all__582->SetBinContent(15,22284);
   VbbHcc_both_Z_dR_all__582->SetBinContent(16,21963);
   VbbHcc_both_Z_dR_all__582->SetBinContent(17,20509);
   VbbHcc_both_Z_dR_all__582->SetBinContent(18,18764);
   VbbHcc_both_Z_dR_all__582->SetBinContent(19,17107);
   VbbHcc_both_Z_dR_all__582->SetBinContent(20,15136);
   VbbHcc_both_Z_dR_all__582->SetBinContent(21,13067);
   VbbHcc_both_Z_dR_all__582->SetBinContent(22,11182);
   VbbHcc_both_Z_dR_all__582->SetBinContent(23,9337);
   VbbHcc_both_Z_dR_all__582->SetBinContent(24,8115);
   VbbHcc_both_Z_dR_all__582->SetBinContent(25,6940);
   VbbHcc_both_Z_dR_all__582->SetBinContent(26,6069);
   VbbHcc_both_Z_dR_all__582->SetBinContent(27,5523);
   VbbHcc_both_Z_dR_all__582->SetBinContent(28,5055);
   VbbHcc_both_Z_dR_all__582->SetBinContent(29,4809);
   VbbHcc_both_Z_dR_all__582->SetBinContent(30,3297);
   VbbHcc_both_Z_dR_all__582->SetBinContent(31,2370);
   VbbHcc_both_Z_dR_all__582->SetEntries(496161);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all__582->SetLineColor(ci);
   VbbHcc_both_Z_dR_all__582->SetLineWidth(2);
   VbbHcc_both_Z_dR_all__582->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_all__582->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_all__582->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all__582->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all__582->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all__582->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all__582->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all__582->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all__582->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all__582->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all__582->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all__582->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all__582->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all__582->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all__582->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all__582->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all__582->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fx1423[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fy1423[30] = {
   0,
   3.043148,
   53466.53,
   55998.18,
   66373.86,
   36382.08,
   32104.94,
   33381.47,
   23589.05,
   24922.86,
   30478.38,
   30410.72,
   32058.52,
   32436.68,
   38754.73,
   36247.84,
   34225.01,
   41895.15,
   23680.51,
   22042.01,
   16345.92,
   15697.13,
   13977.05,
   11410.73,
   11745.22,
   7966.919,
   6782.07,
   6574.626,
   5195.201,
   2680.781};
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fex1423[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fey1423[30] = {
   0,
   0.5073657,
   3289.888,
   3503.287,
   22016.76,
   2927.378,
   2269.666,
   3417.413,
   1701.13,
   1929.388,
   3005.784,
   2534.746,
   2908.112,
   2924.669,
   3766.444,
   3616.857,
   2625.019,
   15419.08,
   2050.291,
   2010.554,
   2106.942,
   1649.325,
   2075.841,
   1531.069,
   2078.02,
   1163.572,
   981.9828,
   941.0592,
   767.7753,
   309.5603};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_all_fx1423,Graph_from_VbbHcc_both_Z_dR_all_fy1423,Graph_from_VbbHcc_both_Z_dR_all_fex1423,Graph_from_VbbHcc_both_Z_dR_all_fey1423);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_all1423 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_all1423","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetMaximum(97229.69);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_all1423);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_all","MC unc. (stat.)","fl");

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
   Z_dR_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__583 = new TH1D("data_mc_ratio__583","",30,0,6);
   data_mc_ratio__583->SetBinContent(2,8.543783);
   data_mc_ratio__583->SetBinContent(3,0.6611426);
   data_mc_ratio__583->SetBinContent(4,0.7091123);
   data_mc_ratio__583->SetBinContent(5,0.4523919);
   data_mc_ratio__583->SetBinContent(6,0.7286829);
   data_mc_ratio__583->SetBinContent(7,0.7491059);
   data_mc_ratio__583->SetBinContent(8,0.6692934);
   data_mc_ratio__583->SetBinContent(9,0.9088962);
   data_mc_ratio__583->SetBinContent(10,0.8329302);
   data_mc_ratio__583->SetBinContent(11,0.6787107);
   data_mc_ratio__583->SetBinContent(12,0.6794972);
   data_mc_ratio__583->SetBinContent(13,0.6666558);
   data_mc_ratio__583->SetBinContent(14,0.6680708);
   data_mc_ratio__583->SetBinContent(15,0.5750007);
   data_mc_ratio__583->SetBinContent(16,0.605912);
   data_mc_ratio__583->SetBinContent(17,0.5992401);
   data_mc_ratio__583->SetBinContent(18,0.44788);
   data_mc_ratio__583->SetBinContent(19,0.7224084);
   data_mc_ratio__583->SetBinContent(20,0.6866887);
   data_mc_ratio__583->SetBinContent(21,0.7994045);
   data_mc_ratio__583->SetBinContent(22,0.7123593);
   data_mc_ratio__583->SetBinContent(23,0.6680237);
   data_mc_ratio__583->SetBinContent(24,0.7111729);
   data_mc_ratio__583->SetBinContent(25,0.5908785);
   data_mc_ratio__583->SetBinContent(26,0.761775);
   data_mc_ratio__583->SetBinContent(27,0.8143531);
   data_mc_ratio__583->SetBinContent(28,0.768865);
   data_mc_ratio__583->SetBinContent(29,0.925662);
   data_mc_ratio__583->SetBinContent(30,1.229865);
   data_mc_ratio__583->SetBinContent(31,0.7636599);
   data_mc_ratio__583->SetBinError(2,1.675574);
   data_mc_ratio__583->SetBinError(3,0.003516467);
   data_mc_ratio__583->SetBinError(4,0.003558529);
   data_mc_ratio__583->SetBinError(5,0.002610711);
   data_mc_ratio__583->SetBinError(6,0.004475335);
   data_mc_ratio__583->SetBinError(7,0.004830429);
   data_mc_ratio__583->SetBinError(8,0.004477706);
   data_mc_ratio__583->SetBinError(9,0.006207288);
   data_mc_ratio__583->SetBinError(10,0.005781032);
   data_mc_ratio__583->SetBinError(11,0.004718961);
   data_mc_ratio__583->SetBinError(12,0.004726944);
   data_mc_ratio__583->SetBinError(13,0.004560149);
   data_mc_ratio__583->SetBinError(14,0.004538298);
   data_mc_ratio__583->SetBinError(15,0.003851872);
   data_mc_ratio__583->SetBinError(16,0.004088497);
   data_mc_ratio__583->SetBinError(17,0.004184356);
   data_mc_ratio__583->SetBinError(18,0.003269633);
   data_mc_ratio__583->SetBinError(19,0.005523265);
   data_mc_ratio__583->SetBinError(20,0.005581544);
   data_mc_ratio__583->SetBinError(21,0.006993244);
   data_mc_ratio__583->SetBinError(22,0.006736578);
   data_mc_ratio__583->SetBinError(23,0.006913345);
   data_mc_ratio__583->SetBinError(24,0.007894615);
   data_mc_ratio__583->SetBinError(25,0.007092812);
   data_mc_ratio__583->SetBinError(26,0.009778408);
   data_mc_ratio__583->SetBinError(27,0.01095785);
   data_mc_ratio__583->SetBinError(28,0.01081408);
   data_mc_ratio__583->SetBinError(29,0.01334827);
   data_mc_ratio__583->SetBinError(30,0.02141895);
   data_mc_ratio__583->SetBinError(31,0.1751772);
   data_mc_ratio__583->SetMinimum(0.4);
   data_mc_ratio__583->SetMaximum(1.6);
   data_mc_ratio__583->SetEntries(161.0972);
   data_mc_ratio__583->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__583->SetLineColor(ci);
   data_mc_ratio__583->SetLineWidth(2);
   data_mc_ratio__583->SetMarkerStyle(20);
   data_mc_ratio__583->SetMarkerSize(1.2);
   data_mc_ratio__583->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__583->GetXaxis()->SetRange(1,30);
   data_mc_ratio__583->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__583->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__583->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__583->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__583->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__583->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__583->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__583->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__583->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__583->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__583->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__583->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__583->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__583->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__583->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__583->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__583->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1424[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1424[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1424[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1424[30] = {
   0,
   0.166724,
   0.06153174,
   0.06256073,
   0.3317083,
   0.0804621,
   0.07069525,
   0.1023746,
   0.07211524,
   0.07741439,
   0.09862021,
   0.08335041,
   0.09071261,
   0.09016548,
   0.09718668,
   0.09978131,
   0.07669885,
   0.3680397,
   0.08658137,
   0.09121465,
   0.1288971,
   0.1050717,
   0.1485178,
   0.1341781,
   0.1769247,
   0.1460505,
   0.144791,
   0.143135,
   0.1477855,
   0.1154739};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1424,Graph_from_mc_statistical_error_fy1424,Graph_from_mc_statistical_error_fex1424,Graph_from_mc_statistical_error_fey1424);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1424 = new TH1F("Graph_Graph_from_mc_statistical_error1424","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1424->SetMinimum(0.5583523);
   Graph_Graph_from_mc_statistical_error1424->SetMaximum(1.441648);
   Graph_Graph_from_mc_statistical_error1424->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1424->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1424->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1424);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}
