#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Mar 23 11:25:15 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2183529,-0.2206959,1.171633,1.618437);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetFillStyle(4000);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15709);
   Sphericity_both_18->SetRightMargin(0.1234783);
   Sphericity_both_18->SetBottomMargin(0.12);
   Sphericity_both_18->SetFrameFillStyle(1000);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameFillStyle(1000);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.434523);
   
   TH1F *st_stack_251 = new TH1F("st_stack_251","",25,0,1);
   st_stack_251->SetMinimum(0);
   st_stack_251->SetMaximum(1.434523);
   st_stack_251->SetDirectory(0);
   st_stack_251->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_251->SetLineColor(ci);
   st_stack_251->GetXaxis()->SetTitle("Sphericity");
   st_stack_251->GetXaxis()->SetRange(1,25);
   st_stack_251->GetXaxis()->SetLabelFont(42);
   st_stack_251->GetXaxis()->SetTitleOffset(1);
   st_stack_251->GetXaxis()->SetTitleFont(42);
   st_stack_251->GetYaxis()->SetTitle("Event/0.04");
   st_stack_251->GetYaxis()->SetLabelFont(42);
   st_stack_251->GetYaxis()->SetTitleSize(0.037);
   st_stack_251->GetYaxis()->SetTitleFont(42);
   st_stack_251->GetZaxis()->SetLabelFont(42);
   st_stack_251->GetZaxis()->SetTitleOffset(1);
   st_stack_251->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_251);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,0.1723573);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,0.5877442);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,0.8716429);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,0.8323862);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,0.705093);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,0.3083945);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,0.1771796);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,0.08395072);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,0.06545514);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,0.06682141);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,0.03028966);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,0.02531922);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,0.005670012);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,0.01762116);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,0.007177159);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,0.01108632);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,0.005091459);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,0.01030457);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,0.004919465);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,0.02135483);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,0.0478906);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,0.05276828);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,0.04810944);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,0.0595261);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,0.02852886);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,0.02132658);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,0.01487907);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,0.01326595);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,0.01329708);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,0.008917735);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,0.008553883);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,0.004056841);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,0.006849382);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,0.004156768);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,0.00550446);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,0.003647183);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,0.005178124);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,0.003479033);
   VbbHcc_both_Sphericity_stack_1->SetEntries(1572);

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
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,0.1000483);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,0.2555568);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,0.3190115);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,0.284746);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,0.2205716);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,0.1366068);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,0.08657821);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,0.04630812);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,0.03311663);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,0.02292569);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,0.01469964);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,0.01773055);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,0.0120294);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,0.009767996);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,0.008619587);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,0.005165016);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,0.003827733);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,0.003352296);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,0.0006262332);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.001712674);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,0.005969302);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,0.009544652);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,0.01068635);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,0.01005192);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,0.009957381);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,0.00729154);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,0.006676477);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,0.003993352);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,0.003404642);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,0.002819911);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,0.00226411);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,0.002486823);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,0.002062343);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,0.001872844);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,0.001696628);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,0.001365467);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.001129);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.001129838);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.0004478256);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.0007730595);
   VbbHcc_both_Sphericity_stack_2->SetEntries(4685);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
