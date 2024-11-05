#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VHcc_boosted_PN_med_m_jet_JETPUID()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Oct 21 12:54:55 2024) by ROOT version 6.30/03
   TCanvas *c1 = new TCanvas("c1", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.15);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__78 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__78->Draw();
   pad1_v1__78->cd();
   pad1_v1__78->Range(-38.75,-18.07066,348.75,162.6359);
   pad1_v1__78->SetBorderSize(2);
   pad1_v1__78->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_m_jet__196 = new TH1D("VHcc_boosted_PN_med_m_jet__196","",30,0,300);
   VHcc_boosted_PN_med_m_jet__196->SetBinContent(6,1.156422);
   VHcc_boosted_PN_med_m_jet__196->SetBinContent(7,3.799433);
   VHcc_boosted_PN_med_m_jet__196->SetBinContent(8,9.686165);
   VHcc_boosted_PN_med_m_jet__196->SetBinContent(9,31.8488);
   VHcc_boosted_PN_med_m_jet__196->SetBinContent(10,59.62469);
   VHcc_boosted_PN_med_m_jet__196->SetBinContent(11,21.22353);
   VHcc_boosted_PN_med_m_jet__196->SetBinContent(12,23.20666);
   VHcc_boosted_PN_med_m_jet__196->SetBinContent(13,43.19251);
   VHcc_boosted_PN_med_m_jet__196->SetBinContent(14,30.69387);
   VHcc_boosted_PN_med_m_jet__196->SetBinContent(15,14.31407);
   VHcc_boosted_PN_med_m_jet__196->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_m_jet__196->SetBinContent(21,1.215209);
   VHcc_boosted_PN_med_m_jet__196->SetBinError(6,1.156422);
   VHcc_boosted_PN_med_m_jet__196->SetBinError(7,2.20205);
   VHcc_boosted_PN_med_m_jet__196->SetBinError(8,3.42727);
   VHcc_boosted_PN_med_m_jet__196->SetBinError(9,6.172158);
   VHcc_boosted_PN_med_m_jet__196->SetBinError(10,8.490875);
   VHcc_boosted_PN_med_m_jet__196->SetBinError(11,5.690941);
   VHcc_boosted_PN_med_m_jet__196->SetBinError(12,5.340066);
   VHcc_boosted_PN_med_m_jet__196->SetBinError(13,7.551943);
   VHcc_boosted_PN_med_m_jet__196->SetBinError(14,6.040832);
   VHcc_boosted_PN_med_m_jet__196->SetBinError(15,4.159265);
   VHcc_boosted_PN_med_m_jet__196->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_m_jet__196->SetBinError(21,1.215209);
   VHcc_boosted_PN_med_m_jet__196->SetMaximum(144.5652);
   VHcc_boosted_PN_med_m_jet__196->SetEntries(210);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   VHcc_boosted_PN_med_m_jet__196->SetFillColor(ci);
   VHcc_boosted_PN_med_m_jet__196->SetLineWidth(2);
   VHcc_boosted_PN_med_m_jet__196->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_m_jet__196->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__196->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_m_jet__196->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__196->GetYaxis()->SetTitle("Events/10.000000");
   VHcc_boosted_PN_med_m_jet__196->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__196->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__196->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__196->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_m_jet__196->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__196->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_m_jet__197 = new TH1D("VHcc_boosted_PN_med_m_jet__197","",30,0,300);
   VHcc_boosted_PN_med_m_jet__197->SetBinContent(6,1.156422);
   VHcc_boosted_PN_med_m_jet__197->SetBinContent(7,3.799433);
   VHcc_boosted_PN_med_m_jet__197->SetBinContent(8,9.686165);
   VHcc_boosted_PN_med_m_jet__197->SetBinContent(9,31.8488);
   VHcc_boosted_PN_med_m_jet__197->SetBinContent(10,59.62469);
   VHcc_boosted_PN_med_m_jet__197->SetBinContent(11,21.22353);
   VHcc_boosted_PN_med_m_jet__197->SetBinContent(12,23.20666);
   VHcc_boosted_PN_med_m_jet__197->SetBinContent(13,43.19251);
   VHcc_boosted_PN_med_m_jet__197->SetBinContent(14,30.69387);
   VHcc_boosted_PN_med_m_jet__197->SetBinContent(15,14.31407);
   VHcc_boosted_PN_med_m_jet__197->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_m_jet__197->SetBinContent(21,1.215209);
   VHcc_boosted_PN_med_m_jet__197->SetBinError(6,1.156422);
   VHcc_boosted_PN_med_m_jet__197->SetBinError(7,2.20205);
   VHcc_boosted_PN_med_m_jet__197->SetBinError(8,3.42727);
   VHcc_boosted_PN_med_m_jet__197->SetBinError(9,6.172158);
   VHcc_boosted_PN_med_m_jet__197->SetBinError(10,8.490875);
   VHcc_boosted_PN_med_m_jet__197->SetBinError(11,5.690941);
   VHcc_boosted_PN_med_m_jet__197->SetBinError(12,5.340066);
   VHcc_boosted_PN_med_m_jet__197->SetBinError(13,7.551943);
   VHcc_boosted_PN_med_m_jet__197->SetBinError(14,6.040832);
   VHcc_boosted_PN_med_m_jet__197->SetBinError(15,4.159265);
   VHcc_boosted_PN_med_m_jet__197->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_m_jet__197->SetBinError(21,1.215209);
   VHcc_boosted_PN_med_m_jet__197->SetEntries(210);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_m_jet__197->SetLineColor(ci);
   VHcc_boosted_PN_med_m_jet__197->SetLineWidth(2);
   VHcc_boosted_PN_med_m_jet__197->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_m_jet__197->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__197->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_m_jet__197->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__197->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__197->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__197->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__197->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_m_jet__197->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__197->Draw("same hist");
   
   TH1D *VHcc_boosted_PN_med_m_jet__198 = new TH1D("VHcc_boosted_PN_med_m_jet__198","",3,0,300);
   VHcc_boosted_PN_med_m_jet__198->SetBinContent(1,113.7664);
   VHcc_boosted_PN_med_m_jet__198->SetBinContent(2,142.5652);
   VHcc_boosted_PN_med_m_jet__198->SetBinContent(3,2.37604);
   VHcc_boosted_PN_med_m_jet__198->SetBinError(1,11.74348);
   VHcc_boosted_PN_med_m_jet__198->SetBinError(2,13.56911);
   VHcc_boosted_PN_med_m_jet__198->SetBinError(3,1.680554);
   VHcc_boosted_PN_med_m_jet__198->SetEntries(224);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_m_jet__198->SetLineColor(ci);
   VHcc_boosted_PN_med_m_jet__198->SetLineWidth(2);
   VHcc_boosted_PN_med_m_jet__198->GetXaxis()->SetRange(1,30);
   VHcc_boosted_PN_med_m_jet__198->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__198->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_m_jet__198->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__198->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__198->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__198->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__198->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_m_jet__198->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__198->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VHcc_boosted_PN_med_m_jet","Nominal","F");

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
   entry=leg->AddEntry("VHcc_boosted_PN_med_m_jet","JETPUID Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VHcc_boosted_PN_med_m_jet","JETPUID Down","F");
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
   pad1_v1__78->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__79 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__79->Draw();
   pad1_v2__79->cd();
   pad1_v2__79->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__79->SetBorderSize(2);
   pad1_v2__79->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_m_jet__199 = new TH1D("VHcc_boosted_PN_med_m_jet__199","",30,0,300);
   VHcc_boosted_PN_med_m_jet__199->SetBinContent(6,1);
   VHcc_boosted_PN_med_m_jet__199->SetBinContent(7,1);
   VHcc_boosted_PN_med_m_jet__199->SetBinContent(8,1);
   VHcc_boosted_PN_med_m_jet__199->SetBinContent(9,1);
   VHcc_boosted_PN_med_m_jet__199->SetBinContent(10,1);
   VHcc_boosted_PN_med_m_jet__199->SetBinContent(11,1);
   VHcc_boosted_PN_med_m_jet__199->SetBinContent(12,1);
   VHcc_boosted_PN_med_m_jet__199->SetBinContent(13,1);
   VHcc_boosted_PN_med_m_jet__199->SetBinContent(14,1);
   VHcc_boosted_PN_med_m_jet__199->SetBinContent(15,1);
   VHcc_boosted_PN_med_m_jet__199->SetBinContent(16,1);
   VHcc_boosted_PN_med_m_jet__199->SetBinContent(21,1);
   VHcc_boosted_PN_med_m_jet__199->SetBinError(6,1.414214);
   VHcc_boosted_PN_med_m_jet__199->SetBinError(7,0.8196405);
   VHcc_boosted_PN_med_m_jet__199->SetBinError(8,0.5003933);
   VHcc_boosted_PN_med_m_jet__199->SetBinError(9,0.2740684);
   VHcc_boosted_PN_med_m_jet__199->SetBinError(10,0.2013916);
   VHcc_boosted_PN_med_m_jet__199->SetBinError(11,0.3792114);
   VHcc_boosted_PN_med_m_jet__199->SetBinError(12,0.3254236);
   VHcc_boosted_PN_med_m_jet__199->SetBinError(13,0.2472665);
   VHcc_boosted_PN_med_m_jet__199->SetBinError(14,0.2783301);
   VHcc_boosted_PN_med_m_jet__199->SetBinError(15,0.4109306);
   VHcc_boosted_PN_med_m_jet__199->SetBinError(16,1.414214);
   VHcc_boosted_PN_med_m_jet__199->SetBinError(21,1.414214);
   VHcc_boosted_PN_med_m_jet__199->SetMinimum(0.8);
   VHcc_boosted_PN_med_m_jet__199->SetMaximum(1.2);
   VHcc_boosted_PN_med_m_jet__199->SetEntries(18.95972);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_m_jet__199->SetLineColor(ci);
   VHcc_boosted_PN_med_m_jet__199->SetLineWidth(2);
   VHcc_boosted_PN_med_m_jet__199->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_m_jet__199->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__199->GetXaxis()->SetLabelSize(0.1);
   VHcc_boosted_PN_med_m_jet__199->GetXaxis()->SetTitleSize(0.13);
   VHcc_boosted_PN_med_m_jet__199->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_m_jet__199->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__199->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   VHcc_boosted_PN_med_m_jet__199->GetYaxis()->CenterTitle(true);
   VHcc_boosted_PN_med_m_jet__199->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__199->GetYaxis()->SetLabelSize(0.09);
   VHcc_boosted_PN_med_m_jet__199->GetYaxis()->SetTitleSize(0.12);
   VHcc_boosted_PN_med_m_jet__199->GetYaxis()->SetTitleOffset(0.35);
   VHcc_boosted_PN_med_m_jet__199->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__199->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__199->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_m_jet__199->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__199->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_m_jet__200 = new TH1D("VHcc_boosted_PN_med_m_jet__200","",3,0,300);
   VHcc_boosted_PN_med_m_jet__200->SetBinContent(1,113.7664);
   VHcc_boosted_PN_med_m_jet__200->SetBinContent(2,142.5652);
   VHcc_boosted_PN_med_m_jet__200->SetBinContent(3,2.37604);
   VHcc_boosted_PN_med_m_jet__200->SetBinError(1,11.74348);
   VHcc_boosted_PN_med_m_jet__200->SetBinError(2,13.56911);
   VHcc_boosted_PN_med_m_jet__200->SetBinError(3,1.680554);
   VHcc_boosted_PN_med_m_jet__200->SetEntries(224);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_m_jet__200->SetLineColor(ci);
   VHcc_boosted_PN_med_m_jet__200->SetLineWidth(2);
   VHcc_boosted_PN_med_m_jet__200->GetXaxis()->SetRange(1,30);
   VHcc_boosted_PN_med_m_jet__200->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__200->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_m_jet__200->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__200->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__200->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__200->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_m_jet__200->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_m_jet__200->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_m_jet__200->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__79->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
