#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_tagOnly_18()
{
//=========Macro generated from canvas: Sphericity_WJets_tagOnly_18/Sphericity_WJets_tagOnly_18
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_tagOnly_18 = new TCanvas("Sphericity_WJets_tagOnly_18", "Sphericity_WJets_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_tagOnly_18->SetHighLightColor(2);
   Sphericity_WJets_tagOnly_18->Range(-0.2,-644.0441,1.133333,5796.396);
   Sphericity_WJets_tagOnly_18->SetFillColor(0);
   Sphericity_WJets_tagOnly_18->SetFillStyle(4000);
   Sphericity_WJets_tagOnly_18->SetBorderMode(0);
   Sphericity_WJets_tagOnly_18->SetBorderSize(2);
   Sphericity_WJets_tagOnly_18->SetLeftMargin(0.15);
   Sphericity_WJets_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_WJets_tagOnly_18->SetFrameBorderMode(0);
   Sphericity_WJets_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_WJets_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1152 = new TH1D("VH_tagOnly_Sphericity__1152","",25,0,1);
   VH_tagOnly_Sphericity__1152->SetBinContent(1,4907.002);
   VH_tagOnly_Sphericity__1152->SetBinContent(2,3261.82);
   VH_tagOnly_Sphericity__1152->SetBinContent(3,1813.504);
   VH_tagOnly_Sphericity__1152->SetBinContent(4,1253.122);
   VH_tagOnly_Sphericity__1152->SetBinContent(5,759.1886);
   VH_tagOnly_Sphericity__1152->SetBinContent(6,370.7738);
   VH_tagOnly_Sphericity__1152->SetBinContent(7,221.5949);
   VH_tagOnly_Sphericity__1152->SetBinContent(8,182.4596);
   VH_tagOnly_Sphericity__1152->SetBinContent(9,79.61707);
   VH_tagOnly_Sphericity__1152->SetBinContent(10,87.04901);
   VH_tagOnly_Sphericity__1152->SetBinContent(11,33.57093);
   VH_tagOnly_Sphericity__1152->SetBinContent(12,35.06281);
   VH_tagOnly_Sphericity__1152->SetBinContent(13,26.32393);
   VH_tagOnly_Sphericity__1152->SetBinContent(14,13.01996);
   VH_tagOnly_Sphericity__1152->SetBinContent(15,12.73055);
   VH_tagOnly_Sphericity__1152->SetBinContent(16,15.6915);
   VH_tagOnly_Sphericity__1152->SetBinContent(17,7.647793);
   VH_tagOnly_Sphericity__1152->SetBinContent(18,5.543758);
   VH_tagOnly_Sphericity__1152->SetBinContent(19,1.351515);
   VH_tagOnly_Sphericity__1152->SetBinContent(20,0.5242296);
   VH_tagOnly_Sphericity__1152->SetBinContent(21,2.31318);
   VH_tagOnly_Sphericity__1152->SetBinError(1,139.5298);
   VH_tagOnly_Sphericity__1152->SetBinError(2,88.57515);
   VH_tagOnly_Sphericity__1152->SetBinError(3,70.1551);
   VH_tagOnly_Sphericity__1152->SetBinError(4,60.83436);
   VH_tagOnly_Sphericity__1152->SetBinError(5,75.37457);
   VH_tagOnly_Sphericity__1152->SetBinError(6,23.24998);
   VH_tagOnly_Sphericity__1152->SetBinError(7,20.24109);
   VH_tagOnly_Sphericity__1152->SetBinError(8,27.73411);
   VH_tagOnly_Sphericity__1152->SetBinError(9,14.5698);
   VH_tagOnly_Sphericity__1152->SetBinError(10,14.80336);
   VH_tagOnly_Sphericity__1152->SetBinError(11,4.280262);
   VH_tagOnly_Sphericity__1152->SetBinError(12,8.408954);
   VH_tagOnly_Sphericity__1152->SetBinError(13,3.732388);
   VH_tagOnly_Sphericity__1152->SetBinError(14,1.951651);
   VH_tagOnly_Sphericity__1152->SetBinError(15,3.155688);
   VH_tagOnly_Sphericity__1152->SetBinError(16,5.880271);
   VH_tagOnly_Sphericity__1152->SetBinError(17,1.770042);
   VH_tagOnly_Sphericity__1152->SetBinError(18,2.742477);
   VH_tagOnly_Sphericity__1152->SetBinError(19,0.6034738);
   VH_tagOnly_Sphericity__1152->SetBinError(20,0.3373842);
   VH_tagOnly_Sphericity__1152->SetBinError(21,2.31318);
   VH_tagOnly_Sphericity__1152->SetEntries(39888);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1152->SetLineColor(ci);
   VH_tagOnly_Sphericity__1152->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1152->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1152->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1152->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1152->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1152->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1152->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1152->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1152->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1152->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1152->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1152->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1152->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1152->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1152->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_tagOnly_18->Modified();
   Sphericity_WJets_tagOnly_18->cd();
   Sphericity_WJets_tagOnly_18->SetSelected(Sphericity_WJets_tagOnly_18);
}
