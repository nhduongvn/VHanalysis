#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_16()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_16/Aplanarity_tagFirst_16
//=========  (Wed Jan 10 10:25:34 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_16 = new TCanvas("Aplanarity_tagFirst_16", "Aplanarity_tagFirst_16",0,0,600,600);
   Aplanarity_tagFirst_16->SetHighLightColor(2);
   Aplanarity_tagFirst_16->Range(0,0,1,1);
   Aplanarity_tagFirst_16->SetFillColor(0);
   Aplanarity_tagFirst_16->SetFillStyle(4000);
   Aplanarity_tagFirst_16->SetBorderMode(0);
   Aplanarity_tagFirst_16->SetBorderSize(2);
   Aplanarity_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-7362.588,1.052419,7355235);
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
   st->SetMaximum(6618976);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",50,0,1);
   st_stack_190->SetMinimum(0.01);
   st_stack_190->SetMaximum(6618976);
   st_stack_190->SetDirectory(nullptr);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->SetLineWidth(0);
   st_stack_190->GetXaxis()->SetRange(1,50);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Events/0.02");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetLabelSize(0.05);
   st_stack_190->GetYaxis()->SetTitleSize(0.057);
   st_stack_190->GetYaxis()->SetTitleOffset(1.2);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VH_tagFirst_Aplanarity_stack_1 = new TH1D("VH_tagFirst_Aplanarity_stack_1","",50,0,1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,2377491);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,352011.5);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,89099.98);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,28873.64);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,8656.359);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,4307.373);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,2295.754);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,1768.148);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,696.1604);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,133.5551);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,158.6152);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,469.7155);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,119.4644);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,20.86108);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,35.83874);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,0.5025456);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,13.1517);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(18,0.4177901);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,43694.04);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,27372.98);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,5552.571);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,2771.809);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,1166.484);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,870.8725);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,517.2694);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,553.6616);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,257.2864);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,40.37804);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,50.57691);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,295.8976);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,42.58014);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,10.86394);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,22.52918);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,0.5025456);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,9.302526);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(18,0.4177901);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(189532);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_2 = new TH1D("VH_tagFirst_Aplanarity_stack_2","",50,0,1);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,25426.99);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,3756.058);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,974.7294);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,333.5863);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,126.4183);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,63.53335);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,33.69139);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,18.90075);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,13.1206);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,8.329844);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,4.860583);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,2.129483);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,2.415501);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,1.469664);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,1.371652);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.4122866);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.1050592);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.2686778);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.0398695);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(20,0.4498189);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,64.52352);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,24.7405);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,12.67109);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,7.458203);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,4.476418);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,3.334249);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,2.444493);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,1.811725);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,1.550471);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,1.312802);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,0.9245587);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,0.4599502);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.62817);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.4957777);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.5429777);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.2888115);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.07428858);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.2258033);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(19,0.0398695);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(20,0.3209138);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(399011);

   ci = TColor::GetColor("#660066");
   VH_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_3 = new TH1D("VH_tagFirst_Aplanarity_stack_3","",50,0,1);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,415144.5);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,60767.88);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,16100.5);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,5862.442);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,2589.447);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,1296.598);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,694.2604);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,407.6896);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,247.0797);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,150.4496);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,96.29447);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,59.73745);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,40.21421);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,23.66811);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,14.90487);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,8.417775);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,5.12262);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,3.0045);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,1.856941);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.6454645);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.3078649);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.07910851);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,171.0041);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,65.34999);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,33.56135);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,20.21665);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,13.41099);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,9.481386);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,6.940229);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,5.318309);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,4.1329);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,3.214973);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,2.578223);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,2.037305);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,1.672975);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,1.28058);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,1.019693);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,0.7686096);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,0.5920995);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.4597308);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.3620639);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.2174708);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.1394352);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.07910851);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(7455219);

   ci = TColor::GetColor("#cc00cc");
   VH_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_4 = new TH1D("VH_tagFirst_Aplanarity_stack_4","",50,0,1);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,18709.26);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,2188.119);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,570.1844);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,186.524);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,74.19457);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,34.08588);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,22.79979);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,11.45738);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,4.126037);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,7.032205);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,6.019157);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,1.646103);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.790168);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.4030765);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.4598551);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.09394591);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(18,0.3060178);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,103.775);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,40.86982);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,21.40068);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,12.24399);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,6.826689);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,4.013791);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,3.325376);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,1.361026);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,0.7247019);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,3.218632);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,2.935062);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,0.51153);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.2512621);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.1716912);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.3219901);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.09394591);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(18,0.3060178);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(169758);

   ci = TColor::GetColor("#00cccc");
   VH_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_5 = new TH1D("VH_tagFirst_Aplanarity_stack_5","",50,0,1);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,10705.17);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,1196.991);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,329.5164);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,107.6905);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,38.73722);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,34.29895);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,25.49909);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,7.820291);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,3.702006);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,2.225877);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,1.186076);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,1.05598);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(13,0.6304865);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.06118488);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(15,0.2394103);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(18,0.04773763);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(20,0.07860647);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,118.3548);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,44.00733);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,26.74564);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,14.33424);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,4.496568);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,10.0648);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,9.631625);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,2.264748);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,1.361856);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,1.162281);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.3576382);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,0.5110192);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(13,0.2868249);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.06095142);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(15,0.2394103);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(18,0.04773763);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(20,0.07860647);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(115697);

   ci = TColor::GetColor("#ff99cc");
   VH_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_6 = new TH1D("VH_tagFirst_Aplanarity_stack_6","",50,0,1);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,93.83457);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,10.22973);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,2.526246);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(4,1.417453);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(5,0.4694419);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(6,0.2814468);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(7,0.1308765);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,3.653436);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,1.204021);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,0.5992628);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(4,0.4496428);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(5,0.2712681);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(6,0.1990374);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(7,0.1308765);
   VH_tagFirst_Aplanarity_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VH_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_7 = new TH1D("VH_tagFirst_Aplanarity_stack_7","",50,0,1);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,254.542);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,28.22822);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,4.776392);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,2.457285);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(5,1.163811);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(6,0.8266129);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(7,0.1287545);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(8,0.2257956);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,5.446484);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,1.818187);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,0.7400247);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,0.5381153);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(5,0.3688513);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(6,0.3137135);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(7,0.1287545);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(8,0.1598411);
   VH_tagFirst_Aplanarity_stack_7->SetEntries(2555);

   ci = TColor::GetColor("#3399ff");
   VH_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_8 = new TH1D("VH_tagFirst_Aplanarity_stack_8","",50,0,1);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,187.5177);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,24.27691);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,4.7084);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,2.077176);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(5,1.289866);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(6,1.203406);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(8,0.288156);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,6.982481);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,2.501886);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,1.103823);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,0.7354608);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(5,0.5769645);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(6,0.5440105);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(8,0.288156);
   VH_tagFirst_Aplanarity_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VH_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_9 = new TH1D("VH_tagFirst_Aplanarity_stack_9","",50,0,1);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,86.7926);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,9.078882);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,2.154702);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.617729);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.2847075);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.1453854);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.07480298);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.05364939);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.02431666);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.0204866);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.008212603);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.003939574);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.002934063);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(14,0.001291819);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.001229036);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(17,0.001476063);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(20,0.001549001);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.3465129);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.1120483);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.0545943);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.02916146);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.0197606);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.01417002);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.01000256);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.008502781);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.005755155);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.005331147);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.003360253);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(12,0.002275565);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(13,0.002076034);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(14,0.001291819);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(15,0.001229036);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(17,0.001476063);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(20,0.001549001);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(73002);

   ci = TColor::GetColor("#cccc00");
   VH_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_10 = new TH1D("VH_tagFirst_Aplanarity_stack_10","",50,0,1);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,44.21039);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,5.09456);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.225799);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.4099202);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.192645);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.08089326);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.05317172);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.02969547);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.01689063);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.01105641);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.004452144);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.003606244);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.00263412);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.000954419);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.0004852327);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.0009026533);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0002077244);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(18,0.0009125249);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.0004368684);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0004293356);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1395893);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.04736679);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.02321163);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.01342231);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.009189788);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.005945661);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.004801069);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.003618122);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.002709279);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.002176169);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.001393078);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.001232615);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.001076057);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.0006749263);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(15,0.0004852327);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.0006389029);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0002077244);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(18,0.0006456073);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0004368684);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0004293356);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(118631);

   ci = TColor::GetColor("#0000cc");
   VH_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_11 = new TH1D("VH_tagFirst_Aplanarity_stack_11","",50,0,1);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,2.188947);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.1963549);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.04866196);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.01676548);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.002668992);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.07764255);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.0232694);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.0115879);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(4,0.006853443);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(6,0.002668992);
   VH_tagFirst_Aplanarity_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VH_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_12 = new TH1D("VH_tagFirst_Aplanarity_stack_12","",50,0,1);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,1.021587);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.1141587);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.02564922);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.01157069);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.003104655);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.001324333);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.0007414068);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.001714208);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.0003829271);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.0003753905);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(14,0.0003753755);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01972512);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.006588393);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.00311403);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.002068001);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.001099109);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0006852809);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(7,0.0005243686);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.0008010238);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(9,0.0003829271);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(10,0.0003753905);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(14,0.0003753755);
   VH_tagFirst_Aplanarity_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VH_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_Aplanarity__379 = new TH1D("VH_tagFirst_Aplanarity__379","",50,0,1);
   VH_tagFirst_Aplanarity__379->SetBinContent(0,1);
   VH_tagFirst_Aplanarity__379->SetBinContent(1,2978539);
   VH_tagFirst_Aplanarity__379->SetBinContent(2,416209);
   VH_tagFirst_Aplanarity__379->SetBinContent(3,107485);
   VH_tagFirst_Aplanarity__379->SetBinContent(4,35881);
   VH_tagFirst_Aplanarity__379->SetBinContent(5,14115);
   VH_tagFirst_Aplanarity__379->SetBinContent(6,6576);
   VH_tagFirst_Aplanarity__379->SetBinContent(7,3546);
   VH_tagFirst_Aplanarity__379->SetBinContent(8,1960);
   VH_tagFirst_Aplanarity__379->SetBinContent(9,1143);
   VH_tagFirst_Aplanarity__379->SetBinContent(10,752);
   VH_tagFirst_Aplanarity__379->SetBinContent(11,432);
   VH_tagFirst_Aplanarity__379->SetBinContent(12,283);
   VH_tagFirst_Aplanarity__379->SetBinContent(13,188);
   VH_tagFirst_Aplanarity__379->SetBinContent(14,102);
   VH_tagFirst_Aplanarity__379->SetBinContent(15,84);
   VH_tagFirst_Aplanarity__379->SetBinContent(16,39);
   VH_tagFirst_Aplanarity__379->SetBinContent(17,24);
   VH_tagFirst_Aplanarity__379->SetBinContent(18,10);
   VH_tagFirst_Aplanarity__379->SetBinContent(19,11);
   VH_tagFirst_Aplanarity__379->SetBinContent(20,5);
   VH_tagFirst_Aplanarity__379->SetBinContent(21,2);
   VH_tagFirst_Aplanarity__379->SetEntries(3567436);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__379->SetLineColor(ci);
   VH_tagFirst_Aplanarity__379->SetLineWidth(2);
   VH_tagFirst_Aplanarity__379->SetMarkerStyle(20);
   VH_tagFirst_Aplanarity__379->SetMarkerSize(1.2);
   VH_tagFirst_Aplanarity__379->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__379->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__379->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__379->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__379->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__379->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__379->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__379->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__379->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__379->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_Aplanarity_fx1379[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1379[50] = { 2848147, 419997.8, 107090.4, 35370.89, 11488.56, 5738.431, 3072.393, 2214.615, 964.2304, 301.6246, 266.9882, 534.292, 163.5203, 46.46573, 52.81624, 9.427455, 18.38106,
   4.045636, 1.897247, 1.175439, 0.3082943, 0.07910851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1379[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1379[50] = { 43694.71, 27373.14, 5552.793, 2771.957, 1166.599, 870.9982, 517.4221, 553.6965, 257.3289, 40.67131, 50.73724, 295.9059, 42.61933, 10.9519, 22.56235, 0.9672389, 9.321646,
   0.7299413, 0.3642527, 0.395551, 0.1394358, 0.07910851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagFirst_Aplanarity_fx1379,Graph_from_VH_tagFirst_Aplanarity_fy1379,Graph_from_VH_tagFirst_Aplanarity_fex1379,Graph_from_VH_tagFirst_Aplanarity_fey1379);
   gre->SetName("Graph_from_VH_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_Aplanarity1379 = new TH1F("Graph_Graph_from_VH_tagFirst_Aplanarity1379","",100,0,1.1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetMinimum(0);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetMaximum(3181026);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_Aplanarity1379);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Aplanarity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagFirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__380 = new TH1D("data_mc_ratio__380","",50,0,1);
   data_mc_ratio__380->SetBinContent(1,1.045781);
   data_mc_ratio__380->SetBinContent(2,0.9909791);
   data_mc_ratio__380->SetBinContent(3,1.003685);
   data_mc_ratio__380->SetBinContent(4,1.014422);
   data_mc_ratio__380->SetBinContent(5,1.228614);
   data_mc_ratio__380->SetBinContent(6,1.145958);
   data_mc_ratio__380->SetBinContent(7,1.154149);
   data_mc_ratio__380->SetBinContent(8,0.8850296);
   data_mc_ratio__380->SetBinContent(9,1.185401);
   data_mc_ratio__380->SetBinContent(10,2.493165);
   data_mc_ratio__380->SetBinContent(11,1.618049);
   data_mc_ratio__380->SetBinContent(12,0.5296729);
   data_mc_ratio__380->SetBinContent(13,1.149704);
   data_mc_ratio__380->SetBinContent(14,2.195166);
   data_mc_ratio__380->SetBinContent(15,1.59042);
   data_mc_ratio__380->SetBinContent(16,4.136853);
   data_mc_ratio__380->SetBinContent(17,1.305692);
   data_mc_ratio__380->SetBinContent(18,2.471799);
   data_mc_ratio__380->SetBinContent(19,5.797875);
   data_mc_ratio__380->SetBinContent(20,4.25373);
   data_mc_ratio__380->SetBinContent(21,6.487309);
   data_mc_ratio__380->SetBinError(1,0.0006059534);
   data_mc_ratio__380->SetBinError(2,0.001536062);
   data_mc_ratio__380->SetBinError(3,0.003061424);
   data_mc_ratio__380->SetBinError(4,0.005355331);
   data_mc_ratio__380->SetBinError(5,0.01034129);
   data_mc_ratio__380->SetBinError(6,0.01413148);
   data_mc_ratio__380->SetBinError(7,0.01938173);
   data_mc_ratio__380->SetBinError(8,0.01999078);
   data_mc_ratio__380->SetBinError(9,0.03506245);
   data_mc_ratio__380->SetBinError(10,0.09091638);
   data_mc_ratio__380->SetBinError(11,0.07784842);
   data_mc_ratio__380->SetBinError(12,0.03148579);
   data_mc_ratio__380->SetBinError(13,0.08385079);
   data_mc_ratio__380->SetBinError(14,0.2173538);
   data_mc_ratio__380->SetBinError(15,0.173529);
   data_mc_ratio__380->SetBinError(16,0.6624267);
   data_mc_ratio__380->SetBinError(17,0.2665232);
   data_mc_ratio__380->SetBinError(18,0.7816516);
   data_mc_ratio__380->SetBinError(19,1.748125);
   data_mc_ratio__380->SetBinError(20,1.902326);
   data_mc_ratio__380->SetBinError(21,4.58722);
   data_mc_ratio__380->SetMinimum(0.4);
   data_mc_ratio__380->SetMaximum(1.6);
   data_mc_ratio__380->SetEntries(44.36382);
   data_mc_ratio__380->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__380->SetLineColor(ci);
   data_mc_ratio__380->SetLineWidth(2);
   data_mc_ratio__380->SetMarkerStyle(20);
   data_mc_ratio__380->SetMarkerSize(1.2);
   data_mc_ratio__380->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__380->GetXaxis()->SetRange(1,50);
   data_mc_ratio__380->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__380->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__380->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__380->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__380->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__380->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__380->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__380->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__380->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__380->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__380->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__380->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__380->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__380->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__380->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__380->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1380[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1380[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1380[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1380[50] = { 0.01534145, 0.06517448, 0.05185146, 0.07836832, 0.1015444, 0.1517833, 0.1684101, 0.2500193, 0.2668749, 0.1348408, 0.1900355, 0.553828, 0.2606362, 0.2356984, 0.4271858, 0.1025981, 0.5071332,
   0.1804268, 0.1919902, 0.3365135, 0.4522817, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1380,Graph_from_mc_statistical_error_fy1380,Graph_from_mc_statistical_error_fex1380,Graph_from_mc_statistical_error_fey1380);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1380 = new TH1F("Graph_Graph_from_mc_statistical_error1380","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1380->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1380->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1380->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1380->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1380->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1380->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1380->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1380->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1380);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_16->cd();
   Aplanarity_tagFirst_16->Modified();
   Aplanarity_tagFirst_16->cd();
   Aplanarity_tagFirst_16->SetSelected(Aplanarity_tagFirst_16);
}
