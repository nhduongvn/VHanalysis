#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenL_all__signal_18_logY()
{
//=========Macro generated from canvas: nGenL_all__signal_18/nGenL_all__signal_18
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenL_all__signal_18 = new TCanvas("nGenL_all__signal_18", "nGenL_all__signal_18",0,0,600,600);
   nGenL_all__signal_18->SetHighLightColor(2);
   nGenL_all__signal_18->Range(-3.775293,0.4274472,17.0745,3.027474);
   nGenL_all__signal_18->SetFillColor(0);
   nGenL_all__signal_18->SetFillStyle(4000);
   nGenL_all__signal_18->SetBorderMode(0);
   nGenL_all__signal_18->SetBorderSize(2);
   nGenL_all__signal_18->SetLogy();
   nGenL_all__signal_18->SetLeftMargin(0.15709);
   nGenL_all__signal_18->SetRightMargin(0.1234783);
   nGenL_all__signal_18->SetBottomMargin(0.12);
   nGenL_all__signal_18->SetFrameFillStyle(1000);
   nGenL_all__signal_18->SetFrameBorderMode(0);
   nGenL_all__signal_18->SetFrameFillStyle(1000);
   nGenL_all__signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",15,-0.5,14.5);
   st_stack_11->SetMinimum(5.488458);
   st_stack_11->SetMaximum(585.4245);
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
   st_stack_11->GetYaxis()->SetTitle("Events/1.0");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetTitleSize(0.037);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetTitleOffset(1);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *nGenL_all_stack_1 = new TH1D("nGenL_all_stack_1","",15,-0.5,14.5);
   nGenL_all_stack_1->SetBinContent(1,237.5162);
   nGenL_all_stack_1->SetBinContent(2,224.2999);
   nGenL_all_stack_1->SetBinContent(3,391.2827);
   nGenL_all_stack_1->SetBinContent(4,225.3328);
   nGenL_all_stack_1->SetBinContent(5,91.94522);
   nGenL_all_stack_1->SetBinContent(6,30.16328);
   nGenL_all_stack_1->SetBinContent(7,9.400419);
   nGenL_all_stack_1->SetBinContent(8,2.661038);
   nGenL_all_stack_1->SetBinContent(9,0.6662423);
   nGenL_all_stack_1->SetBinContent(10,0.1603445);
   nGenL_all_stack_1->SetBinContent(11,0.0304043);
   nGenL_all_stack_1->SetBinContent(12,0.008206286);
   nGenL_all_stack_1->SetBinError(1,0.8894272);
   nGenL_all_stack_1->SetBinError(2,0.8544568);
   nGenL_all_stack_1->SetBinError(3,1.153831);
   nGenL_all_stack_1->SetBinError(4,0.8511829);
   nGenL_all_stack_1->SetBinError(5,0.5468544);
   nGenL_all_stack_1->SetBinError(6,0.3050706);
   nGenL_all_stack_1->SetBinError(7,0.1698367);
   nGenL_all_stack_1->SetBinError(8,0.08775629);
   nGenL_all_stack_1->SetBinError(9,0.04272251);
   nGenL_all_stack_1->SetBinError(10,0.0211261);
   nGenL_all_stack_1->SetBinError(11,0.009265135);
   nGenL_all_stack_1->SetBinError(12,0.004771518);
   nGenL_all_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   nGenL_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_all_stack_1->SetLineColor(ci);
   nGenL_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenL_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenL_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenL_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenL_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenL_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_all_stack_1,"");
   
   TH1D *nGenL_all_stack_2 = new TH1D("nGenL_all_stack_2","",15,-0.5,14.5);
   nGenL_all_stack_2->SetBinContent(1,25.19474);
   nGenL_all_stack_2->SetBinContent(2,28.49891);
   nGenL_all_stack_2->SetBinContent(3,49.28294);
   nGenL_all_stack_2->SetBinContent(4,37.79667);
   nGenL_all_stack_2->SetBinContent(5,18.01946);
   nGenL_all_stack_2->SetBinContent(6,6.597446);
   nGenL_all_stack_2->SetBinContent(7,1.994083);
   nGenL_all_stack_2->SetBinContent(8,0.6112241);
   nGenL_all_stack_2->SetBinContent(9,0.1789686);
   nGenL_all_stack_2->SetBinContent(10,0.03374745);
   nGenL_all_stack_2->SetBinContent(11,0.01188396);
   nGenL_all_stack_2->SetBinContent(12,0.002873055);
   nGenL_all_stack_2->SetBinContent(13,0.0003400733);
   nGenL_all_stack_2->SetBinError(1,0.1026269);
   nGenL_all_stack_2->SetBinError(2,0.1070608);
   nGenL_all_stack_2->SetBinError(3,0.1408288);
   nGenL_all_stack_2->SetBinError(4,0.1229602);
   nGenL_all_stack_2->SetBinError(5,0.08368871);
   nGenL_all_stack_2->SetBinError(6,0.05155608);
   nGenL_all_stack_2->SetBinError(7,0.02711828);
   nGenL_all_stack_2->SetBinError(8,0.01528034);
   nGenL_all_stack_2->SetBinError(9,0.01587827);
   nGenL_all_stack_2->SetBinError(10,0.003464798);
   nGenL_all_stack_2->SetBinError(11,0.00203744);
   nGenL_all_stack_2->SetBinError(12,0.0009845587);
   nGenL_all_stack_2->SetBinError(13,0.0003400733);
   nGenL_all_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   nGenL_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_all_stack_2->SetLineColor(ci);
   nGenL_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenL_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenL_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenL_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenL_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenL_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenL_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenL_all_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenL_all__signal_18->Modified();
   nGenL_all__signal_18->cd();
   nGenL_all__signal_18->SetSelected(nGenL_all__signal_18);
}
