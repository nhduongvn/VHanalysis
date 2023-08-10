void Aplanarity_tags_all_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Thu Aug 10 12:20:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_all = new TCanvas("Aplanarity_tags_all", "Aplanarity_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_all->SetHighLightColor(2);
   Aplanarity_tags_all->Range(0,0,1,1);
   Aplanarity_tags_all->SetFillColor(0);
   Aplanarity_tags_all->SetFillStyle(4000);
   Aplanarity_tags_all->SetBorderMode(0);
   Aplanarity_tags_all->SetBorderSize(2);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1.42485,1.052419,15.05469);
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
   st->SetMaximum(6.94586e+12);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0.03905079);
   st_stack_64->SetMaximum(2.551159e+13);
   st_stack_64->SetDirectory(0);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->GetXaxis()->SetRange(1,50);
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetLabelSize(0.035);
   st_stack_64->GetXaxis()->SetTitleSize(0.035);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Events/0.02");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetLabelSize(0.05);
   st_stack_64->GetYaxis()->SetTitleSize(0.057);
   st_stack_64->GetYaxis()->SetTitleOffset(1.2);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetLabelSize(0.035);
   st_stack_64->GetZaxis()->SetTitleSize(0.035);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,537953.9);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,90383.39);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,16470.68);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,7005.99);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,2228.971);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,643.9908);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,313.4629);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,154.8544);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,378.654);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,78.75099);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,75.81254);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,34.15268);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,19271.58);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,22263.99);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,1832.477);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,1366.14);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,695.6349);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,125.6557);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,84.67371);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,50.53295);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,208.6401);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,45.52699);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,39.41149);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,34.15268);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(29294);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,2491.999);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,331.7159);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,98.32909);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,36.29005);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,19.54563);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,6.395251);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,6.212583);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,2.481346);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,1.223526);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,1.239358);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,0.146495);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,0.5299801);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,0.1772895);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,0.3212038);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,-0.05654178);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,22.42372);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,8.064207);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,4.386581);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,2.604104);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,2.107283);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,1.011159);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,1.15996);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,0.5998391);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,0.5106711);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,0.5320809);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,0.08016354);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,0.2679963);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,0.09246831);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,0.2219745);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,0.05654178);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(34591);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(1,51959.42);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(2,7522.95);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(3,2068.889);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(4,759.8211);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(5,351.6053);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(6,172.4971);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(7,96.58064);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(8,55.62735);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(9,34.5831);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(10,20.80561);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(11,12.76923);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(12,8.564562);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(13,6.284409);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(14,3.338156);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(15,2.713646);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(16,1.818774);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(17,0.6941646);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(18,1.091804);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(19,0.2427631);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(20,0.33736);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(1,66.27661);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(2,24.74807);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(3,13.95306);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(4,7.897057);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(5,5.495579);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(6,3.660144);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(7,2.752488);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(8,2.079032);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(9,1.631096);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(10,1.263378);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(11,0.985383);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(12,0.8133939);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(13,0.7024611);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(14,0.5081554);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(15,0.4595862);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(16,0.3732554);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(17,0.2412878);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(18,0.3081019);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(19,0.1405608);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(20,0.169685);
   VbbHcc_tags_Aplanarity_all_stack_3->SetEntries(880955);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(1,7372.562);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(2,838.2736);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(3,214.8389);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(4,62.40444);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(5,28.79079);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(6,14.81525);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(7,9.497256);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(8,4.650124);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(9,4.56302);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(10,3.792693);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(11,0.5381443);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(12,0.7516404);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(13,0.5427286);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(14,0.07001007);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(15,0.3351544);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(16,0.2120735);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(1,67.07864);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(2,25.5022);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(3,12.91316);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(4,3.994003);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(5,2.747357);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(6,1.886919);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(7,1.444207);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(8,0.8993065);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(9,1.203971);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(10,1.404549);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(11,0.2540781);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(12,0.2723577);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(13,0.2262294);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(14,0.07001007);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(15,0.2071037);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(16,0.1500199);
   VbbHcc_tags_Aplanarity_all_stack_4->SetEntries(50972);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(1,712.24);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(2,71.82645);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(3,19.25304);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(4,8.482849);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(5,2.207332);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(6,2.179686);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(7,0.7824485);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(8,6.043254);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(9,0.1386663);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(10,0.2790656);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(11,0.1573422);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(1,25.60805);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(2,7.215859);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(3,2.748111);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(4,2.95667);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(5,0.5545469);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(6,0.9878296);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(7,0.3521849);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(8,5.567381);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(9,0.1277071);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(10,0.2790656);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(11,0.1060468);
   VbbHcc_tags_Aplanarity_all_stack_5->SetEntries(7669);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(1,4.554858);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(2,0.6379077);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(1,1.292595);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(2,0.400168);
   VbbHcc_tags_Aplanarity_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(1,8.337215);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(2,0.6948741);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(3,0.1159231);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(8,0.1075422);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(1,1.444411);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(2,0.3973243);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(3,0.1159231);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(8,0.1075422);
   VbbHcc_tags_Aplanarity_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(1,152.364);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(2,10.07814);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(3,1.546806);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(4,2.214722);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(5,0.3152691);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(6,0.3776254);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(12,0.3487978);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(1,6.790465);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(2,1.707368);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(3,0.6355282);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(4,0.7962857);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(5,0.3152691);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(6,0.3776254);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(12,0.3487978);
   VbbHcc_tags_Aplanarity_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(1,146.4325);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(2,10.97426);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(3,1.947808);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(4,0.7059356);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(5,0.3040295);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(6,0.1857812);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(7,0.07898169);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(8,0.05805997);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(9,0.03684657);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(10,0.01670071);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(11,0.01359236);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(12,0.008230384);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(13,0.002099697);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(14,0.003348055);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(16,0.002081758);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(17,0.003086402);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(1,0.5989961);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(2,0.1554275);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(3,0.06493838);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(4,0.05502844);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(5,0.02616033);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(6,0.01988342);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(7,0.0127606);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(8,0.01054933);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(9,0.008701457);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(10,0.006102264);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(11,0.005168278);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(12,0.004227847);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(13,0.002099697);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(14,0.003348055);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(16,0.002081758);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(17,0.002183184);
   VbbHcc_tags_Aplanarity_all_stack_9->SetEntries(83441);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(1,62.30042);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(2,6.579284);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(3,1.51213);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(4,0.5652037);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(5,0.2102388);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(6,0.1120688);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(7,0.0747585);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(8,0.03588645);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(9,0.03376223);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(10,0.02071767);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(11,0.007401451);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(12,0.006105918);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(13,0.007134169);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(14,0.003214726);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(15,0.001428335);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(16,0.00150374);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(17,0.001489745);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(18,0.004829269);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(1,0.1796827);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(2,0.05834795);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(3,0.02792352);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(4,0.01700219);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(5,0.01037544);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(6,0.007581831);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(7,0.006188396);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(8,0.004260527);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(9,0.004180092);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(10,0.003286956);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(11,0.001977086);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(12,0.001810181);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(13,0.001887375);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(14,0.001344541);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(15,0.0008448338);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(16,0.0008894344);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(17,0.0008811567);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(18,0.001649261);
   VbbHcc_tags_Aplanarity_all_stack_10->SetEntries(146904);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(1,0.3964407);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(2,0.03243927);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(3,0.007141783);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(4,0.002811088);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(6,0.004298681);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(1,0.03192436);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(2,0.009189217);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(3,0.004280934);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(4,0.002811088);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(6,0.00305499);
   VbbHcc_tags_Aplanarity_all_stack_11->SetEntries(187);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(1,0.1849498);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(2,0.01961181);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(3,0.00416491);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(4,0.002058518);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(5,0.001068084);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(6,0.0001082815);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(8,0.0004611246);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(12,0.0003097436);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(1,0.007767407);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(2,0.002492659);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(3,0.001131478);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(4,0.0008482248);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(5,0.0006242975);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(6,0.0001082815);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(8,0.0003507318);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(12,0.0003097436);
   VbbHcc_tags_Aplanarity_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity_all__175 = new TH1D("VbbHcc_tags_Aplanarity_all__175","",50,0,1);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(1,400259);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(2,50897);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(3,13562);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(4,4888);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(5,2223);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(6,1153);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(7,606);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(8,368);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(9,221);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(10,132);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(11,98);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(12,59);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(13,44);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(14,23);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(15,20);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(16,10);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(17,8);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(20,2);
   VbbHcc_tags_Aplanarity_all__175->SetEntries(474622);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all__175->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all__175->SetLineWidth(2);
   VbbHcc_tags_Aplanarity_all__175->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity_all__175->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity_all__175->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all__175->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all__175->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all__175->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all__175->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all__175->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all__175->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all__175->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all__175->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all__175->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all__175->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all__175->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all__175->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all__175->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all__175->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_all_fx1127[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_all_fy1127[50] = {
   600864.7,
   99177.18,
   18877.13,
   7876.479,
   2631.95,
   840.558,
   426.6896,
   223.8584,
   419.2329,
   104.9051,
   89.44474,
   10.20963,
   7.013661,
   3.735932,
   37.20291,
   2.034433,
   0.642199,
   1.096634,
   0.2427631,
   0.33736,
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_all_fex1127[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_all_fey1127[50] = {
   19271.84,
   22264.02,
   1832.583,
   1366.175,
   695.6655,
   125.7316,
   84.73942,
   50.8928,
   208.6506,
   45.57013,
   39.42485,
   0.9639977,
   0.7437673,
   0.5589356,
   34.1564,
   0.4022819,
   0.2478353,
   0.3081063,
   0.1405608,
   0.169685,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_all_fx1127,Graph_from_VbbHcc_tags_Aplanarity_all_fy1127,Graph_from_VbbHcc_tags_Aplanarity_all_fex1127,Graph_from_VbbHcc_tags_Aplanarity_all_fey1127);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetMinimum(682.1502);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetMaximum(682150.2);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Aplanarity_all","MC unc. (stat.)","fl");

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
   Aplanarity_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__176 = new TH1D("data_mc_ratio__176","",50,0,1);
   data_mc_ratio__176->SetBinContent(1,0.6661383);
   data_mc_ratio__176->SetBinContent(2,0.5131927);
   data_mc_ratio__176->SetBinContent(3,0.7184356);
   data_mc_ratio__176->SetBinContent(4,0.6205818);
   data_mc_ratio__176->SetBinContent(5,0.8446208);
   data_mc_ratio__176->SetBinContent(6,1.371708);
   data_mc_ratio__176->SetBinContent(7,1.420236);
   data_mc_ratio__176->SetBinContent(8,1.643896);
   data_mc_ratio__176->SetBinContent(9,0.5271532);
   data_mc_ratio__176->SetBinContent(10,1.25828);
   data_mc_ratio__176->SetBinContent(11,1.095649);
   data_mc_ratio__176->SetBinContent(12,5.77886);
   data_mc_ratio__176->SetBinContent(13,6.273471);
   data_mc_ratio__176->SetBinContent(14,6.156428);
   data_mc_ratio__176->SetBinContent(15,0.5375923);
   data_mc_ratio__176->SetBinContent(16,4.915373);
   data_mc_ratio__176->SetBinContent(17,12.4572);
   data_mc_ratio__176->SetBinContent(20,5.928385);
   data_mc_ratio__176->SetBinError(1,0.001052916);
   data_mc_ratio__176->SetBinError(2,0.002274754);
   data_mc_ratio__176->SetBinError(3,0.006169159);
   data_mc_ratio__176->SetBinError(4,0.00887633);
   data_mc_ratio__176->SetBinError(5,0.01791398);
   data_mc_ratio__176->SetBinError(6,0.0403968);
   data_mc_ratio__176->SetBinError(7,0.05769315);
   data_mc_ratio__176->SetBinError(8,0.08569401);
   data_mc_ratio__176->SetBinError(9,0.03546016);
   data_mc_ratio__176->SetBinError(10,0.1095192);
   data_mc_ratio__176->SetBinError(11,0.1106772);
   data_mc_ratio__176->SetBinError(12,0.7523435);
   data_mc_ratio__176->SetBinError(13,0.9457614);
   data_mc_ratio__176->SetBinError(14,1.283704);
   data_mc_ratio__176->SetBinError(15,0.1202093);
   data_mc_ratio__176->SetBinError(16,1.554378);
   data_mc_ratio__176->SetBinError(17,4.404285);
   data_mc_ratio__176->SetBinError(20,4.192001);
   data_mc_ratio__176->SetMinimum(0.4);
   data_mc_ratio__176->SetMaximum(1.6);
   data_mc_ratio__176->SetEntries(35.52016);
   data_mc_ratio__176->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__176->SetLineColor(ci);
   data_mc_ratio__176->SetLineWidth(2);
   data_mc_ratio__176->SetMarkerStyle(20);
   data_mc_ratio__176->SetMarkerSize(1.2);
   data_mc_ratio__176->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__176->GetXaxis()->SetRange(1,50);
   data_mc_ratio__176->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__176->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__176->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__176->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__176->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__176->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__176->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__176->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__176->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__176->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__176->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__176->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__176->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__176->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__176->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__176->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__176->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1128[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1128[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1128[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1128[50] = {
   0.0320735,
   0.2244874,
   0.09707955,
   0.1734499,
   0.2643156,
   0.1495811,
   0.1985973,
   0.2273437,
   0.4976962,
   0.4343937,
   0.4407733,
   0.09442046,
   0.1060455,
   0.1496107,
   0.918111,
   0.1977366,
   0.3859166,
   0.2809565,
   0.5790037,
   0.502979,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1128,Graph_from_mc_statistical_error_fy1128,Graph_from_mc_statistical_error_fex1128,Graph_from_mc_statistical_error_fey1128);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1128 = new TH1F("Graph_Graph_from_mc_statistical_error1128","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1128->SetMinimum(0.0737001);
   Graph_Graph_from_mc_statistical_error1128->SetMaximum(2.101733);
   Graph_Graph_from_mc_statistical_error1128->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1128->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1128->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1128->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1128->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1128->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1128->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1128->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1128->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1128->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1128->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1128);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_all->cd();
   Aplanarity_tags_all->Modified();
   Aplanarity_tags_all->cd();
   Aplanarity_tags_all->SetSelected(Aplanarity_tags_all);
}
