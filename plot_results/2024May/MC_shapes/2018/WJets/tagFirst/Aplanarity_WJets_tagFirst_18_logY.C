#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_tagFirst_18_logY()
{
//=========Macro generated from canvas: Aplanarity_WJets_tagFirst_18/Aplanarity_WJets_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_tagFirst_18 = new TCanvas("Aplanarity_WJets_tagFirst_18", "Aplanarity_WJets_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_tagFirst_18->SetHighLightColor(2);
   Aplanarity_WJets_tagFirst_18->Range(-0.2,-1.819714,1.133333,5.036166);
   Aplanarity_WJets_tagFirst_18->SetFillColor(0);
   Aplanarity_WJets_tagFirst_18->SetFillStyle(4000);
   Aplanarity_WJets_tagFirst_18->SetBorderMode(0);
   Aplanarity_WJets_tagFirst_18->SetBorderSize(2);
   Aplanarity_WJets_tagFirst_18->SetLogy();
   Aplanarity_WJets_tagFirst_18->SetLeftMargin(0.15);
   Aplanarity_WJets_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagFirst_18->SetFrameBorderMode(0);
   Aplanarity_WJets_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__462 = new TH1D("VH_tagFirst_Aplanarity__462","",50,0,1);
   VH_tagFirst_Aplanarity__462->SetBinContent(1,11831.22);
   VH_tagFirst_Aplanarity__462->SetBinContent(2,1254.722);
   VH_tagFirst_Aplanarity__462->SetBinContent(3,362.8929);
   VH_tagFirst_Aplanarity__462->SetBinContent(4,127.2035);
   VH_tagFirst_Aplanarity__462->SetBinContent(5,53.60832);
   VH_tagFirst_Aplanarity__462->SetBinContent(6,41.18002);
   VH_tagFirst_Aplanarity__462->SetBinContent(7,14.66034);
   VH_tagFirst_Aplanarity__462->SetBinContent(8,17.47308);
   VH_tagFirst_Aplanarity__462->SetBinContent(9,2.895772);
   VH_tagFirst_Aplanarity__462->SetBinContent(10,1.43842);
   VH_tagFirst_Aplanarity__462->SetBinContent(11,0.6273636);
   VH_tagFirst_Aplanarity__462->SetBinContent(12,2.454735);
   VH_tagFirst_Aplanarity__462->SetBinContent(14,0.1500469);
   VH_tagFirst_Aplanarity__462->SetBinContent(16,0.4105738);
   VH_tagFirst_Aplanarity__462->SetBinContent(17,0.1468603);
   VH_tagFirst_Aplanarity__462->SetBinContent(18,2.31318);
   VH_tagFirst_Aplanarity__462->SetBinError(1,197.5578);
   VH_tagFirst_Aplanarity__462->SetBinError(2,63.45953);
   VH_tagFirst_Aplanarity__462->SetBinError(3,35.29106);
   VH_tagFirst_Aplanarity__462->SetBinError(4,24.42249);
   VH_tagFirst_Aplanarity__462->SetBinError(5,12.51082);
   VH_tagFirst_Aplanarity__462->SetBinError(6,14.37476);
   VH_tagFirst_Aplanarity__462->SetBinError(7,3.988384);
   VH_tagFirst_Aplanarity__462->SetBinError(8,7.175646);
   VH_tagFirst_Aplanarity__462->SetBinError(9,1.478065);
   VH_tagFirst_Aplanarity__462->SetBinError(10,0.4745397);
   VH_tagFirst_Aplanarity__462->SetBinError(11,0.3763613);
   VH_tagFirst_Aplanarity__462->SetBinError(12,1.725207);
   VH_tagFirst_Aplanarity__462->SetBinError(14,0.1289603);
   VH_tagFirst_Aplanarity__462->SetBinError(16,0.4105738);
   VH_tagFirst_Aplanarity__462->SetBinError(17,0.1468603);
   VH_tagFirst_Aplanarity__462->SetBinError(18,2.31318);
   VH_tagFirst_Aplanarity__462->SetEntries(42358);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__462->SetLineColor(ci);
   VH_tagFirst_Aplanarity__462->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__462->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__462->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__462->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__462->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__462->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__462->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__462->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__462->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__462->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__462->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__462->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__462->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__462->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__462->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_tagFirst_18->Modified();
   Aplanarity_WJets_tagFirst_18->cd();
   Aplanarity_WJets_tagFirst_18->SetSelected(Aplanarity_WJets_tagFirst_18);
}
