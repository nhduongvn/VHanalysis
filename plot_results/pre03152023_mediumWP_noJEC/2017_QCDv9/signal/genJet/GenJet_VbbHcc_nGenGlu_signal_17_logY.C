#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenGlu_signal_17_logY()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenGlu_signal_17/GenJet_VbbHcc_nGenGlu_signal_17
//=========  (Thu Mar  9 15:52:25 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenGlu_signal_17 = new TCanvas("GenJet_VbbHcc_nGenGlu_signal_17", "GenJet_VbbHcc_nGenGlu_signal_17",0,0,600,600);
   GenJet_VbbHcc_nGenGlu_signal_17->SetHighLightColor(2);
   GenJet_VbbHcc_nGenGlu_signal_17->Range(-4.867058,-0.6472604,22.93266,2.333507);
   GenJet_VbbHcc_nGenGlu_signal_17->SetFillColor(0);
   GenJet_VbbHcc_nGenGlu_signal_17->SetFillStyle(4000);
   GenJet_VbbHcc_nGenGlu_signal_17->SetBorderMode(0);
   GenJet_VbbHcc_nGenGlu_signal_17->SetBorderSize(2);
   GenJet_VbbHcc_nGenGlu_signal_17->SetLogy();
   GenJet_VbbHcc_nGenGlu_signal_17->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenGlu_signal_17->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenGlu_signal_17->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenGlu_signal_17->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenGlu_signal_17->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenGlu_signal_17->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenGlu_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(78.67099);
   
   TH1F *st_stack_171 = new TH1F("st_stack_171","",20,-0.5,19.5);
   st_stack_171->SetMinimum(0.5133714);
   st_stack_171->SetMaximum(108.5001);
   st_stack_171->SetDirectory(0);
   st_stack_171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_171->SetLineColor(ci);
   st_stack_171->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_171->GetXaxis()->SetLabelFont(42);
   st_stack_171->GetXaxis()->SetTitleOffset(1);
   st_stack_171->GetXaxis()->SetTitleFont(42);
   st_stack_171->GetYaxis()->SetTitle("Event/1.0");
   st_stack_171->GetYaxis()->SetLabelFont(42);
   st_stack_171->GetYaxis()->SetTitleSize(0.037);
   st_stack_171->GetYaxis()->SetTitleFont(42);
   st_stack_171->GetZaxis()->SetLabelFont(42);
   st_stack_171->GetZaxis()->SetTitleOffset(1);
   st_stack_171->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_171);
   
   
   TH1D *GenJet_VbbHcc_nGenGlu_stack_1 = new TH1D("GenJet_VbbHcc_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(1,58.03989);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(2,58.10707);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(3,35.24466);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(4,16.86145);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(5,7.287438);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(6,2.770366);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(7,1.006239);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(8,0.3306866);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(9,0.1265468);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(10,0.03493716);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(11,0.005717731);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(12,0.0016398);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(13,0.001931463);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(1,0.34466);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(2,0.3360793);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(3,0.2582868);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(4,0.1770903);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(5,0.1165492);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(6,0.07145152);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(7,0.04306156);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(8,0.02444877);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(9,0.01503464);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(10,0.0078317);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(11,0.003306456);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(12,0.0016398);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(13,0.001931463);
   GenJet_VbbHcc_nGenGlu_stack_1->SetEntries(109542);

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
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(1,4.198531);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(2,7.189854);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(3,6.264338);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(4,3.94997);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(5,1.930861);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(6,0.8352468);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(7,0.3172268);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(8,0.1017778);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(9,0.03266466);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(10,0.01051363);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(11,0.004760569);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(12,0.001744107);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(13,0.0003108022);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(14,0.0002948961);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(1,0.03178141);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(2,0.04157731);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(3,0.03880186);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(4,0.03076071);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(5,0.02152015);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(6,0.01416081);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(7,0.0087495);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(8,0.004936602);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(9,0.002789176);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(10,0.001594509);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(11,0.001083896);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(12,0.0006599244);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(13,0.0003108022);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(14,0.0002948961);
   GenJet_VbbHcc_nGenGlu_stack_2->SetEntries(108038);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_VbbHcc_nGenGlu_signal_17->Modified();
   GenJet_VbbHcc_nGenGlu_signal_17->cd();
   GenJet_VbbHcc_nGenGlu_signal_17->SetSelected(GenJet_VbbHcc_nGenGlu_signal_17);
}
