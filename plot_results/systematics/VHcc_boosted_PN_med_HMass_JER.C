#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VHcc_boosted_PN_med_HMass_JER()
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
   TPad *pad1_v1__62 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__62->Draw();
   pad1_v1__62->cd();
   pad1_v1__62->Range(-38.75,-5.17595,348.75,46.58355);
   pad1_v1__62->SetBorderSize(2);
   pad1_v1__62->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_HMass__156 = new TH1D("VHcc_boosted_PN_med_HMass__156","",30,0,300);
   VHcc_boosted_PN_med_HMass__156->SetBinContent(8,2.327649);
   VHcc_boosted_PN_med_HMass__156->SetBinContent(9,3.424545);
   VHcc_boosted_PN_med_HMass__156->SetBinContent(10,10.98909);
   VHcc_boosted_PN_med_HMass__156->SetBinContent(11,7.880025);
   VHcc_boosted_PN_med_HMass__156->SetBinContent(12,17.10883);
   VHcc_boosted_PN_med_HMass__156->SetBinContent(13,39.4076);
   VHcc_boosted_PN_med_HMass__156->SetBinContent(14,28.33915);
   VHcc_boosted_PN_med_HMass__156->SetBinContent(15,9.942373);
   VHcc_boosted_PN_med_HMass__156->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_HMass__156->SetBinError(8,1.648516);
   VHcc_boosted_PN_med_HMass__156->SetBinError(9,2.012203);
   VHcc_boosted_PN_med_HMass__156->SetBinError(10,3.673365);
   VHcc_boosted_PN_med_HMass__156->SetBinError(11,3.537899);
   VHcc_boosted_PN_med_HMass__156->SetBinError(12,4.588861);
   VHcc_boosted_PN_med_HMass__156->SetBinError(13,7.075363);
   VHcc_boosted_PN_med_HMass__156->SetBinError(14,5.806747);
   VHcc_boosted_PN_med_HMass__156->SetBinError(15,3.524047);
   VHcc_boosted_PN_med_HMass__156->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_HMass__156->SetMaximum(41.4076);
   VHcc_boosted_PN_med_HMass__156->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   VHcc_boosted_PN_med_HMass__156->SetFillColor(ci);
   VHcc_boosted_PN_med_HMass__156->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__156->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_HMass__156->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__156->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__156->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__156->GetYaxis()->SetTitle("Events/10.000000");
   VHcc_boosted_PN_med_HMass__156->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__156->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__156->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__156->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__156->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__156->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__157 = new TH1D("VHcc_boosted_PN_med_HMass__157","",30,0,300);
   VHcc_boosted_PN_med_HMass__157->SetBinContent(8,2.327649);
   VHcc_boosted_PN_med_HMass__157->SetBinContent(9,3.424545);
   VHcc_boosted_PN_med_HMass__157->SetBinContent(10,10.98909);
   VHcc_boosted_PN_med_HMass__157->SetBinContent(11,7.880025);
   VHcc_boosted_PN_med_HMass__157->SetBinContent(12,17.10883);
   VHcc_boosted_PN_med_HMass__157->SetBinContent(13,39.4076);
   VHcc_boosted_PN_med_HMass__157->SetBinContent(14,28.45895);
   VHcc_boosted_PN_med_HMass__157->SetBinContent(15,9.942373);
   VHcc_boosted_PN_med_HMass__157->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_HMass__157->SetBinError(8,1.648516);
   VHcc_boosted_PN_med_HMass__157->SetBinError(9,2.012203);
   VHcc_boosted_PN_med_HMass__157->SetBinError(10,3.673365);
   VHcc_boosted_PN_med_HMass__157->SetBinError(11,3.537899);
   VHcc_boosted_PN_med_HMass__157->SetBinError(12,4.588861);
   VHcc_boosted_PN_med_HMass__157->SetBinError(13,7.075363);
   VHcc_boosted_PN_med_HMass__157->SetBinError(14,5.831683);
   VHcc_boosted_PN_med_HMass__157->SetBinError(15,3.524047);
   VHcc_boosted_PN_med_HMass__157->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_HMass__157->SetEntries(105);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_HMass__157->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__157->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__157->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__157->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__157->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__157->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__157->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__157->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__157->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__157->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__157->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__157->Draw("same hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__158 = new TH1D("VHcc_boosted_PN_med_HMass__158","",30,0,300);
   VHcc_boosted_PN_med_HMass__158->SetBinContent(8,2.327649);
   VHcc_boosted_PN_med_HMass__158->SetBinContent(9,3.424545);
   VHcc_boosted_PN_med_HMass__158->SetBinContent(10,10.98909);
   VHcc_boosted_PN_med_HMass__158->SetBinContent(11,7.880025);
   VHcc_boosted_PN_med_HMass__158->SetBinContent(12,17.10883);
   VHcc_boosted_PN_med_HMass__158->SetBinContent(13,39.4076);
   VHcc_boosted_PN_med_HMass__158->SetBinContent(14,28.33915);
   VHcc_boosted_PN_med_HMass__158->SetBinContent(15,8.548488);
   VHcc_boosted_PN_med_HMass__158->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_HMass__158->SetBinError(8,1.648516);
   VHcc_boosted_PN_med_HMass__158->SetBinError(9,2.012203);
   VHcc_boosted_PN_med_HMass__158->SetBinError(10,3.673365);
   VHcc_boosted_PN_med_HMass__158->SetBinError(11,3.537899);
   VHcc_boosted_PN_med_HMass__158->SetBinError(12,4.588861);
   VHcc_boosted_PN_med_HMass__158->SetBinError(13,7.075363);
   VHcc_boosted_PN_med_HMass__158->SetBinError(14,5.806747);
   VHcc_boosted_PN_med_HMass__158->SetBinError(15,3.236664);
   VHcc_boosted_PN_med_HMass__158->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_HMass__158->SetEntries(104);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_HMass__158->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__158->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__158->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__158->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__158->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__158->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__158->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__158->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__158->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__158->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__158->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__158->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VHcc_boosted_PN_med_HMass","Nominal","F");

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
   entry=leg->AddEntry("VHcc_boosted_PN_med_HMass","JER Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VHcc_boosted_PN_med_HMass","JER Down","F");
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
   pad1_v1__62->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__63 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__63->Draw();
   pad1_v2__63->cd();
   pad1_v2__63->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__63->SetBorderSize(2);
   pad1_v2__63->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_HMass__159 = new TH1D("VHcc_boosted_PN_med_HMass__159","",30,0,300);
   VHcc_boosted_PN_med_HMass__159->SetBinContent(8,1);
   VHcc_boosted_PN_med_HMass__159->SetBinContent(9,1);
   VHcc_boosted_PN_med_HMass__159->SetBinContent(10,1);
   VHcc_boosted_PN_med_HMass__159->SetBinContent(11,1);
   VHcc_boosted_PN_med_HMass__159->SetBinContent(12,1);
   VHcc_boosted_PN_med_HMass__159->SetBinContent(13,1);
   VHcc_boosted_PN_med_HMass__159->SetBinContent(14,1.004228);
   VHcc_boosted_PN_med_HMass__159->SetBinContent(15,1);
   VHcc_boosted_PN_med_HMass__159->SetBinContent(16,1);
   VHcc_boosted_PN_med_HMass__159->SetBinError(8,1.001592);
   VHcc_boosted_PN_med_HMass__159->SetBinError(9,0.8309672);
   VHcc_boosted_PN_med_HMass__159->SetBinError(10,0.4727345);
   VHcc_boosted_PN_med_HMass__159->SetBinError(11,0.6349403);
   VHcc_boosted_PN_med_HMass__159->SetBinError(12,0.3793146);
   VHcc_boosted_PN_med_HMass__159->SetBinError(13,0.2539123);
   VHcc_boosted_PN_med_HMass__159->SetBinError(14,0.2910098);
   VHcc_boosted_PN_med_HMass__159->SetBinError(15,0.5012642);
   VHcc_boosted_PN_med_HMass__159->SetBinError(16,1.414214);
   VHcc_boosted_PN_med_HMass__159->SetMinimum(0.8);
   VHcc_boosted_PN_med_HMass__159->SetMaximum(1.2);
   VHcc_boosted_PN_med_HMass__159->SetEntries(16.66647);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_HMass__159->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__159->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__159->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_HMass__159->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__159->GetXaxis()->SetLabelSize(0.1);
   VHcc_boosted_PN_med_HMass__159->GetXaxis()->SetTitleSize(0.13);
   VHcc_boosted_PN_med_HMass__159->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__159->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__159->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   VHcc_boosted_PN_med_HMass__159->GetYaxis()->CenterTitle(true);
   VHcc_boosted_PN_med_HMass__159->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__159->GetYaxis()->SetLabelSize(0.09);
   VHcc_boosted_PN_med_HMass__159->GetYaxis()->SetTitleSize(0.12);
   VHcc_boosted_PN_med_HMass__159->GetYaxis()->SetTitleOffset(0.35);
   VHcc_boosted_PN_med_HMass__159->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__159->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__159->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__159->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__159->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__160 = new TH1D("VHcc_boosted_PN_med_HMass__160","",30,0,300);
   VHcc_boosted_PN_med_HMass__160->SetBinContent(8,1);
   VHcc_boosted_PN_med_HMass__160->SetBinContent(9,1);
   VHcc_boosted_PN_med_HMass__160->SetBinContent(10,1);
   VHcc_boosted_PN_med_HMass__160->SetBinContent(11,1);
   VHcc_boosted_PN_med_HMass__160->SetBinContent(12,1);
   VHcc_boosted_PN_med_HMass__160->SetBinContent(13,1);
   VHcc_boosted_PN_med_HMass__160->SetBinContent(14,1);
   VHcc_boosted_PN_med_HMass__160->SetBinContent(15,0.8598036);
   VHcc_boosted_PN_med_HMass__160->SetBinContent(16,1);
   VHcc_boosted_PN_med_HMass__160->SetBinError(8,1.001592);
   VHcc_boosted_PN_med_HMass__160->SetBinError(9,0.8309672);
   VHcc_boosted_PN_med_HMass__160->SetBinError(10,0.4727345);
   VHcc_boosted_PN_med_HMass__160->SetBinError(11,0.6349403);
   VHcc_boosted_PN_med_HMass__160->SetBinError(12,0.3793146);
   VHcc_boosted_PN_med_HMass__160->SetBinError(13,0.2539123);
   VHcc_boosted_PN_med_HMass__160->SetBinError(14,0.2897751);
   VHcc_boosted_PN_med_HMass__160->SetBinError(15,0.4459299);
   VHcc_boosted_PN_med_HMass__160->SetBinError(16,1.414214);
   VHcc_boosted_PN_med_HMass__160->SetEntries(16.31429);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_HMass__160->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__160->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__160->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__160->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__160->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__160->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__160->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__160->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__160->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__160->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__160->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__160->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__63->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
