void Sphericity_tags_all()
{
//=========Macro generated from canvas: Sphericity_tags_all/Sphericity_tags_all
//=========  (Thu Aug 10 10:41:14 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_all = new TCanvas("Sphericity_tags_all", "Sphericity_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_all->SetHighLightColor(2);
   Sphericity_tags_all->Range(0,0,1,1);
   Sphericity_tags_all->SetFillColor(0);
   Sphericity_tags_all->SetFillStyle(4000);
   Sphericity_tags_all->SetBorderMode(0);
   Sphericity_tags_all->SetBorderSize(2);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1.398865,1.052419,14.07449);
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
   st->SetMinimum(0.3);
   st->SetMaximum(9.614918e+11);
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",25,0,1);
   st_stack_60->SetMinimum(0.0413627);
   st_stack_60->SetMaximum(3.366341e+12);
   st_stack_60->SetDirectory(0);
   st_stack_60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_60->SetLineColor(ci);
   st_stack_60->GetXaxis()->SetRange(1,25);
   st_stack_60->GetXaxis()->SetLabelFont(42);
   st_stack_60->GetXaxis()->SetLabelSize(0.035);
   st_stack_60->GetXaxis()->SetTitleSize(0.035);
   st_stack_60->GetXaxis()->SetTitleFont(42);
   st_stack_60->GetYaxis()->SetTitle("Events/0.04");
   st_stack_60->GetYaxis()->SetLabelFont(42);
   st_stack_60->GetYaxis()->SetLabelSize(0.05);
   st_stack_60->GetYaxis()->SetTitleSize(0.057);
   st_stack_60->GetYaxis()->SetTitleOffset(1.2);
   st_stack_60->GetYaxis()->SetTitleFont(42);
   st_stack_60->GetZaxis()->SetLabelFont(42);
   st_stack_60->GetZaxis()->SetLabelSize(0.035);
   st_stack_60->GetZaxis()->SetTitleSize(0.035);
   st_stack_60->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_60);
   
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_1 = new TH1D("VbbHcc_tags_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(1,221362.7);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(2,178153.9);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(3,101454.1);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(4,60742.99);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(5,51947.92);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(6,18940.21);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(7,7868.793);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(8,5250.549);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(9,2822.557);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(10,1947.601);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(11,1974.452);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(12,794.1262);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(13,730.357);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(14,347.0007);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(15,532.923);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(16,445.7586);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(17,192.0543);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(18,111.7858);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(19,102.8456);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(1,17046.82);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(2,7388.215);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(3,5333.462);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(4,3743.112);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(5,21808.86);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(6,2500.41);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(7,1204.042);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(8,923.3476);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(9,666.9137);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(10,455.1831);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(11,573.1205);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(12,124.5096);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(13,121.0676);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(14,85.73129);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(15,105.0077);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(16,86.70886);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(17,65.89139);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(18,35.19555);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(19,39.78027);
   VbbHcc_tags_Sphericity_all_stack_1->SetEntries(29294);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_2 = new TH1D("VbbHcc_tags_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(1,1027.319);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(2,780.9038);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(3,472.2071);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(4,283.6128);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(5,162.35);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(6,93.70833);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(7,58.83531);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(8,33.09481);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(9,23.76649);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(10,18.18253);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(11,10.54382);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(12,8.618673);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(13,6.999666);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(14,4.750698);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(15,4.827196);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(16,2.777261);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(17,2.769622);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(18,1.082312);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(19,0.2205909);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(20,-0.05654178);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(21,0.03661988);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(1,14.28031);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(2,12.36364);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(3,9.848302);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(4,7.603286);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(5,5.760722);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(6,4.494333);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(7,3.437313);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(8,2.689702);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(9,2.222488);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(10,2.038798);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(11,1.467825);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(12,1.362329);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(13,1.186608);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(14,0.8574661);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(15,1.022275);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(16,0.7087333);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(17,0.8010536);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(18,0.5003541);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(19,0.1231671);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(20,0.05654178);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(21,0.03661988);
   VbbHcc_tags_Sphericity_all_stack_2->SetEntries(34591);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_3 = new TH1D("VbbHcc_tags_Sphericity_all_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(1,20954.19);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(2,17501.11);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(3,9965.193);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(4,5777.3);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(5,3355.87);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(6,1962.59);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(7,1166.976);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(8,721.0025);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(9,492.9669);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(10,329.8123);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(11,239.8095);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(12,171.3031);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(13,124.8146);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(14,97.63459);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(15,73.26653);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(16,57.25811);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(17,40.05387);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(18,25.47963);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(19,14.58562);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(20,6.208243);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(21,2.338848);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(22,0.8716117);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(1,42.31484);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(2,38.20067);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(3,28.67016);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(4,22.38633);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(5,16.42337);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(6,12.7619);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(7,10.43939);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(8,7.757849);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(9,7.303618);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(10,5.202261);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(11,4.595847);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(12,3.642446);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(13,3.134564);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(14,2.756131);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(15,2.39393);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(16,2.296866);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(17,1.749252);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(18,1.39218);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(19,1.052774);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(20,0.6903555);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(21,0.4377579);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(22,0.2799997);
   VbbHcc_tags_Sphericity_all_stack_3->SetEntries(880955);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_4 = new TH1D("VbbHcc_tags_Sphericity_all_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(1,2977.648);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(2,2319.973);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(3,1311.647);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(4,838.2708);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(5,461.5039);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(6,246.8271);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(7,130.0678);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(8,68.98039);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(9,54.46859);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(10,40.70679);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(11,26.31023);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(12,22.12004);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(13,14.69805);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(14,15.09928);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(15,9.777775);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(16,6.922804);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(17,5.801141);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(18,2.836796);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(19,2.063073);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(20,0.6726889);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(21,0.2437612);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(1,44.09136);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(2,39.47834);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(3,28.71687);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(4,23.86279);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(5,15.15031);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(6,10.3499);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(7,7.216471);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(8,3.828118);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(9,3.631277);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(10,3.801604);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(11,2.50891);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(12,2.3284);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(13,1.543176);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(14,1.882243);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(15,1.310433);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(16,1.050382);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(17,0.9913897);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(18,0.6252791);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(19,0.8117652);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(20,0.2775583);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(21,0.1418874);
   VbbHcc_tags_Sphericity_all_stack_4->SetEntries(50972);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_5 = new TH1D("VbbHcc_tags_Sphericity_all_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(1,325.5597);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(2,174.8907);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(3,135.7743);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(4,58.30741);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(5,44.10131);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(6,27.90813);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(7,16.72024);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(8,10.82516);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(9,4.682018);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(10,4.863129);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(11,2.507486);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(12,2.751904);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(13,3.569428);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(14,7.734739);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(15,0.8593706);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(16,1.069299);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(17,0.7840989);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(18,0.1143924);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(19,0.389233);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(20,0.178064);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(1,19.44142);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(2,9.502227);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(3,13.22033);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(4,4.774962);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(5,4.448369);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(6,4.71966);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(7,2.869955);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(8,2.041446);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(9,0.7639439);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(10,1.316863);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(11,0.5989913);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(12,0.7174146);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(13,1.144123);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(14,5.601971);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(15,0.2775642);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(16,0.3835536);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(17,0.3709417);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(18,0.08472053);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(19,0.2338383);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(20,0.178064);
   VbbHcc_tags_Sphericity_all_stack_5->SetEntries(7669);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_6 = new TH1D("VbbHcc_tags_Sphericity_all_stack_6","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(1,1.520582);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(2,0.4019873);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(3,1.275647);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(4,1.182272);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(5,0.3862121);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(7,0.08576627);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(8,0.3402984);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(1,0.7455516);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(2,0.2999113);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(3,0.7283472);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(4,0.6716939);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(5,0.2834095);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(7,0.08576627);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(8,0.3402984);
   VbbHcc_tags_Sphericity_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_7 = new TH1D("VbbHcc_tags_Sphericity_all_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(1,2.824807);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(2,1.836399);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(3,1.141587);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(4,1.839328);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(5,0.4841147);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(6,0.1175925);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(7,0.3388531);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(8,0.3402984);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(9,0.1272975);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(12,0.1075422);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(14,0.09773476);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(1,0.8341469);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(2,0.5116759);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(3,0.7027107);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(4,0.7235151);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(5,0.2984146);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(6,0.1175925);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(7,0.195705);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(8,0.3402984);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(9,0.1272975);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(12,0.1075422);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(14,0.09773476);
   VbbHcc_tags_Sphericity_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_8 = new TH1D("VbbHcc_tags_Sphericity_all_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(1,62.13291);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(2,43.83331);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(3,23.12753);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(4,15.16917);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(5,13.61026);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(6,4.86167);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(7,1.153657);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(8,0.2634371);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(9,0.1983113);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(10,0.3068351);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(11,0.7683492);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(12,0.8783484);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(13,0.3776254);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(16,0.2151647);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(20,0.3487978);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(1,4.341953);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(2,3.616109);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(3,2.628022);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(4,2.121526);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(5,2.089407);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(6,1.188624);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(7,0.5806752);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(8,0.2634371);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(9,0.1983113);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(10,0.3068351);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(11,0.4500951);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(12,0.5092366);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(13,0.3776254);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(16,0.2151647);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(20,0.3487978);
   VbbHcc_tags_Sphericity_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_9 = new TH1D("VbbHcc_tags_Sphericity_all_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(1,51.39686);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(2,44.47332);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(3,24.37374);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(4,16.94186);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(5,11.71093);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(6,6.118094);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(7,2.309539);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(8,1.082903);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(9,0.6832074);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(10,0.4755703);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(11,0.304379);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(12,0.2528878);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(13,0.1687142);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(14,0.1502816);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(15,0.1011611);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(16,0.09789816);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(17,0.05083105);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(18,0.0384008);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(19,0.03092318);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(20,0.009591193);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(21,0.002241159);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(1,0.3498227);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(2,0.3402173);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(3,0.2368847);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(4,0.2016251);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(5,0.1687575);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(6,0.1180325);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(7,0.07271159);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(8,0.06245514);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(9,0.03812398);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(10,0.03288432);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(11,0.02588523);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(12,0.02445772);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(13,0.0190159);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(14,0.01932025);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(15,0.01456658);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(16,0.01434062);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(17,0.0104357);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(18,0.008907124);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(19,0.008537222);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(20,0.004919599);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(21,0.002241159);
   VbbHcc_tags_Sphericity_all_stack_9->SetEntries(83441);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_10 = new TH1D("VbbHcc_tags_Sphericity_all_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(1,23.3084);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(2,19.55181);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(3,10.81763);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(4,7.075595);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(5,4.239796);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(6,2.410771);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(7,1.257336);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(8,0.7154185);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(9,0.531477);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(10,0.3985249);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(11,0.2692993);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(12,0.2167407);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(13,0.1745457);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(14,0.1364996);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(15,0.1343509);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(16,0.08208191);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(17,0.06208705);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(18,0.05569379);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(19,0.02448438);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(20,0.005887443);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(21,0.004465388);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(22,0.003193881);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(23,0.001489745);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(1,0.1098671);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(2,0.1006821);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(3,0.07494192);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(4,0.06054183);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(5,0.04688906);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(6,0.0353331);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(7,0.02545152);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(8,0.01919214);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(9,0.01644122);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(10,0.01432017);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(11,0.01180595);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(12,0.01051508);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(13,0.009432393);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(14,0.008316148);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(15,0.008273401);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(16,0.006447436);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(17,0.00564704);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(18,0.005309619);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(19,0.003556838);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(20,0.001749026);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(21,0.001527619);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(22,0.00133581);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(23,0.0008811567);
   VbbHcc_tags_Sphericity_all_stack_10->SetEntries(146904);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_11 = new TH1D("VbbHcc_tags_Sphericity_all_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(1,0.1528338);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(2,0.1471908);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(3,0.04255806);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(4,0.05497301);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(5,0.0228809);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(6,0.0137252);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(7,0.004671055);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(9,0.002365714);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(10,0.001932967);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(1,0.01967796);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(2,0.02000404);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(3,0.01029332);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(4,0.01172034);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(5,0.007698723);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(6,0.005338654);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(7,0.003370711);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(9,0.002365714);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(10,0.001932967);
   VbbHcc_tags_Sphericity_all_stack_11->SetEntries(187);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_12 = new TH1D("VbbHcc_tags_Sphericity_all_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(1,0.07636348);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(2,0.05304597);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(3,0.02755417);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(4,0.02487395);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(5,0.01148691);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(6,0.005843871);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(7,0.003747415);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(8,0.001602215);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(9,0.002903258);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(10,0.0006109715);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(11,0.002166913);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(12,0.001304956);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(13,0.0003730181);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(14,0.0004199154);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(15,0.0004352311);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(1,0.005033013);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(2,0.004144);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(3,0.002954067);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(4,0.00283644);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(5,0.001898978);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(6,0.001396428);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(7,0.001121816);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(8,0.0006742436);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(9,0.0009553345);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(10,0.0004323536);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(11,0.0008273572);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(12,0.0006092964);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(13,0.0003161404);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(14,0.0004199154);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(15,0.0004352311);
   VbbHcc_tags_Sphericity_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Sphericity_all__164 = new TH1D("VbbHcc_tags_Sphericity_all__164","",25,0,1);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(1,166963);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(2,126812);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(3,72911);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(4,42899);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(5,25282);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(6,14372);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(7,7964);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(8,4894);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(9,3404);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(10,2448);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(11,1728);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(12,1267);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(13,1023);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(14,763);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(15,604);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(16,461);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(17,349);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(18,249);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(19,114);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(20,42);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(21,16);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(22,7);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(23,1);
   VbbHcc_tags_Sphericity_all__164->SetEntries(474597);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all__164->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all__164->SetLineWidth(2);
   VbbHcc_tags_Sphericity_all__164->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity_all__164->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity_all__164->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all__164->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all__164->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all__164->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all__164->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all__164->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all__164->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all__164->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all__164->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all__164->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all__164->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all__164->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all__164->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all__164->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all__164->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_all_fx1119[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_all_fy1119[25] = {
   246788.8,
   199041.1,
   113399.8,
   67742.77,
   56002.21,
   21284.77,
   9246.545,
   6087.196,
   3399.986,
   2342.349,
   2254.967,
   1000.377,
   881.1601,
   472.6049,
   621.8899,
   514.1812,
   241.5759,
   141.3931,
   120.1595,
   7.366731,
   2.625936,
   0.8748056,
   0.001489745,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_all_fex1119[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_all_fey1119[25] = {
   17046.95,
   7388.437,
   5333.642,
   3743.267,
   21808.87,
   2500.473,
   1204.118,
   923.3944,
   666.9678,
   455.2353,
   573.1468,
   124.5952,
   121.1298,
   85.98326,
   105.0485,
   86.74964,
   65.92797,
   35.23227,
   39.80336,
   0.8427457,
   0.461641,
   0.2800029,
   0.0008811567,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_all_fx1119,Graph_from_VbbHcc_tags_Sphericity_all_fy1119,Graph_from_VbbHcc_tags_Sphericity_all_fex1119,Graph_from_VbbHcc_tags_Sphericity_all_fey1119);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity_all1119 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity_all1119","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetMinimum(290.2194);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetMaximum(290219.4);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity_all1119);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Sphericity_all","MC unc. (stat.)","fl");

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
   Sphericity_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__165 = new TH1D("data_mc_ratio__165","",25,0,1);
   data_mc_ratio__165->SetBinContent(1,0.676542);
   data_mc_ratio__165->SetBinContent(2,0.6371147);
   data_mc_ratio__165->SetBinContent(3,0.6429555);
   data_mc_ratio__165->SetBinContent(4,0.6332632);
   data_mc_ratio__165->SetBinContent(5,0.4514465);
   data_mc_ratio__165->SetBinContent(6,0.6752245);
   data_mc_ratio__165->SetBinContent(7,0.8612946);
   data_mc_ratio__165->SetBinContent(8,0.8039827);
   data_mc_ratio__165->SetBinContent(9,1.001181);
   data_mc_ratio__165->SetBinContent(10,1.045105);
   data_mc_ratio__165->SetBinContent(11,0.7663083);
   data_mc_ratio__165->SetBinContent(12,1.266523);
   data_mc_ratio__165->SetBinContent(13,1.16097);
   data_mc_ratio__165->SetBinContent(14,1.614456);
   data_mc_ratio__165->SetBinContent(15,0.9712331);
   data_mc_ratio__165->SetBinContent(16,0.8965711);
   data_mc_ratio__165->SetBinContent(17,1.44468);
   data_mc_ratio__165->SetBinContent(18,1.761048);
   data_mc_ratio__165->SetBinContent(19,0.9487389);
   data_mc_ratio__165->SetBinContent(20,5.701308);
   data_mc_ratio__165->SetBinContent(21,6.093066);
   data_mc_ratio__165->SetBinContent(22,8.001778);
   data_mc_ratio__165->SetBinContent(23,671.2556);
   data_mc_ratio__165->SetBinError(1,0.001655711);
   data_mc_ratio__165->SetBinError(2,0.001789112);
   data_mc_ratio__165->SetBinError(3,0.002381137);
   data_mc_ratio__165->SetBinError(4,0.003057459);
   data_mc_ratio__165->SetBinError(5,0.00283923);
   data_mc_ratio__165->SetBinError(6,0.00563235);
   data_mc_ratio__165->SetBinError(7,0.009651307);
   data_mc_ratio__165->SetBinError(8,0.01149251);
   data_mc_ratio__165->SetBinError(9,0.01716001);
   data_mc_ratio__165->SetBinError(10,0.02112292);
   data_mc_ratio__165->SetBinError(11,0.01843451);
   data_mc_ratio__165->SetBinError(12,0.03558154);
   data_mc_ratio__165->SetBinError(13,0.03629803);
   data_mc_ratio__165->SetBinError(14,0.05844724);
   data_mc_ratio__165->SetBinError(15,0.03951891);
   data_mc_ratio__165->SetBinError(16,0.04175748);
   data_mc_ratio__165->SetBinError(17,0.07733197);
   data_mc_ratio__165->SetBinError(18,0.1116019);
   data_mc_ratio__165->SetBinError(19,0.08885754);
   data_mc_ratio__165->SetBinError(20,0.8797309);
   data_mc_ratio__165->SetBinError(21,1.523267);
   data_mc_ratio__165->SetBinError(22,3.024388);
   data_mc_ratio__165->SetBinError(23,671.2556);
   data_mc_ratio__165->SetMinimum(0.4);
   data_mc_ratio__165->SetMaximum(1.6);
   data_mc_ratio__165->SetEntries(0.8271724);
   data_mc_ratio__165->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__165->SetLineColor(ci);
   data_mc_ratio__165->SetLineWidth(2);
   data_mc_ratio__165->SetMarkerStyle(20);
   data_mc_ratio__165->SetMarkerSize(1.2);
   data_mc_ratio__165->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__165->GetXaxis()->SetRange(1,25);
   data_mc_ratio__165->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__165->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__165->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__165->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__165->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__165->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__165->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__165->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__165->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__165->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__165->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__165->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__165->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__165->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__165->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__165->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__165->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1120[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1120[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1120[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1120[25] = {
   0.06907505,
   0.03712016,
   0.04703398,
   0.05525707,
   0.3894288,
   0.1174771,
   0.1302235,
   0.1516946,
   0.1961678,
   0.1943499,
   0.2541708,
   0.1245483,
   0.1374662,
   0.1819348,
   0.1689181,
   0.1687142,
   0.2729079,
   0.2491797,
   0.3312543,
   0.1143989,
   0.1758006,
   0.3200745,
   0.5914814,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1120,Graph_from_mc_statistical_error_fy1120,Graph_from_mc_statistical_error_fex1120,Graph_from_mc_statistical_error_fey1120);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1120 = new TH1F("Graph_Graph_from_mc_statistical_error1120","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1120->SetMinimum(0.2902223);
   Graph_Graph_from_mc_statistical_error1120->SetMaximum(1.709778);
   Graph_Graph_from_mc_statistical_error1120->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1120->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1120->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1120);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_all->cd();
   Sphericity_tags_all->Modified();
   Sphericity_tags_all->cd();
   Sphericity_tags_all->SetSelected(Sphericity_tags_all);
}
