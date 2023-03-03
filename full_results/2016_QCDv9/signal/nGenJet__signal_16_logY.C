#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenJet__signal_16_logY()
{
//=========Macro generated from canvas: nGenJet__signal_16/nGenJet__signal_16
//=========  (Fri Mar  3 13:54:36 2023) by ROOT version 6.26/06
   TCanvas *nGenJet__signal_16 = new TCanvas("nGenJet__signal_16", "nGenJet__signal_16",0,0,600,600);
   nGenJet__signal_16->SetHighLightColor(2);
   nGenJet__signal_16->Range(-3.775293,0.7784945,17.0745,1.71317);
   nGenJet__signal_16->SetFillColor(0);
   nGenJet__signal_16->SetFillStyle(4000);
   nGenJet__signal_16->SetBorderMode(0);
   nGenJet__signal_16->SetBorderSize(2);
   nGenJet__signal_16->SetLogy();
   nGenJet__signal_16->SetLeftMargin(0.15709);
   nGenJet__signal_16->SetRightMargin(0.1234783);
   nGenJet__signal_16->SetBottomMargin(0.12);
   nGenJet__signal_16->SetFrameFillStyle(1000);
   nGenJet__signal_16->SetFrameBorderMode(0);
   nGenJet__signal_16->SetFrameFillStyle(1000);
   nGenJet__signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",15,-0.5,14.5);
   st_stack_1->SetMinimum(7.774196);
   st_stack_1->SetMaximum(41.65835);
   st_stack_1->SetDirectory(0);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetTitleOffset(1);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Events/1.0");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetTitleSize(0.037);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetTitleOffset(1);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *nGenJet_stack_1 = new TH1D("nGenJet_stack_1","",15,-0.5,14.5);
   nGenJet_stack_1->SetBinContent(1,0.005869048);
   nGenJet_stack_1->SetBinContent(2,0.006199426);
   nGenJet_stack_1->SetBinContent(3,0.4908592);
   nGenJet_stack_1->SetBinContent(4,6.498109);
   nGenJet_stack_1->SetBinContent(5,26.47481);
   nGenJet_stack_1->SetBinContent(6,34.14423);
   nGenJet_stack_1->SetBinContent(7,29.00693);
   nGenJet_stack_1->SetBinContent(8,20.75753);
   nGenJet_stack_1->SetBinContent(9,13.12303);
   nGenJet_stack_1->SetBinContent(10,7.901302);
   nGenJet_stack_1->SetBinContent(11,4.275286);
   nGenJet_stack_1->SetBinContent(12,2.439848);
   nGenJet_stack_1->SetBinContent(13,1.072488);
   nGenJet_stack_1->SetBinContent(14,0.5508947);
   nGenJet_stack_1->SetBinContent(15,0.2484622);
   nGenJet_stack_1->SetBinContent(16,0.2320314);
   nGenJet_stack_1->SetBinError(1,0.004150995);
   nGenJet_stack_1->SetBinError(2,0.005981016);
   nGenJet_stack_1->SetBinError(3,0.04022589);
   nGenJet_stack_1->SetBinError(4,0.1458019);
   nGenJet_stack_1->SetBinError(5,0.2962011);
   nGenJet_stack_1->SetBinError(6,0.327195);
   nGenJet_stack_1->SetBinError(7,0.2976307);
   nGenJet_stack_1->SetBinError(8,0.2501585);
   nGenJet_stack_1->SetBinError(9,0.1982623);
   nGenJet_stack_1->SetBinError(10,0.1531297);
   nGenJet_stack_1->SetBinError(11,0.1124844);
   nGenJet_stack_1->SetBinError(12,0.08491059);
   nGenJet_stack_1->SetBinError(13,0.05596101);
   nGenJet_stack_1->SetBinError(14,0.04003577);
   nGenJet_stack_1->SetBinError(15,0.02708309);
   nGenJet_stack_1->SetBinError(16,0.02579058);
   nGenJet_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   nGenJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_stack_1->SetLineColor(ci);
   nGenJet_stack_1->GetXaxis()->SetRange(1,15);
   nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_stack_1,"");
   
   TH1D *nGenJet_stack_2 = new TH1D("nGenJet_stack_2","",15,-0.5,14.5);
   nGenJet_stack_2->SetBinContent(3,0.009190653);
   nGenJet_stack_2->SetBinContent(4,0.1809952);
   nGenJet_stack_2->SetBinContent(5,1.393997);
   nGenJet_stack_2->SetBinContent(6,3.233518);
   nGenJet_stack_2->SetBinContent(7,4.375479);
   nGenJet_stack_2->SetBinContent(8,4.057881);
   nGenJet_stack_2->SetBinContent(9,2.959525);
   nGenJet_stack_2->SetBinContent(10,1.926144);
   nGenJet_stack_2->SetBinContent(11,1.134839);
   nGenJet_stack_2->SetBinContent(12,0.5954821);
   nGenJet_stack_2->SetBinContent(13,0.3010848);
   nGenJet_stack_2->SetBinContent(14,0.1417259);
   nGenJet_stack_2->SetBinContent(15,0.07139571);
   nGenJet_stack_2->SetBinContent(16,0.05359713);
   nGenJet_stack_2->SetBinError(3,0.001884889);
   nGenJet_stack_2->SetBinError(4,0.008327959);
   nGenJet_stack_2->SetBinError(5,0.02313267);
   nGenJet_stack_2->SetBinError(6,0.03522046);
   nGenJet_stack_2->SetBinError(7,0.04093471);
   nGenJet_stack_2->SetBinError(8,0.03935247);
   nGenJet_stack_2->SetBinError(9,0.03360441);
   nGenJet_stack_2->SetBinError(10,0.02705898);
   nGenJet_stack_2->SetBinError(11,0.02076769);
   nGenJet_stack_2->SetBinError(12,0.01500715);
   nGenJet_stack_2->SetBinError(13,0.01070927);
   nGenJet_stack_2->SetBinError(14,0.007331734);
   nGenJet_stack_2->SetBinError(15,0.005176429);
   nGenJet_stack_2->SetBinError(16,0.004480952);
   nGenJet_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   nGenJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_stack_2->SetLineColor(ci);
   nGenJet_stack_2->GetXaxis()->SetRange(1,15);
   nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenJet_stack_1","ZHcc","F");

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
   nGenJet__signal_16->Modified();
   nGenJet__signal_16->cd();
   nGenJet__signal_16->SetSelected(nGenJet__signal_16);
}
