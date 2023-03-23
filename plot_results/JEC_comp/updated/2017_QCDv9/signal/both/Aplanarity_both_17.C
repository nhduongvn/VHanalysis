#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Mar 23 11:25:15 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2183529,-0.5113101,1.171633,3.749607);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetFillStyle(4000);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15709);
   Aplanarity_both_17->SetRightMargin(0.1234783);
   Aplanarity_both_17->SetBottomMargin(0.12);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.323515);
   
   TH1F *st_stack_254 = new TH1F("st_stack_254","",50,0,1);
   st_stack_254->SetMinimum(0);
   st_stack_254->SetMaximum(3.323515);
   st_stack_254->SetDirectory(0);
   st_stack_254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_254->SetLineColor(ci);
   st_stack_254->GetXaxis()->SetTitle("Aplanarity");
   st_stack_254->GetXaxis()->SetRange(1,50);
   st_stack_254->GetXaxis()->SetLabelFont(42);
   st_stack_254->GetXaxis()->SetTitleOffset(1);
   st_stack_254->GetXaxis()->SetTitleFont(42);
   st_stack_254->GetYaxis()->SetTitle("Event/0.02");
   st_stack_254->GetYaxis()->SetLabelFont(42);
   st_stack_254->GetYaxis()->SetTitleSize(0.037);
   st_stack_254->GetYaxis()->SetTitleFont(42);
   st_stack_254->GetZaxis()->SetLabelFont(42);
   st_stack_254->GetZaxis()->SetTitleOffset(1);
   st_stack_254->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_254);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,1.975853);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,0.5448364);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,0.1936219);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,0.07621789);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.04523854);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.01293023);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.00765394);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.005623286);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.007723335);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.001966814);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.001318812);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.001117628);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.06123739);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.03181013);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.01878536);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.01182914);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.009208359);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.004925233);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.003775564);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.003260388);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.003862188);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.001966814);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.001318812);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.001117628);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(1687);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,0.7826652);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.2363944);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.0846715);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.03580294);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.01896759);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.00614281);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.003949897);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.003563396);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.0008246945);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.00123266);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.001103028);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.0005553443);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.01363296);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.007509086);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.004485186);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.002914593);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.002137041);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.001190217);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.0009434978);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.0008979567);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.0004268192);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.000556231);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.0004990022);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.000394388);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(5202);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
