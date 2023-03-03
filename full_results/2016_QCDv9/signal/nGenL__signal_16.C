#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenL__signal_16()
{
//=========Macro generated from canvas: nGenL__signal_16/nGenL__signal_16
//=========  (Fri Mar  3 13:54:53 2023) by ROOT version 6.26/06
   TCanvas *nGenL__signal_16 = new TCanvas("nGenL__signal_16", "nGenL__signal_16",0,0,600,600);
   nGenL__signal_16->SetHighLightColor(2);
   nGenL__signal_16->Range(-2.683529,-12.97257,11.21633,95.13219);
   nGenL__signal_16->SetFillColor(0);
   nGenL__signal_16->SetFillStyle(4000);
   nGenL__signal_16->SetBorderMode(0);
   nGenL__signal_16->SetBorderSize(2);
   nGenL__signal_16->SetLeftMargin(0.15709);
   nGenL__signal_16->SetRightMargin(0.1234783);
   nGenL__signal_16->SetBottomMargin(0.12);
   nGenL__signal_16->SetFrameFillStyle(1000);
   nGenL__signal_16->SetFrameBorderMode(0);
   nGenL__signal_16->SetFrameFillStyle(1000);
   nGenL__signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",10,-0.5,9.5);
   st_stack_7->SetMinimum(0);
   st_stack_7->SetMaximum(84.32172);
   st_stack_7->SetDirectory(0);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetTitleOffset(1);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/1.0");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetTitleSize(0.037);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetTitleOffset(1);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *nGenL_stack_1 = new TH1D("nGenL_stack_1","",10,-0.5,9.5);
   nGenL_stack_1->SetBinContent(1,72.5024);
   nGenL_stack_1->SetBinContent(2,45.94547);
   nGenL_stack_1->SetBinContent(3,19.41902);
   nGenL_stack_1->SetBinContent(4,6.578705);
   nGenL_stack_1->SetBinContent(5,2.016288);
   nGenL_stack_1->SetBinContent(6,0.5362283);
   nGenL_stack_1->SetBinContent(7,0.1550145);
   nGenL_stack_1->SetBinContent(8,0.06495342);
   nGenL_stack_1->SetBinContent(9,0.007358206);
   nGenL_stack_1->SetBinContent(10,0.002447168);
   nGenL_stack_1->SetBinError(1,0.479999);
   nGenL_stack_1->SetBinError(2,0.3751663);
   nGenL_stack_1->SetBinError(3,0.2417545);
   nGenL_stack_1->SetBinError(4,0.1404988);
   nGenL_stack_1->SetBinError(5,0.07803345);
   nGenL_stack_1->SetBinError(6,0.03935979);
   nGenL_stack_1->SetBinError(7,0.02109769);
   nGenL_stack_1->SetBinError(8,0.01389834);
   nGenL_stack_1->SetBinError(9,0.004461611);
   nGenL_stack_1->SetBinError(10,0.002447168);
   nGenL_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   nGenL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_stack_1->SetLineColor(ci);
   nGenL_stack_1->GetXaxis()->SetRange(1,10);
   nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_stack_1,"");
   
   TH1D *nGenL_stack_2 = new TH1D("nGenL_stack_2","",10,-0.5,9.5);
   nGenL_stack_2->SetBinContent(1,7.803995);
   nGenL_stack_2->SetBinContent(2,7.249407);
   nGenL_stack_2->SetBinContent(3,3.545836);
   nGenL_stack_2->SetBinContent(4,1.273942);
   nGenL_stack_2->SetBinContent(5,0.4150095);
   nGenL_stack_2->SetBinContent(6,0.1076963);
   nGenL_stack_2->SetBinContent(7,0.03100954);
   nGenL_stack_2->SetBinContent(8,0.006362936);
   nGenL_stack_2->SetBinContent(9,0.0007995102);
   nGenL_stack_2->SetBinContent(10,0.000367146);
   nGenL_stack_2->SetBinContent(11,0.0004291786);
   nGenL_stack_2->SetBinError(1,0.05472282);
   nGenL_stack_2->SetBinError(2,0.05260269);
   nGenL_stack_2->SetBinError(3,0.03671137);
   nGenL_stack_2->SetBinError(4,0.02201205);
   nGenL_stack_2->SetBinError(5,0.01252895);
   nGenL_stack_2->SetBinError(6,0.006358157);
   nGenL_stack_2->SetBinError(7,0.003437174);
   nGenL_stack_2->SetBinError(8,0.001520402);
   nGenL_stack_2->SetBinError(9,0.0005654704);
   nGenL_stack_2->SetBinError(10,0.000367146);
   nGenL_stack_2->SetBinError(11,0.0004291786);
   nGenL_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   nGenL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_stack_2->SetLineColor(ci);
   nGenL_stack_2->GetXaxis()->SetRange(1,10);
   nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenL_stack_1","ZHcc","F");

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
   nGenL__signal_16->Modified();
   nGenL__signal_16->cd();
   nGenL__signal_16->SetSelected(nGenL__signal_16);
}
