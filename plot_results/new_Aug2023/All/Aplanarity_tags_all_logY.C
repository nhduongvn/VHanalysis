void Aplanarity_tags_all_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Tue Aug 22 09:16:31 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.1532254,-1.419555,1.052419,14.85064);
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
   st->SetMaximum(4.601115e+12);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0.03951075);
   st_stack_64->SetMaximum(1.673494e+13);
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
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,444662.1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,75401.5);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,14069.36);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,6118.988);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,1951.489);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,554.0946);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,257.0183);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,139.6644);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,281.7178);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,73.01908);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,41.59269);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,55.66346);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,19159.08);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,20939.63);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,1611.24);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,1236.154);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,633.3737);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,110.5562);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,75.8112);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,43.24954);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,151.3987);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,43.39662);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,25.52601);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,40.01365);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(27568);

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
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,2168.892);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,283.4564);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,83.71394);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,31.69574);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,17.14219);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,5.349247);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,5.268093);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,1.988102);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,1.100145);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,1.09774);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,0.2107139);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,0.4092055);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,0.1910912);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,0.2945352);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,-0.05354825);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,19.72127);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,6.958829);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,3.81973);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,2.261721);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,1.876605);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,0.8557436);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,0.9762361);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,0.5477239);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,0.4378439);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,0.4726285);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,0.1075158);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,0.2278546);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,0.08901233);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,0.2034864);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,0.05354825);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(34548);

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
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(1,45159.02);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(2,6464.503);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(3,1779.781);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(4,657.0297);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(5,305.2279);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(6,146.345);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(7,84.68013);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(8,48.40206);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(9,29.66423);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(10,18.13356);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(11,11.492);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(12,7.745164);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(13,5.586395);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(14,3.041206);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(15,2.346291);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(16,1.198439);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(17,0.6874392);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(18,1.010953);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(19,0.2945471);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(20,0.2160227);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(1,57.55801);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(2,21.22596);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(3,11.88411);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(4,6.84536);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(5,4.638327);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(6,3.127141);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(7,2.394978);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(8,1.803584);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(9,1.413699);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(10,1.106583);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(11,0.878522);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(12,0.7255501);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(13,0.62587);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(14,0.4522207);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(15,0.3960455);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(16,0.2753865);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(17,0.2287374);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(18,0.2793469);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(19,0.1480894);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(20,0.1248593);
   VbbHcc_tags_Aplanarity_all_stack_3->SetEntries(905703);

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
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(1,6292.454);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(2,705.8697);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(3,182.0836);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(4,54.31339);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(5,25.6767);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(6,13.37052);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(7,8.29798);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(8,4.196497);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(9,3.932886);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(10,3.316645);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(11,0.3320741);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(12,0.689608);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(13,0.4922258);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(14,0.05725555);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(15,0.3238602);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(16,0.2031227);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(1,56.85993);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(2,20.44318);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(3,10.84877);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(4,3.513715);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(5,2.398047);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(6,1.674436);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(7,1.262857);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(8,0.8294147);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(9,1.046481);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(10,1.254374);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(11,0.1740901);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(12,0.2544248);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(13,0.2065468);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(14,0.05725555);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(15,0.2054089);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(16,0.1439306);
   VbbHcc_tags_Aplanarity_all_stack_4->SetEntries(49827);

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
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(1,625.8253);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(2,62.83892);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(3,17.00231);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(4,7.616644);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(5,1.928739);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(6,1.831791);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(7,0.4789219);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(8,5.487157);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(9,0.1421382);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(10,0.2878642);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(11,0.1478289);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(1,22.74261);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(2,6.434001);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(3,2.54943);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(4,2.760811);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(5,0.5158392);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(6,0.7915286);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(7,0.2294373);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(8,5.111446);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(9,0.1232132);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(10,0.2878642);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(11,0.1051671);
   VbbHcc_tags_Aplanarity_all_stack_5->SetEntries(7212);

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
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(1,3.260667);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(2,0.4184566);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(1,1.020581);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(2,0.3198122);
   VbbHcc_tags_Aplanarity_all_stack_6->SetEntries(17);

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
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(1,5.819248);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(2,0.5732676);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(3,0.09132081);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(8,0.07873842);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(1,1.115772);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(2,0.3360766);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(3,0.09132081);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(8,0.07873842);
   VbbHcc_tags_Aplanarity_all_stack_7->SetEntries(52);

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
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(1,129.3363);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(2,7.855512);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(3,0.9873429);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(4,1.744238);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(5,0.301082);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(6,0.3451496);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(12,0.315662);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(1,5.910642);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(2,1.400804);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(3,0.4481853);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(4,0.6736083);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(5,0.301082);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(6,0.3451496);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(12,0.315662);
   VbbHcc_tags_Aplanarity_all_stack_8->SetEntries(564);

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
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(1,123.7633);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(2,9.094437);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(3,1.63338);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(4,0.560196);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(5,0.2683514);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(6,0.1576075);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(7,0.06830751);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(8,0.04885822);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(9,0.03133491);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(10,0.01458146);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(11,0.01210976);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(12,0.007823434);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(13,0.001763864);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(14,0.004050044);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(16,0.001926296);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(17,0.002217832);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(1,0.565277);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(2,0.1437155);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(3,0.06012022);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(4,0.0347072);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(5,0.02530335);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(6,0.01803314);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(7,0.01224665);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(8,0.009268726);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(9,0.008059504);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(10,0.005960472);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(11,0.004840399);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(12,0.004094347);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(13,0.001763864);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(14,0.004050044);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(16,0.001926296);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(17,0.001568797);
   VbbHcc_tags_Aplanarity_all_stack_9->SetEntries(79284);

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
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(1,44.89712);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(2,4.678867);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(3,1.092161);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(4,0.4330634);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(5,0.1600932);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(6,0.07988069);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(7,0.05691944);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(8,0.0300737);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(9,0.02456484);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(10,0.0171277);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(11,0.005378606);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(12,0.005343849);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(13,0.006451073);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(14,0.002828118);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(15,0.001287689);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(16,0.001355669);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(17,0.001343052);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(18,0.003004802);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(1,0.1420461);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(2,0.045351);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(3,0.02214704);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(4,0.01396377);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(5,0.008551401);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(6,0.006045976);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(7,0.005111048);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(8,0.003724871);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(9,0.003351979);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(10,0.002823942);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(11,0.001609892);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(12,0.001582656);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(13,0.001707007);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(14,0.001183338);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(15,0.0007616442);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(16,0.000801853);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(17,0.0007943904);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(18,0.001257831);
   VbbHcc_tags_Aplanarity_all_stack_10->SetEntries(122844);

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
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(1,0.3480582);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(2,0.02658013);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(3,0.00562921);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(4,0.002203227);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(6,0.003897057);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(1,0.02685818);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(2,0.007500562);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(3,0.003356757);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(4,0.002203227);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(6,0.002759449);
   VbbHcc_tags_Aplanarity_all_stack_11->SetEntries(200);

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
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(1,0.1594291);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(2,0.01689903);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(3,0.003600722);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(4,0.001779761);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(5,0.0009297337);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(6,0.0001034089);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(8,0.0004007274);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(12,0.0002685477);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(1,0.006719956);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(2,0.002164365);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(3,0.0009881983);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(4,0.0007344774);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(5,0.0005499339);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(6,0.0001034089);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(8,0.000312917);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(12,0.0002685477);
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
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(1,392177);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(2,49776);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(3,13293);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(4,4770);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(5,2165);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(6,1127);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(7,590);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(8,365);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(9,217);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(10,127);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(11,96);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(12,57);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(13,45);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(14,24);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(15,19);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(16,9);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(17,8);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(20,2);
   VbbHcc_tags_Aplanarity_all__175->SetEntries(464916);

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
   499215.9,
   82940.83,
   16135.75,
   6872.385,
   2302.195,
   721.5778,
   355.8687,
   199.8963,
   316.6131,
   95.88659,
   53.79279,
   9.173075,
   6.277927,
   3.399875,
   58.3349,
   1.404844,
   0.6374518,
   1.013958,
   0.2945471,
   0.2160227,
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
   19159.27,
   20939.65,
   1611.327,
   1236.183,
   633.3983,
   110.6198,
   75.86616,
   43.59927,
   151.4096,
   43.43237,
   25.54216,
   0.8618205,
   0.6650595,
   0.4992056,
   40.01614,
   0.310738,
   0.2349283,
   0.2793498,
   0.1480894,
   0.1248593,
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
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetMinimum(570.2126);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetMaximum(570212.6);
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
   data_mc_ratio__176->SetBinContent(1,0.785586);
   data_mc_ratio__176->SetBinContent(2,0.6001386);
   data_mc_ratio__176->SetBinContent(3,0.8238226);
   data_mc_ratio__176->SetBinContent(4,0.6940822);
   data_mc_ratio__176->SetBinContent(5,0.9404068);
   data_mc_ratio__176->SetBinContent(6,1.561855);
   data_mc_ratio__176->SetBinContent(7,1.657915);
   data_mc_ratio__176->SetBinContent(8,1.825947);
   data_mc_ratio__176->SetBinContent(9,0.6853792);
   data_mc_ratio__176->SetBinContent(10,1.324481);
   data_mc_ratio__176->SetBinContent(11,1.784626);
   data_mc_ratio__176->SetBinContent(12,6.213837);
   data_mc_ratio__176->SetBinContent(13,7.167972);
   data_mc_ratio__176->SetBinContent(14,7.059083);
   data_mc_ratio__176->SetBinContent(15,0.3257055);
   data_mc_ratio__176->SetBinContent(16,6.406407);
   data_mc_ratio__176->SetBinContent(17,12.54997);
   data_mc_ratio__176->SetBinContent(20,9.258287);
   data_mc_ratio__176->SetBinError(1,0.001254448);
   data_mc_ratio__176->SetBinError(2,0.002689934);
   data_mc_ratio__176->SetBinError(3,0.007145329);
   data_mc_ratio__176->SetBinError(4,0.01004967);
   data_mc_ratio__176->SetBinError(5,0.02021095);
   data_mc_ratio__176->SetBinError(6,0.04652419);
   data_mc_ratio__176->SetBinError(7,0.06825528);
   data_mc_ratio__176->SetBinError(8,0.09557441);
   data_mc_ratio__176->SetBinError(9,0.04652657);
   data_mc_ratio__176->SetBinError(10,0.1175287);
   data_mc_ratio__176->SetBinError(11,0.1821426);
   data_mc_ratio__176->SetBinError(12,0.8230429);
   data_mc_ratio__176->SetBinError(13,1.068538);
   data_mc_ratio__176->SetBinError(14,1.440929);
   data_mc_ratio__176->SetBinError(15,0.07472198);
   data_mc_ratio__176->SetBinError(16,2.135469);
   data_mc_ratio__176->SetBinError(17,4.437084);
   data_mc_ratio__176->SetBinError(20,6.546597);
   data_mc_ratio__176->SetMinimum(0.4);
   data_mc_ratio__176->SetMaximum(1.6);
   data_mc_ratio__176->SetEntries(29.99168);
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
   0.03837874,
   0.2524649,
   0.09986064,
   0.1798769,
   0.275128,
   0.1533026,
   0.2131858,
   0.2181094,
   0.4782164,
   0.4529556,
   0.4748249,
   0.09395109,
   0.1059362,
   0.1468306,
   0.6859725,
   0.2211904,
   0.3685428,
   0.2755042,
   0.5027699,
   0.5779916,
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
   Graph_Graph_from_mc_statistical_error1128->SetMinimum(0.176833);
   Graph_Graph_from_mc_statistical_error1128->SetMaximum(1.823167);
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
