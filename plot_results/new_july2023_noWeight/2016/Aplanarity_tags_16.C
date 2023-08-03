void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug  3 10:21:05 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(0,0,1,1);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-408.5508,1.052419,408152.2);
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
   st->SetMaximum(349805.8);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(0.01);
   st_stack_61->SetMaximum(367296.1);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetRange(1,50);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetLabelSize(0.035);
   st_stack_61->GetXaxis()->SetTitleSize(0.035);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Events/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetLabelSize(0.05);
   st_stack_61->GetYaxis()->SetTitleSize(0.057);
   st_stack_61->GetYaxis()->SetTitleOffset(1.2);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetLabelSize(0.035);
   st_stack_61->GetZaxis()->SetTitleSize(0.035);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,143551.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,24307.81);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,3569.255);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,901.7602);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,154.7571);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,116.3609);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,118.3438);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,50.63004);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,50.47269);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,4.635333);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,28.08319);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,22.20356);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,6520.162);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,3641.943);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,774.4516);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,288.8914);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,39.48014);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,36.88011);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,46.08509);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,25.38476);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,31.94684);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,3.596129);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,22.96885);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,22.20356);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9717);

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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,616.3951);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,80.97272);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,22.50463);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,9.917334);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,3.655138);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,1.625842);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,2.239965);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.4145816);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.453798);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.04373405);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.09445983);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.04373405);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,9.829717);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,3.450302);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,1.776457);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.275778);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.7227649);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.3635431);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.6752446);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1385472);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.2813042);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.04373405);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.06697591);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.04373405);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(9491);

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
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,11276.08);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,1684.493);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,458.1392);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,166.7016);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,76.93657);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,38.53233);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,23.15818);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,11.07834);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,7.635241);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,4.037399);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,3.166912);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,1.607094);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,1.155157);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.8975848);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.8403192);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.1176016);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.1392898);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.1872465);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.06964491);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,26.64654);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,10.28469);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,5.353305);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,3.23256);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,2.183997);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,1.549867);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.207412);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,0.8254284);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.6914531);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.5048567);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.4429273);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.3200222);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.2578314);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.2365797);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2353798);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.0845592);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.09849278);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.1095476);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.06964491);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(225965);

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
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,1708.185);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,221.8065);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,53.33612);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,14.22057);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,6.549449);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,2.866838);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,2.410239);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.29515);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.4894803);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.3446026);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.066575);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.13315);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.07830265);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(14,0.066575);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,31.76809);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,14.88092);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,7.04754);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.47721);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.079765);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.618287);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.6370964);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.4591038);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.1855364);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.1544676);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.066575);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.09415127);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.07830265);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(14,0.066575);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(14953);

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
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,167.4561);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,15.73612);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,3.143516);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,1.018129);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.7561472);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,1.372104);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.2183042);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.01555441);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,11.19006);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,2.444018);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.131958);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,0.2640685);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.2915667);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,1.043034);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.160038);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.01099863);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(3420);

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
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,1.209324);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(2,0.2687386);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,0.4031079);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(2,0.1900269);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(11);

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
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,4.689521);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,0.3271759);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,0.1090586);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(8,0.1090586);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,0.7151453);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,0.1888951);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.1090586);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(8,0.1090586);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(48);

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
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,36.23787);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,3.648107);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,0.9728286);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,1.216036);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,2.968722);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,0.9419372);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.4864143);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.5438277);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(173);

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
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,35.37099);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,2.949872);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.5207273);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.1648741);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.06182779);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.04534038);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.02198321);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.01786136);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01099161);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.002747902);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.004121852);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(17,0.002747902);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.2204495);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.06366301);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.02674797);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.01505088);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.009216742);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.007892746);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.005495803);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.00495385);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.00388612);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.00194306);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002379753);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(17,0.00194306);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(28512);

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
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,15.31006);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.620517);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.3755905);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1414283);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.05227475);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.0279276);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.0186184);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.008951155);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.008235063);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.005012647);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.001790231);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.001432185);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.001790231);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.0007160924);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0003580462);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0003580462);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0003580462);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001074139);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.07403855);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02408776);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.0115965);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.007116028);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.004326289);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.003162178);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.002581908);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.001790231);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.001717129);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001339686);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.0008006157);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.0007160924);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0008006157);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0005063538);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0003580462);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0003580462);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0003580462);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0006201542);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(49090);

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
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,0.09025525);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.005470015);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.002735007);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.01571142);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.003867885);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.002735007);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(36);

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
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.03929924);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.003572658);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.001071798);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.0007145317);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(5,0.0003572658);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(8,0.0003572658);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.003747036);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.001129774);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.0006188026);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.0005052502);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(5,0.0003572658);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(8,0.0003572658);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(127);

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
   
   TH1D *VbbHcc_tags_Aplanarity__121 = new TH1D("VbbHcc_tags_Aplanarity__121","",50,0,1);
   VbbHcc_tags_Aplanarity__121->SetBinContent(1,81265);
   VbbHcc_tags_Aplanarity__121->SetBinContent(2,10106);
   VbbHcc_tags_Aplanarity__121->SetBinContent(3,2907);
   VbbHcc_tags_Aplanarity__121->SetBinContent(4,1086);
   VbbHcc_tags_Aplanarity__121->SetBinContent(5,532);
   VbbHcc_tags_Aplanarity__121->SetBinContent(6,257);
   VbbHcc_tags_Aplanarity__121->SetBinContent(7,152);
   VbbHcc_tags_Aplanarity__121->SetBinContent(8,80);
   VbbHcc_tags_Aplanarity__121->SetBinContent(9,70);
   VbbHcc_tags_Aplanarity__121->SetBinContent(10,33);
   VbbHcc_tags_Aplanarity__121->SetBinContent(11,20);
   VbbHcc_tags_Aplanarity__121->SetBinContent(12,17);
   VbbHcc_tags_Aplanarity__121->SetBinContent(13,9);
   VbbHcc_tags_Aplanarity__121->SetBinContent(14,4);
   VbbHcc_tags_Aplanarity__121->SetBinContent(15,4);
   VbbHcc_tags_Aplanarity__121->SetBinContent(16,1);
   VbbHcc_tags_Aplanarity__121->SetBinContent(17,2);
   VbbHcc_tags_Aplanarity__121->SetEntries(96594);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__121->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__121->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__121->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__121->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__121->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__121->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__121->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__121->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__121->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__121->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__121->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__121->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__121->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__121->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__121->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__121->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__121->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__121->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__121->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1121[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1121[50] = {
   157412.6,
   26319.64,
   4108.36,
   1095.141,
   242.7689,
   160.8313,
   146.4111,
   63.55434,
   59.07044,
   9.06883,
   31.4326,
   1.741676,
   1.278984,
   0.9648759,
   23.04424,
   0.1179597,
   0.1423958,
   0.1883207,
   0.06964491,
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
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1121[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1121[50] = {
   6520.312,
   3641.991,
   774.5052,
   288.9167,
   39.56292,
   36.93436,
   46.11053,
   25.40294,
   31.9561,
   3.634941,
   22.97332,
   0.3335854,
   0.2729865,
   0.2457691,
   22.20481,
   0.08455996,
   0.09851259,
   0.1095493,
   0.06964491,
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1121,Graph_from_VbbHcc_tags_Aplanarity_fy1121,Graph_from_VbbHcc_tags_Aplanarity_fex1121,Graph_from_VbbHcc_tags_Aplanarity_fey1121);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1121 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1121","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetMaximum(180326.2);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1121);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__122 = new TH1D("data_mc_ratio__122","",50,0,1);
   data_mc_ratio__122->SetBinContent(1,0.5162547);
   data_mc_ratio__122->SetBinContent(2,0.3839718);
   data_mc_ratio__122->SetBinContent(3,0.7075816);
   data_mc_ratio__122->SetBinContent(4,0.9916533);
   data_mc_ratio__122->SetBinContent(5,2.191385);
   data_mc_ratio__122->SetBinContent(6,1.597948);
   data_mc_ratio__122->SetBinContent(7,1.038173);
   data_mc_ratio__122->SetBinContent(8,1.258765);
   data_mc_ratio__122->SetBinContent(9,1.185026);
   data_mc_ratio__122->SetBinContent(10,3.638838);
   data_mc_ratio__122->SetBinContent(11,0.636282);
   data_mc_ratio__122->SetBinContent(12,9.760712);
   data_mc_ratio__122->SetBinContent(13,7.036836);
   data_mc_ratio__122->SetBinContent(14,4.145611);
   data_mc_ratio__122->SetBinContent(15,0.1735792);
   data_mc_ratio__122->SetBinContent(16,8.477475);
   data_mc_ratio__122->SetBinContent(17,14.04536);
   data_mc_ratio__122->SetBinError(1,0.001810974);
   data_mc_ratio__122->SetBinError(2,0.003819528);
   data_mc_ratio__122->SetBinError(3,0.01312363);
   data_mc_ratio__122->SetBinError(4,0.03009158);
   data_mc_ratio__122->SetBinError(5,0.09500858);
   data_mc_ratio__122->SetBinError(6,0.09967726);
   data_mc_ratio__122->SetBinError(7,0.08420695);
   data_mc_ratio__122->SetBinError(8,0.1407342);
   data_mc_ratio__122->SetBinError(9,0.1416377);
   data_mc_ratio__122->SetBinError(10,0.6334404);
   data_mc_ratio__122->SetBinError(11,0.142277);
   data_mc_ratio__122->SetBinError(12,2.36732);
   data_mc_ratio__122->SetBinError(13,2.345612);
   data_mc_ratio__122->SetBinError(14,2.072805);
   data_mc_ratio__122->SetBinError(15,0.0867896);
   data_mc_ratio__122->SetBinError(16,8.477475);
   data_mc_ratio__122->SetBinError(17,9.93157);
   data_mc_ratio__122->SetMinimum(0.4);
   data_mc_ratio__122->SetMaximum(1.6);
   data_mc_ratio__122->SetEntries(10.17689);
   data_mc_ratio__122->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__122->SetLineColor(ci);
   data_mc_ratio__122->SetLineWidth(2);
   data_mc_ratio__122->SetMarkerStyle(20);
   data_mc_ratio__122->SetMarkerSize(1.2);
   data_mc_ratio__122->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__122->GetXaxis()->SetRange(1,50);
   data_mc_ratio__122->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__122->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__122->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__122->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__122->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__122->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__122->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__122->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__122->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__122->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__122->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__122->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__122->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__122->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__122->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__122->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__122->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1122[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1122[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1122[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
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
   Double_t Graph_from_mc_statistical_error_fey1122[50] = {
   0.04142178,
   0.1383754,
   0.1885193,
   0.263817,
   0.1629654,
   0.2296467,
   0.3149388,
   0.3997043,
   0.540983,
   0.400817,
   0.7308754,
   0.1915312,
   0.2134402,
   0.2547157,
   0.9635731,
   0.7168549,
   0.6918225,
   0.581717,
   1,
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
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1122,Graph_from_mc_statistical_error_fy1122,Graph_from_mc_statistical_error_fex1122,Graph_from_mc_statistical_error_fey1122);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1122 = new TH1F("Graph_Graph_from_mc_statistical_error1122","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1122->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1122->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1122->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1122->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1122);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
