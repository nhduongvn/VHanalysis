void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Tue Aug 22 09:16:30 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(0,0,1,1);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.921271,1.052419,14.34066);
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
   st->SetMaximum(1.081206e+12);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(0.001247356);
   st_stack_63->SetMaximum(4.115917e+12);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetLabelSize(0.035);
   st_stack_63->GetXaxis()->SetTitleSize(0.035);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Events/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetLabelSize(0.05);
   st_stack_63->GetYaxis()->SetTitleSize(0.057);
   st_stack_63->GetYaxis()->SetTitleOffset(1.2);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetLabelSize(0.035);
   st_stack_63->GetZaxis()->SetTitleSize(0.035);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,184507);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,19698.59);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,7815.986);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,3348.317);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,1337.095);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,309.0192);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,110.7042);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,38.7964);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,86.85186);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,42.17843);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,8.075881);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,32.92495);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,7053.011);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,2028.613);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,1332.984);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,1063.418);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,568.8197);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,92.27536);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,57.54529);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,16.7997);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,55.71702);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,36.49571);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,8.075881);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,32.92495);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9459);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,1023.09);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,129.532);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,38.3397);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,14.31962);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,8.752234);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,2.275189);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,2.194735);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,1.338881);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.5804);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.6925587);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.08210161);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.1015078);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.131033);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.2270084);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,-0.05354825);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,14.28509);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,4.921916);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,2.721101);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.536695);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,1.467715);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.5839988);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.6296724);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.5132484);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.3751886);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.3852785);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.08210161);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.1030608);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.0773351);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.1919553);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.05354825);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(14001);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,21480);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,3022.914);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,841.1054);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,310.5867);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,144.8624);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,67.71948);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,39.65298);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,22.96948);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,13.78834);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,9.668839);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,5.307935);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,4.195584);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.346673);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,1.396959);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,1.069881);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.4934859);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.4954643);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.6048366);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.1424616);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.1403458);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,43.0665);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,15.60381);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,9.2061);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,5.10324);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,3.451706);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,2.237705);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.747415);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.301054);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,1.019071);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.8473092);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.6215881);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.5509403);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.4231678);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.3208);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2869856);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.1769589);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.206918);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.2214691);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.100831);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.09931189);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(383722);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,3037.215);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,318.6201);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,86.53472);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,26.85817);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,11.14974);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,6.713046);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,3.136767);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.421596);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,3.011035);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,2.146773);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.1239727);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.3258933);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.1109639);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.2629104);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.09498061);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,45.70434);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,14.42771);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,8.302283);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,2.856965);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.790694);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,1.338855);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.768625);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.4154165);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,1.016009);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,1.190328);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.1239727);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1932628);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.1109639);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.1961579);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.09498061);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(17726);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,285.5634);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,27.63602);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,7.500004);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,4.555477);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.9692972);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,0.3286075);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.165398);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,0.2985471);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,0.0206714);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(10,0.2878642);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.04806045);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,17.14155);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,5.067574);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.470218);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,2.689363);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.4065801);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.1903192);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.1342308);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,0.1680225);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.0206714);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(10,0.2878642);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.04806045);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(2023);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,1.05042);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,0.7554117);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,11.60999);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,0.3443727);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,1.334385);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,2.323423);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,0.3443727);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.7712332);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,63.54825);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,2.914797);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,0.2561662);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,0.520945);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(6,0.3451496);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(12,0.315662);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,4.453515);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,0.9268119);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.2561662);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.38734);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(6,0.3451496);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(12,0.315662);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,59.42623);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,4.154144);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.7429238);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.2536368);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.1461586);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.0582416);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.0354424);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.006662425);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01436561);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.008884802);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.003214456);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.002637326);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(14,0.004050044);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.4783446);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.1184555);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.04882645);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.0279961);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.02158564);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.01338128);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.01034612);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.004798622);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.006453557);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.005196379);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.003214456);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.002637326);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(14,0.004050044);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(21953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,19.55352);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,2.037733);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.4756563);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1886071);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.06972352);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.03478951);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.02478946);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.01309765);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.01069844);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.00745943);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.002342481);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.002327344);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.002809561);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.001231697);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0005608122);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0005904187);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0005849238);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001308646);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.1045911);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.03339275);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01630726);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.01028178);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.00629655);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.00445176);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.003763356);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.002742689);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.002468122);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.002079319);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.001185393);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.001165338);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0012569);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.000871313);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0005608122);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0005904187);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0005849238);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0009261631);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,0.1610231);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.01056971);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.00225108);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(4,0.002203227);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.0195513);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.005318852);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.00225108);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(4,0.002203227);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.0803226);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.008950734);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.001533874);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.0006932474);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(5,0.0007005468);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(8,0.0002942409);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.005127088);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.001688149);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.0006965046);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.0004902455);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(5,0.0004999007);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(8,0.0002942409);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity__172 = new TH1D("VbbHcc_tags_Aplanarity__172","",50,0,1);
   VbbHcc_tags_Aplanarity__172->SetBinContent(1,260171);
   VbbHcc_tags_Aplanarity__172->SetBinContent(2,33265);
   VbbHcc_tags_Aplanarity__172->SetBinContent(3,8461);
   VbbHcc_tags_Aplanarity__172->SetBinContent(4,2918);
   VbbHcc_tags_Aplanarity__172->SetBinContent(5,1242);
   VbbHcc_tags_Aplanarity__172->SetBinContent(6,676);
   VbbHcc_tags_Aplanarity__172->SetBinContent(7,331);
   VbbHcc_tags_Aplanarity__172->SetBinContent(8,194);
   VbbHcc_tags_Aplanarity__172->SetBinContent(9,104);
   VbbHcc_tags_Aplanarity__172->SetBinContent(10,69);
   VbbHcc_tags_Aplanarity__172->SetBinContent(11,55);
   VbbHcc_tags_Aplanarity__172->SetBinContent(12,26);
   VbbHcc_tags_Aplanarity__172->SetBinContent(13,24);
   VbbHcc_tags_Aplanarity__172->SetBinContent(14,16);
   VbbHcc_tags_Aplanarity__172->SetBinContent(15,7);
   VbbHcc_tags_Aplanarity__172->SetBinContent(16,7);
   VbbHcc_tags_Aplanarity__172->SetBinContent(17,6);
   VbbHcc_tags_Aplanarity__172->SetBinContent(20,2);
   VbbHcc_tags_Aplanarity__172->SetEntries(307623);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__172->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__172->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__172->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__172->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__172->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__172->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__172->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__172->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__172->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__172->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__172->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__172->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__172->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__172->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__172->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__172->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__172->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__172->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__172->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1125[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1125[50] = {
   210488.3,
   23206.76,
   8792.278,
   3705.603,
   1503.046,
   386.4937,
   155.9143,
   64.84496,
   104.2774,
   54.9908,
   13.64351,
   4.943612,
   2.59148,
   1.629249,
   34.2583,
   0.5890569,
   0.442501,
   0.6061453,
   0.1424616,
   0.1403458,
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
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1125[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1125[50] = {
   7053.328,
   2028.737,
   1333.045,
   1063.438,
   568.835,
   92.31489,
   57.58055,
   16.86377,
   55.73687,
   36.52812,
   8.101275,
   0.671683,
   0.4442593,
   0.3738672,
   32.92678,
   0.2008386,
   0.2137354,
   0.221471,
   0.100831,
   0.09931189,
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
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1125,Graph_from_VbbHcc_tags_Aplanarity_fy1125,Graph_from_VbbHcc_tags_Aplanarity_fex1125,Graph_from_VbbHcc_tags_Aplanarity_fey1125);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1125 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1125","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetMinimum(239.2958);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetMaximum(239295.8);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1125);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__173 = new TH1D("data_mc_ratio__173","",50,0,1);
   data_mc_ratio__173->SetBinContent(1,1.236036);
   data_mc_ratio__173->SetBinContent(2,1.433418);
   data_mc_ratio__173->SetBinContent(3,0.9623217);
   data_mc_ratio__173->SetBinContent(4,0.7874563);
   data_mc_ratio__173->SetBinContent(5,0.8263222);
   data_mc_ratio__173->SetBinContent(6,1.749058);
   data_mc_ratio__173->SetBinContent(7,2.122961);
   data_mc_ratio__173->SetBinContent(8,2.991751);
   data_mc_ratio__173->SetBinContent(9,0.9973401);
   data_mc_ratio__173->SetBinContent(10,1.254755);
   data_mc_ratio__173->SetBinContent(11,4.031221);
   data_mc_ratio__173->SetBinContent(12,5.259313);
   data_mc_ratio__173->SetBinContent(13,9.261118);
   data_mc_ratio__173->SetBinContent(14,9.820475);
   data_mc_ratio__173->SetBinContent(15,0.2043301);
   data_mc_ratio__173->SetBinContent(16,11.8834);
   data_mc_ratio__173->SetBinContent(17,13.55929);
   data_mc_ratio__173->SetBinContent(20,14.25051);
   data_mc_ratio__173->SetBinError(1,0.002423268);
   data_mc_ratio__173->SetBinError(2,0.007859215);
   data_mc_ratio__173->SetBinError(3,0.01046187);
   data_mc_ratio__173->SetBinError(4,0.01457752);
   data_mc_ratio__173->SetBinError(5,0.02344707);
   data_mc_ratio__173->SetBinError(6,0.06727147);
   data_mc_ratio__173->SetBinError(7,0.1166885);
   data_mc_ratio__173->SetBinError(8,0.2147952);
   data_mc_ratio__173->SetBinError(9,0.09779724);
   data_mc_ratio__173->SetBinError(10,0.1510548);
   data_mc_ratio__173->SetBinError(11,0.5435698);
   data_mc_ratio__173->SetBinError(12,1.031436);
   data_mc_ratio__173->SetBinError(13,1.890418);
   data_mc_ratio__173->SetBinError(14,2.455119);
   data_mc_ratio__173->SetBinError(15,0.0772295);
   data_mc_ratio__173->SetBinError(16,4.491504);
   data_mc_ratio__173->SetBinError(17,5.535557);
   data_mc_ratio__173->SetBinError(20,10.07664);
   data_mc_ratio__173->SetMinimum(0.4);
   data_mc_ratio__173->SetMaximum(1.6);
   data_mc_ratio__173->SetEntries(20.03171);
   data_mc_ratio__173->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__173->SetLineColor(ci);
   data_mc_ratio__173->SetLineWidth(2);
   data_mc_ratio__173->SetMarkerStyle(20);
   data_mc_ratio__173->SetMarkerSize(1.2);
   data_mc_ratio__173->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__173->GetXaxis()->SetRange(1,50);
   data_mc_ratio__173->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__173->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__173->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__173->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__173->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__173->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__173->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__173->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__173->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__173->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__173->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__173->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__173->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__173->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__173->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__173->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__173->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1126[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1126[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1126[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1126[50] = {
   0.03350936,
   0.08742008,
   0.1516154,
   0.2869812,
   0.3784549,
   0.2388522,
   0.3693089,
   0.260063,
   0.5345059,
   0.6642586,
   0.5937824,
   0.1358689,
   0.1714307,
   0.2294721,
   0.961133,
   0.3409493,
   0.4830168,
   0.3653761,
   0.7077768,
   0.7076228,
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
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1126,Graph_from_mc_statistical_error_fy1126,Graph_from_mc_statistical_error_fex1126,Graph_from_mc_statistical_error_fey1126);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1126 = new TH1F("Graph_Graph_from_mc_statistical_error1126","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1126->SetMinimum(0.0349803);
   Graph_Graph_from_mc_statistical_error1126->SetMaximum(2.15336);
   Graph_Graph_from_mc_statistical_error1126->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1126->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1126->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1126);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
