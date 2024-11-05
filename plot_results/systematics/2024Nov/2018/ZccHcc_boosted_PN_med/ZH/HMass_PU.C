#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HMass_PU()
{
//=========Macro generated from canvas: c1_n17/
//=========  (Mon Nov  4 10:38:00 2024) by ROOT version 6.30/03
   TCanvas *c1_n17 = new TCanvas("c1_n17", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1_n17->SetHighLightColor(2);
   c1_n17->Range(0,0,1,1);
   c1_n17->SetFillColor(0);
   c1_n17->SetBorderMode(0);
   c1_n17->SetBorderSize(2);
   c1_n17->SetLeftMargin(0.15);
   c1_n17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__34 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__34->Draw();
   pad1_v1__34->cd();
   pad1_v1__34->Range(-37.5,-4.692313,337.5,42.23082);
   pad1_v1__34->SetFillColor(0);
   pad1_v1__34->SetBorderMode(0);
   pad1_v1__34->SetBorderSize(2);
   pad1_v1__34->SetFrameBorderMode(0);
   pad1_v1__34->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__86 = new TH1D("ZccHcc_boosted_PN_med_HMass__86","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__86->SetBinContent(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__86->SetBinContent(11,4.758973);
   ZccHcc_boosted_PN_med_HMass__86->SetBinContent(12,17.35637);
   ZccHcc_boosted_PN_med_HMass__86->SetBinContent(13,21.72478);
   ZccHcc_boosted_PN_med_HMass__86->SetBinContent(14,33.19232);
   ZccHcc_boosted_PN_med_HMass__86->SetBinContent(15,9.582921);
   ZccHcc_boosted_PN_med_HMass__86->SetBinContent(16,2.325127);
   ZccHcc_boosted_PN_med_HMass__86->SetBinContent(17,0.8668301);
   ZccHcc_boosted_PN_med_HMass__86->SetBinError(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__86->SetBinError(11,2.180875);
   ZccHcc_boosted_PN_med_HMass__86->SetBinError(12,4.386821);
   ZccHcc_boosted_PN_med_HMass__86->SetBinError(13,5.387079);
   ZccHcc_boosted_PN_med_HMass__86->SetBinError(14,6.045841);
   ZccHcc_boosted_PN_med_HMass__86->SetBinError(15,3.272466);
   ZccHcc_boosted_PN_med_HMass__86->SetBinError(16,2.246237);
   ZccHcc_boosted_PN_med_HMass__86->SetBinError(17,0.8668301);
   ZccHcc_boosted_PN_med_HMass__86->SetMaximum(37.5385);
   ZccHcc_boosted_PN_med_HMass__86->SetEntries(96);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_HMass__86->SetFillColor(ci);
   ZccHcc_boosted_PN_med_HMass__86->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__86->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__86->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_HMass__86->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__86->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_HMass__86->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__86->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_HMass__86->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__86->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__86->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__86->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__86->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__86->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__87 = new TH1D("ZccHcc_boosted_PN_med_HMass__87","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__87->SetBinContent(10,0.9781706);
   ZccHcc_boosted_PN_med_HMass__87->SetBinContent(11,4.716184);
   ZccHcc_boosted_PN_med_HMass__87->SetBinContent(12,15.59289);
   ZccHcc_boosted_PN_med_HMass__87->SetBinContent(13,20.47642);
   ZccHcc_boosted_PN_med_HMass__87->SetBinContent(14,30.89437);
   ZccHcc_boosted_PN_med_HMass__87->SetBinContent(15,9.103007);
   ZccHcc_boosted_PN_med_HMass__87->SetBinContent(16,2.068966);
   ZccHcc_boosted_PN_med_HMass__87->SetBinContent(17,0.9684165);
   ZccHcc_boosted_PN_med_HMass__87->SetBinError(10,0.9781706);
   ZccHcc_boosted_PN_med_HMass__87->SetBinError(11,2.122025);
   ZccHcc_boosted_PN_med_HMass__87->SetBinError(12,3.911707);
   ZccHcc_boosted_PN_med_HMass__87->SetBinError(13,5.009707);
   ZccHcc_boosted_PN_med_HMass__87->SetBinError(14,5.525353);
   ZccHcc_boosted_PN_med_HMass__87->SetBinError(15,3.051183);
   ZccHcc_boosted_PN_med_HMass__87->SetBinError(16,2.012128);
   ZccHcc_boosted_PN_med_HMass__87->SetBinError(17,0.9684165);
   ZccHcc_boosted_PN_med_HMass__87->SetEntries(96);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__87->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__87->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__87->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__87->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__87->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__87->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__87->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__87->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__87->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__87->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__87->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__87->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__88 = new TH1D("ZccHcc_boosted_PN_med_HMass__88","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__88->SetBinContent(10,0.9492775);
   ZccHcc_boosted_PN_med_HMass__88->SetBinContent(11,4.707471);
   ZccHcc_boosted_PN_med_HMass__88->SetBinContent(12,19.33313);
   ZccHcc_boosted_PN_med_HMass__88->SetBinContent(13,23.21147);
   ZccHcc_boosted_PN_med_HMass__88->SetBinContent(14,35.5385);
   ZccHcc_boosted_PN_med_HMass__88->SetBinContent(15,10.0502);
   ZccHcc_boosted_PN_med_HMass__88->SetBinContent(16,2.612116);
   ZccHcc_boosted_PN_med_HMass__88->SetBinContent(17,0.7061085);
   ZccHcc_boosted_PN_med_HMass__88->SetBinError(10,0.9492775);
   ZccHcc_boosted_PN_med_HMass__88->SetBinError(11,2.246774);
   ZccHcc_boosted_PN_med_HMass__88->SetBinError(12,4.966242);
   ZccHcc_boosted_PN_med_HMass__88->SetBinError(13,5.88275);
   ZccHcc_boosted_PN_med_HMass__88->SetBinError(14,6.670595);
   ZccHcc_boosted_PN_med_HMass__88->SetBinError(15,3.576357);
   ZccHcc_boosted_PN_med_HMass__88->SetBinError(16,2.549026);
   ZccHcc_boosted_PN_med_HMass__88->SetBinError(17,0.7061085);
   ZccHcc_boosted_PN_med_HMass__88->SetEntries(96);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__88->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__88->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__88->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__88->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__88->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__88->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__88->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__88->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__88->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__88->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__88->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__88->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","Nominal","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","PU Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","PU Down","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pad1_v1__34->Modified();
   c1_n17->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__35 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__35->Draw();
   pad1_v2__35->cd();
   pad1_v2__35->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__35->SetFillColor(0);
   pad1_v2__35->SetBorderMode(0);
   pad1_v2__35->SetBorderSize(2);
   pad1_v2__35->SetFrameBorderMode(0);
   pad1_v2__35->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__89 = new TH1D("ZccHcc_boosted_PN_med_HMass__89","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__89->SetBinContent(10,0.9915892);
   ZccHcc_boosted_PN_med_HMass__89->SetBinContent(11,0.9910088);
   ZccHcc_boosted_PN_med_HMass__89->SetBinContent(12,0.8983956);
   ZccHcc_boosted_PN_med_HMass__89->SetBinContent(13,0.9425377);
   ZccHcc_boosted_PN_med_HMass__89->SetBinContent(14,0.9307687);
   ZccHcc_boosted_PN_med_HMass__89->SetBinContent(15,0.9499199);
   ZccHcc_boosted_PN_med_HMass__89->SetBinContent(16,0.8898293);
   ZccHcc_boosted_PN_med_HMass__89->SetBinContent(17,1.117193);
   ZccHcc_boosted_PN_med_HMass__89->SetBinError(10,1.402319);
   ZccHcc_boosted_PN_med_HMass__89->SetBinError(11,0.6364549);
   ZccHcc_boosted_PN_med_HMass__89->SetBinError(12,0.3199293);
   ZccHcc_boosted_PN_med_HMass__89->SetBinError(13,0.3283307);
   ZccHcc_boosted_PN_med_HMass__89->SetBinError(14,0.2375981);
   ZccHcc_boosted_PN_med_HMass__89->SetBinError(15,0.4545378);
   ZccHcc_boosted_PN_med_HMass__89->SetBinError(16,1.219781);
   ZccHcc_boosted_PN_med_HMass__89->SetBinError(17,1.579949);
   ZccHcc_boosted_PN_med_HMass__89->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_HMass__89->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_HMass__89->SetEntries(8.707597);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__89->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__89->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__89->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__89->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_HMass__89->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__89->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_HMass__89->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__89->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__89->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__89->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_HMass__89->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_HMass__89->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__89->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_HMass__89->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_HMass__89->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_HMass__89->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__89->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__89->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__89->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__89->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__90 = new TH1D("ZccHcc_boosted_PN_med_HMass__90","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__90->SetBinContent(10,0.9622997);
   ZccHcc_boosted_PN_med_HMass__90->SetBinContent(11,0.989178);
   ZccHcc_boosted_PN_med_HMass__90->SetBinContent(12,1.113892);
   ZccHcc_boosted_PN_med_HMass__90->SetBinContent(13,1.068433);
   ZccHcc_boosted_PN_med_HMass__90->SetBinContent(14,1.070685);
   ZccHcc_boosted_PN_med_HMass__90->SetBinContent(15,1.048761);
   ZccHcc_boosted_PN_med_HMass__90->SetBinContent(16,1.123429);
   ZccHcc_boosted_PN_med_HMass__90->SetBinContent(17,0.814587);
   ZccHcc_boosted_PN_med_HMass__90->SetBinError(10,1.360897);
   ZccHcc_boosted_PN_med_HMass__90->SetBinError(11,0.6545056);
   ZccHcc_boosted_PN_med_HMass__90->SetBinError(12,0.4014163);
   ZccHcc_boosted_PN_med_HMass__90->SetBinError(13,0.3788366);
   ZccHcc_boosted_PN_med_HMass__90->SetBinError(14,0.2800379);
   ZccHcc_boosted_PN_med_HMass__90->SetBinError(15,0.5172466);
   ZccHcc_boosted_PN_med_HMass__90->SetBinError(16,1.542649);
   ZccHcc_boosted_PN_med_HMass__90->SetBinError(17,1.152);
   ZccHcc_boosted_PN_med_HMass__90->SetEntries(10.10813);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__90->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__90->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__90->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__90->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__90->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__90->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__90->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__90->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__90->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__90->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__90->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__90->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__90->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__90->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__35->Modified();
   c1_n17->cd();
   c1_n17->Modified();
   c1_n17->SetSelected(c1_n17);
}
