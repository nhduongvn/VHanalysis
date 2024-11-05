#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZMass_PU()
{
//=========Macro generated from canvas: c1_n21/
//=========  (Mon Nov  4 10:38:00 2024) by ROOT version 6.30/03
   TCanvas *c1_n21 = new TCanvas("c1_n21", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1_n21->SetHighLightColor(2);
   c1_n21->Range(0,0,1,1);
   c1_n21->SetFillColor(0);
   c1_n21->SetBorderMode(0);
   c1_n21->SetBorderSize(2);
   c1_n21->SetLeftMargin(0.15);
   c1_n21->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__42 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__42->Draw();
   pad1_v1__42->cd();
   pad1_v1__42->Range(-37.5,-5.525826,337.5,49.73243);
   pad1_v1__42->SetFillColor(0);
   pad1_v1__42->SetBorderMode(0);
   pad1_v1__42->SetBorderSize(2);
   pad1_v1__42->SetFrameBorderMode(0);
   pad1_v1__42->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__106 = new TH1D("ZccHcc_boosted_PN_med_ZMass__106","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinContent(6,1.611534);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinContent(7,1.492389);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinContent(8,6.315432);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinContent(9,23.21427);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinContent(10,38.92219);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinContent(11,8.533445);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinError(6,1.611534);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinError(7,1.492389);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinError(8,2.924038);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinError(9,6.029478);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinError(10,7.388501);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinError(11,3.303897);
   ZccHcc_boosted_PN_med_ZMass__106->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__106->SetMaximum(44.2066);
   ZccHcc_boosted_PN_med_ZMass__106->SetEntries(65);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__106->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__106->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__106->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__106->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__106->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__106->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_ZMass__106->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__106->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_ZMass__106->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__106->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__106->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__106->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__106->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__106->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__107 = new TH1D("ZccHcc_boosted_PN_med_ZMass__107","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinContent(6,1.370855);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinContent(7,1.186127);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinContent(8,5.879321);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinContent(9,21.8349);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinContent(10,35.959);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinContent(11,9.155244);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinContent(12,3.74231);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinError(6,1.370855);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinError(7,1.186127);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinError(8,2.760074);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinError(9,5.538086);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinError(10,6.869134);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinError(11,3.375986);
   ZccHcc_boosted_PN_med_ZMass__107->SetBinError(12,2.172786);
   ZccHcc_boosted_PN_med_ZMass__107->SetEntries(65);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__107->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__107->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__107->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__107->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__107->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__107->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__107->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__107->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__107->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__107->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__107->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__107->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__108 = new TH1D("ZccHcc_boosted_PN_med_ZMass__108","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinContent(6,1.84065);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinContent(7,1.867037);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinContent(8,7.033295);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinContent(9,24.70409);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinContent(10,42.2066);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinContent(11,8.053565);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinContent(12,4.833032);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinError(6,1.84065);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinError(7,1.867037);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinError(8,3.31215);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinError(9,6.772412);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinError(10,8.150813);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinError(11,3.34957);
   ZccHcc_boosted_PN_med_ZMass__108->SetBinError(12,2.813379);
   ZccHcc_boosted_PN_med_ZMass__108->SetEntries(65);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__108->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__108->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__108->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__108->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__108->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__108->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__108->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__108->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__108->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__108->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__108->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__108->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","Nominal","F");

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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","PU Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","PU Down","F");
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
   pad1_v1__42->Modified();
   c1_n21->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__43 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__43->Draw();
   pad1_v2__43->cd();
   pad1_v2__43->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__43->SetFillColor(0);
   pad1_v2__43->SetBorderMode(0);
   pad1_v2__43->SetBorderSize(2);
   pad1_v2__43->SetFrameBorderMode(0);
   pad1_v2__43->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__109 = new TH1D("ZccHcc_boosted_PN_med_ZMass__109","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinContent(6,0.8506526);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinContent(7,0.7947843);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinContent(8,0.9309452);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinContent(9,0.9405811);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinContent(10,0.9238688);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinContent(11,1.072866);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinContent(12,0.8776196);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinError(6,1.203005);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinError(7,1.123995);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinError(8,0.6138279);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinError(9,0.3414594);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinError(10,0.2488034);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinError(11,0.5736339);
   ZccHcc_boosted_PN_med_ZMass__109->SetBinError(12,0.7196471);
   ZccHcc_boosted_PN_med_ZMass__109->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__109->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__109->SetEntries(9.932115);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__109->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__109->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__109->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__109->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__109->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__109->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__109->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__109->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__109->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__109->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__109->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__109->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__109->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__109->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__109->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__109->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__109->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__109->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__109->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__109->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__110 = new TH1D("ZccHcc_boosted_PN_med_ZMass__110","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinContent(6,1.142173);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinContent(7,1.251039);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinContent(8,1.113668);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinContent(9,1.064177);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinContent(10,1.084384);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinContent(11,0.9437648);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinContent(12,1.133408);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinError(6,1.615276);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinError(7,1.769237);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinError(8,0.7354745);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinError(9,0.4018785);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinError(10,0.2936432);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinError(11,0.5362737);
   ZccHcc_boosted_PN_med_ZMass__110->SetBinError(12,0.9306095);
   ZccHcc_boosted_PN_med_ZMass__110->SetEntries(7.783971);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__110->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__110->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__110->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__110->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__110->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__110->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__110->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__110->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__110->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__110->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__110->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__110->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__110->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__110->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__43->Modified();
   c1_n21->cd();
   c1_n21->Modified();
   c1_n21->SetSelected(c1_n21);
}
