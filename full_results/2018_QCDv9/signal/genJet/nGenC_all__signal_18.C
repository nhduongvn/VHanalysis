#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenC_all__signal_18()
{
//=========Macro generated from canvas: nGenC_all__signal_18/nGenC_all__signal_18
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenC_all__signal_18 = new TCanvas("nGenC_all__signal_18", "nGenC_all__signal_18",0,0,600,600);
   nGenC_all__signal_18->SetHighLightColor(2);
   nGenC_all__signal_18->Range(-3.775293,-139.5235,17.0745,1023.172);
   nGenC_all__signal_18->SetFillColor(0);
   nGenC_all__signal_18->SetFillStyle(4000);
   nGenC_all__signal_18->SetBorderMode(0);
   nGenC_all__signal_18->SetBorderSize(2);
   nGenC_all__signal_18->SetLeftMargin(0.15709);
   nGenC_all__signal_18->SetRightMargin(0.1234783);
   nGenC_all__signal_18->SetBottomMargin(0.12);
   nGenC_all__signal_18->SetFrameFillStyle(1000);
   nGenC_all__signal_18->SetFrameBorderMode(0);
   nGenC_all__signal_18->SetFrameFillStyle(1000);
   nGenC_all__signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",15,-0.5,14.5);
   st_stack_23->SetMinimum(0);
   st_stack_23->SetMaximum(906.9029);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/1.0");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *nGenC_all_stack_1 = new TH1D("nGenC_all_stack_1","",15,-0.5,14.5);
   nGenC_all_stack_1->SetBinContent(1,1.737766);
   nGenC_all_stack_1->SetBinContent(2,73.91503);
   nGenC_all_stack_1->SetBinContent(3,760.6088);
   nGenC_all_stack_1->SetBinContent(4,177.1757);
   nGenC_all_stack_1->SetBinContent(5,162.9846);
   nGenC_all_stack_1->SetBinContent(6,31.06506);
   nGenC_all_stack_1->SetBinContent(7,5.184063);
   nGenC_all_stack_1->SetBinContent(8,0.7126974);
   nGenC_all_stack_1->SetBinContent(9,0.0759108);
   nGenC_all_stack_1->SetBinContent(10,0.004854872);
   nGenC_all_stack_1->SetBinContent(11,0.002305427);
   nGenC_all_stack_1->SetBinError(1,0.07276925);
   nGenC_all_stack_1->SetBinError(2,0.4802354);
   nGenC_all_stack_1->SetBinError(3,1.586946);
   nGenC_all_stack_1->SetBinError(4,0.7596268);
   nGenC_all_stack_1->SetBinError(5,0.7403083);
   nGenC_all_stack_1->SetBinError(6,0.3300562);
   nGenC_all_stack_1->SetBinError(7,0.1300156);
   nGenC_all_stack_1->SetBinError(8,0.05094165);
   nGenC_all_stack_1->SetBinError(9,0.01401455);
   nGenC_all_stack_1->SetBinError(10,0.003432928);
   nGenC_all_stack_1->SetBinError(11,0.002305427);
   nGenC_all_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   nGenC_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenC_all_stack_1->SetLineColor(ci);
   nGenC_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenC_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenC_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenC_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenC_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenC_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenC_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenC_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenC_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenC_all_stack_1,"");
   
   TH1D *nGenC_all_stack_2 = new TH1D("nGenC_all_stack_2","",15,-0.5,14.5);
   nGenC_all_stack_2->SetBinContent(1,0.07674949);
   nGenC_all_stack_2->SetBinContent(2,8.672458);
   nGenC_all_stack_2->SetBinContent(3,103.1082);
   nGenC_all_stack_2->SetBinContent(4,25.53592);
   nGenC_all_stack_2->SetBinContent(5,24.46018);
   nGenC_all_stack_2->SetBinContent(6,5.200907);
   nGenC_all_stack_2->SetBinContent(7,0.9802865);
   nGenC_all_stack_2->SetBinContent(8,0.1647173);
   nGenC_all_stack_2->SetBinContent(9,0.02119513);
   nGenC_all_stack_2->SetBinContent(10,0.002393903);
   nGenC_all_stack_2->SetBinContent(11,0.0002938073);
   nGenC_all_stack_2->SetBinError(1,0.00518839);
   nGenC_all_stack_2->SetBinError(2,0.06000605);
   nGenC_all_stack_2->SetBinError(3,0.2041706);
   nGenC_all_stack_2->SetBinError(4,0.101613);
   nGenC_all_stack_2->SetBinError(5,0.09882772);
   nGenC_all_stack_2->SetBinError(6,0.04466499);
   nGenC_all_stack_2->SetBinError(7,0.0193882);
   nGenC_all_stack_2->SetBinError(8,0.007870468);
   nGenC_all_stack_2->SetBinError(9,0.002688202);
   nGenC_all_stack_2->SetBinError(10,0.0009116217);
   nGenC_all_stack_2->SetBinError(11,0.0002938073);
   nGenC_all_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   nGenC_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenC_all_stack_2->SetLineColor(ci);
   nGenC_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenC_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenC_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenC_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenC_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenC_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenC_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenC_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenC_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenC_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenC_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenC_all_stack_1","ZHcc","F");

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
   nGenC_all__signal_18->Modified();
   nGenC_all__signal_18->cd();
   nGenC_all__signal_18->SetSelected(nGenC_all__signal_18);
}
