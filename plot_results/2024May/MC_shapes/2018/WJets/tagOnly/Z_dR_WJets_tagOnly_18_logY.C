#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_WJets_tagOnly_18_logY()
{
//=========Macro generated from canvas: Z_dR_WJets_tagOnly_18/Z_dR_WJets_tagOnly_18
//=========  (Thu May 23 20:48:38 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_WJets_tagOnly_18 = new TCanvas("Z_dR_WJets_tagOnly_18", "Z_dR_WJets_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_WJets_tagOnly_18->SetHighLightColor(2);
   Z_dR_WJets_tagOnly_18->Range(-1.2,-1.739015,6.8,4.002525);
   Z_dR_WJets_tagOnly_18->SetFillColor(0);
   Z_dR_WJets_tagOnly_18->SetFillStyle(4000);
   Z_dR_WJets_tagOnly_18->SetBorderMode(0);
   Z_dR_WJets_tagOnly_18->SetBorderSize(2);
   Z_dR_WJets_tagOnly_18->SetLogy();
   Z_dR_WJets_tagOnly_18->SetLeftMargin(0.15);
   Z_dR_WJets_tagOnly_18->SetFrameFillStyle(1000);
   Z_dR_WJets_tagOnly_18->SetFrameBorderMode(0);
   Z_dR_WJets_tagOnly_18->SetFrameFillStyle(1000);
   Z_dR_WJets_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR__852 = new TH1D("VH_tagOnly_Z_dR__852","",30,0,6);
   VH_tagOnly_Z_dR__852->SetBinContent(2,0.136826);
   VH_tagOnly_Z_dR__852->SetBinContent(3,1415.213);
   VH_tagOnly_Z_dR__852->SetBinContent(4,1307.589);
   VH_tagOnly_Z_dR__852->SetBinContent(5,926.4479);
   VH_tagOnly_Z_dR__852->SetBinContent(6,691.9602);
   VH_tagOnly_Z_dR__852->SetBinContent(7,561.5251);
   VH_tagOnly_Z_dR__852->SetBinContent(8,514.3067);
   VH_tagOnly_Z_dR__852->SetBinContent(9,434.5863);
   VH_tagOnly_Z_dR__852->SetBinContent(10,455.5894);
   VH_tagOnly_Z_dR__852->SetBinContent(11,415.073);
   VH_tagOnly_Z_dR__852->SetBinContent(12,440.2788);
   VH_tagOnly_Z_dR__852->SetBinContent(13,475.2816);
   VH_tagOnly_Z_dR__852->SetBinContent(14,435.5889);
   VH_tagOnly_Z_dR__852->SetBinContent(15,616.6627);
   VH_tagOnly_Z_dR__852->SetBinContent(16,548.5244);
   VH_tagOnly_Z_dR__852->SetBinContent(17,518.9201);
   VH_tagOnly_Z_dR__852->SetBinContent(18,511.0192);
   VH_tagOnly_Z_dR__852->SetBinContent(19,457.8153);
   VH_tagOnly_Z_dR__852->SetBinContent(20,374.6024);
   VH_tagOnly_Z_dR__852->SetBinContent(21,326.3372);
   VH_tagOnly_Z_dR__852->SetBinContent(22,248.7021);
   VH_tagOnly_Z_dR__852->SetBinContent(23,263.1242);
   VH_tagOnly_Z_dR__852->SetBinContent(24,181.2598);
   VH_tagOnly_Z_dR__852->SetBinContent(25,142.8112);
   VH_tagOnly_Z_dR__852->SetBinContent(26,169.6472);
   VH_tagOnly_Z_dR__852->SetBinContent(27,165.9481);
   VH_tagOnly_Z_dR__852->SetBinContent(28,137.7993);
   VH_tagOnly_Z_dR__852->SetBinContent(29,176.9912);
   VH_tagOnly_Z_dR__852->SetBinContent(30,121.5539);
   VH_tagOnly_Z_dR__852->SetBinContent(31,54.61594);
   VH_tagOnly_Z_dR__852->SetBinError(2,0.1246002);
   VH_tagOnly_Z_dR__852->SetBinError(3,57.28433);
   VH_tagOnly_Z_dR__852->SetBinError(4,51.87885);
   VH_tagOnly_Z_dR__852->SetBinError(5,48.32655);
   VH_tagOnly_Z_dR__852->SetBinError(6,43.83627);
   VH_tagOnly_Z_dR__852->SetBinError(7,35.39688);
   VH_tagOnly_Z_dR__852->SetBinError(8,35.07524);
   VH_tagOnly_Z_dR__852->SetBinError(9,36.71723);
   VH_tagOnly_Z_dR__852->SetBinError(10,35.42906);
   VH_tagOnly_Z_dR__852->SetBinError(11,28.8067);
   VH_tagOnly_Z_dR__852->SetBinError(12,32.73169);
   VH_tagOnly_Z_dR__852->SetBinError(13,36.82033);
   VH_tagOnly_Z_dR__852->SetBinError(14,26.74609);
   VH_tagOnly_Z_dR__852->SetBinError(15,76.61422);
   VH_tagOnly_Z_dR__852->SetBinError(16,45.95591);
   VH_tagOnly_Z_dR__852->SetBinError(17,44.71618);
   VH_tagOnly_Z_dR__852->SetBinError(18,67.50898);
   VH_tagOnly_Z_dR__852->SetBinError(19,51.83323);
   VH_tagOnly_Z_dR__852->SetBinError(20,32.88477);
   VH_tagOnly_Z_dR__852->SetBinError(21,29.33013);
   VH_tagOnly_Z_dR__852->SetBinError(22,19.15631);
   VH_tagOnly_Z_dR__852->SetBinError(23,32.33873);
   VH_tagOnly_Z_dR__852->SetBinError(24,19.27873);
   VH_tagOnly_Z_dR__852->SetBinError(25,12.65863);
   VH_tagOnly_Z_dR__852->SetBinError(26,17.58304);
   VH_tagOnly_Z_dR__852->SetBinError(27,19.74081);
   VH_tagOnly_Z_dR__852->SetBinError(28,14.2719);
   VH_tagOnly_Z_dR__852->SetBinError(29,45.97396);
   VH_tagOnly_Z_dR__852->SetBinError(30,21.39218);
   VH_tagOnly_Z_dR__852->SetBinError(31,7.893411);
   VH_tagOnly_Z_dR__852->SetEntries(39888);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR__852->SetLineColor(ci);
   VH_tagOnly_Z_dR__852->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagOnly_Z_dR__852->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR__852->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__852->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__852->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__852->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR__852->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__852->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR__852->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR__852->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR__852->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__852->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__852->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__852->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__852->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_WJets_tagOnly_18->Modified();
   Z_dR_WJets_tagOnly_18->cd();
   Z_dR_WJets_tagOnly_18->SetSelected(Z_dR_WJets_tagOnly_18);
}
