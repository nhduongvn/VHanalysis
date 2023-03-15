#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenB_signal_18_logY()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenB_signal_18/GenJet_VbbHcc_nGenB_signal_18
//=========  (Thu Mar  9 15:52:25 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenB_signal_18 = new TCanvas("GenJet_VbbHcc_nGenB_signal_18", "GenJet_VbbHcc_nGenB_signal_18",0,0,600,600);
   GenJet_VbbHcc_nGenB_signal_18->SetHighLightColor(2);
   GenJet_VbbHcc_nGenB_signal_18->Range(-4.867058,-0.8068386,22.93266,3.015004);
   GenJet_VbbHcc_nGenB_signal_18->SetFillColor(0);
   GenJet_VbbHcc_nGenB_signal_18->SetFillStyle(4000);
   GenJet_VbbHcc_nGenB_signal_18->SetBorderMode(0);
   GenJet_VbbHcc_nGenB_signal_18->SetBorderSize(2);
   GenJet_VbbHcc_nGenB_signal_18->SetLogy();
   GenJet_VbbHcc_nGenB_signal_18->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenB_signal_18->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenB_signal_18->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenB_signal_18->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenB_signal_18->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenB_signal_18->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenB_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(287.808);
   
   TH1F *st_stack_161 = new TH1F("st_stack_161","",20,-0.5,19.5);
   st_stack_161->SetMinimum(0.4485207);
   st_stack_161->SetMaximum(429.3579);
   st_stack_161->SetDirectory(0);
   st_stack_161->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_161->SetLineColor(ci);
   st_stack_161->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_161->GetXaxis()->SetLabelFont(42);
   st_stack_161->GetXaxis()->SetTitleOffset(1);
   st_stack_161->GetXaxis()->SetTitleFont(42);
   st_stack_161->GetYaxis()->SetTitle("Event/1.0");
   st_stack_161->GetYaxis()->SetLabelFont(42);
   st_stack_161->GetYaxis()->SetTitleSize(0.037);
   st_stack_161->GetYaxis()->SetTitleFont(42);
   st_stack_161->GetZaxis()->SetLabelFont(42);
   st_stack_161->GetZaxis()->SetTitleOffset(1);
   st_stack_161->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_161);
   
   
   TH1D *GenJet_VbbHcc_nGenB_stack_1 = new TH1D("GenJet_VbbHcc_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(1,1.33629);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(2,38.16742);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(3,207.797);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(4,14.33494);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(5,2.691692);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(6,0.2537988);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(7,0.02209153);
   GenJet_VbbHcc_nGenB_stack_1->SetBinContent(8,0.005888097);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(1,0.07421059);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(2,0.3490218);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(3,0.8200113);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(4,0.2193884);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(5,0.08898521);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(6,0.02664271);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(7,0.007872331);
   GenJet_VbbHcc_nGenB_stack_1->SetBinError(8,0.004194756);
   GenJet_VbbHcc_nGenB_stack_1->SetEntries(108766);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenB_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenB_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenB_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenB_stack_2 = new TH1D("GenJet_VbbHcc_nGenB_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(1,0.01378479);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(2,3.162039);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(3,31.08363);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(4,2.1678);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(5,0.4008662);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(6,0.03393317);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(7,0.002685024);
   GenJet_VbbHcc_nGenB_stack_2->SetBinContent(8,0.0007633504);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(1,0.002189994);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(2,0.0353926);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(3,0.11442);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(4,0.02875618);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(5,0.01205631);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(6,0.003498964);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(7,0.000958023);
   GenJet_VbbHcc_nGenB_stack_2->SetBinError(8,0.0005454322);
   GenJet_VbbHcc_nGenB_stack_2->SetEntries(108071);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenB_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenB_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_VbbHcc_nGenB_stack_1","ZHcc","F");

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
   GenJet_VbbHcc_nGenB_signal_18->Modified();
   GenJet_VbbHcc_nGenB_signal_18->cd();
   GenJet_VbbHcc_nGenB_signal_18->SetSelected(GenJet_VbbHcc_nGenB_signal_18);
}
