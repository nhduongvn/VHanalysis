#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenL_signal_18()
{
//=========Macro generated from canvas: GenJet_all_nGenL_signal_18/GenJet_all_nGenL_signal_18
//=========  (Fri Mar 10 12:49:27 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenL_signal_18 = new TCanvas("GenJet_all_nGenL_signal_18", "GenJet_all_nGenL_signal_18",0,0,600,600);
   GenJet_all_nGenL_signal_18->SetHighLightColor(2);
   GenJet_all_nGenL_signal_18->Range(-4.867058,-81.66184,22.93266,598.8535);
   GenJet_all_nGenL_signal_18->SetFillColor(0);
   GenJet_all_nGenL_signal_18->SetFillStyle(4000);
   GenJet_all_nGenL_signal_18->SetBorderMode(0);
   GenJet_all_nGenL_signal_18->SetBorderSize(2);
   GenJet_all_nGenL_signal_18->SetLeftMargin(0.15709);
   GenJet_all_nGenL_signal_18->SetRightMargin(0.1234783);
   GenJet_all_nGenL_signal_18->SetBottomMargin(0.12);
   GenJet_all_nGenL_signal_18->SetFrameFillStyle(1000);
   GenJet_all_nGenL_signal_18->SetFrameBorderMode(0);
   GenJet_all_nGenL_signal_18->SetFrameFillStyle(1000);
   GenJet_all_nGenL_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(530.8019);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",20,-0.5,19.5);
   st_stack_11->SetMinimum(0);
   st_stack_11->SetMaximum(530.8019);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetTitleOffset(1);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Event/1.0");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetTitleSize(0.037);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetTitleOffset(1);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *GenJet_all_nGenL_stack_1 = new TH1D("GenJet_all_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_1->SetBinContent(1,237.5162);
   GenJet_all_nGenL_stack_1->SetBinContent(2,224.2999);
   GenJet_all_nGenL_stack_1->SetBinContent(3,391.2827);
   GenJet_all_nGenL_stack_1->SetBinContent(4,225.3328);
   GenJet_all_nGenL_stack_1->SetBinContent(5,91.94522);
   GenJet_all_nGenL_stack_1->SetBinContent(6,30.16328);
   GenJet_all_nGenL_stack_1->SetBinContent(7,9.400419);
   GenJet_all_nGenL_stack_1->SetBinContent(8,2.661038);
   GenJet_all_nGenL_stack_1->SetBinContent(9,0.6662423);
   GenJet_all_nGenL_stack_1->SetBinContent(10,0.1603445);
   GenJet_all_nGenL_stack_1->SetBinContent(11,0.0304043);
   GenJet_all_nGenL_stack_1->SetBinContent(12,0.008206286);
   GenJet_all_nGenL_stack_1->SetBinError(1,0.8894272);
   GenJet_all_nGenL_stack_1->SetBinError(2,0.8544568);
   GenJet_all_nGenL_stack_1->SetBinError(3,1.153831);
   GenJet_all_nGenL_stack_1->SetBinError(4,0.8511829);
   GenJet_all_nGenL_stack_1->SetBinError(5,0.5468544);
   GenJet_all_nGenL_stack_1->SetBinError(6,0.3050706);
   GenJet_all_nGenL_stack_1->SetBinError(7,0.1698367);
   GenJet_all_nGenL_stack_1->SetBinError(8,0.08775629);
   GenJet_all_nGenL_stack_1->SetBinError(9,0.04272251);
   GenJet_all_nGenL_stack_1->SetBinError(10,0.0211261);
   GenJet_all_nGenL_stack_1->SetBinError(11,0.009265135);
   GenJet_all_nGenL_stack_1->SetBinError(12,0.004771518);
   GenJet_all_nGenL_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   GenJet_all_nGenL_stack_1->SetFillColor(ci);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenL_stack_1,"");
   
   TH1D *GenJet_all_nGenL_stack_2 = new TH1D("GenJet_all_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_2->SetBinContent(1,25.19474);
   GenJet_all_nGenL_stack_2->SetBinContent(2,28.49891);
   GenJet_all_nGenL_stack_2->SetBinContent(3,49.28294);
   GenJet_all_nGenL_stack_2->SetBinContent(4,37.79667);
   GenJet_all_nGenL_stack_2->SetBinContent(5,18.01946);
   GenJet_all_nGenL_stack_2->SetBinContent(6,6.597446);
   GenJet_all_nGenL_stack_2->SetBinContent(7,1.994083);
   GenJet_all_nGenL_stack_2->SetBinContent(8,0.6112241);
   GenJet_all_nGenL_stack_2->SetBinContent(9,0.1789686);
   GenJet_all_nGenL_stack_2->SetBinContent(10,0.03374745);
   GenJet_all_nGenL_stack_2->SetBinContent(11,0.01188396);
   GenJet_all_nGenL_stack_2->SetBinContent(12,0.002873055);
   GenJet_all_nGenL_stack_2->SetBinContent(13,0.0003400733);
   GenJet_all_nGenL_stack_2->SetBinError(1,0.1026269);
   GenJet_all_nGenL_stack_2->SetBinError(2,0.1070608);
   GenJet_all_nGenL_stack_2->SetBinError(3,0.1408288);
   GenJet_all_nGenL_stack_2->SetBinError(4,0.1229602);
   GenJet_all_nGenL_stack_2->SetBinError(5,0.08368871);
   GenJet_all_nGenL_stack_2->SetBinError(6,0.05155608);
   GenJet_all_nGenL_stack_2->SetBinError(7,0.02711828);
   GenJet_all_nGenL_stack_2->SetBinError(8,0.01528034);
   GenJet_all_nGenL_stack_2->SetBinError(9,0.01587827);
   GenJet_all_nGenL_stack_2->SetBinError(10,0.003464798);
   GenJet_all_nGenL_stack_2->SetBinError(11,0.00203744);
   GenJet_all_nGenL_stack_2->SetBinError(12,0.0009845587);
   GenJet_all_nGenL_stack_2->SetBinError(13,0.0003400733);
   GenJet_all_nGenL_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   GenJet_all_nGenL_stack_2->SetFillColor(ci);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_all_nGenL_stack_1","ZHcc","F");

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
   GenJet_all_nGenL_signal_18->Modified();
   GenJet_all_nGenL_signal_18->cd();
   GenJet_all_nGenL_signal_18->SetSelected(GenJet_all_nGenL_signal_18);
}
