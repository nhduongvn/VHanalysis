#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Sep  5 11:02:15 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(0,0,1,1);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3700.87,1.052419,3697179);
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
   st->SetMaximum(3327091);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",50,0,1);
   st_stack_119->SetMinimum(0.01);
   st_stack_119->SetMaximum(3327091);
   st_stack_119->SetDirectory(nullptr);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->SetLineWidth(0);
   st_stack_119->GetXaxis()->SetRange(1,50);
   st_stack_119->GetXaxis()->SetLabelFont(42);
   st_stack_119->GetXaxis()->SetTitleOffset(1);
   st_stack_119->GetXaxis()->SetTitleFont(42);
   st_stack_119->GetYaxis()->SetTitle("Events/0.02");
   st_stack_119->GetYaxis()->SetLabelFont(42);
   st_stack_119->GetYaxis()->SetLabelSize(0.05);
   st_stack_119->GetYaxis()->SetTitleSize(0.057);
   st_stack_119->GetYaxis()->SetTitleOffset(1.2);
   st_stack_119->GetYaxis()->SetTitleFont(42);
   st_stack_119->GetZaxis()->SetLabelFont(42);
   st_stack_119->GetZaxis()->SetTitleOffset(1);
   st_stack_119->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_119);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1316889);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,163574.6);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,38894.42);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,7672.024);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3449.81);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,903.3734);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,298.0785);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,11.17864);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,48.6795);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,13.28318);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,3.900175);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,197.9134);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2.246413);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,48991.54);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,5943.598);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,3134.54);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,1108.847);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1611.202);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,441.7163);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,220.2712);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,6.525146);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,39.70774);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,13.28318);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,3.900175);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,193.2342);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,2.246413);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(113571);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,8514.186);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1193.924);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,268.0326);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,65.71416);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,29.31544);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,7.459219);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,3.779479);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.638482);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.259683);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.2340012);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.4021444);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.2233494);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.05960272);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.02219378);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,43.39622);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,16.06679);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,7.630752);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,3.685719);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.90015);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.131462);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.8123088);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.5797407);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.453378);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.08974924);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.2784838);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.1465033);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.05960272);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.02219378);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(145817);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(0,0.1507807);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,160736.8);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,20797.13);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,4175.458);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1139.395);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,371.6232);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,141.7483);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,60.215);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,28.85384);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,15.69555);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,8.273865);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,4.608143);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,2.569883);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,1.813558);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,0.8686235);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.3615748);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.3605168);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.2555704);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.2808691);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.1352909);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(21,0.03174977);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.03554607);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(0,0.116961);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,114.8685);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,40.70913);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,18.05173);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,9.42368);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,5.263683);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,3.244131);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,1.963193);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.415637);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.187904);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.6837407);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.5224441);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.4314633);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.3046332);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.2120311);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.1629999);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1540832);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1130846);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1340625);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.07140419);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(21,0.03174977);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.03554607);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3233567);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,8174.192);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,994.8472);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,207.229);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,50.7089);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,11.79357);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,3.7455);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.7882175);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.7033785);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.1342788);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.09972527);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.1323523);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(12,0.4102686);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(13,0.0836681);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(18,0.06923443);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,74.94754);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,28.23327);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,12.94092);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,8.365169);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,2.952544);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,1.038437);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.3197538);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.3910905);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.09500954);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.09972527);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.1323523);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(12,0.290497);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(13,0.0836681);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(18,0.06923443);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(47199);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,2555.799);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,314.1876);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,53.56564);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,16.41046);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,2.516475);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,2.975228);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,0.01768816);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.2672701);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.01019316);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.07232967);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(13,0.05398377);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,60.77013);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,21.90788);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,8.509392);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,3.719151);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,1.27577);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,1.899936);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,0.01768816);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.2071143);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.01019316);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.07232967);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(13,0.05398377);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(16692);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,24.4216);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,1.621899);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,0.5727604);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(4,0.6555583);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,3.01281);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,0.9914342);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.5727604);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(4,0.6555583);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,61.91272);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,6.816087);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,1.251932);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(4,0.5026412);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,4.449261);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,1.300932);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.6103582);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(4,0.30588);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,115.8237);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,14.96047);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,3.473475);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.5700155);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(5,0.2035509);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,7.158764);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,2.715894);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,1.484659);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.4317948);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(5,0.2035509);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,83.02796);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,6.452982);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,0.9530474);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.2233424);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.05621033);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.02908896);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.003113018);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.004485959);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(9,0.001248212);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(10,0.001156877);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.5036956);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.134177);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.05117913);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.02602503);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.01263891);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.01101803);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.001805739);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.003425604);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(9,0.001248212);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(10,0.001156877);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,34.78923);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,3.878844);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.7437607);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.1613049);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.05258775);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.01683827);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.005489566);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.003054563);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.001697716);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.0006582575);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0002793284);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0001111974);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1132684);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.03744584);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.01635736);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.007600811);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.004223411);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.002465424);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001368928);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001047949);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0007710467);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0004259248);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0002793284);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0001111974);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.5292025);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.04277744);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.003808356);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(4,0.0008168461);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.029967);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.008733164);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.002202368);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(4,0.0008168461);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.2411973);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.0283137);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.005731691);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.0004898652);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.0004574245);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.007336699);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.00265253);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001140597);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0002532643);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.0002863682);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity__237 = new TH1D("VbbHcc_algo_Aplanarity__237","",50,0,1);
   VbbHcc_algo_Aplanarity__237->SetBinContent(1,200582);
   VbbHcc_algo_Aplanarity__237->SetBinContent(2,26504);
   VbbHcc_algo_Aplanarity__237->SetBinContent(3,6100);
   VbbHcc_algo_Aplanarity__237->SetBinContent(4,1589);
   VbbHcc_algo_Aplanarity__237->SetBinContent(5,522);
   VbbHcc_algo_Aplanarity__237->SetBinContent(6,185);
   VbbHcc_algo_Aplanarity__237->SetBinContent(7,55);
   VbbHcc_algo_Aplanarity__237->SetBinContent(8,35);
   VbbHcc_algo_Aplanarity__237->SetBinContent(9,14);
   VbbHcc_algo_Aplanarity__237->SetBinContent(10,7);
   VbbHcc_algo_Aplanarity__237->SetBinContent(11,5);
   VbbHcc_algo_Aplanarity__237->SetBinContent(12,3);
   VbbHcc_algo_Aplanarity__237->SetBinContent(13,2);
   VbbHcc_algo_Aplanarity__237->SetBinContent(14,2);
   VbbHcc_algo_Aplanarity__237->SetBinContent(15,2);
   VbbHcc_algo_Aplanarity__237->SetBinContent(17,1);
   VbbHcc_algo_Aplanarity__237->SetBinContent(18,2);
   VbbHcc_algo_Aplanarity__237->SetEntries(235659);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__237->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__237->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__237->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__237->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__237->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__237->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__237->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__237->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__237->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__237->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__237->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__237->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__237->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__237->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1237[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1237[50] = { 1497191, 186908.5, 43605.71, 8946.367, 3865.371, 1059.348, 362.8875, 42.38188, 66.03923, 8.6196, 18.49843, 7.103787, 199.8646, 0.8686235, 2.66759, 0.3827106, 0.2555704,
   0.3501035, 0.1352909, 0, 0.03174977, 0.03554607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1237[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1237[50] = { 48991.79, 5943.868, 3134.64, 1108.932, 1611.217, 441.735, 220.2816, 6.713466, 39.72875, 0.6968549, 13.29722, 3.937433, 193.2345, 0.2120311, 2.253107, 0.1556734, 0.1130846,
   0.1508846, 0.07140419, 0, 0.03174977, 0.03554607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1237,Graph_from_VbbHcc_algo_Aplanarity_fy1237,Graph_from_VbbHcc_algo_Aplanarity_fex1237,Graph_from_VbbHcc_algo_Aplanarity_fey1237);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1237 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1237","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->SetMaximum(1700801);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1237);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__238 = new TH1D("data_mc_ratio__238","",50,0,1);
   data_mc_ratio__238->SetBinContent(1,0.1339722);
   data_mc_ratio__238->SetBinContent(2,0.141802);
   data_mc_ratio__238->SetBinContent(3,0.1398899);
   data_mc_ratio__238->SetBinContent(4,0.177614);
   data_mc_ratio__238->SetBinContent(5,0.1350452);
   data_mc_ratio__238->SetBinContent(6,0.1746358);
   data_mc_ratio__238->SetBinContent(7,0.1515621);
   data_mc_ratio__238->SetBinContent(8,0.8258246);
   data_mc_ratio__238->SetBinContent(9,0.2119952);
   data_mc_ratio__238->SetBinContent(10,0.8121027);
   data_mc_ratio__238->SetBinContent(11,0.2702932);
   data_mc_ratio__238->SetBinContent(12,0.4223099);
   data_mc_ratio__238->SetBinContent(13,0.01000677);
   data_mc_ratio__238->SetBinContent(14,2.302494);
   data_mc_ratio__238->SetBinContent(15,0.7497403);
   data_mc_ratio__238->SetBinContent(17,3.912817);
   data_mc_ratio__238->SetBinContent(18,5.712596);
   data_mc_ratio__238->SetBinError(1,0.0002991361);
   data_mc_ratio__238->SetBinError(2,0.000871017);
   data_mc_ratio__238->SetBinError(3,0.001791107);
   data_mc_ratio__238->SetBinError(4,0.004455693);
   data_mc_ratio__238->SetBinError(5,0.00591077);
   data_mc_ratio__238->SetBinError(6,0.01283948);
   data_mc_ratio__238->SetBinError(7,0.02043663);
   data_mc_ratio__238->SetBinError(8,0.1395898);
   data_mc_ratio__238->SetBinError(9,0.05665811);
   data_mc_ratio__238->SetBinError(10,0.306946);
   data_mc_ratio__238->SetBinError(11,0.1208788);
   data_mc_ratio__238->SetBinError(12,0.2438208);
   data_mc_ratio__238->SetBinError(13,0.007075858);
   data_mc_ratio__238->SetBinError(14,1.628109);
   data_mc_ratio__238->SetBinError(15,0.5301465);
   data_mc_ratio__238->SetBinError(17,3.912817);
   data_mc_ratio__238->SetBinError(18,4.039416);
   data_mc_ratio__238->SetMinimum(0.4);
   data_mc_ratio__238->SetMaximum(1.6);
   data_mc_ratio__238->SetEntries(5.93614);
   data_mc_ratio__238->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__238->SetLineColor(ci);
   data_mc_ratio__238->SetLineWidth(2);
   data_mc_ratio__238->SetMarkerStyle(20);
   data_mc_ratio__238->SetMarkerSize(1.2);
   data_mc_ratio__238->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__238->GetXaxis()->SetRange(1,50);
   data_mc_ratio__238->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__238->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__238->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__238->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__238->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__238->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__238->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__238->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__238->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__238->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__238->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__238->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__238->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1238[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1238[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1238[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1238[50] = { 0.03272247, 0.03180095, 0.071886, 0.1239533, 0.4168336, 0.4169878, 0.6070246, 0.1584042, 0.6015932, 0.08084539, 0.7188298, 0.5542723, 0.9668271, 0.2441002, 0.8446226, 0.4067652, 0.4424794,
   0.4309714, 0.5277826, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1238,Graph_from_mc_statistical_error_fy1238,Graph_from_mc_statistical_error_fex1238,Graph_from_mc_statistical_error_fey1238);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1238 = new TH1F("Graph_Graph_from_mc_statistical_error1238","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1238->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1238->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1238->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1238->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1238->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1238);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
