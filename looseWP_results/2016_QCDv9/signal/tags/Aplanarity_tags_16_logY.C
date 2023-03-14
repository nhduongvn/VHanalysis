#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Fri Mar 10 11:27:13 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2183529,-0.4584136,1.171633,1.577024);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15709);
   Aplanarity_tags_16->SetRightMargin(0.1234783);
   Aplanarity_tags_16->SetBottomMargin(0.12);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(18.82986);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(0.6107155);
   st_stack_61->SetMaximum(23.6309);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetTitle("Aplanarity");
   st_stack_61->GetXaxis()->SetRange(1,50);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetTitleOffset(1);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Event/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetTitleSize(0.037);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetTitleOffset(1);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,11.26171);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,7.639082);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,4.910936);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,3.231838);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,2.220991);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,1.501218);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,1.127305);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.8295466);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.5240239);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.4162213);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.299279);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.1843577);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.164628);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.1074158);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.07461202);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.04503199);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,0.02923035);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,0.008996467);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,0.01116012);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.182758);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.1510787);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.1215093);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.09804188);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.08176094);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.0670928);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.05905168);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.05004054);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.04087412);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.03572584);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.02976746);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.02420866);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.02203722);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.01764793);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.01483269);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.01164345);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,0.009283122);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,0.005201123);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,0.0055973);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(12307);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,4.367077);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,3.108438);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,2.031682);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,1.32677);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.89806);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.605384);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.4426104);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.2765004);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.2083798);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.1385394);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.09226884);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.06498495);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.0409339);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.02179614);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.01692464);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.01096538);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.005765131);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.002801956);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.002311251);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.0008110842);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.04058773);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.0344338);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.02788159);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.02258326);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.01859323);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.01525747);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.01304903);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.01032552);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.008966813);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.007294564);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.005962569);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.004996122);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.003936196);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.002894785);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.002558559);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.002053037);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.001492893);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.001060768);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.000950074);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.0005745076);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(36553);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
