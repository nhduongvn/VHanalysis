#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VHcc_boosted_PN_med_HMass_PU()
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
   TPad *pad1_v1__66 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__66->Draw();
   pad1_v1__66->cd();
   pad1_v1__66->Range(-38.75,-5.288887,348.75,47.59998);
   pad1_v1__66->SetBorderSize(2);
   pad1_v1__66->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_HMass__166 = new TH1D("VHcc_boosted_PN_med_HMass__166","",30,0,300);
   VHcc_boosted_PN_med_HMass__166->SetBinContent(8,2.327649);
   VHcc_boosted_PN_med_HMass__166->SetBinContent(9,3.424545);
   VHcc_boosted_PN_med_HMass__166->SetBinContent(10,10.98909);
   VHcc_boosted_PN_med_HMass__166->SetBinContent(11,7.880025);
   VHcc_boosted_PN_med_HMass__166->SetBinContent(12,17.10883);
   VHcc_boosted_PN_med_HMass__166->SetBinContent(13,39.4076);
   VHcc_boosted_PN_med_HMass__166->SetBinContent(14,28.33915);
   VHcc_boosted_PN_med_HMass__166->SetBinContent(15,9.942373);
   VHcc_boosted_PN_med_HMass__166->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_HMass__166->SetBinError(8,1.648516);
   VHcc_boosted_PN_med_HMass__166->SetBinError(9,2.012203);
   VHcc_boosted_PN_med_HMass__166->SetBinError(10,3.673365);
   VHcc_boosted_PN_med_HMass__166->SetBinError(11,3.537899);
   VHcc_boosted_PN_med_HMass__166->SetBinError(12,4.588861);
   VHcc_boosted_PN_med_HMass__166->SetBinError(13,7.075363);
   VHcc_boosted_PN_med_HMass__166->SetBinError(14,5.806747);
   VHcc_boosted_PN_med_HMass__166->SetBinError(15,3.524047);
   VHcc_boosted_PN_med_HMass__166->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_HMass__166->SetMaximum(42.3111);
   VHcc_boosted_PN_med_HMass__166->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   VHcc_boosted_PN_med_HMass__166->SetFillColor(ci);
   VHcc_boosted_PN_med_HMass__166->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__166->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_HMass__166->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__166->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__166->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__166->GetYaxis()->SetTitle("Events/10.000000");
   VHcc_boosted_PN_med_HMass__166->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__166->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__166->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__166->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__166->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__166->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__167 = new TH1D("VHcc_boosted_PN_med_HMass__167","",30,0,300);
   VHcc_boosted_PN_med_HMass__167->SetBinContent(8,2.241774);
   VHcc_boosted_PN_med_HMass__167->SetBinContent(9,2.81059);
   VHcc_boosted_PN_med_HMass__167->SetBinContent(10,11.02234);
   VHcc_boosted_PN_med_HMass__167->SetBinContent(11,6.848642);
   VHcc_boosted_PN_med_HMass__167->SetBinContent(12,16.62718);
   VHcc_boosted_PN_med_HMass__167->SetBinContent(13,38.70398);
   VHcc_boosted_PN_med_HMass__167->SetBinContent(14,26.77342);
   VHcc_boosted_PN_med_HMass__167->SetBinContent(15,10.01405);
   VHcc_boosted_PN_med_HMass__167->SetBinContent(16,1.17422);
   VHcc_boosted_PN_med_HMass__167->SetBinError(8,1.586068);
   VHcc_boosted_PN_med_HMass__167->SetBinError(9,1.683709);
   VHcc_boosted_PN_med_HMass__167->SetBinError(10,3.69236);
   VHcc_boosted_PN_med_HMass__167->SetBinError(11,3.218254);
   VHcc_boosted_PN_med_HMass__167->SetBinError(12,4.490933);
   VHcc_boosted_PN_med_HMass__167->SetBinError(13,6.844461);
   VHcc_boosted_PN_med_HMass__167->SetBinError(14,5.535426);
   VHcc_boosted_PN_med_HMass__167->SetBinError(15,3.567539);
   VHcc_boosted_PN_med_HMass__167->SetBinError(16,1.17422);
   VHcc_boosted_PN_med_HMass__167->SetEntries(105);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_HMass__167->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__167->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__167->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__167->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__167->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__167->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__167->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__167->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__167->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__167->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__167->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__167->Draw("same hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__168 = new TH1D("VHcc_boosted_PN_med_HMass__168","",30,0,300);
   VHcc_boosted_PN_med_HMass__168->SetBinContent(8,2.387558);
   VHcc_boosted_PN_med_HMass__168->SetBinContent(9,4.18918);
   VHcc_boosted_PN_med_HMass__168->SetBinContent(10,10.78113);
   VHcc_boosted_PN_med_HMass__168->SetBinContent(11,9.069791);
   VHcc_boosted_PN_med_HMass__168->SetBinContent(12,17.60546);
   VHcc_boosted_PN_med_HMass__168->SetBinContent(13,40.3111);
   VHcc_boosted_PN_med_HMass__168->SetBinContent(14,30.04681);
   VHcc_boosted_PN_med_HMass__168->SetBinContent(15,9.757771);
   VHcc_boosted_PN_med_HMass__168->SetBinContent(16,1.04218);
   VHcc_boosted_PN_med_HMass__168->SetBinError(8,1.695);
   VHcc_boosted_PN_med_HMass__168->SetBinError(9,2.437793);
   VHcc_boosted_PN_med_HMass__168->SetBinError(10,3.646178);
   VHcc_boosted_PN_med_HMass__168->SetBinError(11,3.964729);
   VHcc_boosted_PN_med_HMass__168->SetBinError(12,4.845822);
   VHcc_boosted_PN_med_HMass__168->SetBinError(13,7.568155);
   VHcc_boosted_PN_med_HMass__168->SetBinError(14,6.270545);
   VHcc_boosted_PN_med_HMass__168->SetBinError(15,3.523173);
   VHcc_boosted_PN_med_HMass__168->SetBinError(16,1.04218);
   VHcc_boosted_PN_med_HMass__168->SetEntries(105);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_HMass__168->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__168->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__168->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__168->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__168->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__168->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__168->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__168->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__168->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__168->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__168->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__168->Draw("same hist");
   
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
   entry=leg->AddEntry("VHcc_boosted_PN_med_HMass","PU Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VHcc_boosted_PN_med_HMass","PU Down","F");
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
   pad1_v1__66->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__67 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__67->Draw();
   pad1_v2__67->cd();
   pad1_v2__67->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__67->SetBorderSize(2);
   pad1_v2__67->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_HMass__169 = new TH1D("VHcc_boosted_PN_med_HMass__169","",30,0,300);
   VHcc_boosted_PN_med_HMass__169->SetBinContent(8,0.9631068);
   VHcc_boosted_PN_med_HMass__169->SetBinContent(9,0.8207193);
   VHcc_boosted_PN_med_HMass__169->SetBinContent(10,1.003025);
   VHcc_boosted_PN_med_HMass__169->SetBinContent(11,0.8691143);
   VHcc_boosted_PN_med_HMass__169->SetBinContent(12,0.9718476);
   VHcc_boosted_PN_med_HMass__169->SetBinContent(13,0.982145);
   VHcc_boosted_PN_med_HMass__169->SetBinContent(14,0.9447505);
   VHcc_boosted_PN_med_HMass__169->SetBinContent(15,1.00721);
   VHcc_boosted_PN_med_HMass__169->SetBinContent(16,1.045759);
   VHcc_boosted_PN_med_HMass__169->SetBinError(8,0.9641451);
   VHcc_boosted_PN_med_HMass__169->SetBinError(9,0.6886831);
   VHcc_boosted_PN_med_HMass__169->SetBinError(10,0.4746721);
   VHcc_boosted_PN_med_HMass__169->SetBinError(11,0.5648515);
   VHcc_boosted_PN_med_HMass__169->SetBinError(12,0.3699302);
   VHcc_boosted_PN_med_HMass__169->SetBinError(13,0.2475095);
   VHcc_boosted_PN_med_HMass__169->SetBinError(14,0.275003);
   VHcc_boosted_PN_med_HMass__169->SetBinError(15,0.5061659);
   VHcc_boosted_PN_med_HMass__169->SetBinError(16,1.478926);
   VHcc_boosted_PN_med_HMass__169->SetMinimum(0.8);
   VHcc_boosted_PN_med_HMass__169->SetMaximum(1.2);
   VHcc_boosted_PN_med_HMass__169->SetEntries(15.88121);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_HMass__169->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__169->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__169->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_HMass__169->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__169->GetXaxis()->SetLabelSize(0.1);
   VHcc_boosted_PN_med_HMass__169->GetXaxis()->SetTitleSize(0.13);
   VHcc_boosted_PN_med_HMass__169->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__169->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__169->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   VHcc_boosted_PN_med_HMass__169->GetYaxis()->CenterTitle(true);
   VHcc_boosted_PN_med_HMass__169->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__169->GetYaxis()->SetLabelSize(0.09);
   VHcc_boosted_PN_med_HMass__169->GetYaxis()->SetTitleSize(0.12);
   VHcc_boosted_PN_med_HMass__169->GetYaxis()->SetTitleOffset(0.35);
   VHcc_boosted_PN_med_HMass__169->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__169->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__169->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__169->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__169->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__170 = new TH1D("VHcc_boosted_PN_med_HMass__170","",30,0,300);
   VHcc_boosted_PN_med_HMass__170->SetBinContent(8,1.025738);
   VHcc_boosted_PN_med_HMass__170->SetBinContent(9,1.223281);
   VHcc_boosted_PN_med_HMass__170->SetBinContent(10,0.981076);
   VHcc_boosted_PN_med_HMass__170->SetBinContent(11,1.150985);
   VHcc_boosted_PN_med_HMass__170->SetBinContent(12,1.029028);
   VHcc_boosted_PN_med_HMass__170->SetBinContent(13,1.022927);
   VHcc_boosted_PN_med_HMass__170->SetBinContent(14,1.060258);
   VHcc_boosted_PN_med_HMass__170->SetBinContent(15,0.9814328);
   VHcc_boosted_PN_med_HMass__170->SetBinContent(16,0.928164);
   VHcc_boosted_PN_med_HMass__170->SetBinError(8,1.028603);
   VHcc_boosted_PN_med_HMass__170->SetBinError(9,1.011625);
   VHcc_boosted_PN_med_HMass__170->SetBinError(10,0.4665201);
   VHcc_boosted_PN_med_HMass__170->SetBinError(11,0.721239);
   VHcc_boosted_PN_med_HMass__170->SetBinError(12,0.3954732);
   VHcc_boosted_PN_med_HMass__170->SetBinError(13,0.2657316);
   VHcc_boosted_PN_med_HMass__170->SetBinError(14,0.3100913);
   VHcc_boosted_PN_med_HMass__170->SetBinError(15,0.4965697);
   VHcc_boosted_PN_med_HMass__170->SetBinError(16,1.312622);
   VHcc_boosted_PN_med_HMass__170->SetEntries(17.29557);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_HMass__170->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__170->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__170->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__170->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__170->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__170->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__170->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__170->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__170->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__170->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__170->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__170->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__67->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
