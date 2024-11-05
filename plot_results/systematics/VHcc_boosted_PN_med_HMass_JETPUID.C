#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VHcc_boosted_PN_med_HMass_JETPUID()
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
   TPad *pad1_v1__68 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__68->Draw();
   pad1_v1__68->cd();
   pad1_v1__68->Range(-38.75,-14.16789,348.75,127.511);
   pad1_v1__68->SetBorderSize(2);
   pad1_v1__68->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_HMass__171 = new TH1D("VHcc_boosted_PN_med_HMass__171","",30,0,300);
   VHcc_boosted_PN_med_HMass__171->SetBinContent(8,2.327649);
   VHcc_boosted_PN_med_HMass__171->SetBinContent(9,3.424545);
   VHcc_boosted_PN_med_HMass__171->SetBinContent(10,10.98909);
   VHcc_boosted_PN_med_HMass__171->SetBinContent(11,7.880025);
   VHcc_boosted_PN_med_HMass__171->SetBinContent(12,17.10883);
   VHcc_boosted_PN_med_HMass__171->SetBinContent(13,39.4076);
   VHcc_boosted_PN_med_HMass__171->SetBinContent(14,28.33915);
   VHcc_boosted_PN_med_HMass__171->SetBinContent(15,9.942373);
   VHcc_boosted_PN_med_HMass__171->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_HMass__171->SetBinError(8,1.648516);
   VHcc_boosted_PN_med_HMass__171->SetBinError(9,2.012203);
   VHcc_boosted_PN_med_HMass__171->SetBinError(10,3.673365);
   VHcc_boosted_PN_med_HMass__171->SetBinError(11,3.537899);
   VHcc_boosted_PN_med_HMass__171->SetBinError(12,4.588861);
   VHcc_boosted_PN_med_HMass__171->SetBinError(13,7.075363);
   VHcc_boosted_PN_med_HMass__171->SetBinError(14,5.806747);
   VHcc_boosted_PN_med_HMass__171->SetBinError(15,3.524047);
   VHcc_boosted_PN_med_HMass__171->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_HMass__171->SetMaximum(113.3431);
   VHcc_boosted_PN_med_HMass__171->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   VHcc_boosted_PN_med_HMass__171->SetFillColor(ci);
   VHcc_boosted_PN_med_HMass__171->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__171->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_HMass__171->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__171->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__171->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__171->GetYaxis()->SetTitle("Events/10.000000");
   VHcc_boosted_PN_med_HMass__171->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__171->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__171->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__171->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__171->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__171->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__172 = new TH1D("VHcc_boosted_PN_med_HMass__172","",30,0,300);
   VHcc_boosted_PN_med_HMass__172->SetBinContent(8,2.327649);
   VHcc_boosted_PN_med_HMass__172->SetBinContent(9,3.424545);
   VHcc_boosted_PN_med_HMass__172->SetBinContent(10,10.98909);
   VHcc_boosted_PN_med_HMass__172->SetBinContent(11,7.880025);
   VHcc_boosted_PN_med_HMass__172->SetBinContent(12,17.10883);
   VHcc_boosted_PN_med_HMass__172->SetBinContent(13,39.4076);
   VHcc_boosted_PN_med_HMass__172->SetBinContent(14,28.33915);
   VHcc_boosted_PN_med_HMass__172->SetBinContent(15,9.942373);
   VHcc_boosted_PN_med_HMass__172->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_HMass__172->SetBinError(8,1.648516);
   VHcc_boosted_PN_med_HMass__172->SetBinError(9,2.012203);
   VHcc_boosted_PN_med_HMass__172->SetBinError(10,3.673365);
   VHcc_boosted_PN_med_HMass__172->SetBinError(11,3.537899);
   VHcc_boosted_PN_med_HMass__172->SetBinError(12,4.588861);
   VHcc_boosted_PN_med_HMass__172->SetBinError(13,7.075363);
   VHcc_boosted_PN_med_HMass__172->SetBinError(14,5.806747);
   VHcc_boosted_PN_med_HMass__172->SetBinError(15,3.524047);
   VHcc_boosted_PN_med_HMass__172->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_HMass__172->SetEntries(105);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_HMass__172->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__172->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__172->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__172->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__172->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__172->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__172->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__172->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__172->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__172->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__172->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__172->Draw("same hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__173 = new TH1D("VHcc_boosted_PN_med_HMass__173","",3,0,300);
   VHcc_boosted_PN_med_HMass__173->SetBinContent(1,16.84992);
   VHcc_boosted_PN_med_HMass__173->SetBinContent(2,111.3431);
   VHcc_boosted_PN_med_HMass__173->SetBinContent(3,1.160831);
   VHcc_boosted_PN_med_HMass__173->SetBinError(1,4.527511);
   VHcc_boosted_PN_med_HMass__173->SetBinError(2,11.8567);
   VHcc_boosted_PN_med_HMass__173->SetBinError(3,1.160831);
   VHcc_boosted_PN_med_HMass__173->SetEntries(112);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_HMass__173->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__173->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__173->GetXaxis()->SetRange(1,30);
   VHcc_boosted_PN_med_HMass__173->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__173->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__173->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__173->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__173->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__173->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__173->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__173->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__173->Draw("same hist");
   
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
   entry=leg->AddEntry("VHcc_boosted_PN_med_HMass","JETPUID Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VHcc_boosted_PN_med_HMass","JETPUID Down","F");
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
   pad1_v1__68->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__69 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__69->Draw();
   pad1_v2__69->cd();
   pad1_v2__69->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__69->SetBorderSize(2);
   pad1_v2__69->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_HMass__174 = new TH1D("VHcc_boosted_PN_med_HMass__174","",30,0,300);
   VHcc_boosted_PN_med_HMass__174->SetBinContent(8,1);
   VHcc_boosted_PN_med_HMass__174->SetBinContent(9,1);
   VHcc_boosted_PN_med_HMass__174->SetBinContent(10,1);
   VHcc_boosted_PN_med_HMass__174->SetBinContent(11,1);
   VHcc_boosted_PN_med_HMass__174->SetBinContent(12,1);
   VHcc_boosted_PN_med_HMass__174->SetBinContent(13,1);
   VHcc_boosted_PN_med_HMass__174->SetBinContent(14,1);
   VHcc_boosted_PN_med_HMass__174->SetBinContent(15,1);
   VHcc_boosted_PN_med_HMass__174->SetBinContent(16,1);
   VHcc_boosted_PN_med_HMass__174->SetBinError(8,1.001592);
   VHcc_boosted_PN_med_HMass__174->SetBinError(9,0.8309672);
   VHcc_boosted_PN_med_HMass__174->SetBinError(10,0.4727345);
   VHcc_boosted_PN_med_HMass__174->SetBinError(11,0.6349403);
   VHcc_boosted_PN_med_HMass__174->SetBinError(12,0.3793146);
   VHcc_boosted_PN_med_HMass__174->SetBinError(13,0.2539123);
   VHcc_boosted_PN_med_HMass__174->SetBinError(14,0.2897751);
   VHcc_boosted_PN_med_HMass__174->SetBinError(15,0.5012642);
   VHcc_boosted_PN_med_HMass__174->SetBinError(16,1.414214);
   VHcc_boosted_PN_med_HMass__174->SetMinimum(0.8);
   VHcc_boosted_PN_med_HMass__174->SetMaximum(1.2);
   VHcc_boosted_PN_med_HMass__174->SetEntries(16.65328);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_HMass__174->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__174->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__174->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_HMass__174->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__174->GetXaxis()->SetLabelSize(0.1);
   VHcc_boosted_PN_med_HMass__174->GetXaxis()->SetTitleSize(0.13);
   VHcc_boosted_PN_med_HMass__174->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__174->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__174->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   VHcc_boosted_PN_med_HMass__174->GetYaxis()->CenterTitle(true);
   VHcc_boosted_PN_med_HMass__174->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__174->GetYaxis()->SetLabelSize(0.09);
   VHcc_boosted_PN_med_HMass__174->GetYaxis()->SetTitleSize(0.12);
   VHcc_boosted_PN_med_HMass__174->GetYaxis()->SetTitleOffset(0.35);
   VHcc_boosted_PN_med_HMass__174->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__174->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__174->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__174->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__174->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__175 = new TH1D("VHcc_boosted_PN_med_HMass__175","",3,0,300);
   VHcc_boosted_PN_med_HMass__175->SetBinContent(1,16.84992);
   VHcc_boosted_PN_med_HMass__175->SetBinContent(2,111.3431);
   VHcc_boosted_PN_med_HMass__175->SetBinContent(3,1.160831);
   VHcc_boosted_PN_med_HMass__175->SetBinError(1,4.527511);
   VHcc_boosted_PN_med_HMass__175->SetBinError(2,11.8567);
   VHcc_boosted_PN_med_HMass__175->SetBinError(3,1.160831);
   VHcc_boosted_PN_med_HMass__175->SetEntries(112);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_HMass__175->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__175->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__175->GetXaxis()->SetRange(1,30);
   VHcc_boosted_PN_med_HMass__175->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__175->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__175->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__175->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__175->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__175->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__175->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__175->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__175->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__69->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
