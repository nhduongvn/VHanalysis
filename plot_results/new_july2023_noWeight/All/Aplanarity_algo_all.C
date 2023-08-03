void Aplanarity_algo_all()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Thu Aug  3 12:24:56 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(0,0,1,1);
   Aplanarity_algo_all->SetFillColor(0);
   Aplanarity_algo_all->SetFillStyle(4000);
   Aplanarity_algo_all->SetBorderMode(0);
   Aplanarity_algo_all->SetBorderSize(2);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-16830.27,1.052419,1.681374e+07);
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
   st->SetMaximum(1.441017e+07);
   
   TH1F *st_stack_160 = new TH1F("st_stack_160","",50,0,1);
   st_stack_160->SetMinimum(0.3);
   st_stack_160->SetMaximum(1.513068e+07);
   st_stack_160->SetDirectory(0);
   st_stack_160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_160->SetLineColor(ci);
   st_stack_160->GetXaxis()->SetRange(1,50);
   st_stack_160->GetXaxis()->SetLabelFont(42);
   st_stack_160->GetXaxis()->SetLabelSize(0.035);
   st_stack_160->GetXaxis()->SetTitleSize(0.035);
   st_stack_160->GetXaxis()->SetTitleFont(42);
   st_stack_160->GetYaxis()->SetTitle("Events/0.02");
   st_stack_160->GetYaxis()->SetLabelFont(42);
   st_stack_160->GetYaxis()->SetLabelSize(0.05);
   st_stack_160->GetYaxis()->SetTitleSize(0.057);
   st_stack_160->GetYaxis()->SetTitleOffset(1.2);
   st_stack_160->GetYaxis()->SetTitleFont(42);
   st_stack_160->GetZaxis()->SetLabelFont(42);
   st_stack_160->GetZaxis()->SetLabelSize(0.035);
   st_stack_160->GetZaxis()->SetTitleSize(0.035);
   st_stack_160->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_160);
   
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,5700187);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,819009.3);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,182474.6);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,43337.75);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,11421.31);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,3251.205);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,806.5331);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,264.5107);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,111.4354);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(10,22.20356);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,44.27594);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(12,22.47793);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(13,312.9938);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(15,22.47793);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,64152.59);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,25408.45);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,7839.905);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,3817.22);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,1894.653);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,812.2433);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,289.048);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,74.34409);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,42.74009);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(10,22.20356);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,31.30796);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(12,13.29528);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(13,269.5575);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(15,13.29528);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(367140);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,41676.2);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,5790.683);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,1294.775);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,352.1635);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,120.955);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,43.64361);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,19.4448);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,8.981637);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,5.751971);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,2.860131);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,2.434199);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,1.405086);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,0.2326537);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,0.495407);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(15,0.2886842);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(16,0.04712387);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(18,0.04373405);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,77.22587);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,28.78839);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,13.73225);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,7.122675);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,4.248231);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,2.566811);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,1.620687);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,1.08829);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,0.9964385);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,0.624228);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,0.6204708);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,0.4267204);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,0.1043274);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,0.2843126);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(15,0.1182388);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(16,0.04712387);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(18,0.04373405);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(669400);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(0,0.1407128);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(1,699114.8);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(2,91649.68);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(3,18902.02);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(4,5221.928);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(5,1740.929);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(6,685.6649);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(7,303.6594);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(8,143.5251);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(9,77.58084);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(10,39.7536);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(11,24.99622);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(12,13.5521);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(13,9.701318);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(14,4.697295);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(15,2.474237);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(16,1.525916);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(17,0.9565392);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(18,0.97479);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(19,0.5560067);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(20,0.04698062);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(21,0.1389877);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(22,0.1142113);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(0,0.09949895);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(1,208.5945);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(2,75.21991);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(3,33.92131);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(4,17.69781);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(5,10.15932);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(6,6.332392);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(7,4.202226);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(8,2.87518);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(9,2.124448);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(10,1.509876);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(11,1.205789);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(12,0.8840083);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(13,0.7557406);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(14,0.5242025);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(15,0.3685218);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(16,0.3004149);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(17,0.2433997);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(18,0.2414269);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(19,0.1794833);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(20,0.04698062);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(21,0.09828673);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(22,0.08268358);
   VbbHcc_algo_Aplanarity_all_stack_3->SetEntries(1.366985e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(1,30198.39);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(2,3786.575);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(3,829.5678);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(4,187.716);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(5,53.29142);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(6,15.01003);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(7,8.580806);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(8,4.202608);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(9,0.7365118);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(10,0.558694);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(11,0.6810954);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(12,0.528033);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(13,0.3878184);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(18,0.06630981);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(1,139.1628);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(2,57.72179);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(3,27.71674);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(4,12.82124);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(5,8.217401);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(6,3.305448);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(7,3.872867);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(8,2.732721);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(9,0.3497696);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(10,0.3233574);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(11,0.2664411);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(12,0.3755438);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(13,0.2997648);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(18,0.06630981);
   VbbHcc_algo_Aplanarity_all_stack_4->SetEntries(203141);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(1,12342.65);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(2,1458.801);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(3,292.0689);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(4,75.38048);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(5,9.129583);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(6,12.67684);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(7,7.873168);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(8,0.6209404);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(9,0.7981361);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(10,0.3900604);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(11,0.2473336);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(13,0.09024302);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(1,141.443);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(2,55.2258);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(3,24.60696);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(4,11.72493);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(5,1.94353);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(6,6.418299);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(7,6.104863);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(8,0.3693318);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(9,0.4629468);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(10,0.3368439);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(11,0.1901071);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(13,0.09024302);
   VbbHcc_algo_Aplanarity_all_stack_5->SetEntries(104522);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(1,120.5648);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(2,12.81779);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(3,3.149496);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(4,1.170456);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(1,5.431059);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(2,1.878867);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(3,0.9544903);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(4,0.5982689);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(5,0.1343693);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(7,0.1343693);
   VbbHcc_algo_Aplanarity_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(1,162.0182);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(2,19.21167);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(3,4.288841);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(4,1.203583);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(5,0.3271759);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(6,0.2181173);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(7,0.1090586);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(1,5.68239);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(2,2.015143);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(3,0.9989477);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(4,0.5927356);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(5,0.1888951);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(6,0.1542322);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(7,0.1090586);
   VbbHcc_algo_Aplanarity_all_stack_7->SetEntries(1319);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(1,376.2712);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(2,39.8654);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(3,7.169587);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(4,1.551694);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(5,0.53264);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(6,0.2432072);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(1,9.875948);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(2,3.186484);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(3,1.357346);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(4,0.6345791);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(5,0.3770883);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(6,0.2432072);
   VbbHcc_algo_Aplanarity_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(1,262.4597);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(2,21.35752);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(3,3.383885);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(4,0.7340344);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(5,0.2212215);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(6,0.06286087);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(7,0.01857244);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(8,0.01147394);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(9,0.004363018);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(10,0.002989068);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(12,0.002285779);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(13,0.002285779);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(1,0.6852162);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(2,0.1930678);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(3,0.07637641);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(4,0.03519685);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(5,0.01989981);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(6,0.01027772);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(7,0.005739239);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(8,0.004067389);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(9,0.002526674);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(10,0.002120458);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(12,0.002285779);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(13,0.002285779);
   VbbHcc_algo_Aplanarity_all_stack_9->SetEntries(169575);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(1,134.5396);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(2,15.302);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(3,2.959381);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(4,0.6501878);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(5,0.2217483);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(6,0.067072);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(7,0.02326988);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(8,0.01231935);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(9,0.006844082);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(10,0.004106449);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(11,0.001368816);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(12,0.001368816);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(1,0.2538276);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(2,0.08560276);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(3,0.03764559);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(4,0.01764546);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(5,0.0103049);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(6,0.005667406);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(7,0.003338188);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(8,0.002428888);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(9,0.001810386);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(10,0.001402319);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(11,0.0008096295);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(12,0.0008096295);
   VbbHcc_algo_Aplanarity_all_stack_10->SetEntries(337056);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(1,2.251625);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(2,0.1842786);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(3,0.03410986);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(4,0.009326028);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(1,0.07167191);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(2,0.02047476);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(3,0.008986981);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(4,0.004757816);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(6,0.002735007);
   VbbHcc_algo_Aplanarity_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(1,0.953027);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(2,0.1062482);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(3,0.0209109);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(4,0.005912977);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(5,0.001994271);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(1,0.01676789);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(2,0.005626879);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(3,0.002495578);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(4,0.001341019);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(5,0.0007758938);
   VbbHcc_algo_Aplanarity_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity_all__439 = new TH1D("VbbHcc_algo_Aplanarity_all__439","",50,0,1);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(0,1);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(1,2767726);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(2,370411);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(3,80974);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(4,20406);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(5,5596);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(6,1817);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(7,694);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(8,319);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(9,159);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(10,92);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(11,55);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(12,31);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(13,25);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(14,15);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(15,11);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(16,5);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(17,2);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(18,4);
   VbbHcc_algo_Aplanarity_all__439->SetEntries(3248392);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all__439->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all__439->SetLineWidth(2);
   VbbHcc_algo_Aplanarity_all__439->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity_all__439->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all__439->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_all_fx1319[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_all_fy1319[50] = {
   6484579,
   921803.9,
   203814,
   49180.27,
   13347.06,
   4008.794,
   1146.377,
   421.8647,
   196.314,
   65.77314,
   72.63616,
   37.9668,
   323.4081,
   5.192702,
   25.24085,
   1.57304,
   0.9565392,
   1.084834,
   0.5560067,
   0.04698062,
   0.1389877,
   0.1142113,
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
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_all_fex1319[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_all_fey1319[50] = {
   64153.28,
   25408.7,
   7840.078,
   3817.307,
   1894.703,
   812.3041,
   289.1735,
   74.45871,
   42.80838,
   22.26848,
   31.33902,
   13.33675,
   269.5588,
   0.5963405,
   13.30091,
   0.3040884,
   0.2433997,
   0.2541586,
   0.1794833,
   0.04698062,
   0.09828673,
   0.08268358,
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_all_fx1319,Graph_from_VbbHcc_algo_Aplanarity_all_fy1319,Graph_from_VbbHcc_algo_Aplanarity_all_fex1319,Graph_from_VbbHcc_algo_Aplanarity_all_fey1319);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetMaximum(7203605);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity_all","MC unc. (stat.)","fl");

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
   Aplanarity_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__440 = new TH1D("data_mc_ratio__440","",50,0,1);
   data_mc_ratio__440->SetBinContent(0,7.106676);
   data_mc_ratio__440->SetBinContent(1,0.4268166);
   data_mc_ratio__440->SetBinContent(2,0.4018328);
   data_mc_ratio__440->SetBinContent(3,0.3972936);
   data_mc_ratio__440->SetBinContent(4,0.4149225);
   data_mc_ratio__440->SetBinContent(5,0.4192685);
   data_mc_ratio__440->SetBinContent(6,0.4532535);
   data_mc_ratio__440->SetBinContent(7,0.6053857);
   data_mc_ratio__440->SetBinContent(8,0.7561665);
   data_mc_ratio__440->SetBinContent(9,0.8099268);
   data_mc_ratio__440->SetBinContent(10,1.398747);
   data_mc_ratio__440->SetBinContent(11,0.7571986);
   data_mc_ratio__440->SetBinContent(12,0.8165028);
   data_mc_ratio__440->SetBinContent(13,0.0773017);
   data_mc_ratio__440->SetBinContent(14,2.88867);
   data_mc_ratio__440->SetBinContent(15,0.4358014);
   data_mc_ratio__440->SetBinContent(16,3.178558);
   data_mc_ratio__440->SetBinContent(17,2.090871);
   data_mc_ratio__440->SetBinContent(18,3.687201);
   data_mc_ratio__440->SetBinError(0,8.703865);
   data_mc_ratio__440->SetBinError(1,0.0002565546);
   data_mc_ratio__440->SetBinError(2,0.0006602424);
   data_mc_ratio__440->SetBinError(3,0.001396172);
   data_mc_ratio__440->SetBinError(4,0.002904612);
   data_mc_ratio__440->SetBinError(5,0.005604713);
   data_mc_ratio__440->SetBinError(6,0.01063319);
   data_mc_ratio__440->SetBinError(7,0.02298013);
   data_mc_ratio__440->SetBinError(8,0.0423372);
   data_mc_ratio__440->SetBinError(9,0.06423138);
   data_mc_ratio__440->SetBinError(10,0.1458295);
   data_mc_ratio__440->SetBinError(11,0.1021006);
   data_mc_ratio__440->SetBinError(12,0.1466482);
   data_mc_ratio__440->SetBinError(13,0.01546034);
   data_mc_ratio__440->SetBinError(14,0.7458513);
   data_mc_ratio__440->SetBinError(15,0.1313991);
   data_mc_ratio__440->SetBinError(16,1.421494);
   data_mc_ratio__440->SetBinError(17,1.478469);
   data_mc_ratio__440->SetBinError(18,1.8436);
   data_mc_ratio__440->SetMinimum(0.4);
   data_mc_ratio__440->SetMaximum(1.6);
   data_mc_ratio__440->SetEntries(38.8517);
   data_mc_ratio__440->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__440->SetLineColor(ci);
   data_mc_ratio__440->SetLineWidth(2);
   data_mc_ratio__440->SetMarkerStyle(20);
   data_mc_ratio__440->SetMarkerSize(1.2);
   data_mc_ratio__440->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__440->GetXaxis()->SetRange(1,50);
   data_mc_ratio__440->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__440->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__440->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__440->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__440->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__440->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__440->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__440->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__440->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__440->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__440->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__440->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__440->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__440->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__440->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__440->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__440->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1320[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1320[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1320[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1320[50] = {
   0.009893208,
   0.0275641,
   0.03846683,
   0.07761867,
   0.1419567,
   0.2026305,
   0.25225,
   0.176499,
   0.2180608,
   0.338565,
   0.4314521,
   0.3512741,
   0.8334942,
   0.114842,
   0.5269596,
   0.1933125,
   0.2544586,
   0.2342834,
   0.3228078,
   1,
   0.7071612,
   0.7239529,
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
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1320,Graph_from_mc_statistical_error_fy1320,Graph_from_mc_statistical_error_fex1320,Graph_from_mc_statistical_error_fey1320);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1320 = new TH1F("Graph_Graph_from_mc_statistical_error1320","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1320->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1320->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1320->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1320->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1320->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1320);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->SetSelected(Aplanarity_algo_all);
}
