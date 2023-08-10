void Aplanarity_tags_all()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Thu Aug 10 12:27:55 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.1532254,-1429.987,1.052419,1428857);
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
   st->SetMaximum(1224598);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0.3);
   st_stack_64->SetMaximum(1285828);
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
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,493390.5);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,77521.18);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,15070.67);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,6393.942);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,1991.402);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,653.3438);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,319.5617);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,152.9508);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,421.8361);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,71.72109);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,66.75387);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,54.13131);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,18146.37);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,15476.63);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,1654.968);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,1173.13);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,604.8008);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,111.6723);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,79.33306);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,41.884);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,275.1007);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,39.65724);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,34.01401);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,38.88932);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(30262);

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
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,2483.534);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,331.3985);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,96.8113);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,35.40302);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,18.99077);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,6.538303);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,5.90489);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,2.386304);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,1.159123);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,1.029317);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,0.2529883);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,0.6091034);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,0.24899);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,0.3695505);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,0.04860075);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,19.99787);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,7.110382);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,3.897888);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,2.34699);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,1.851684);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,0.8492128);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,1.048355);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,0.4848073);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,0.4155643);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,0.4082466);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,0.113439);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,0.2933862);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,0.1117762);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,0.278301);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,0.04860075);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(36361);

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
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(1,47579.67);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(2,6875.596);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(3,1884.28);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(4,697.0797);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(5,319.9558);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(6,156.6209);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(7,90.32517);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(8,51.40979);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(9,32.18843);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(10,19.83521);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(11,11.75341);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(12,8.279386);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(13,5.732696);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(14,3.366558);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(15,2.642011);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(16,1.568754);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(17,0.708842);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(18,0.9486313);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(19,0.277264);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(20,0.232949);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(1,54.44934);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(2,20.64464);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(3,10.7921);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(4,6.558116);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(5,4.442512);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(6,3.106102);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(7,2.372728);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(8,1.772748);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(9,1.415612);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(10,1.105694);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(11,0.8528304);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(12,0.7210309);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(13,0.5995671);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(14,0.4616631);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(15,0.4101031);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(16,0.3137072);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(17,0.2159745);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(18,0.2480178);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(19,0.1386397);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(20,0.1186366);
   VbbHcc_tags_Aplanarity_all_stack_3->SetEntries(965144);

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
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(1,6615.938);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(2,757.8432);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(3,189.9724);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(4,56.32537);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(5,26.02033);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(6,14.07385);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(7,8.255132);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(8,4.436512);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(9,4.262076);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(10,2.549607);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(11,0.4175459);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(12,0.6849953);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(13,0.520098);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(14,0.066575);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(15,0.2846611);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(16,0.2008743);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(1,57.13923);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(2,22.89871);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(3,11.39801);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(4,3.389373);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(5,2.356149);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(6,1.697324);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(7,1.243404);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(8,0.8360582);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(9,1.089249);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(10,0.7210765);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(11,0.1939489);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(12,0.2496945);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(13,0.2166874);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(14,0.066575);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(15,0.1696671);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(16,0.1424744);
   VbbHcc_tags_Aplanarity_all_stack_4->SetEntries(50664);

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
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(1,655.6284);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(2,65.89063);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(3,17.87827);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(4,8.00345);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(5,2.08797);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(6,2.477276);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(7,0.8121389);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(8,7.134775);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(9,0.1886061);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(10,0.2594997);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(11,0.1417138);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(1,23.39972);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(2,6.295055);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(3,2.58821);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(4,2.286643);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(5,0.5173899);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(6,1.157212);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(7,0.3627453);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(8,6.633039);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(9,0.1767873);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(10,0.2594997);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(11,0.0934662);
   VbbHcc_tags_Aplanarity_all_stack_5->SetEntries(8033);

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
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(1,4.278718);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(2,0.5840445);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(1,1.173685);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(2,0.3681413);
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
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(1,7.758916);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(2,0.6424818);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(3,0.1090586);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(8,0.1090586);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(1,1.313954);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(2,0.3675584);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(3,0.1090586);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(8,0.1090586);
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
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(1,137.841);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(2,9.227732);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(3,1.505469);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(4,2.02809);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(5,0.2532256);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(6,0.2794144);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(12,0.2794144);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(1,6.009582);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(2,1.54056);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(3,0.6154628);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(4,0.7183429);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(5,0.2532256);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(6,0.2794144);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(12,0.2794144);
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
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(1,134.9487);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(2,10.05338);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(3,1.757613);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(4,0.6195407);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(5,0.2680277);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(6,0.1648037);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(7,0.07403618);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(8,0.05446146);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(9,0.03278186);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(10,0.01512125);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(11,0.0128681);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(12,0.007131129);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(13,0.001615117);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(14,0.002285779);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(16,0.001615117);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(17,0.002747902);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(1,0.4977641);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(2,0.1347406);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(3,0.05637076);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(4,0.03365357);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(5,0.02248033);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(6,0.01708901);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(7,0.01171624);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(8,0.009475548);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(9,0.007713212);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(10,0.005467341);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(11,0.00461762);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(12,0.00361256);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(13,0.001615117);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(14,0.002285779);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(16,0.001615117);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(17,0.00194306);
   VbbHcc_tags_Aplanarity_all_stack_9->SetEntries(84585);

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
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(1,58.53059);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(2,6.195263);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(3,1.435888);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(4,0.5406825);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(5,0.1998472);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(6,0.1067677);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(7,0.07117845);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(8,0.03422041);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(9,0.03148278);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(10,0.01916343);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(11,0.006844082);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(12,0.005475266);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(13,0.006844082);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(14,0.002737633);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(15,0.001368816);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(16,0.001368816);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(17,0.001368816);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(18,0.004106449);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(1,0.1674192);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(2,0.05446827);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(3,0.0262225);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(4,0.01609107);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(5,0.00978279);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(6,0.007150454);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(7,0.005838321);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(8,0.004048147);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(9,0.003882846);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(10,0.003029356);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(11,0.001810386);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(12,0.001619259);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(13,0.001810386);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(14,0.001144989);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(15,0.0008096295);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(16,0.0008096295);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(17,0.0008096295);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(18,0.001402319);
   VbbHcc_tags_Aplanarity_all_stack_10->SetEntries(147270);

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
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(1,0.3719334);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(2,0.02721507);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(3,0.00659102);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(4,0.002275762);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(6,0.003160502);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(1,0.02836108);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(2,0.007460191);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(3,0.003893142);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(4,0.002275762);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(6,0.002234813);
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
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(1,0.1667357);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(2,0.01786806);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(3,0.003815715);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(4,0.001729057);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(5,0.0009565794);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(6,0.0002076057);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(8,0.0006569226);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(12,0.0002076057);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(1,0.006902246);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(2,0.002245913);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(3,0.001044264);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(4,0.0007218493);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(5,0.0005542809);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(6,0.0002076057);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(8,0.0004662972);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(12,0.0002076057);
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
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(1,404242);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(2,51365);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(3,13714);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(4,4958);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(5,2253);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(6,1170);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(7,609);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(8,374);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(9,226);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(10,133);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(11,97);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(12,59);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(13,46);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(14,25);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(15,20);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(16,10);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(17,8);
   VbbHcc_tags_Aplanarity_all__175->SetBinContent(20,2);
   VbbHcc_tags_Aplanarity_all__175->SetEntries(479360);

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
   551069.1,
   85578.66,
   17264.43,
   7193.946,
   2359.179,
   833.6084,
   425.0043,
   218.5166,
   459.6986,
   95.42901,
   79.33924,
   9.865713,
   6.510243,
   3.807707,
   57.05935,
   1.772612,
   0.7615594,
   0.9527378,
   0.277264,
   0.232949,
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
   18146.57,
   15476.66,
   1655.049,
   1173.158,
   604.8248,
   111.738,
   79.38603,
   42.45415,
   275.1069,
   39.68215,
   34.02557,
   0.8639424,
   0.6472511,
   0.5431603,
   38.89186,
   0.3445496,
   0.2213853,
   0.2480218,
   0.1386397,
   0.1186366,
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
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetMaximum(626137.3);
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
   data_mc_ratio__176->SetBinContent(1,0.7335595);
   data_mc_ratio__176->SetBinContent(2,0.6002081);
   data_mc_ratio__176->SetBinContent(3,0.7943499);
   data_mc_ratio__176->SetBinContent(4,0.6891906);
   data_mc_ratio__176->SetBinContent(5,0.9549932);
   data_mc_ratio__176->SetBinContent(6,1.403537);
   data_mc_ratio__176->SetBinContent(7,1.432927);
   data_mc_ratio__176->SetBinContent(8,1.71154);
   data_mc_ratio__176->SetBinContent(9,0.4916264);
   data_mc_ratio__176->SetBinContent(10,1.393706);
   data_mc_ratio__176->SetBinContent(11,1.222598);
   data_mc_ratio__176->SetBinContent(12,5.980308);
   data_mc_ratio__176->SetBinContent(13,7.065789);
   data_mc_ratio__176->SetBinContent(14,6.565631);
   data_mc_ratio__176->SetBinContent(15,0.3505122);
   data_mc_ratio__176->SetBinContent(16,5.641393);
   data_mc_ratio__176->SetBinContent(17,10.50476);
   data_mc_ratio__176->SetBinContent(20,8.585571);
   data_mc_ratio__176->SetBinError(1,0.001153758);
   data_mc_ratio__176->SetBinError(2,0.002648306);
   data_mc_ratio__176->SetBinError(3,0.006783125);
   data_mc_ratio__176->SetBinError(4,0.009787823);
   data_mc_ratio__176->SetBinError(5,0.02011962);
   data_mc_ratio__176->SetBinError(6,0.04103277);
   data_mc_ratio__176->SetBinError(7,0.05806512);
   data_mc_ratio__176->SetBinError(8,0.08850165);
   data_mc_ratio__176->SetBinError(9,0.0327025);
   data_mc_ratio__176->SetBinError(10,0.1208496);
   data_mc_ratio__176->SetBinError(11,0.124136);
   data_mc_ratio__176->SetBinError(12,0.7785697);
   data_mc_ratio__176->SetBinError(13,1.041794);
   data_mc_ratio__176->SetBinError(14,1.313126);
   data_mc_ratio__176->SetBinError(15,0.07837691);
   data_mc_ratio__176->SetBinError(16,1.783965);
   data_mc_ratio__176->SetBinError(17,3.713994);
   data_mc_ratio__176->SetBinError(20,6.070916);
   data_mc_ratio__176->SetMinimum(0.4);
   data_mc_ratio__176->SetMaximum(1.6);
   data_mc_ratio__176->SetEntries(35.13227);
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
   0.03292975,
   0.1808472,
   0.0958647,
   0.1630757,
   0.2563709,
   0.1340413,
   0.1867888,
   0.1942834,
   0.5984505,
   0.415829,
   0.4288617,
   0.08757019,
   0.09942042,
   0.1426476,
   0.6816035,
   0.194374,
   0.2906999,
   0.2603253,
   0.5000277,
   0.5092814,
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
   Graph_Graph_from_mc_statistical_error1128->SetMinimum(0.1820758);
   Graph_Graph_from_mc_statistical_error1128->SetMaximum(1.817924);
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
