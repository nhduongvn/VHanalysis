#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Mar 23 11:25:15 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2183529,-0.1559277,1.171633,1.14347);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetFillStyle(4000);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15709);
   Sphericity_both_17->SetRightMargin(0.1234783);
   Sphericity_both_17->SetBottomMargin(0.12);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.01353);
   
   TH1F *st_stack_250 = new TH1F("st_stack_250","",25,0,1);
   st_stack_250->SetMinimum(0);
   st_stack_250->SetMaximum(1.01353);
   st_stack_250->SetDirectory(0);
   st_stack_250->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_250->SetLineColor(ci);
   st_stack_250->GetXaxis()->SetTitle("Sphericity");
   st_stack_250->GetXaxis()->SetRange(1,25);
   st_stack_250->GetXaxis()->SetLabelFont(42);
   st_stack_250->GetXaxis()->SetTitleOffset(1);
   st_stack_250->GetXaxis()->SetTitleFont(42);
   st_stack_250->GetYaxis()->SetTitle("Event/0.04");
   st_stack_250->GetYaxis()->SetLabelFont(42);
   st_stack_250->GetYaxis()->SetTitleSize(0.037);
   st_stack_250->GetYaxis()->SetTitleFont(42);
   st_stack_250->GetZaxis()->SetLabelFont(42);
   st_stack_250->GetZaxis()->SetTitleOffset(1);
   st_stack_250->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_250);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,0.1096211);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,0.3947476);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,0.6084647);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,0.6102312);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,0.4903041);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,0.2760908);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,0.1297249);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,0.06139257);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,0.05886368);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,0.03382412);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,0.03540983);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,0.0141652);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,0.01536434);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,0.01490555);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,0.01214758);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,0.006937002);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,0.001907029);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,0.01394788);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,0.02718295);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,0.03426735);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,0.03405629);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,0.03064317);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,0.02250138);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,0.01537264);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,0.01032559);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,0.01037607);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,0.007810293);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,0.008037738);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,0.00506016);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,0.005477895);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,0.005250701);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,0.004691878);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,0.003540959);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,0.001907029);
   VbbHcc_both_Sphericity_stack_1->SetEntries(1687);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,0.07263046);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,0.1914299);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,0.232765);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,0.2213288);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,0.1575638);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,0.09935996);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,0.05974657);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,0.0408603);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,0.02825345);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,0.02123572);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,0.01205649);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,0.007325216);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,0.009706419);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,0.008182922);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,0.005516735);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,0.002828387);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,0.002340773);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,0.001220601);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,0.0009567626);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.0005651277);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,0.004110157);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,0.006719046);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,0.007444096);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,0.007265707);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,0.006130809);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,0.004907122);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,0.003776697);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,0.003080779);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,0.002604355);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,0.002265079);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,0.001679445);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,0.00128568);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,0.001521536);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,0.001372666);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,0.001109363);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,0.0008198554);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.000757918);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.0005567055);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.0004823889);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.0004007052);
   VbbHcc_both_Sphericity_stack_2->SetEntries(5202);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
