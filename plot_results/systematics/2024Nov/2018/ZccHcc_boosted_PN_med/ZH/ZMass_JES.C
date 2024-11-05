#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZMass_JES()
{
//=========Macro generated from canvas: c1_n20/
//=========  (Mon Nov  4 10:38:00 2024) by ROOT version 6.30/03
   TCanvas *c1_n20 = new TCanvas("c1_n20", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1_n20->SetHighLightColor(2);
   c1_n20->Range(0,0,1,1);
   c1_n20->SetFillColor(0);
   c1_n20->SetBorderMode(0);
   c1_n20->SetBorderSize(2);
   c1_n20->SetLeftMargin(0.15);
   c1_n20->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__40 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__40->Draw();
   pad1_v1__40->cd();
   pad1_v1__40->Range(-37.5,-4.488462,337.5,40.39616);
   pad1_v1__40->SetFillColor(0);
   pad1_v1__40->SetBorderMode(0);
   pad1_v1__40->SetBorderSize(2);
   pad1_v1__40->SetFrameBorderMode(0);
   pad1_v1__40->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__101 = new TH1D("ZccHcc_boosted_PN_med_ZMass__101","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinContent(5,0.9436521);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinContent(8,6.738756);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinContent(9,26.78804);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinContent(10,33.10754);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinContent(11,19.9232);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinContent(12,2.127059);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinContent(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinError(5,0.9436521);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinError(8,2.592089);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinError(9,5.353004);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinError(10,6.57414);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinError(11,4.893043);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinError(12,1.506193);
   ZccHcc_boosted_PN_med_ZMass__101->SetBinError(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__101->SetMaximum(35.9077);
   ZccHcc_boosted_PN_med_ZMass__101->SetEntries(96);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__101->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__101->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__101->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__101->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__101->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__101->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_ZMass__101->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__101->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_ZMass__101->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__101->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__101->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__101->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__101->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__101->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__102 = new TH1D("ZccHcc_boosted_PN_med_ZMass__102","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinContent(5,0.9436521);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinContent(8,6.831155);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinContent(9,28.04169);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinContent(10,33.9077);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinContent(11,19.85007);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinContent(12,2.127059);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinContent(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinError(5,0.9436521);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinError(8,2.964838);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinError(9,5.498107);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinError(10,6.608915);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinError(11,4.881077);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinError(12,1.506193);
   ZccHcc_boosted_PN_med_ZMass__102->SetBinError(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__102->SetEntries(100);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__102->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__102->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__102->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__102->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__102->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__102->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__102->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__102->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__102->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__102->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__102->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__102->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__103 = new TH1D("ZccHcc_boosted_PN_med_ZMass__103","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinContent(5,0.9436521);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinContent(8,6.738756);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinContent(9,25.41856);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinContent(10,29.94133);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinContent(11,19.9232);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinContent(12,2.133079);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinContent(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinError(5,0.9436521);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinError(8,2.592089);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinError(9,5.174457);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinError(10,6.28522);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinError(11,4.893043);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinError(12,1.510675);
   ZccHcc_boosted_PN_med_ZMass__103->SetBinError(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__103->SetEntries(92);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__103->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__103->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__103->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__103->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__103->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__103->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__103->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__103->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__103->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__103->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__103->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__103->Draw("same hist");
   
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
   pad1_v1__40->Modified();
   c1_n20->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__41 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__41->Draw();
   pad1_v2__41->cd();
   pad1_v2__41->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__41->SetFillColor(0);
   pad1_v2__41->SetBorderMode(0);
   pad1_v2__41->SetBorderSize(2);
   pad1_v2__41->SetFrameBorderMode(0);
   pad1_v2__41->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__104 = new TH1D("ZccHcc_boosted_PN_med_ZMass__104","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinContent(5,1);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinContent(8,1.013712);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinContent(9,1.046799);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinContent(10,1.024168);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinContent(11,0.9963297);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinError(5,1.414214);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinError(8,0.5878911);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinError(9,0.2930558);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinError(10,0.2849678);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinError(11,0.3462622);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinError(12,1.001419);
   ZccHcc_boosted_PN_med_ZMass__104->SetBinError(13,1.414214);
   ZccHcc_boosted_PN_med_ZMass__104->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__104->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__104->SetEntries(8.897383);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__104->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__104->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__104->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__104->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__104->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__104->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__104->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__104->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__104->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__104->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__104->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__104->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__104->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__104->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__104->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__104->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__104->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__104->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__104->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__104->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__105 = new TH1D("ZccHcc_boosted_PN_med_ZMass__105","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinContent(5,1);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinContent(9,0.9488774);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinContent(10,0.9043657);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinContent(12,1.00283);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinError(5,1.414214);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinError(8,0.5439828);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinError(9,0.2706747);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinError(10,0.2613214);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinError(11,0.3473242);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinError(12,1.004326);
   ZccHcc_boosted_PN_med_ZMass__105->SetBinError(13,1.414214);
   ZccHcc_boosted_PN_med_ZMass__105->SetEntries(8.443979);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__105->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__105->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__105->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__105->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__105->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__105->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__105->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__105->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__105->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__105->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__105->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__105->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__105->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__105->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__41->Modified();
   c1_n20->cd();
   c1_n20->Modified();
   c1_n20->SetSelected(c1_n20);
}
