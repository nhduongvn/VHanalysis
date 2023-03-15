#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenGlu_signal_18_logY()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenGlu_signal_18/GenJet_VbbHcc_nGenGlu_signal_18
//=========  (Fri Mar 10 12:49:24 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenGlu_signal_18 = new TCanvas("GenJet_VbbHcc_nGenGlu_signal_18", "GenJet_VbbHcc_nGenGlu_signal_18",0,0,600,600);
   GenJet_VbbHcc_nGenGlu_signal_18->SetHighLightColor(2);
   GenJet_VbbHcc_nGenGlu_signal_18->Range(-4.867058,-0.6967032,22.93266,2.540706);
   GenJet_VbbHcc_nGenGlu_signal_18->SetFillColor(0);
   GenJet_VbbHcc_nGenGlu_signal_18->SetFillStyle(4000);
   GenJet_VbbHcc_nGenGlu_signal_18->SetBorderMode(0);
   GenJet_VbbHcc_nGenGlu_signal_18->SetBorderSize(2);
   GenJet_VbbHcc_nGenGlu_signal_18->SetLogy();
   GenJet_VbbHcc_nGenGlu_signal_18->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenGlu_signal_18->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenGlu_signal_18->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenGlu_signal_18->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenGlu_signal_18->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenGlu_signal_18->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenGlu_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(116.6051);
   
   TH1F *st_stack_173 = new TH1F("st_stack_173","",20,-0.5,19.5);
   st_stack_173->SetMinimum(0.4917971);
   st_stack_173->SetMaximum(164.8031);
   st_stack_173->SetDirectory(0);
   st_stack_173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_173->SetLineColor(ci);
   st_stack_173->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_173->GetXaxis()->SetLabelFont(42);
   st_stack_173->GetXaxis()->SetTitleOffset(1);
   st_stack_173->GetXaxis()->SetTitleFont(42);
   st_stack_173->GetYaxis()->SetTitle("Event/1.0");
   st_stack_173->GetYaxis()->SetLabelFont(42);
   st_stack_173->GetYaxis()->SetTitleSize(0.037);
   st_stack_173->GetYaxis()->SetTitleFont(42);
   st_stack_173->GetZaxis()->SetLabelFont(42);
   st_stack_173->GetZaxis()->SetTitleOffset(1);
   st_stack_173->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_173);
   
   
   TH1D *GenJet_VbbHcc_nGenGlu_stack_1 = new TH1D("GenJet_VbbHcc_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(1,84.32998);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(2,86.07916);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(3,51.98418);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(4,24.63905);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(5,10.96692);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(6,4.171544);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(7,1.625469);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(8,0.5667096);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(9,0.1755715);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(10,0.05016346);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(11,0.01745452);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(12,0.00290486);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(1,0.5347469);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(2,0.5219345);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(3,0.3973258);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(4,0.2943435);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(5,0.1873831);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(6,0.1093482);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(7,0.06626554);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(8,0.039114);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(9,0.0223074);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(10,0.01289594);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(11,0.006671674);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(12,0.00250096);
   GenJet_VbbHcc_nGenGlu_stack_1->SetEntries(108766);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenGlu_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenGlu_stack_2 = new TH1D("GenJet_VbbHcc_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(1,6.10881);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(2,10.7031);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(3,9.414693);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(4,5.892224);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(5,2.840502);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(6,1.223778);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(7,0.4714479);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(8,0.1407294);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(9,0.0521134);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(10,0.01157786);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(11,0.005134282);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(12,0.0006439316);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(13,0.0007489796);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(1,0.04818883);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(2,0.06588893);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(3,0.06334627);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(4,0.05151017);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(5,0.03327395);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(6,0.02133982);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(7,0.01919146);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(8,0.0070633);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(9,0.004301344);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(10,0.001999688);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(11,0.001344153);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(12,0.0004556166);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(13,0.0005334906);
   GenJet_VbbHcc_nGenGlu_stack_2->SetEntries(108071);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenGlu_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_VbbHcc_nGenGlu_stack_1","ZHcc","F");

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
   GenJet_VbbHcc_nGenGlu_signal_18->Modified();
   GenJet_VbbHcc_nGenGlu_signal_18->cd();
   GenJet_VbbHcc_nGenGlu_signal_18->SetSelected(GenJet_VbbHcc_nGenGlu_signal_18);
}
