#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZMass_JES()
{
//=========Macro generated from canvas: c1_n18/
//=========  (Mon Nov  4 10:38:00 2024) by ROOT version 6.30/03
   TCanvas *c1_n18 = new TCanvas("c1_n18", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1_n18->SetHighLightColor(2);
   c1_n18->Range(0,0,1,1);
   c1_n18->SetFillColor(0);
   c1_n18->SetBorderMode(0);
   c1_n18->SetBorderSize(2);
   c1_n18->SetLeftMargin(0.15);
   c1_n18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__36 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__36->Draw();
   pad1_v1__36->cd();
   pad1_v1__36->Range(-37.5,-5.115274,337.5,46.03747);
   pad1_v1__36->SetFillColor(0);
   pad1_v1__36->SetBorderMode(0);
   pad1_v1__36->SetBorderSize(2);
   pad1_v1__36->SetFrameBorderMode(0);
   pad1_v1__36->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__91 = new TH1D("ZccHcc_boosted_PN_med_ZMass__91","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinContent(6,1.611534);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinContent(7,1.492389);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinContent(8,6.315432);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinContent(9,23.21427);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinContent(10,38.92219);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinContent(11,8.533445);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinError(6,1.611534);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinError(7,1.492389);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinError(8,2.924038);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinError(9,6.029478);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinError(10,7.388501);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinError(11,3.303897);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__91->SetMaximum(40.92219);
   ZccHcc_boosted_PN_med_ZMass__91->SetEntries(65);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__91->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__91->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__91->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__91->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__91->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__91->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_ZMass__91->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__91->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_ZMass__91->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__91->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__91->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__91->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__91->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__91->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__92 = new TH1D("ZccHcc_boosted_PN_med_ZMass__92","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinContent(6,1.611534);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinContent(7,1.492389);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinContent(8,6.175045);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinContent(9,24.51958);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinContent(10,38.92219);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinContent(11,8.408518);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinError(6,1.611534);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinError(7,1.492389);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinError(8,2.847753);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinError(9,6.169152);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinError(10,7.388501);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinError(11,3.2604);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__92->SetEntries(66);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__92->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__92->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__92->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__92->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__92->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__92->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__92->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__92->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__92->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__92->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__92->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__92->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__93 = new TH1D("ZccHcc_boosted_PN_med_ZMass__93","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinContent(6,1.611534);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinContent(7,1.632252);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinContent(8,6.315432);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinContent(9,23.33733);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinContent(10,34.68581);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinContent(11,8.618766);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinError(6,1.611534);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinError(7,1.632252);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinError(8,2.924038);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinError(9,6.052408);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinError(10,6.971022);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinError(11,3.323991);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__93->SetEntries(62);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__93->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__93->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__93->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__93->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__93->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__93->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__93->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__93->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__93->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__93->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__93->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__93->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","JES Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","JES Down","F");
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
   pad1_v1__36->Modified();
   c1_n18->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__37 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__37->Draw();
   pad1_v2__37->cd();
   pad1_v2__37->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__37->SetFillColor(0);
   pad1_v2__37->SetBorderMode(0);
   pad1_v2__37->SetBorderSize(2);
   pad1_v2__37->SetFrameBorderMode(0);
   pad1_v2__37->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__94 = new TH1D("ZccHcc_boosted_PN_med_ZMass__94","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinContent(6,1);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinContent(7,1);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinContent(8,0.9777709);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinContent(9,1.056229);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinContent(11,0.9853603);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinError(6,1.414214);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinError(7,1.414214);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinError(8,0.6389617);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinError(9,0.3819455);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinError(10,0.2684566);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinError(11,0.5399295);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinError(12,0.8189038);
   ZccHcc_boosted_PN_med_ZMass__94->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__94->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__94->SetEntries(8.816808);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__94->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__94->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__94->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__94->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__94->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__94->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__95 = new TH1D("ZccHcc_boosted_PN_med_ZMass__95","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinContent(6,1);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinContent(7,1.093718);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinContent(9,1.005301);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinContent(10,0.8911577);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinContent(11,1.009998);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinError(6,1.414214);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinError(7,1.54675);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinError(8,0.6547793);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinError(9,0.368988);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinError(10,0.2463626);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinError(11,0.5519449);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinError(12,0.8189038);
   ZccHcc_boosted_PN_med_ZMass__95->SetEntries(8.176251);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__95->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__95->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__95->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__95->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__95->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__95->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__95->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__95->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__95->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__95->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__95->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__95->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__95->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__95->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__37->Modified();
   c1_n18->cd();
   c1_n18->Modified();
   c1_n18->SetSelected(c1_n18);
}
