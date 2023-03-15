#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenL_signal_16_logY()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenL_signal_16/GenJet_VbbHcc_nGenL_signal_16
//=========  (Thu Mar  9 15:52:24 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenL_signal_16 = new TCanvas("GenJet_VbbHcc_nGenL_signal_16", "GenJet_VbbHcc_nGenL_signal_16",0,0,600,600);
   GenJet_VbbHcc_nGenL_signal_16->SetHighLightColor(2);
   GenJet_VbbHcc_nGenL_signal_16->Range(-4.867058,-0.6733765,22.93266,2.442498);
   GenJet_VbbHcc_nGenL_signal_16->SetFillColor(0);
   GenJet_VbbHcc_nGenL_signal_16->SetFillStyle(4000);
   GenJet_VbbHcc_nGenL_signal_16->SetBorderMode(0);
   GenJet_VbbHcc_nGenL_signal_16->SetBorderSize(2);
   GenJet_VbbHcc_nGenL_signal_16->SetLogy();
   GenJet_VbbHcc_nGenL_signal_16->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenL_signal_16->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenL_signal_16->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenL_signal_16->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenL_signal_16->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenL_signal_16->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenL_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(96.75469);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",20,-0.5,19.5);
   st_stack_151->SetMinimum(0.5017974);
   st_stack_151->SetMaximum(135.1793);
   st_stack_151->SetDirectory(0);
   st_stack_151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_151->SetLineColor(ci);
   st_stack_151->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_151->GetXaxis()->SetLabelFont(42);
   st_stack_151->GetXaxis()->SetTitleOffset(1);
   st_stack_151->GetXaxis()->SetTitleFont(42);
   st_stack_151->GetYaxis()->SetTitle("Event/1.0");
   st_stack_151->GetYaxis()->SetLabelFont(42);
   st_stack_151->GetYaxis()->SetTitleSize(0.037);
   st_stack_151->GetYaxis()->SetTitleFont(42);
   st_stack_151->GetZaxis()->SetLabelFont(42);
   st_stack_151->GetZaxis()->SetTitleOffset(1);
   st_stack_151->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_151);
   
   
   TH1D *GenJet_VbbHcc_nGenL_stack_1 = new TH1D("GenJet_VbbHcc_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(1,72.5024);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(2,45.94547);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(3,19.41902);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(4,6.578705);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(5,2.016288);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(6,0.5362283);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(7,0.1550145);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(8,0.06495342);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(9,0.007358206);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(10,0.002447168);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(1,0.479999);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(2,0.3751663);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(3,0.2417545);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(4,0.1404988);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(5,0.07803345);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(6,0.03935979);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(7,0.02109769);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(8,0.01389834);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(9,0.004461611);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(10,0.002447168);
   GenJet_VbbHcc_nGenL_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenL_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenL_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenL_stack_2 = new TH1D("GenJet_VbbHcc_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(1,7.803995);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(2,7.249407);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(3,3.545836);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(4,1.273942);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(5,0.4150095);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(6,0.1076963);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(7,0.03100954);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(8,0.006362936);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(9,0.0007995102);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(10,0.000367146);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(12,0.0004291786);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(1,0.05472282);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(2,0.05260269);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(3,0.03671137);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(4,0.02201205);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(5,0.01252895);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(6,0.006358157);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(7,0.003437174);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(8,0.001520402);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(9,0.0005654704);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(10,0.000367146);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(12,0.0004291786);
   GenJet_VbbHcc_nGenL_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenL_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_VbbHcc_nGenL_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_VbbHcc_nGenL_signal_16->Modified();
   GenJet_VbbHcc_nGenL_signal_16->cd();
   GenJet_VbbHcc_nGenL_signal_16->SetSelected(GenJet_VbbHcc_nGenL_signal_16);
}
