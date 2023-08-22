void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Tue Aug 22 09:16:28 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(0,0,1,1);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetFillStyle(4000);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetFrameFillStyle(1000);
   Sphericity_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.896513,1.052419,13.36728);
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
   st->SetMaximum(1.514503e+11);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",25,0,1);
   st_stack_59->SetMinimum(0.0013175);
   st_stack_59->SetMaximum(5.506814e+11);
   st_stack_59->SetDirectory(0);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->GetXaxis()->SetRange(1,25);
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetLabelSize(0.035);
   st_stack_59->GetXaxis()->SetTitleSize(0.035);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Events/0.04");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetLabelSize(0.05);
   st_stack_59->GetYaxis()->SetTitleSize(0.057);
   st_stack_59->GetYaxis()->SetTitleOffset(1.2);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetLabelSize(0.035);
   st_stack_59->GetZaxis()->SetTitleSize(0.035);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,69691.02);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,60531.53);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,35180.32);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,21671.97);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,12082.86);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,7711.391);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,4677.053);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1956.716);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,955.6369);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,733.1846);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,842.9813);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,304.8902);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,327.7667);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,42.99806);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,205.7708);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,214.0394);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,120.0359);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,29.45487);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,55.89264);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,4394.189);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,4198.994);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,2884.36);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,2192.492);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,1800.472);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,1411.548);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,1068.911);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,521.9064);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,430.709);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,155.8745);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,392.723);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,82.56404);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,87.14245);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,17.80461);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,71.26496);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,67.30569);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,57.36353);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,13.70267);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,34.8889);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(9459);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,423.4001);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,317.8965);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,186.4207);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,114.7513);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,68.34757);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,36.21028);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,22.04954);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,12.60011);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,11.08804);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,7.956432);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,5.630714);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,4.669463);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,3.306881);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,2.004772);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,2.220601);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,1.134294);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,1.191644);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.6001691);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.178314);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,-0.05354825);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,9.102412);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,7.810847);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,6.190468);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,4.767858);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,3.752659);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,2.656595);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,2.098812);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.57132);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,1.567133);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,1.407318);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,1.046019);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,1.005887);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.801287);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.5737026);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.7461763);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.4173126);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.4735985);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.3886609);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.08984536);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.05354825);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(14001);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,8730.579);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,7184.675);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,4063.648);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,2359.666);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,1359.783);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,797.338);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,483.3266);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,299.9031);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,205.6676);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,138.7367);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,95.37309);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,71.7496);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,49.84547);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,40.00618);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,31.39402);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,23.56268);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,14.56978);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,9.639702);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,6.27611);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,2.398293);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,1.082398);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.2376722);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,27.75374);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,24.5579);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,18.39369);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,14.53228);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,10.30883);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,8.207814);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,7.051615);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,5.004261);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,4.83185);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,3.337401);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,2.925915);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,2.29859);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.948781);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.737168);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.51875);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,1.549543);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,1.022732);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.8350259);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.6789379);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.4175969);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.2908497);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.1397943);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(383722);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,1247.7);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,931.048);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,535.5255);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,322.0193);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,189.4293);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,99.50313);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,61.00016);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,30.03924);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,21.9608);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,13.76645);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,11.46464);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,9.688351);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,7.061329);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,6.381788);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,4.389752);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,2.572436);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,2.322474);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,0.5842372);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.8621515);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.3198679);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.08720034);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,32.27911);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,24.97128);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,17.6672);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,13.2389);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,10.78458);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,6.873953);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,6.088163);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,2.796253);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,2.563879);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.711171);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,1.84716);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,1.62546);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,1.193735);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,1.322634);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.9668903);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.6821422);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.7277006);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.2630024);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.5855637);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.1810532);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.08720034);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(17726);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,125.2234);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,68.81157);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,60.12037);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,20.14719);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,17.76069);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,12.29103);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,8.202652);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,5.77036);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.679178);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.081844);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.9298845);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,1.781176);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,1.101893);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,1.451272);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.3218673);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.2806555);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.418302);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,12.79702);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,6.407703);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,9.114538);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.944958);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.910031);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,3.934954);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,2.351531);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,1.218642);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.4625651);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.4358241);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.3978825);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.667305);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.383839);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,0.6326254);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.1756446);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.1503527);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.3085287);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(2023);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_6 = new TH1D("VbbHcc_tags_Sphericity_stack_6","",25,0,1);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(1,0.4278565);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(4,0.6225638);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(1,0.4278565);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(4,0.6225638);
   VbbHcc_tags_Sphericity_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,6.56241);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,2.141335);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,1.401625);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,1.147497);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.7980337);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(6,0.8151749);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.4226771);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,1.728222);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,1.160084);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.7011439);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.6662258);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.569562);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(6,0.5836279);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.4226771);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_8 = new TH1D("VbbHcc_tags_Sphericity_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,25.94001);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,18.9388);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,8.805373);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,5.306969);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,5.302561);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,1.090081);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(7,0.7614424);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(10,0.2804473);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(11,0.5400779);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.2743944);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(13,0.3451496);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(20,0.315662);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,2.852528);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,2.416868);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.644773);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.27981);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,1.33443);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.555406);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(7,0.4429789);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(10,0.2804473);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(11,0.3843463);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.2743944);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(13,0.3451496);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(20,0.315662);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,21.25656);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,17.55042);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,9.448536);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,6.841929);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,4.805255);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,2.538052);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.9787128);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.4648649);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.2317501);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1904371);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.1479523);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.1240317);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.06486468);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.06413416);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.05579041);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.03301721);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.02397543);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01250105);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.0170492);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.004050044);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(21,0.002711063);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.274525);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.2786019);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1824867);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.1616651);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.1356575);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.09100906);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.05750138);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.0378811);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.0262871);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.02559881);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.02113512);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.02009131);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.01387288);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.01419974);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.01281672);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.010056);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.00863377);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.006293243);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.007033986);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.004050044);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(21,0.002711063);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(21953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,7.372758);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,6.05803);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,3.364692);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,2.203905);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.324566);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.7659256);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.407826);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.227948);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.1739281);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.1355584);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.08989824);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.07318309);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.05845558);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.04604668);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.04523832);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.02792892);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.02137291);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.01726826);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.007962934);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.002373413);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001753261);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0006269329);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0005849238);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.06447655);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.0577721);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.0431442);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.03496426);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.02722571);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.02081472);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01525158);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.01145713);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.009976794);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.008882221);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.00726347);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.006509704);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.005835376);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.005143752);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.005140933);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.004049964);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.003547777);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.003172382);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.002158297);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.00119711);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.001014055);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0006269329);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0005849238);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_11 = new TH1D("VbbHcc_tags_Sphericity_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.05550956);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.06145584);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.01418507);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.02491962);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(5,0.01555459);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.002219202);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(7,0.002203227);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.01117345);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.01229811);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.005919734);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.007670715);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(5,0.006380689);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.002219202);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(7,0.002203227);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.03486662);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.02066578);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.01209965);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.01064291);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.004892953);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.002986904);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.001759257);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0005920208);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.001754237);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.001457088);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(14,0.0003800235);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(15,0.0003978012);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.003428827);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.002543395);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.001964541);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001885259);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.001217495);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.001008235);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0007905279);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0004207827);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0007231942);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.0006580126);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(14,0.0003800235);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(15,0.0003978012);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Sphericity__161 = new TH1D("VbbHcc_tags_Sphericity__161","",25,0,1);
   VbbHcc_tags_Sphericity__161->SetBinContent(1,107429);
   VbbHcc_tags_Sphericity__161->SetBinContent(2,84298);
   VbbHcc_tags_Sphericity__161->SetBinContent(3,48340);
   VbbHcc_tags_Sphericity__161->SetBinContent(4,28079);
   VbbHcc_tags_Sphericity__161->SetBinContent(5,16210);
   VbbHcc_tags_Sphericity__161->SetBinContent(6,8872);
   VbbHcc_tags_Sphericity__161->SetBinContent(7,4692);
   VbbHcc_tags_Sphericity__161->SetBinContent(8,2833);
   VbbHcc_tags_Sphericity__161->SetBinContent(9,1873);
   VbbHcc_tags_Sphericity__161->SetBinContent(10,1378);
   VbbHcc_tags_Sphericity__161->SetBinContent(11,946);
   VbbHcc_tags_Sphericity__161->SetBinContent(12,682);
   VbbHcc_tags_Sphericity__161->SetBinContent(13,557);
   VbbHcc_tags_Sphericity__161->SetBinContent(14,408);
   VbbHcc_tags_Sphericity__161->SetBinContent(15,324);
   VbbHcc_tags_Sphericity__161->SetBinContent(16,236);
   VbbHcc_tags_Sphericity__161->SetBinContent(17,180);
   VbbHcc_tags_Sphericity__161->SetBinContent(18,130);
   VbbHcc_tags_Sphericity__161->SetBinContent(19,66);
   VbbHcc_tags_Sphericity__161->SetBinContent(20,24);
   VbbHcc_tags_Sphericity__161->SetBinContent(21,11);
   VbbHcc_tags_Sphericity__161->SetBinContent(22,5);
   VbbHcc_tags_Sphericity__161->SetBinContent(23,1);
   VbbHcc_tags_Sphericity__161->SetEntries(307598);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity__161->SetLineColor(ci);
   VbbHcc_tags_Sphericity__161->SetLineWidth(2);
   VbbHcc_tags_Sphericity__161->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity__161->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity__161->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity__161->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__161->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__161->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__161->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__161->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__161->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__161->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__161->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__161->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__161->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__161->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__161->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__161->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__161->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_fx1117[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fy1117[25] = {
   80279.57,
   69078.73,
   40049.09,
   24504.71,
   13730.44,
   8661.948,
   5253.784,
   2305.722,
   1196.863,
   895.3325,
   957.159,
   393.2504,
   389.5507,
   92.95263,
   244.1985,
   241.6504,
   138.5834,
   40.30874,
   63.23422,
   2.986698,
   1.174063,
   0.2382991,
   0.0005849238,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fex1117[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fey1117[25] = {
   4394.425,
   4199.153,
   2884.494,
   2192.588,
   1800.541,
   1411.597,
   1068.957,
   521.9417,
   430.747,
   155.9268,
   392.7401,
   82.6213,
   87.17763,
   17.95831,
   71.29182,
   67.32844,
   57.38005,
   13.73611,
   34.90053,
   0.5565027,
   0.3036541,
   0.1397957,
   0.0005849238,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_fx1117,Graph_from_VbbHcc_tags_Sphericity_fy1117,Graph_from_VbbHcc_tags_Sphericity_fex1117,Graph_from_VbbHcc_tags_Sphericity_fey1117);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity1117 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity1117","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetMinimum(93.1414);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetMaximum(93141.4);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity1117);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__162 = new TH1D("data_mc_ratio__162","",25,0,1);
   data_mc_ratio__162->SetBinContent(1,1.338186);
   data_mc_ratio__162->SetBinContent(2,1.220318);
   data_mc_ratio__162->SetBinContent(3,1.207019);
   data_mc_ratio__162->SetBinContent(4,1.145861);
   data_mc_ratio__162->SetBinContent(5,1.180589);
   data_mc_ratio__162->SetBinContent(6,1.02425);
   data_mc_ratio__162->SetBinContent(7,0.8930705);
   data_mc_ratio__162->SetBinContent(8,1.228682);
   data_mc_ratio__162->SetBinContent(9,1.564925);
   data_mc_ratio__162->SetBinContent(10,1.539093);
   data_mc_ratio__162->SetBinContent(11,0.9883415);
   data_mc_ratio__162->SetBinContent(12,1.734264);
   data_mc_ratio__162->SetBinContent(13,1.429852);
   data_mc_ratio__162->SetBinContent(14,4.389332);
   data_mc_ratio__162->SetBinContent(15,1.326789);
   data_mc_ratio__162->SetBinContent(16,0.9766176);
   data_mc_ratio__162->SetBinContent(17,1.298857);
   data_mc_ratio__162->SetBinContent(18,3.225107);
   data_mc_ratio__162->SetBinContent(19,1.043739);
   data_mc_ratio__162->SetBinContent(20,8.035629);
   data_mc_ratio__162->SetBinContent(21,9.369173);
   data_mc_ratio__162->SetBinContent(22,20.98203);
   data_mc_ratio__162->SetBinContent(23,1709.624);
   data_mc_ratio__162->SetBinError(1,0.004082778);
   data_mc_ratio__162->SetBinError(2,0.004203047);
   data_mc_ratio__162->SetBinError(3,0.005489853);
   data_mc_ratio__162->SetBinError(4,0.00683819);
   data_mc_ratio__162->SetBinError(5,0.009272721);
   data_mc_ratio__162->SetBinError(6,0.01087415);
   data_mc_ratio__162->SetBinError(7,0.01303787);
   data_mc_ratio__162->SetBinError(8,0.02308428);
   data_mc_ratio__162->SetBinError(9,0.03615968);
   data_mc_ratio__162->SetBinError(10,0.04146105);
   data_mc_ratio__162->SetBinError(11,0.03213375);
   data_mc_ratio__162->SetBinError(12,0.06640841);
   data_mc_ratio__162->SetBinError(13,0.06058479);
   data_mc_ratio__162->SetBinError(14,0.2173043);
   data_mc_ratio__162->SetBinError(15,0.07371053);
   data_mc_ratio__162->SetBinError(16,0.06357239);
   data_mc_ratio__162->SetBinError(17,0.09681107);
   data_mc_ratio__162->SetBinError(18,0.2828606);
   data_mc_ratio__162->SetBinError(19,0.1284753);
   data_mc_ratio__162->SetBinError(20,1.640266);
   data_mc_ratio__162->SetBinError(21,2.824912);
   data_mc_ratio__162->SetBinError(22,9.383449);
   data_mc_ratio__162->SetBinError(23,1709.624);
   data_mc_ratio__162->SetMinimum(0.4);
   data_mc_ratio__162->SetMaximum(1.6);
   data_mc_ratio__162->SetEntries(0.5400197);
   data_mc_ratio__162->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__162->SetLineColor(ci);
   data_mc_ratio__162->SetLineWidth(2);
   data_mc_ratio__162->SetMarkerStyle(20);
   data_mc_ratio__162->SetMarkerSize(1.2);
   data_mc_ratio__162->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__162->GetXaxis()->SetRange(1,25);
   data_mc_ratio__162->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__162->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__162->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__162->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__162->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__162->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__162->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__162->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__162->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__162->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__162->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__162->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__162->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__162->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__162->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__162->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__162->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1118[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1118[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1118[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1118[25] = {
   0.05473901,
   0.06078792,
   0.07202397,
   0.08947617,
   0.131135,
   0.1629653,
   0.2034642,
   0.226368,
   0.3598968,
   0.1741552,
   0.4103185,
   0.2100985,
   0.2237902,
   0.1931985,
   0.2919421,
   0.2786192,
   0.414047,
   0.3407724,
   0.5519248,
   0.186327,
   0.2586353,
   0.5866395,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1118,Graph_from_mc_statistical_error_fy1118,Graph_from_mc_statistical_error_fex1118,Graph_from_mc_statistical_error_fey1118);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1118 = new TH1F("Graph_Graph_from_mc_statistical_error1118","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1118->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1118->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1118->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1118->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1118->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1118);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
