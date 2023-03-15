#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenJet_signal_16()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenJet_signal_16/GenJet_VbbHcc_nGenJet_signal_16
//=========  (Thu Mar  9 15:52:38 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenJet_signal_16 = new TCanvas("GenJet_VbbHcc_nGenJet_signal_16", "GenJet_VbbHcc_nGenJet_signal_16",0,0,600,600);
   GenJet_VbbHcc_nGenJet_signal_16->SetHighLightColor(2);
   GenJet_VbbHcc_nGenJet_signal_16->Range(-4.867058,-6.92822,22.93266,50.80695);
   GenJet_VbbHcc_nGenJet_signal_16->SetFillColor(0);
   GenJet_VbbHcc_nGenJet_signal_16->SetFillStyle(4000);
   GenJet_VbbHcc_nGenJet_signal_16->SetBorderMode(0);
   GenJet_VbbHcc_nGenJet_signal_16->SetBorderSize(2);
   GenJet_VbbHcc_nGenJet_signal_16->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenJet_signal_16->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenJet_signal_16->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenJet_signal_16->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenJet_signal_16->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenJet_signal_16->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenJet_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(45.03343);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",20,-0.5,19.5);
   st_stack_145->SetMinimum(0);
   st_stack_145->SetMaximum(45.03343);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetTitleOffset(1);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Event/1.0");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetTitleSize(0.037);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetTitleOffset(1);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *GenJet_VbbHcc_nGenJet_stack_1 = new TH1D("GenJet_VbbHcc_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(1,0.005869048);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(2,0.006199426);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(3,0.4908592);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(4,6.498109);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(5,26.47481);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(6,34.14423);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(7,29.00693);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(8,20.75753);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(9,13.12303);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(10,7.901302);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(11,4.275286);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(12,2.439848);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(13,1.072488);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(14,0.5508947);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(15,0.2484622);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(16,0.135711);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(17,0.05200434);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(18,0.03020976);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(19,0.002929466);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(20,0.005855177);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(21,0.005321677);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(1,0.004150995);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(2,0.005981016);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(3,0.04022589);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(4,0.1458019);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(5,0.2962011);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(6,0.327195);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(7,0.2976307);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(8,0.2501585);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(9,0.1982623);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(10,0.1531297);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(11,0.1124844);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(12,0.08491059);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(13,0.05596101);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(14,0.04003577);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(15,0.02708309);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(16,0.01979056);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(17,0.01216461);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(18,0.009248456);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(19,0.002929466);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(20,0.004140381);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(21,0.003775107);
   GenJet_VbbHcc_nGenJet_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenJet_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenJet_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenJet_stack_2 = new TH1D("GenJet_VbbHcc_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(3,0.009190653);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(4,0.1809952);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(5,1.393997);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(6,3.233518);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(7,4.375479);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(8,4.057881);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(9,2.959525);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(10,1.926144);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(11,1.134839);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(12,0.5954821);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(13,0.3010848);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(14,0.1417259);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(15,0.07139571);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(16,0.02890256);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(17,0.01516501);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(18,0.006035942);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(19,0.00311843);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(20,0.0003751885);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(3,0.001884889);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(4,0.008327959);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(5,0.02313267);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(6,0.03522046);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(7,0.04093471);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(8,0.03935247);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(9,0.03360441);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(10,0.02705898);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(11,0.02076769);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(12,0.01500715);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(13,0.01070927);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(14,0.007331734);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(15,0.005176429);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(16,0.00328291);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(17,0.002372109);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(18,0.001521537);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(19,0.001103942);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(20,0.0003751885);
   GenJet_VbbHcc_nGenJet_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenJet_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_VbbHcc_nGenJet_stack_1","ZHcc","F");

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
   GenJet_VbbHcc_nGenJet_signal_16->Modified();
   GenJet_VbbHcc_nGenJet_signal_16->cd();
   GenJet_VbbHcc_nGenJet_signal_16->SetSelected(GenJet_VbbHcc_nGenJet_signal_16);
}
