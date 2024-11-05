#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VHcc_boosted_PN_med_HMass_JES()
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
   TPad *pad1_v1__60 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__60->Draw();
   pad1_v1__60->cd();
   pad1_v1__60->Range(-38.75,-5.32991,348.75,47.96919);
   pad1_v1__60->SetBorderSize(2);
   pad1_v1__60->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_HMass__151 = new TH1D("VHcc_boosted_PN_med_HMass__151","",30,0,300);
   VHcc_boosted_PN_med_HMass__151->SetBinContent(8,2.327649);
   VHcc_boosted_PN_med_HMass__151->SetBinContent(9,3.424545);
   VHcc_boosted_PN_med_HMass__151->SetBinContent(10,10.98909);
   VHcc_boosted_PN_med_HMass__151->SetBinContent(11,7.880025);
   VHcc_boosted_PN_med_HMass__151->SetBinContent(12,17.10883);
   VHcc_boosted_PN_med_HMass__151->SetBinContent(13,39.4076);
   VHcc_boosted_PN_med_HMass__151->SetBinContent(14,28.33915);
   VHcc_boosted_PN_med_HMass__151->SetBinContent(15,9.942373);
   VHcc_boosted_PN_med_HMass__151->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_HMass__151->SetBinError(8,1.648516);
   VHcc_boosted_PN_med_HMass__151->SetBinError(9,2.012203);
   VHcc_boosted_PN_med_HMass__151->SetBinError(10,3.673365);
   VHcc_boosted_PN_med_HMass__151->SetBinError(11,3.537899);
   VHcc_boosted_PN_med_HMass__151->SetBinError(12,4.588861);
   VHcc_boosted_PN_med_HMass__151->SetBinError(13,7.075363);
   VHcc_boosted_PN_med_HMass__151->SetBinError(14,5.806747);
   VHcc_boosted_PN_med_HMass__151->SetBinError(15,3.524047);
   VHcc_boosted_PN_med_HMass__151->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_HMass__151->SetMaximum(42.63928);
   VHcc_boosted_PN_med_HMass__151->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   VHcc_boosted_PN_med_HMass__151->SetFillColor(ci);
   VHcc_boosted_PN_med_HMass__151->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__151->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_HMass__151->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__151->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__151->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__151->GetYaxis()->SetTitle("Events/10.000000");
   VHcc_boosted_PN_med_HMass__151->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__151->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__151->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__151->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__151->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__151->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__152 = new TH1D("VHcc_boosted_PN_med_HMass__152","",30,0,300);
   VHcc_boosted_PN_med_HMass__152->SetBinContent(8,2.327649);
   VHcc_boosted_PN_med_HMass__152->SetBinContent(9,3.424545);
   VHcc_boosted_PN_med_HMass__152->SetBinContent(10,11.09773);
   VHcc_boosted_PN_med_HMass__152->SetBinContent(11,7.880025);
   VHcc_boosted_PN_med_HMass__152->SetBinContent(12,17.10883);
   VHcc_boosted_PN_med_HMass__152->SetBinContent(13,40.63928);
   VHcc_boosted_PN_med_HMass__152->SetBinContent(14,32.02788);
   VHcc_boosted_PN_med_HMass__152->SetBinContent(15,12.56426);
   VHcc_boosted_PN_med_HMass__152->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_HMass__152->SetBinContent(26,1.160831);
   VHcc_boosted_PN_med_HMass__152->SetBinError(8,1.648516);
   VHcc_boosted_PN_med_HMass__152->SetBinError(9,2.012203);
   VHcc_boosted_PN_med_HMass__152->SetBinError(10,3.705644);
   VHcc_boosted_PN_med_HMass__152->SetBinError(11,3.537899);
   VHcc_boosted_PN_med_HMass__152->SetBinError(12,4.588861);
   VHcc_boosted_PN_med_HMass__152->SetBinError(13,7.18175);
   VHcc_boosted_PN_med_HMass__152->SetBinError(14,6.18885);
   VHcc_boosted_PN_med_HMass__152->SetBinError(15,3.983308);
   VHcc_boosted_PN_med_HMass__152->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_HMass__152->SetBinError(26,1.160831);
   VHcc_boosted_PN_med_HMass__152->SetEntries(112);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_HMass__152->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__152->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__152->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__152->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__152->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__152->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__152->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__152->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__152->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__152->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__152->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__152->Draw("same hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__153 = new TH1D("VHcc_boosted_PN_med_HMass__153","",30,0,300);
   VHcc_boosted_PN_med_HMass__153->SetBinContent(8,1.229514);
   VHcc_boosted_PN_med_HMass__153->SetBinContent(9,3.424545);
   VHcc_boosted_PN_med_HMass__153->SetBinContent(10,11.00516);
   VHcc_boosted_PN_med_HMass__153->SetBinContent(11,7.895188);
   VHcc_boosted_PN_med_HMass__153->SetBinContent(12,17.09833);
   VHcc_boosted_PN_med_HMass__153->SetBinContent(13,38.05159);
   VHcc_boosted_PN_med_HMass__153->SetBinContent(14,28.33915);
   VHcc_boosted_PN_med_HMass__153->SetBinContent(15,8.548488);
   VHcc_boosted_PN_med_HMass__153->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_HMass__153->SetBinError(8,1.229514);
   VHcc_boosted_PN_med_HMass__153->SetBinError(9,2.012203);
   VHcc_boosted_PN_med_HMass__153->SetBinError(10,3.678603);
   VHcc_boosted_PN_med_HMass__153->SetBinError(11,3.543721);
   VHcc_boosted_PN_med_HMass__153->SetBinError(12,4.586267);
   VHcc_boosted_PN_med_HMass__153->SetBinError(13,6.94381);
   VHcc_boosted_PN_med_HMass__153->SetBinError(14,5.806747);
   VHcc_boosted_PN_med_HMass__153->SetBinError(15,3.236664);
   VHcc_boosted_PN_med_HMass__153->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_HMass__153->SetEntries(102);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_HMass__153->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__153->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__153->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__153->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__153->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__153->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__153->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__153->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__153->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__153->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__153->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__153->Draw("same hist");
   
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
   entry=leg->AddEntry("VHcc_boosted_PN_med_HMass","JES Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VHcc_boosted_PN_med_HMass","JES Down","F");
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
   pad1_v1__60->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__61 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__61->Draw();
   pad1_v2__61->cd();
   pad1_v2__61->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__61->SetBorderSize(2);
   pad1_v2__61->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_HMass__154 = new TH1D("VHcc_boosted_PN_med_HMass__154","",30,0,300);
   VHcc_boosted_PN_med_HMass__154->SetBinContent(8,1);
   VHcc_boosted_PN_med_HMass__154->SetBinContent(9,1);
   VHcc_boosted_PN_med_HMass__154->SetBinContent(10,1.009886);
   VHcc_boosted_PN_med_HMass__154->SetBinContent(11,1);
   VHcc_boosted_PN_med_HMass__154->SetBinContent(12,1);
   VHcc_boosted_PN_med_HMass__154->SetBinContent(13,1.031255);
   VHcc_boosted_PN_med_HMass__154->SetBinContent(14,1.130164);
   VHcc_boosted_PN_med_HMass__154->SetBinContent(15,1.263708);
   VHcc_boosted_PN_med_HMass__154->SetBinContent(16,1);
   VHcc_boosted_PN_med_HMass__154->SetBinError(8,1.001592);
   VHcc_boosted_PN_med_HMass__154->SetBinError(9,0.8309672);
   VHcc_boosted_PN_med_HMass__154->SetBinError(10,0.4771483);
   VHcc_boosted_PN_med_HMass__154->SetBinError(11,0.6349403);
   VHcc_boosted_PN_med_HMass__154->SetBinError(12,0.3793146);
   VHcc_boosted_PN_med_HMass__154->SetBinError(13,0.2597974);
   VHcc_boosted_PN_med_HMass__154->SetBinError(14,0.3183049);
   VHcc_boosted_PN_med_HMass__154->SetBinError(15,0.6009514);
   VHcc_boosted_PN_med_HMass__154->SetBinError(16,1.414214);
   VHcc_boosted_PN_med_HMass__154->SetMinimum(0.8);
   VHcc_boosted_PN_med_HMass__154->SetMaximum(1.2);
   VHcc_boosted_PN_med_HMass__154->SetEntries(17.80978);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_HMass__154->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__154->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__154->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_HMass__154->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__154->GetXaxis()->SetLabelSize(0.1);
   VHcc_boosted_PN_med_HMass__154->GetXaxis()->SetTitleSize(0.13);
   VHcc_boosted_PN_med_HMass__154->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__154->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__154->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   VHcc_boosted_PN_med_HMass__154->GetYaxis()->CenterTitle(true);
   VHcc_boosted_PN_med_HMass__154->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__154->GetYaxis()->SetLabelSize(0.09);
   VHcc_boosted_PN_med_HMass__154->GetYaxis()->SetTitleSize(0.12);
   VHcc_boosted_PN_med_HMass__154->GetYaxis()->SetTitleOffset(0.35);
   VHcc_boosted_PN_med_HMass__154->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__154->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__154->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__154->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__154->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__155 = new TH1D("VHcc_boosted_PN_med_HMass__155","",30,0,300);
   VHcc_boosted_PN_med_HMass__155->SetBinContent(8,0.5282216);
   VHcc_boosted_PN_med_HMass__155->SetBinContent(9,1);
   VHcc_boosted_PN_med_HMass__155->SetBinContent(10,1.001462);
   VHcc_boosted_PN_med_HMass__155->SetBinContent(11,1.001924);
   VHcc_boosted_PN_med_HMass__155->SetBinContent(12,0.9993863);
   VHcc_boosted_PN_med_HMass__155->SetBinContent(13,0.9655901);
   VHcc_boosted_PN_med_HMass__155->SetBinContent(14,1);
   VHcc_boosted_PN_med_HMass__155->SetBinContent(15,0.8598036);
   VHcc_boosted_PN_med_HMass__155->SetBinContent(16,1);
   VHcc_boosted_PN_med_HMass__155->SetBinError(8,0.6472801);
   VHcc_boosted_PN_med_HMass__155->SetBinError(9,0.8309672);
   VHcc_boosted_PN_med_HMass__155->SetBinError(10,0.4734172);
   VHcc_boosted_PN_med_HMass__155->SetBinError(11,0.6360735);
   VHcc_boosted_PN_med_HMass__155->SetBinError(12,0.379091);
   VHcc_boosted_PN_med_HMass__155->SetBinError(13,0.2471914);
   VHcc_boosted_PN_med_HMass__155->SetBinError(14,0.2897751);
   VHcc_boosted_PN_med_HMass__155->SetBinError(15,0.4459299);
   VHcc_boosted_PN_med_HMass__155->SetBinError(16,1.414214);
   VHcc_boosted_PN_med_HMass__155->SetEntries(16.52439);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_HMass__155->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__155->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__155->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__155->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__155->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__155->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__155->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__155->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__155->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__155->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__155->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__155->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__61->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
