#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_17()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_17/Aplanarity_tagOnly_17
//=========  (Wed Jan 10 10:25:21 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_17 = new TCanvas("Aplanarity_tagOnly_17", "Aplanarity_tagOnly_17",0,0,600,600);
   Aplanarity_tagOnly_17->SetHighLightColor(2);
   Aplanarity_tagOnly_17->Range(0,0,1,1);
   Aplanarity_tagOnly_17->SetFillColor(0);
   Aplanarity_tagOnly_17->SetFillStyle(4000);
   Aplanarity_tagOnly_17->SetBorderMode(0);
   Aplanarity_tagOnly_17->SetBorderSize(2);
   Aplanarity_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3774.066,1.052419,3770302);
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
   st->SetMaximum(3392894);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",50,0,1);
   st_stack_47->SetMinimum(0.01);
   st_stack_47->SetMaximum(3392894);
   st_stack_47->SetDirectory(nullptr);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->SetLineWidth(0);
   st_stack_47->GetXaxis()->SetRange(1,50);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetTitleOffset(1);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/0.02");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetLabelSize(0.05);
   st_stack_47->GetYaxis()->SetTitleSize(0.057);
   st_stack_47->GetYaxis()->SetTitleOffset(1.2);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetTitleOffset(1);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VH_tagOnly_Aplanarity_stack_1 = new TH1D("VH_tagOnly_Aplanarity_stack_1","",50,0,1);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(1,1264394);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(2,151736.3);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(3,38255.13);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(4,13422.21);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(5,6403.137);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(6,1847.116);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(7,1025.463);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(8,1006.385);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(9,592.3925);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(10,419.4633);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(11,218.0503);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(12,61.17061);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(13,28.90498);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(14,35.83727);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(15,24.63946);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.5149894);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(17,13.90549);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(18,52.80847);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(1,30475.99);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(2,5499.433);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(3,2755.518);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(4,1584.5);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(5,1585.091);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(6,353.4655);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(7,243.396);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(8,331.0987);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(9,195.1103);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(10,286.2463);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(11,63.19954);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(12,23.38962);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(13,11.85892);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(14,27.21483);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(15,10.89065);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(16,0.5149894);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(17,9.54248);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(18,37.34831);
   VH_tagOnly_Aplanarity_stack_1->SetEntries(164501);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_1,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_2 = new TH1D("VH_tagOnly_Aplanarity_stack_2","",50,0,1);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(1,13439.87);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(2,1912.052);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(3,496.0213);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(4,159.1122);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(5,71.03198);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(6,34.77259);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(7,20.52357);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(8,11.23038);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(9,5.919533);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(10,4.358384);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(11,2.969159);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(12,2.045045);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(13,0.6375612);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(14,1.471188);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.4006694);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.1540873);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.1979987);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.4117112);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(19,0.04715263);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(1,47.55855);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(2,17.99901);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(3,9.179928);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(4,5.19359);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(5,3.417501);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(6,2.452386);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(7,1.96554);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(8,1.315037);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(9,1.032105);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(10,0.9394568);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(11,0.7213555);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(12,0.6272073);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(13,0.327861);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(14,0.6079537);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(15,0.2839147);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(16,0.08174692);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(17,0.1831268);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(18,0.270989);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(19,0.04715263);
   VH_tagOnly_Aplanarity_stack_2->SetEntries(208397);

   ci = TColor::GetColor("#660066");
   VH_tagOnly_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_2,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_3 = new TH1D("VH_tagOnly_Aplanarity_stack_3","",50,0,1);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(0,0.07847498);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(1,233875.5);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(2,32451.04);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(3,8372.66);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(4,3033.389);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(5,1341.373);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(6,689.0154);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(7,385.4459);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(8,225.6814);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(9,136.308);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(10,91.42432);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(11,59.4521);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(12,36.3707);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(13,23.91665);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(14,15.46639);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(15,9.821699);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(16,5.193337);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(17,3.115984);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(18,1.601847);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(19,0.7114502);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.7400817);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.2159598);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.1563896);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(0,0.07847498);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(1,123.4132);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(2,45.88805);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(3,23.23312);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(4,13.94801);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(5,9.253011);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(6,6.624469);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(7,4.951282);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(8,3.795558);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(9,2.945648);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(10,2.411925);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(11,1.949219);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(12,1.530112);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(13,1.224016);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(14,0.9977569);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(15,0.7959434);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(16,0.5704153);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(17,0.4518686);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(18,0.3258099);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(19,0.195765);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(20,0.2144353);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(21,0.1099712);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(22,0.1105849);
   VH_tagOnly_Aplanarity_stack_3->SetEntries(4706151);

   ci = TColor::GetColor("#cc00cc");
   VH_tagOnly_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_3,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_4 = new TH1D("VH_tagOnly_Aplanarity_stack_4","",50,0,1);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(1,9370.405);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(2,1051.109);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(3,263.5355);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(4,109.7766);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(5,34.98998);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(6,16.75233);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(7,9.021304);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(8,6.892432);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(9,3.858133);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(10,3.184744);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(11,1.874045);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(12,0.4248487);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.2905425);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.4211975);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.1552657);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.1111432);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(17,0.144623);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(1,63.41039);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(2,23.87997);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(3,12.32315);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(4,9.740418);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(5,2.682305);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(6,1.809087);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(7,1.358028);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(8,3.271184);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(9,0.8988237);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(10,0.8433912);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(11,0.6640296);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(12,0.1690664);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(13,0.1501788);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(14,0.1956345);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(15,0.1098402);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(16,0.1111432);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(17,0.1022657);
   VH_tagOnly_Aplanarity_stack_4->SetEntries(84529);

   ci = TColor::GetColor("#00cccc");
   VH_tagOnly_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_4,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_5 = new TH1D("VH_tagOnly_Aplanarity_stack_5","",50,0,1);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(1,5359.995);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(2,580.6242);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(3,145.4919);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(4,57.18997);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(5,19.61722);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(6,10.26451);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(7,6.184479);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(8,2.918489);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(9,1.212947);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(10,0.4360355);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.7516661);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(12,0.3690898);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(13,0.1177054);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.09149497);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(1,79.14689);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(2,30.04545);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(3,16.06979);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(4,8.552454);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(5,3.396731);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(6,2.321667);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(7,2.094768);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(8,0.9125099);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(9,0.3591938);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(10,0.2359698);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(11,0.2710153);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(12,0.2228919);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(13,0.103482);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(14,0.09149497);
   VH_tagOnly_Aplanarity_stack_5->SetEntries(43175);

   ci = TColor::GetColor("#ff99cc");
   VH_tagOnly_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_5,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_6 = new TH1D("VH_tagOnly_Aplanarity_stack_6","",50,0,1);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(1,49.59218);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(2,6.562542);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(3,1.694458);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(4,0.637424);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(6,0.3426317);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(8,0.2092542);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(1,3.957509);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(2,1.443798);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(3,0.7260404);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(4,0.3703153);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(6,0.3426317);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(8,0.2092542);
   VH_tagOnly_Aplanarity_stack_6->SetEntries(198);

   ci = TColor::GetColor("#9933ff");
   VH_tagOnly_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_6,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_7 = new TH1D("VH_tagOnly_Aplanarity_stack_7","",50,0,1);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(1,125.7275);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(2,15.23982);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(3,2.549797);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(4,1.465183);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(5,0.2684589);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(6,0.5333056);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(8,0.1663628);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(11,0.266122);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(1,5.689889);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(2,1.954159);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(3,0.8153896);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(4,0.5813902);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(5,0.2684589);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(6,0.377497);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(8,0.1663628);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(11,0.266122);
   VH_tagOnly_Aplanarity_stack_7->SetEntries(598);

   ci = TColor::GetColor("#3399ff");
   VH_tagOnly_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_7,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_8 = new TH1D("VH_tagOnly_Aplanarity_stack_8","",50,0,1);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(1,97.80197);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(2,10.28498);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(3,3.27068);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(4,0.7101134);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(1,5.079794);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(2,1.617671);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(3,0.9258509);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(4,0.4138764);
   VH_tagOnly_Aplanarity_stack_8->SetEntries(445);

   ci = TColor::GetColor("#33ff99");
   VH_tagOnly_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_8,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_9 = new TH1D("VH_tagOnly_Aplanarity_stack_9","",50,0,1);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(1,46.41621);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(2,4.416883);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(3,1.017782);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.3021776);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.1519977);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.05118853);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.04392811);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.01395151);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.01454417);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.0102679);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.003040374);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(12,0.005954801);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(13,0.002468857);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(19,0.003655789);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(1,0.2685411);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(2,0.08290248);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(3,0.04013872);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(4,0.02163474);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(5,0.01539048);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(6,0.008782152);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(7,0.00814966);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(8,0.004728522);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(9,0.004826419);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(10,0.004063762);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(11,0.001749502);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(12,0.003071066);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(13,0.00176226);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(19,0.002139219);
   VH_tagOnly_Aplanarity_stack_9->SetEntries(35311);

   ci = TColor::GetColor("#cccc00");
   VH_tagOnly_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_9,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_10 = new TH1D("VH_tagOnly_Aplanarity_stack_10","",50,0,1);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(1,41.32112);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(2,4.729307);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(3,1.113095);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.367483);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.1789382);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.06850362);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.05320463);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.02460837);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.0152915);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.00999166);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.004610743);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.003519549);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.002270129);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.002337035);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0006548059);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0004830664);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0004830664);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0004399667);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1366273);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(2,0.04620477);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(3,0.02238058);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(4,0.01288683);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(5,0.00895584);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(6,0.005523465);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(7,0.004894693);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(8,0.003333672);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(9,0.002626234);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(10,0.002081798);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(11,0.001443794);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(12,0.00121299);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(13,0.001016297);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(14,0.001046016);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0004905323);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0004830664);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0004830664);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0004399667);
   VH_tagOnly_Aplanarity_stack_10->SetEntries(107972);

   ci = TColor::GetColor("#0000cc");
   VH_tagOnly_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_10,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_11 = new TH1D("VH_tagOnly_Aplanarity_stack_11","",50,0,1);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(1,1.409341);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.1283359);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.02797565);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.0137937);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(5,0.006041302);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001673385);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(7,0.0001806894);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(9,0.00162201);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(11,0.001095761);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(1,0.04638399);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(2,0.01403235);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(3,0.006637041);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(4,0.004464474);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(5,0.003096508);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001673385);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(7,0.0001806894);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(9,0.00162201);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(11,0.001095761);
   VH_tagOnly_Aplanarity_stack_11->SetEntries(1088);

   ci = TColor::GetColor("#cc0000");
   VH_tagOnly_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_11,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_12 = new TH1D("VH_tagOnly_Aplanarity_stack_12","",50,0,1);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(1,0.7090473);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.08310601);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.01725517);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.005312534);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.003007002);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.0003292025);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(7,0.0008504318);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001002828);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(10,0.0002322275);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(11,0.0007792502);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(1,0.01226833);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(2,0.004206775);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(3,0.001903279);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(4,0.00105682);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(5,0.0008097393);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0002477377);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(7,0.0004265633);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0004544659);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(10,0.0002322275);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(11,0.000395238);
   VH_tagOnly_Aplanarity_stack_12->SetEntries(4044);

   ci = TColor::GetColor("#00cc00");
   VH_tagOnly_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_Aplanarity__93 = new TH1D("VH_tagOnly_Aplanarity__93","",50,0,1);
   VH_tagOnly_Aplanarity__93->SetBinContent(1,1067722);
   VH_tagOnly_Aplanarity__93->SetBinContent(2,140898);
   VH_tagOnly_Aplanarity__93->SetBinContent(3,36237);
   VH_tagOnly_Aplanarity__93->SetBinContent(4,12326);
   VH_tagOnly_Aplanarity__93->SetBinContent(5,5045);
   VH_tagOnly_Aplanarity__93->SetBinContent(6,2416);
   VH_tagOnly_Aplanarity__93->SetBinContent(7,1344);
   VH_tagOnly_Aplanarity__93->SetBinContent(8,751);
   VH_tagOnly_Aplanarity__93->SetBinContent(9,454);
   VH_tagOnly_Aplanarity__93->SetBinContent(10,281);
   VH_tagOnly_Aplanarity__93->SetBinContent(11,195);
   VH_tagOnly_Aplanarity__93->SetBinContent(12,106);
   VH_tagOnly_Aplanarity__93->SetBinContent(13,72);
   VH_tagOnly_Aplanarity__93->SetBinContent(14,45);
   VH_tagOnly_Aplanarity__93->SetBinContent(15,34);
   VH_tagOnly_Aplanarity__93->SetBinContent(16,18);
   VH_tagOnly_Aplanarity__93->SetBinContent(17,7);
   VH_tagOnly_Aplanarity__93->SetBinContent(18,10);
   VH_tagOnly_Aplanarity__93->SetBinContent(19,1);
   VH_tagOnly_Aplanarity__93->SetBinContent(21,1);
   VH_tagOnly_Aplanarity__93->SetEntries(1268012);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__93->SetLineColor(ci);
   VH_tagOnly_Aplanarity__93->SetLineWidth(2);
   VH_tagOnly_Aplanarity__93->SetMarkerStyle(20);
   VH_tagOnly_Aplanarity__93->SetMarkerSize(1.2);
   VH_tagOnly_Aplanarity__93->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity__93->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__93->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__93->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__93->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__93->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__93->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__93->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__93->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__93->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_Aplanarity_fx1093[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fy1093[50] = { 1526803, 187772.6, 47542.53, 16785.18, 7870.758, 2598.919, 1446.736, 1253.523, 739.7226, 518.8873, 283.3729, 100.3898, 53.87218, 53.28988, 35.01709, 5.974212, 17.36458,
   54.82203, 0.7627417, 0.7400817, 0.2163998, 0.1563896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fex1093[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fey1093[50] = { 30476.44, 5499.789, 2755.706, 1584.623, 1585.128, 353.5487, 243.4671, 331.1406, 195.1376, 286.2593, 63.23834, 23.44968, 11.92783, 27.24075, 10.92394, 0.7807838, 9.555476,
   37.35072, 0.2013756, 0.2144353, 0.109972, 0.1105849, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagOnly_Aplanarity_fx1093,Graph_from_VH_tagOnly_Aplanarity_fy1093,Graph_from_VH_tagOnly_Aplanarity_fex1093,Graph_from_VH_tagOnly_Aplanarity_fey1093);
   gre->SetName("Graph_from_VH_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_Aplanarity1093 = new TH1F("Graph_Graph_from_VH_tagOnly_Aplanarity1093","",100,0,1.1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetMinimum(0);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetMaximum(1713007);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_Aplanarity1093);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Aplanarity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagOnly_17->cd();
  
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
   
   TH1D *data_mc_ratio__94 = new TH1D("data_mc_ratio__94","",50,0,1);
   data_mc_ratio__94->SetBinContent(1,0.699319);
   data_mc_ratio__94->SetBinContent(2,0.7503651);
   data_mc_ratio__94->SetBinContent(3,0.7622018);
   data_mc_ratio__94->SetBinContent(4,0.7343382);
   data_mc_ratio__94->SetBinContent(5,0.6409802);
   data_mc_ratio__94->SetBinContent(6,0.9296173);
   data_mc_ratio__94->SetBinContent(7,0.9289877);
   data_mc_ratio__94->SetBinContent(8,0.5991116);
   data_mc_ratio__94->SetBinContent(9,0.6137436);
   data_mc_ratio__94->SetBinContent(10,0.5415434);
   data_mc_ratio__94->SetBinContent(11,0.6881392);
   data_mc_ratio__94->SetBinContent(12,1.055884);
   data_mc_ratio__94->SetBinContent(13,1.336497);
   data_mc_ratio__94->SetBinContent(14,0.844438);
   data_mc_ratio__94->SetBinContent(15,0.9709544);
   data_mc_ratio__94->SetBinContent(16,3.01295);
   data_mc_ratio__94->SetBinContent(17,0.4031195);
   data_mc_ratio__94->SetBinContent(18,0.1824084);
   data_mc_ratio__94->SetBinContent(19,1.31106);
   data_mc_ratio__94->SetBinContent(21,4.621077);
   data_mc_ratio__94->SetBinError(1,0.000676778);
   data_mc_ratio__94->SetBinError(2,0.001999034);
   data_mc_ratio__94->SetBinError(3,0.004003998);
   data_mc_ratio__94->SetBinError(4,0.006614317);
   data_mc_ratio__94->SetBinError(5,0.009024311);
   data_mc_ratio__94->SetBinError(6,0.0189128);
   data_mc_ratio__94->SetBinError(7,0.02534022);
   data_mc_ratio__94->SetBinError(8,0.02186189);
   data_mc_ratio__94->SetBinError(9,0.02880441);
   data_mc_ratio__94->SetBinError(10,0.03230577);
   data_mc_ratio__94->SetBinError(11,0.04927867);
   data_mc_ratio__94->SetBinError(12,0.1025566);
   data_mc_ratio__94->SetBinError(13,0.1575077);
   data_mc_ratio__94->SetBinError(14,0.1258814);
   data_mc_ratio__94->SetBinError(15,0.1665173);
   data_mc_ratio__94->SetBinError(16,0.710159);
   data_mc_ratio__94->SetBinError(17,0.1523648);
   data_mc_ratio__94->SetBinError(18,0.05768261);
   data_mc_ratio__94->SetBinError(19,1.31106);
   data_mc_ratio__94->SetBinError(21,4.621077);
   data_mc_ratio__94->SetMinimum(0.4);
   data_mc_ratio__94->SetMaximum(1.6);
   data_mc_ratio__94->SetEntries(15.48807);
   data_mc_ratio__94->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__94->SetLineColor(ci);
   data_mc_ratio__94->SetLineWidth(2);
   data_mc_ratio__94->SetMarkerStyle(20);
   data_mc_ratio__94->SetMarkerSize(1.2);
   data_mc_ratio__94->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__94->GetXaxis()->SetRange(1,50);
   data_mc_ratio__94->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__94->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__94->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__94->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__94->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__94->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__94->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1094[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1094[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1094[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1094[50] = { 0.01996096, 0.02928962, 0.05796297, 0.09440608, 0.2013945, 0.1360368, 0.1682872, 0.264168, 0.2637984, 0.5516792, 0.223163, 0.2335863, 0.2214098, 0.5111806, 0.3119603, 0.1306923, 0.5502855,
   0.6813085, 0.2640154, 0.2897455, 0.5081892, 0.7071115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1094,Graph_from_mc_statistical_error_fy1094,Graph_from_mc_statistical_error_fex1094,Graph_from_mc_statistical_error_fey1094);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1094 = new TH1F("Graph_Graph_from_mc_statistical_error1094","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1094->SetMinimum(0.1514661);
   Graph_Graph_from_mc_statistical_error1094->SetMaximum(1.848534);
   Graph_Graph_from_mc_statistical_error1094->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1094->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1094);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_17->cd();
   Aplanarity_tagOnly_17->Modified();
   Aplanarity_tagOnly_17->cd();
   Aplanarity_tagOnly_17->SetSelected(Aplanarity_tagOnly_17);
}
