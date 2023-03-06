#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenGlu_all__signal_18()
{
//=========Macro generated from canvas: nGenGlu_all__signal_18/nGenGlu_all__signal_18
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenGlu_all__signal_18 = new TCanvas("nGenGlu_all__signal_18", "nGenGlu_all__signal_18",0,0,600,600);
   nGenGlu_all__signal_18->SetHighLightColor(2);
   nGenGlu_all__signal_18->Range(-3.775293,-71.0739,17.0745,521.2086);
   nGenGlu_all__signal_18->SetFillColor(0);
   nGenGlu_all__signal_18->SetFillStyle(4000);
   nGenGlu_all__signal_18->SetBorderMode(0);
   nGenGlu_all__signal_18->SetBorderSize(2);
   nGenGlu_all__signal_18->SetLeftMargin(0.15709);
   nGenGlu_all__signal_18->SetRightMargin(0.1234783);
   nGenGlu_all__signal_18->SetBottomMargin(0.12);
   nGenGlu_all__signal_18->SetFrameFillStyle(1000);
   nGenGlu_all__signal_18->SetFrameBorderMode(0);
   nGenGlu_all__signal_18->SetFrameFillStyle(1000);
   nGenGlu_all__signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_29 = new TH1F("st_stack_29","",15,-0.5,14.5);
   st_stack_29->SetMinimum(0);
   st_stack_29->SetMaximum(461.9803);
   st_stack_29->SetDirectory(0);
   st_stack_29->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_29->SetLineColor(ci);
   st_stack_29->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_29->GetXaxis()->SetLabelFont(42);
   st_stack_29->GetXaxis()->SetTitleOffset(1);
   st_stack_29->GetXaxis()->SetTitleFont(42);
   st_stack_29->GetYaxis()->SetTitle("Events/1.0");
   st_stack_29->GetYaxis()->SetLabelFont(42);
   st_stack_29->GetYaxis()->SetTitleSize(0.037);
   st_stack_29->GetYaxis()->SetTitleFont(42);
   st_stack_29->GetZaxis()->SetLabelFont(42);
   st_stack_29->GetZaxis()->SetTitleOffset(1);
   st_stack_29->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_29);
   
   
   TH1D *nGenGlu_all_stack_1 = new TH1D("nGenGlu_all_stack_1","",15,-0.5,14.5);
   nGenGlu_all_stack_1->SetBinContent(1,382.6999);
   nGenGlu_all_stack_1->SetBinContent(2,391.4978);
   nGenGlu_all_stack_1->SetBinContent(3,240.7976);
   nGenGlu_all_stack_1->SetBinContent(4,116.492);
   nGenGlu_all_stack_1->SetBinContent(5,50.64806);
   nGenGlu_all_stack_1->SetBinContent(6,19.97761);
   nGenGlu_all_stack_1->SetBinContent(7,7.452702);
   nGenGlu_all_stack_1->SetBinContent(8,2.609605);
   nGenGlu_all_stack_1->SetBinContent(9,0.8682067);
   nGenGlu_all_stack_1->SetBinContent(10,0.2756274);
   nGenGlu_all_stack_1->SetBinContent(11,0.0967141);
   nGenGlu_all_stack_1->SetBinContent(12,0.03554358);
   nGenGlu_all_stack_1->SetBinContent(13,0.009448273);
   nGenGlu_all_stack_1->SetBinContent(14,0.005987344);
   nGenGlu_all_stack_1->SetBinError(1,1.148287);
   nGenGlu_all_stack_1->SetBinError(2,1.132299);
   nGenGlu_all_stack_1->SetBinError(3,0.8891925);
   nGenGlu_all_stack_1->SetBinError(4,0.5985685);
   nGenGlu_all_stack_1->SetBinError(5,0.4058573);
   nGenGlu_all_stack_1->SetBinError(6,0.2432552);
   nGenGlu_all_stack_1->SetBinError(7,0.1515413);
   nGenGlu_all_stack_1->SetBinError(8,0.08859382);
   nGenGlu_all_stack_1->SetBinError(9,0.04935205);
   nGenGlu_all_stack_1->SetBinError(10,0.0293863);
   nGenGlu_all_stack_1->SetBinError(11,0.01625187);
   nGenGlu_all_stack_1->SetBinError(12,0.01119707);
   nGenGlu_all_stack_1->SetBinError(13,0.005552652);
   nGenGlu_all_stack_1->SetBinError(14,0.004316923);
   nGenGlu_all_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   nGenGlu_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_all_stack_1->SetLineColor(ci);
   nGenGlu_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenGlu_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenGlu_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenGlu_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_all_stack_1,"");
   
   TH1D *nGenGlu_all_stack_2 = new TH1D("nGenGlu_all_stack_2","",15,-0.5,14.5);
   nGenGlu_all_stack_2->SetBinContent(1,27.44348);
   nGenGlu_all_stack_2->SetBinContent(2,48.4835);
   nGenGlu_all_stack_2->SetBinContent(3,43.15517);
   nGenGlu_all_stack_2->SetBinContent(4,26.94474);
   nGenGlu_all_stack_2->SetBinContent(5,13.23297);
   nGenGlu_all_stack_2->SetBinContent(6,5.684896);
   nGenGlu_all_stack_2->SetBinContent(7,2.188789);
   nGenGlu_all_stack_2->SetBinContent(8,0.7283416);
   nGenGlu_all_stack_2->SetBinContent(9,0.2635555);
   nGenGlu_all_stack_2->SetBinContent(10,0.06677091);
   nGenGlu_all_stack_2->SetBinContent(11,0.02431008);
   nGenGlu_all_stack_2->SetBinContent(12,0.00473812);
   nGenGlu_all_stack_2->SetBinContent(13,0.002024405);
   nGenGlu_all_stack_2->SetBinError(1,0.1048317);
   nGenGlu_all_stack_2->SetBinError(2,0.1398353);
   nGenGlu_all_stack_2->SetBinError(3,0.1323654);
   nGenGlu_all_stack_2->SetBinError(4,0.1051574);
   nGenGlu_all_stack_2->SetBinError(5,0.07154906);
   nGenGlu_all_stack_2->SetBinError(6,0.04625792);
   nGenGlu_all_stack_2->SetBinError(7,0.03249658);
   nGenGlu_all_stack_2->SetBinError(8,0.01671213);
   nGenGlu_all_stack_2->SetBinError(9,0.00970131);
   nGenGlu_all_stack_2->SetBinError(10,0.004853602);
   nGenGlu_all_stack_2->SetBinError(11,0.003119713);
   nGenGlu_all_stack_2->SetBinError(12,0.001239258);
   nGenGlu_all_stack_2->SetBinError(13,0.0008494828);
   nGenGlu_all_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   nGenGlu_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_all_stack_2->SetLineColor(ci);
   nGenGlu_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenGlu_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenGlu_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenGlu_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenGlu_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenGlu_all_stack_1","ZHcc","F");

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
   nGenGlu_all__signal_18->Modified();
   nGenGlu_all__signal_18->cd();
   nGenGlu_all__signal_18->SetSelected(nGenGlu_all__signal_18);
}
