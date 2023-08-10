void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:25:07 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(0,0,1,1);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetFillStyle(4000);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-119.1391,1.052419,119030);
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
   st->SetMaximum(102014.3);
   
   TH1F *st_stack_250 = new TH1F("st_stack_250","",25,0,1);
   st_stack_250->SetMinimum(0.01);
   st_stack_250->SetMaximum(107115.1);
   st_stack_250->SetDirectory(0);
   st_stack_250->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_250->SetLineColor(ci);
   st_stack_250->GetXaxis()->SetRange(1,25);
   st_stack_250->GetXaxis()->SetLabelFont(42);
   st_stack_250->GetXaxis()->SetLabelSize(0.035);
   st_stack_250->GetXaxis()->SetTitleSize(0.035);
   st_stack_250->GetXaxis()->SetTitleFont(42);
   st_stack_250->GetYaxis()->SetTitle("Events/0.04");
   st_stack_250->GetYaxis()->SetLabelFont(42);
   st_stack_250->GetYaxis()->SetLabelSize(0.05);
   st_stack_250->GetYaxis()->SetTitleSize(0.057);
   st_stack_250->GetYaxis()->SetTitleOffset(1.2);
   st_stack_250->GetYaxis()->SetTitleFont(42);
   st_stack_250->GetZaxis()->SetLabelFont(42);
   st_stack_250->GetZaxis()->SetLabelSize(0.035);
   st_stack_250->GetZaxis()->SetTitleSize(0.035);
   st_stack_250->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_250);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,28610.75);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,36785.15);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,30274.01);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,20648.69);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,17272.6);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,13188.41);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,10786.04);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,5844.862);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,44923.87);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,6005.99);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,4877.746);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,3709.862);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,3043.452);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,2341.293);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,1676.195);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1924.242);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,2141.695);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,635.9452);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,570.4476);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,279.9112);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,60.95662);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,36.36305);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(23,363.4301);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,2140.053);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2647.086);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2878.988);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,1991.493);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,1800.148);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,1591.783);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1469.178);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,812.4472);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,26528.61);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,1040.69);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,904.2569);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,769.4203);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,684.7515);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,534.3548);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,498.3275);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,586.0403);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,687.2223);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,124.2793);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,348.5222);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,238.9284);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,33.18888);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,23.56384);
   VbbHcc_both_Sphericity_stack_1->SetBinError(23,338.0657);
   VbbHcc_both_Sphericity_stack_1->SetEntries(10320);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,177.8574);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,180.6206);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,139.6066);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,101.2017);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,78.23831);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,61.78321);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,54.86839);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,46.68959);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,39.18219);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,31.6166);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,25.57297);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,24.83674);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,18.28956);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,18.34257);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,13.96944);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,11.28865);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,9.147708);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,5.263285);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,2.642759);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,2.662319);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,-0.01295859);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.2965452);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.06619855);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,5.865344);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,5.839928);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,5.219685);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,4.441832);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,3.890586);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,3.336529);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,3.388698);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,3.184399);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,2.841212);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.502443);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,2.246079);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,2.347971);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,1.938682);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.959628);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.728726);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.564637);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,1.436654);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.9816248);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.6922122);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.7910577);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.07336339);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.2965452);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.06619855);
   VbbHcc_both_Sphericity_stack_2->SetEntries(12006);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,3557.354);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,3987.286);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,2958.339);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,2254.66);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,1741.356);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,1403.477);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,1167.769);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,959.5135);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,815.2826);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,699.0646);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,595.9303);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,507.6633);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,439.3313);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,358.6777);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,307.7324);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,253.0109);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,186.7881);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,131.4321);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,80.81208);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,37.82549);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,15.03462);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,4.400006);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,0.990407);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,0.09946907);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,16.19449);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,17.16984);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,14.83371);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,12.94843);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,11.38024);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,10.23329);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,9.334576);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,8.455632);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,7.792011);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,7.227311);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,6.676886);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,6.16247);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,5.727047);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,5.177887);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,4.804643);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,4.342881);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,3.729469);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,3.12989);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,2.447594);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.67221);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,1.04763);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.5670247);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.265868);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.07260893);
   VbbHcc_both_Sphericity_stack_3->SetEntries(333938);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,453.5484);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,487.7328);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,331.5381);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,289.7295);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,196.4689);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,174.203);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,149.1451);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,117.6807);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,107.399);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,86.94931);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,61.51433);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,59.42417);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,53.53517);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,50.81664);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,36.57379);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,24.92398);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,24.64102);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,12.3778);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,6.773955);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,3.757446);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,1.258183);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,0.1203054);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(23,0.0907664);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,14.69546);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,17.17415);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,11.86725);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,12.73501);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,8.895131);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,9.125498);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,9.133978);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,8.563085);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,7.872892);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,7.533061);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,4.637177);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,5.077027);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,3.60713);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,6.007983);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,2.903815);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,2.389565);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,4.080195);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,1.645261);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.147028);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,1.095484);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.6627263);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.1203054);
   VbbHcc_both_Sphericity_stack_4->SetBinError(23,0.0907664);
   VbbHcc_both_Sphericity_stack_4->SetEntries(18216);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,61.16804);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,39.72318);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,36.95312);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,26.68993);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,24.00053);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,17.04502);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,11.3268);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,12.96525);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,14.63762);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,6.708942);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,9.715472);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,3.604144);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,4.049549);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,2.667887);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,2.869486);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,3.270027);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,1.22185);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,0.5682173);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,1.070073);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,0.01241324);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,9.31976);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,3.926446);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,4.413004);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,3.723754);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,3.662395);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,3.122005);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,1.823369);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,2.034435);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,6.123517);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,1.164162);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,2.444446);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,0.7069878);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.7945382);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.5632277);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,0.593235);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,1.49565);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,0.4094479);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,0.2308813);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.5500738);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,0.01241324);
   VbbHcc_both_Sphericity_stack_5->SetEntries(2376);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_6 = new TH1D("VbbHcc_both_Sphericity_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(2,0.268632);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(4,0.3983715);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(5,0.3402984);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(7,0.2466832);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(12,0.3608682);
   VbbHcc_both_Sphericity_stack_6->SetBinError(2,0.268632);
   VbbHcc_both_Sphericity_stack_6->SetBinError(4,0.3983715);
   VbbHcc_both_Sphericity_stack_6->SetBinError(5,0.3402984);
   VbbHcc_both_Sphericity_stack_6->SetBinError(7,0.2466832);
   VbbHcc_both_Sphericity_stack_6->SetBinError(12,0.3608682);
   VbbHcc_both_Sphericity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,1.795637);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,0.8123965);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(4,1.13897);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.5106833);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,0.4848883);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,0.597075);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.7946574);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(9,0.2572919);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(12,0.3152355);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,0.2346766);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.1879968);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,0.7355608);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.478417);
   VbbHcc_both_Sphericity_stack_7->SetBinError(4,0.5704348);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.3709089);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.3491592);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.4247946);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.4690583);
   VbbHcc_both_Sphericity_stack_7->SetBinError(9,0.2572919);
   VbbHcc_both_Sphericity_stack_7->SetBinError(12,0.3152355);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.2346766);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.1879968);
   VbbHcc_both_Sphericity_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,6.047674);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,9.824859);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,4.515946);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,4.308449);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,4.642819);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,3.028477);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,4.175127);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,3.399745);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,2.742059);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,2.319697);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,1.359856);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,1.851384);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,1.094906);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,1.231649);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,0.3219442);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.2809655);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.341172);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.706206);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,1.112144);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.117383);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,1.148155);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,0.9296223);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,1.130071);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,0.9947504);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.8836277);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.874815);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.6252194);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.7155234);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.5530954);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.6163454);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.3219442);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.2809655);
   VbbHcc_both_Sphericity_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,7.769213);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,8.514377);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,6.172071);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,4.971492);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,4.285838);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,3.558263);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,2.97429);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,2.489328);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,2.176221);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,1.755669);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.556851);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.332214);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,1.040114);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.960424);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.7050311);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.5229246);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.4769993);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.2699987);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1679919);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.0733358);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.02331458);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.006001069);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.1244373);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1296455);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.1107468);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.09974741);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.09290363);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.08432942);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.07762996);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.07080789);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.06608285);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.05972364);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.05580359);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.05186862);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.0455009);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.04400811);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.03718212);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.03197563);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.03092452);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.02324916);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.01849167);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01181482);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.006831047);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.00347133);
   VbbHcc_both_Sphericity_stack_9->SetEntries(28446);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,3.302628);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,3.619323);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,2.666804);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,2.055869);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.814807);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.452425);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,1.203562);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,1.058604);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.8969789);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.7849865);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.6764197);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.5720603);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.4837887);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.4328824);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.3374239);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.2832167);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.1972229);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.148596);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.0924334);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.04166923);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.009296398);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.003142626);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.001332027);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.03847601);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.04025644);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.03457843);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.03036735);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.02852441);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.02554972);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.02321473);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.02175909);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.02008976);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.01878305);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.01744321);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.01602288);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.014751);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01397247);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01229852);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.01125022);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.009417901);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.008132675);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.006414477);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.004331116);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.002042308);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.00119226);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0007690566);
   VbbHcc_both_Sphericity_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.0259097);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02953702);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.01917637);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.0133296);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.0149062);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.01445791);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.01067984);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.006532329);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.009162682);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.007738399);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.005559189);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.005870315);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.003680122);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.0009001677);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(15,0.002009147);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(19,0.002416406);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.007019022);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.007445052);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.005985093);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.004764879);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.005381832);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.005195572);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.004397012);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.003380844);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.004134055);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.003893283);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.003321801);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.003391306);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.002607332);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.0009001677);
   VbbHcc_both_Sphericity_stack_11->SetBinError(15,0.002009147);
   VbbHcc_both_Sphericity_stack_11->SetBinError(19,0.002416406);
   VbbHcc_both_Sphericity_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.01012762);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.01148206);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.008897696);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.005250408);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.006114123);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.005101821);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.004617556);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.004167382);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.003127385);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.002907258);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.002195087);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.002511475);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.00185851);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.00180198);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.000526737);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.00107473);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.0001557144);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.001519247);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.001660578);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.001512501);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.001132142);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.001194221);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.001108187);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.001057903);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.00101645);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.000856992);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.0008863634);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.0007335589);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0008004346);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.0006681701);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.0006490563);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0003724599);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0005410334);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.0001557144);
   VbbHcc_both_Sphericity_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity__686 = new TH1D("VbbHcc_both_Sphericity__686","",25,0,1);
   VbbHcc_both_Sphericity__686->SetBinContent(1,11915);
   VbbHcc_both_Sphericity__686->SetBinContent(2,11480);
   VbbHcc_both_Sphericity__686->SetBinContent(3,8689);
   VbbHcc_both_Sphericity__686->SetBinContent(4,6532);
   VbbHcc_both_Sphericity__686->SetBinContent(5,5226);
   VbbHcc_both_Sphericity__686->SetBinContent(6,4244);
   VbbHcc_both_Sphericity__686->SetBinContent(7,3523);
   VbbHcc_both_Sphericity__686->SetBinContent(8,2965);
   VbbHcc_both_Sphericity__686->SetBinContent(9,2522);
   VbbHcc_both_Sphericity__686->SetBinContent(10,1985);
   VbbHcc_both_Sphericity__686->SetBinContent(11,1828);
   VbbHcc_both_Sphericity__686->SetBinContent(12,1527);
   VbbHcc_both_Sphericity__686->SetBinContent(13,1337);
   VbbHcc_both_Sphericity__686->SetBinContent(14,1050);
   VbbHcc_both_Sphericity__686->SetBinContent(15,893);
   VbbHcc_both_Sphericity__686->SetBinContent(16,703);
   VbbHcc_both_Sphericity__686->SetBinContent(17,509);
   VbbHcc_both_Sphericity__686->SetBinContent(18,382);
   VbbHcc_both_Sphericity__686->SetBinContent(19,243);
   VbbHcc_both_Sphericity__686->SetBinContent(20,81);
   VbbHcc_both_Sphericity__686->SetBinContent(21,33);
   VbbHcc_both_Sphericity__686->SetBinContent(22,11);
   VbbHcc_both_Sphericity__686->SetBinContent(23,5);
   VbbHcc_both_Sphericity__686->SetBinContent(24,1);
   VbbHcc_both_Sphericity__686->SetEntries(67708);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity__686->SetLineColor(ci);
   VbbHcc_both_Sphericity__686->SetLineWidth(2);
   VbbHcc_both_Sphericity__686->SetMarkerStyle(20);
   VbbHcc_both_Sphericity__686->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__686->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__686->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__686->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__686->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__686->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__686->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__686->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_fx1499[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_fy1499[25] = {
   32879.63,
   41503.6,
   33753.83,
   23333.86,
   19324.28,
   14853.47,
   12178.36,
   6989.464,
   45906.46,
   6835.201,
   5574.08,
   4309.83,
   3561.516,
   2774.613,
   2038.707,
   2217.543,
   2364.449,
   786.0052,
   662.0093,
   324.2839,
   77.26907,
   41.18905,
   364.5788,
   0.09946907,
   0};
   Double_t Graph_from_VbbHcc_both_Sphericity_fex1499[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_fey1499[25] = {
   2140.194,
   2647.207,
   2879.059,
   1991.584,
   1800.214,
   1591.849,
   1469.241,
   812.5458,
   26528.61,
   1040.746,
   904.2997,
   769.4662,
   684.7884,
   534.418,
   498.3626,
   586.0653,
   687.2462,
   124.3337,
   348.5338,
   238.9381,
   33.21211,
   23.57283,
   338.0658,
   0.07260893,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_fx1499,Graph_from_VbbHcc_both_Sphericity_fy1499,Graph_from_VbbHcc_both_Sphericity_fex1499,Graph_from_VbbHcc_both_Sphericity_fey1499);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity1499 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity1499","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetMaximum(79678.58);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity1499);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__687 = new TH1D("data_mc_ratio__687","",25,0,1);
   data_mc_ratio__687->SetBinContent(1,0.3623824);
   data_mc_ratio__687->SetBinContent(2,0.2766025);
   data_mc_ratio__687->SetBinContent(3,0.2574227);
   data_mc_ratio__687->SetBinContent(4,0.2799365);
   data_mc_ratio__687->SetBinContent(5,0.270437);
   data_mc_ratio__687->SetBinContent(6,0.2857246);
   data_mc_ratio__687->SetBinContent(7,0.2892836);
   data_mc_ratio__687->SetBinContent(8,0.4242099);
   data_mc_ratio__687->SetBinContent(9,0.05493781);
   data_mc_ratio__687->SetBinContent(10,0.2904085);
   data_mc_ratio__687->SetBinContent(11,0.3279465);
   data_mc_ratio__687->SetBinContent(12,0.3543063);
   data_mc_ratio__687->SetBinContent(13,0.3754019);
   data_mc_ratio__687->SetBinContent(14,0.3784311);
   data_mc_ratio__687->SetBinContent(15,0.4380227);
   data_mc_ratio__687->SetBinContent(16,0.3170176);
   data_mc_ratio__687->SetBinContent(17,0.2152721);
   data_mc_ratio__687->SetBinContent(18,0.4860019);
   data_mc_ratio__687->SetBinContent(19,0.3670643);
   data_mc_ratio__687->SetBinContent(20,0.2497812);
   data_mc_ratio__687->SetBinContent(21,0.427079);
   data_mc_ratio__687->SetBinContent(22,0.2670613);
   data_mc_ratio__687->SetBinContent(23,0.01371446);
   data_mc_ratio__687->SetBinContent(24,10.05338);
   data_mc_ratio__687->SetBinError(1,0.003319862);
   data_mc_ratio__687->SetBinError(2,0.002581578);
   data_mc_ratio__687->SetBinError(3,0.002761607);
   data_mc_ratio__687->SetBinError(4,0.00346367);
   data_mc_ratio__687->SetBinError(5,0.003740945);
   data_mc_ratio__687->SetBinError(6,0.004385912);
   data_mc_ratio__687->SetBinError(7,0.004873798);
   data_mc_ratio__687->SetBinError(8,0.007790556);
   data_mc_ratio__687->SetBinError(9,0.001093953);
   data_mc_ratio__687->SetBinError(10,0.00651822);
   data_mc_ratio__687->SetBinError(11,0.007670345);
   data_mc_ratio__687->SetBinError(12,0.009066911);
   data_mc_ratio__687->SetBinError(13,0.0102667);
   data_mc_ratio__687->SetBinError(14,0.01167864);
   data_mc_ratio__687->SetBinError(15,0.01465787);
   data_mc_ratio__687->SetBinError(16,0.01195654);
   data_mc_ratio__687->SetBinError(17,0.00954177);
   data_mc_ratio__687->SetBinError(18,0.02486602);
   data_mc_ratio__687->SetBinError(19,0.02354719);
   data_mc_ratio__687->SetBinError(20,0.02775346);
   data_mc_ratio__687->SetBinError(21,0.07434491);
   data_mc_ratio__687->SetBinError(22,0.080522);
   data_mc_ratio__687->SetBinError(23,0.006133292);
   data_mc_ratio__687->SetBinError(24,10.05338);
   data_mc_ratio__687->SetMinimum(0.4);
   data_mc_ratio__687->SetMaximum(1.6);
   data_mc_ratio__687->SetEntries(1.87659);
   data_mc_ratio__687->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__687->SetLineColor(ci);
   data_mc_ratio__687->SetLineWidth(2);
   data_mc_ratio__687->SetMarkerStyle(20);
   data_mc_ratio__687->SetMarkerSize(1.2);
   data_mc_ratio__687->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__687->GetXaxis()->SetRange(1,25);
   data_mc_ratio__687->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__687->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__687->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__687->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__687->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__687->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__687->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__687->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__687->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__687->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__687->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__687->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__687->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__687->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__687->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__687->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__687->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1500[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1500[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1500[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1500[25] = {
   0.06509178,
   0.0637826,
   0.08529578,
   0.08535169,
   0.09315814,
   0.1071702,
   0.1206436,
   0.1162529,
   0.5778841,
   0.1522627,
   0.162233,
   0.1785375,
   0.1922744,
   0.1926099,
   0.2444503,
   0.2642859,
   0.2906581,
   0.1581844,
   0.5264787,
   0.7368176,
   0.429824,
   0.5723081,
   0.9272778,
   0.7299649,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1500,Graph_from_mc_statistical_error_fy1500,Graph_from_mc_statistical_error_fex1500,Graph_from_mc_statistical_error_fey1500);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1500 = new TH1F("Graph_Graph_from_mc_statistical_error1500","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1500->SetMinimum(0.06545);
   Graph_Graph_from_mc_statistical_error1500->SetMaximum(2.112733);
   Graph_Graph_from_mc_statistical_error1500->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1500->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1500->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1500);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
