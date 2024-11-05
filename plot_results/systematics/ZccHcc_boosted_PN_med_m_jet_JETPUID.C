#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_m_jet_JETPUID()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Oct 21 12:54:54 2024) by ROOT version 6.30/03
   TCanvas *c1 = new TCanvas("c1", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.15);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__18 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__18->Draw();
   pad1_v1__18->cd();
   pad1_v1__18->Range(-38.75,-9.092628,348.75,81.83365);
   pad1_v1__18->SetBorderSize(2);
   pad1_v1__18->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__46 = new TH1D("ZccHcc_boosted_PN_med_m_jet__46","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinContent(10,32.8246);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinContent(11,8.407669);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinContent(12,15.38878);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinError(10,6.72825);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinError(11,3.245056);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinError(12,4.667229);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_m_jet__46->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__46->SetMaximum(72.74102);
   ZccHcc_boosted_PN_med_m_jet__46->SetEntries(98);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_m_jet__46->SetFillColor(ci);
   ZccHcc_boosted_PN_med_m_jet__46->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__46->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_m_jet__46->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__46->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__46->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__46->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_m_jet__46->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__46->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__46->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__46->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__46->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__46->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__47 = new TH1D("ZccHcc_boosted_PN_med_m_jet__47","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinContent(10,32.8246);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinContent(11,8.407669);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinContent(12,15.38878);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinError(10,6.72825);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinError(11,3.245056);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinError(12,4.667229);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_m_jet__47->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__47->SetEntries(98);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_m_jet__47->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__47->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__47->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__47->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__47->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__47->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__47->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__47->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__47->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__47->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__47->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__47->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__48 = new TH1D("ZccHcc_boosted_PN_med_m_jet__48","",3,0,300);
   ZccHcc_boosted_PN_med_m_jet__48->SetBinContent(1,54.18943);
   ZccHcc_boosted_PN_med_m_jet__48->SetBinContent(2,70.74102);
   ZccHcc_boosted_PN_med_m_jet__48->SetBinError(1,8.874373);
   ZccHcc_boosted_PN_med_m_jet__48->SetBinError(2,9.963323);
   ZccHcc_boosted_PN_med_m_jet__48->SetEntries(100);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_m_jet__48->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__48->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__48->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_m_jet__48->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__48->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__48->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__48->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__48->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__48->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__48->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__48->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__48->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ZccHcc_boosted_PN_med_m_jet","Nominal","F");

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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_m_jet","JETPUID Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_m_jet","JETPUID Down","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pad1_v1__18->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__19 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__19->Draw();
   pad1_v2__19->cd();
   pad1_v2__19->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__19->SetBorderSize(2);
   pad1_v2__19->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__49 = new TH1D("ZccHcc_boosted_PN_med_m_jet__49","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinContent(9,1);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinContent(14,1);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinContent(17,1);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinError(8,0.7378841);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinError(9,0.4681609);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinError(10,0.2898796);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinError(11,0.5458352);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinError(12,0.4289139);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinError(13,0.3800416);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinError(14,0.362098);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_m_jet__49->SetBinError(17,1.414214);
   ZccHcc_boosted_PN_med_m_jet__49->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_m_jet__49->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_m_jet__49->SetEntries(17.58908);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_m_jet__49->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__49->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__49->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_m_jet__49->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__49->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_m_jet__49->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_m_jet__49->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__49->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__49->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_m_jet__49->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_m_jet__49->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__49->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_m_jet__49->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_m_jet__49->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_m_jet__49->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__49->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__49->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__49->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__49->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__50 = new TH1D("ZccHcc_boosted_PN_med_m_jet__50","",3,0,300);
   ZccHcc_boosted_PN_med_m_jet__50->SetBinContent(1,54.18943);
   ZccHcc_boosted_PN_med_m_jet__50->SetBinContent(2,70.74102);
   ZccHcc_boosted_PN_med_m_jet__50->SetBinError(1,8.874373);
   ZccHcc_boosted_PN_med_m_jet__50->SetBinError(2,9.963323);
   ZccHcc_boosted_PN_med_m_jet__50->SetEntries(100);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_m_jet__50->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__50->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__50->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_m_jet__50->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__50->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__50->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__50->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__50->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__50->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__50->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__50->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__50->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__19->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
