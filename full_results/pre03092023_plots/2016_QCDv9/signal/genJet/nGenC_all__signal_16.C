#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenC_all__signal_16()
{
//=========Macro generated from canvas: nGenC_all__signal_16/nGenC_all__signal_16
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenC_all__signal_16 = new TCanvas("nGenC_all__signal_16", "nGenC_all__signal_16",0,0,600,600);
   nGenC_all__signal_16->SetHighLightColor(2);
   nGenC_all__signal_16->Range(-3.775293,-77.49061,17.0745,568.2645);
   nGenC_all__signal_16->SetFillColor(0);
   nGenC_all__signal_16->SetFillStyle(4000);
   nGenC_all__signal_16->SetBorderMode(0);
   nGenC_all__signal_16->SetBorderSize(2);
   nGenC_all__signal_16->SetLeftMargin(0.15709);
   nGenC_all__signal_16->SetRightMargin(0.1234783);
   nGenC_all__signal_16->SetBottomMargin(0.12);
   nGenC_all__signal_16->SetFrameFillStyle(1000);
   nGenC_all__signal_16->SetFrameBorderMode(0);
   nGenC_all__signal_16->SetFrameFillStyle(1000);
   nGenC_all__signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",15,-0.5,14.5);
   st_stack_19->SetMinimum(0);
   st_stack_19->SetMaximum(503.6889);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/1.0");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *nGenC_all_stack_1 = new TH1D("nGenC_all_stack_1","",15,-0.5,14.5);
   nGenC_all_stack_1->SetBinContent(1,1.086611);
   nGenC_all_stack_1->SetBinContent(2,41.12333);
   nGenC_all_stack_1->SetBinContent(3,422.5496);
   nGenC_all_stack_1->SetBinContent(4,97.39015);
   nGenC_all_stack_1->SetBinContent(5,89.52681);
   nGenC_all_stack_1->SetBinContent(6,16.56618);
   nGenC_all_stack_1->SetBinContent(7,2.931174);
   nGenC_all_stack_1->SetBinContent(8,0.42142);
   nGenC_all_stack_1->SetBinContent(9,0.06755228);
   nGenC_all_stack_1->SetBinContent(10,0.01172114);
   nGenC_all_stack_1->SetBinError(1,0.05744093);
   nGenC_all_stack_1->SetBinError(2,0.3590895);
   nGenC_all_stack_1->SetBinError(3,1.148649);
   nGenC_all_stack_1->SetBinError(4,0.5478032);
   nGenC_all_stack_1->SetBinError(5,0.5260212);
   nGenC_all_stack_1->SetBinError(6,0.2245789);
   nGenC_all_stack_1->SetBinError(7,0.09287732);
   nGenC_all_stack_1->SetBinError(8,0.03563047);
   nGenC_all_stack_1->SetBinError(9,0.01402656);
   nGenC_all_stack_1->SetBinError(10,0.005862115);
   nGenC_all_stack_1->SetEntries(249005);

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
   nGenC_all_stack_2->SetBinContent(1,0.04636048);
   nGenC_all_stack_2->SetBinContent(2,4.822797);
   nGenC_all_stack_2->SetBinContent(3,57.15417);
   nGenC_all_stack_2->SetBinContent(4,14.08397);
   nGenC_all_stack_2->SetBinContent(5,13.48756);
   nGenC_all_stack_2->SetBinContent(6,2.901817);
   nGenC_all_stack_2->SetBinContent(7,0.5609513);
   nGenC_all_stack_2->SetBinContent(8,0.08733191);
   nGenC_all_stack_2->SetBinContent(9,0.01091949);
   nGenC_all_stack_2->SetBinContent(10,0.002608368);
   nGenC_all_stack_2->SetBinError(1,0.00421345);
   nGenC_all_stack_2->SetBinError(2,0.04293157);
   nGenC_all_stack_2->SetBinError(3,0.14776);
   nGenC_all_stack_2->SetBinError(4,0.07332717);
   nGenC_all_stack_2->SetBinError(5,0.07178784);
   nGenC_all_stack_2->SetBinError(6,0.0332628);
   nGenC_all_stack_2->SetBinError(7,0.01461269);
   nGenC_all_stack_2->SetBinError(8,0.005770946);
   nGenC_all_stack_2->SetBinError(9,0.002006162);
   nGenC_all_stack_2->SetBinError(10,0.0009872752);
   nGenC_all_stack_2->SetEntries(248576);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenC_all__signal_16->Modified();
   nGenC_all__signal_16->cd();
   nGenC_all__signal_16->SetSelected(nGenC_all__signal_16);
}
