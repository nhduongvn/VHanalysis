void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:20:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(0,0,1,1);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetFillStyle(4000);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetFrameFillStyle(1000);
   Sphericity_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.889715,1.052419,13.10866);
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
   st->SetMaximum(8.987582e+10);
   
   TH1F *st_stack_58 = new TH1F("st_stack_58","",25,0,1);
   st_stack_58->SetMinimum(0.001337467);
   st_stack_58->SetMaximum(3.227197e+11);
   st_stack_58->SetDirectory(0);
   st_stack_58->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_58->SetLineColor(ci);
   st_stack_58->GetXaxis()->SetRange(1,25);
   st_stack_58->GetXaxis()->SetLabelFont(42);
   st_stack_58->GetXaxis()->SetLabelSize(0.035);
   st_stack_58->GetXaxis()->SetTitleSize(0.035);
   st_stack_58->GetXaxis()->SetTitleFont(42);
   st_stack_58->GetYaxis()->SetTitle("Events/0.04");
   st_stack_58->GetYaxis()->SetLabelFont(42);
   st_stack_58->GetYaxis()->SetLabelSize(0.05);
   st_stack_58->GetYaxis()->SetTitleSize(0.057);
   st_stack_58->GetYaxis()->SetTitleOffset(1.2);
   st_stack_58->GetYaxis()->SetTitleFont(42);
   st_stack_58->GetZaxis()->SetLabelFont(42);
   st_stack_58->GetZaxis()->SetLabelSize(0.035);
   st_stack_58->GetZaxis()->SetTitleSize(0.035);
   st_stack_58->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_58);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,76779.39);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,57217.99);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,34669.92);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,18739.61);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,32496);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,5266.855);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,1490.294);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1808.62);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,1065.09);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,875.4727);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,781.721);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,224.5689);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,249.9711);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,197.6332);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,243.0487);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,105.5624);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,20.79114);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,26.04271);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,20.80763);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,15597.36);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,3628.555);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,2700.562);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,1870.303);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,21709.64);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,957.1624);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,262.696);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,609.8404);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,382.9193);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,419.5428);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,375.2702);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,61.47585);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,69.23781);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,73.16747);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,70.61372);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,33.79989);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,10.5686);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,12.25406);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,10.446);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(9821);

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
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,324.9311);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,251.4842);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,157.5225);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,89.41772);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,50.59093);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,31.79716);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,20.75115);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,12.14442);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,5.181261);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,6.09777);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,2.460172);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,2.319125);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,2.05764);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,1.358141);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,1.229834);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,1.203292);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.9089708);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.3292587);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,-0.05094566);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.03661988);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,7.893554);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,6.968612);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,5.59198);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,4.185842);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,3.132953);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,2.534298);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,2.022679);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.734882);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.9061166);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,1.120569);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.665985);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.6923104);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.6754395);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.3992342);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.378958);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.4794144);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.5205997);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.2443342);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.05094566);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.03661988);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(11223);

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
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,6784.009);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,5735.715);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,3258.192);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,1902.098);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,1103.981);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,645.7702);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,370.7931);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,227.1763);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,157.6907);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,108.0299);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,81.08597);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,59.39358);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,42.55173);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,32.85418);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,23.75593);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,18.50882);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,14.88744);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,9.130027);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,5.157217);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,2.167323);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,0.6463181);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.3378729);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,22.41979);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,20.64357);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,15.56066);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,11.89483);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,9.050065);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,6.910023);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,5.242209);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,4.078607);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,3.404444);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,2.81897);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,2.421762);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,2.078553);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.764205);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.525426);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.313083);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,1.179702);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,1.043353);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.8085221);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.5937942);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.395914);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.2259497);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.1713872);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(306587);

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
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,907.0371);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,730.1763);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,388.0683);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,264.6813);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,158.3558);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,77.89547);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,37.0264);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,21.74333);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,18.29625);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,13.24404);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,8.77613);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,7.28924);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,5.363672);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,5.431613);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,2.478003);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,2.01829);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,1.225606);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,1.559924);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.8091625);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.1069268);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.07507035);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,20.40355);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,21.14126);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,14.03978);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,13.34892);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,8.978001);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,5.16591);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,2.649092);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,2.123469);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,1.906391);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.662398);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,1.277159);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,1.302854);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,0.8512371);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,0.9806963);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.467729);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.5700267);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.3125473);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.5140469);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.490015);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.1069268);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.07507035);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(17505);

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
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,107.523);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,55.98313);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,39.97145);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,18.99132);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,12.43892);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,10.47374);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,4.644369);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,3.802971);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.402406);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,2.10157);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.6085321);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,0.3530778);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,0.4442551);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,6.222946);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.4224619);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.2161644);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.3665179);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,0.03879475);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.1865307);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,10.57368);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,5.015077);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,4.903257);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.683343);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.377319);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,2.121378);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,1.017886);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,1.629147);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.3600729);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.5222038);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.284942);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.1816336);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.2115171);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,5.568318);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.1885596);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.1511131);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.2132416);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,0.03879475);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.1865307);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(2189);

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
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(1,0.3608682);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(2,0.268632);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(4,0.3983715);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(5,0.2466832);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(8,0.3402984);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(1,0.3608682);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(2,0.268632);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(4,0.3983715);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(5,0.2466832);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(8,0.3402984);
   VbbHcc_tags_Sphericity_stack_6->SetEntries(5);

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
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,2.58254);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,0.4801429);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,1.979501);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,0.504705);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.3152355);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.2653625);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(10,0.3138408);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(13,0.2655071);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,0.8694472);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,0.3457074);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.7568223);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.3658415);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.3152355);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.2653625);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(10,0.3138408);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(13,0.2655071);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(24);

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
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,16.41731);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,11.8946);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,8.102486);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,4.979612);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,5.704025);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,1.247216);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(7,0.3152691);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(9,0.1983113);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(11,0.1996109);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.3221285);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,2.186858);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,1.860346);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.542959);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.197561);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,1.30288);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.6243965);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(7,0.3152691);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(9,0.1983113);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(11,0.1996109);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.3221285);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(178);

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
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,15.89898);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,14.17314);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,7.8474);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,5.378843);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,3.827249);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,1.962637);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.7342347);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.3240663);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.2431297);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1283516);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.08148134);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.07074414);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.05409401);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.04419383);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.02556196);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.04550556);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.01756355);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01299947);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.007242962);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.006243138);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.1783732);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.16833);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1245456);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.1039679);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.08807581);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.0631496);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.03782601);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.0250306);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.02175616);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.01567614);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.01228937);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.01176038);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.01025202);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.009282582);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.006969915);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.009236954);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.005705343);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.004974627);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.003681905);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.003604578);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(27953);

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
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,7.060303);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,5.922401);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,3.276747);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,2.143255);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.284269);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.7302421);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.3808573);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.216706);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.1609887);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.1207164);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.08157293);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.06565252);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.05287129);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.04134683);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.04069597);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.02486327);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.01880667);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.0168701);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.007416517);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.001783354);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001352602);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0009674522);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0004512559);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.05626486);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.0515611);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.03837908);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.03100454);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.02401271);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.0180947);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01303417);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.009828634);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.008419837);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.007333612);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.006046037);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.005384959);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.004830495);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.004258846);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.004236954);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.003301846);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.002891949);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.00271915);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.00182152);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.0008957071);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0007823209);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.000684092);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0004512559);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(48968);

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
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.05314337);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.03588746);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.02108318);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.01873);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(5,0.01011987);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.01078708);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(7,0.001859968);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(9,0.002365714);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(10,0.001932967);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.01001589);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.008176461);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.006274016);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.005735943);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(5,0.004212316);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.004457433);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(7,0.001859968);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(9,0.002365714);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(10,0.001932967);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(87);

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
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.02135146);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.01666302);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.00965955);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.008104374);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.003241225);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.001463245);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.001092562);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.000625704);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.0003095479);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(10,0.0006109715);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.0005645332);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(12,0.0007791566);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(13,0.0003730181);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.002260976);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.002029156);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.001563624);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001383417);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.0008766165);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.0005697329);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0004938542);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0003667657);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0002285455);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(10,0.0004323536);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.0004012177);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(12,0.0004498944);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(13,0.0003161404);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(277);

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
   
   TH1D *VbbHcc_tags_Sphericity__158 = new TH1D("VbbHcc_tags_Sphericity__158","",25,0,1);
   VbbHcc_tags_Sphericity__158->SetBinContent(1,22836);
   VbbHcc_tags_Sphericity__158->SetBinContent(2,15884);
   VbbHcc_tags_Sphericity__158->SetBinContent(3,9133);
   VbbHcc_tags_Sphericity__158->SetBinContent(4,5595);
   VbbHcc_tags_Sphericity__158->SetBinContent(5,3503);
   VbbHcc_tags_Sphericity__158->SetBinContent(6,2134);
   VbbHcc_tags_Sphericity__158->SetBinContent(7,1323);
   VbbHcc_tags_Sphericity__158->SetBinContent(8,850);
   VbbHcc_tags_Sphericity__158->SetBinContent(9,670);
   VbbHcc_tags_Sphericity__158->SetBinContent(10,466);
   VbbHcc_tags_Sphericity__158->SetBinContent(11,317);
   VbbHcc_tags_Sphericity__158->SetBinContent(12,273);
   VbbHcc_tags_Sphericity__158->SetBinContent(13,204);
   VbbHcc_tags_Sphericity__158->SetBinContent(14,161);
   VbbHcc_tags_Sphericity__158->SetBinContent(15,120);
   VbbHcc_tags_Sphericity__158->SetBinContent(16,111);
   VbbHcc_tags_Sphericity__158->SetBinContent(17,73);
   VbbHcc_tags_Sphericity__158->SetBinContent(18,55);
   VbbHcc_tags_Sphericity__158->SetBinContent(19,21);
   VbbHcc_tags_Sphericity__158->SetBinContent(20,10);
   VbbHcc_tags_Sphericity__158->SetBinContent(21,3);
   VbbHcc_tags_Sphericity__158->SetBinContent(22,1);
   VbbHcc_tags_Sphericity__158->SetEntries(63767);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity__158->SetLineColor(ci);
   VbbHcc_tags_Sphericity__158->SetLineWidth(2);
   VbbHcc_tags_Sphericity__158->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity__158->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__158->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__158->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__158->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__158->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__158->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_fx1115[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_fy1115[25] = {
   84945.29,
   64024.14,
   38534.91,
   21028.23,
   33832.76,
   6036.744,
   1924.943,
   2074.369,
   1248.531,
   1005.511,
   875.015,
   294.3833,
   300.7613,
   243.5857,
   271.0012,
   127.5793,
   38.21604,
   37.13059,
   26.92426,
   2.282276,
   0.7593609,
   0.3388404,
   0.0004512559,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fex1115[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_fey1115[25] = {
   15597.4,
   3628.686,
   2700.654,
   1870.395,
   21709.65,
   957.2072,
   262.7716,
   609.8624,
   382.9406,
   419.5575,
   375.2809,
   61.52978,
   69.26964,
   73.40254,
   70.62875,
   33.82901,
   10.63946,
   12.29395,
   10.47611,
   0.4101158,
   0.2408951,
   0.1713886,
   0.0004512559,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_fx1115,Graph_from_VbbHcc_tags_Sphericity_fy1115,Graph_from_VbbHcc_tags_Sphericity_fex1115,Graph_from_VbbHcc_tags_Sphericity_fey1115);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity1115 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity1115","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetMinimum(110.597);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetMaximum(110597);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity1115);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__159 = new TH1D("data_mc_ratio__159","",25,0,1);
   data_mc_ratio__159->SetBinContent(1,0.2688319);
   data_mc_ratio__159->SetBinContent(2,0.2480939);
   data_mc_ratio__159->SetBinContent(3,0.2370058);
   data_mc_ratio__159->SetBinContent(4,0.2660709);
   data_mc_ratio__159->SetBinContent(5,0.1035387);
   data_mc_ratio__159->SetBinContent(6,0.3535018);
   data_mc_ratio__159->SetBinContent(7,0.6872932);
   data_mc_ratio__159->SetBinContent(8,0.4097632);
   data_mc_ratio__159->SetBinContent(9,0.5366308);
   data_mc_ratio__159->SetBinContent(10,0.4634458);
   data_mc_ratio__159->SetBinContent(11,0.3622795);
   data_mc_ratio__159->SetBinContent(12,0.9273625);
   data_mc_ratio__159->SetBinContent(13,0.6782789);
   data_mc_ratio__159->SetBinContent(14,0.6609584);
   data_mc_ratio__159->SetBinContent(15,0.4428024);
   data_mc_ratio__159->SetBinContent(16,0.8700469);
   data_mc_ratio__159->SetBinContent(17,1.910193);
   data_mc_ratio__159->SetBinContent(18,1.481259);
   data_mc_ratio__159->SetBinContent(19,0.7799658);
   data_mc_ratio__159->SetBinContent(20,4.381591);
   data_mc_ratio__159->SetBinContent(21,3.950691);
   data_mc_ratio__159->SetBinContent(22,2.951242);
   data_mc_ratio__159->SetBinError(1,0.001778979);
   data_mc_ratio__159->SetBinError(2,0.001968504);
   data_mc_ratio__159->SetBinError(3,0.002480004);
   data_mc_ratio__159->SetBinError(4,0.003557111);
   data_mc_ratio__159->SetBinError(5,0.001749374);
   data_mc_ratio__159->SetBinError(6,0.007652344);
   data_mc_ratio__159->SetBinError(7,0.01889566);
   data_mc_ratio__159->SetBinError(8,0.01405476);
   data_mc_ratio__159->SetBinError(9,0.02073186);
   data_mc_ratio__159->SetBinError(10,0.02146871);
   data_mc_ratio__159->SetBinError(11,0.02034764);
   data_mc_ratio__159->SetBinError(12,0.05612653);
   data_mc_ratio__159->SetBinError(13,0.04748902);
   data_mc_ratio__159->SetBinError(14,0.05209082);
   data_mc_ratio__159->SetBinError(15,0.04042215);
   data_mc_ratio__159->SetBinError(16,0.08258119);
   data_mc_ratio__159->SetBinError(17,0.2235711);
   data_mc_ratio__159->SetBinError(18,0.1997329);
   data_mc_ratio__159->SetBinError(19,0.1702025);
   data_mc_ratio__159->SetBinError(20,1.385581);
   data_mc_ratio__159->SetBinError(21,2.280932);
   data_mc_ratio__159->SetBinError(22,2.951242);
   data_mc_ratio__159->SetMinimum(0.4);
   data_mc_ratio__159->SetMaximum(1.6);
   data_mc_ratio__159->SetEntries(24.77822);
   data_mc_ratio__159->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__159->SetLineColor(ci);
   data_mc_ratio__159->SetLineWidth(2);
   data_mc_ratio__159->SetMarkerStyle(20);
   data_mc_ratio__159->SetMarkerSize(1.2);
   data_mc_ratio__159->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__159->GetXaxis()->SetRange(1,25);
   data_mc_ratio__159->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__159->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__159->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__159->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__159->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__159->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__159->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__159->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__159->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__159->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__159->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__159->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__159->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__159->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__159->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__159->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__159->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1116[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1116[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1116[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1116[25] = {
   0.183617,
   0.05667684,
   0.07008331,
   0.08894688,
   0.6416754,
   0.1585635,
   0.1365088,
   0.2939991,
   0.306713,
   0.4172578,
   0.4288851,
   0.2090125,
   0.2303144,
   0.3013418,
   0.2606215,
   0.2651605,
   0.278403,
   0.3311004,
   0.3890958,
   0.179696,
   0.317234,
   0.5058092,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1116,Graph_from_mc_statistical_error_fy1116,Graph_from_mc_statistical_error_fex1116,Graph_from_mc_statistical_error_fey1116);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1116 = new TH1F("Graph_Graph_from_mc_statistical_error1116","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1116->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1116->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1116->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1116->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1116->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1116);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
