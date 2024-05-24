#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: Sphericity_WJets_tagOnly_2b1c_18/Sphericity_WJets_tagOnly_2b1c_18
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_tagOnly_2b1c_18 = new TCanvas("Sphericity_WJets_tagOnly_2b1c_18", "Sphericity_WJets_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_tagOnly_2b1c_18->SetHighLightColor(2);
   Sphericity_WJets_tagOnly_2b1c_18->Range(-0.2,-1482.424,1.133333,13341.81);
   Sphericity_WJets_tagOnly_2b1c_18->SetFillColor(0);
   Sphericity_WJets_tagOnly_2b1c_18->SetFillStyle(4000);
   Sphericity_WJets_tagOnly_2b1c_18->SetBorderMode(0);
   Sphericity_WJets_tagOnly_2b1c_18->SetBorderSize(2);
   Sphericity_WJets_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Sphericity_WJets_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WJets_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Sphericity_WJets_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WJets_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3312 = new TH1D("VH_tagOnly_2b1c_Sphericity__3312","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(1,11294.66);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(2,8475.352);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(3,4952.756);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(4,3113.743);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(5,1728.172);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(6,824.3458);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(7,463.5434);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(8,316.4335);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(9,142.0579);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(10,153.983);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(11,69.17635);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(12,78.49833);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(13,43.38234);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(14,26.35436);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(15,25.00659);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(16,22.3995);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(17,12.65508);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(18,7.06809);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(19,1.968);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(20,1.836401);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(21,2.31318);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinContent(22,0.1352812);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(1,199.7005);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(2,169.2825);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(3,117.6086);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(4,141.6413);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(5,86.47115);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(6,40.30631);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(7,32.5783);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(8,31.57448);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(9,16.27643);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(10,19.93029);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(11,6.21171);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(12,17.45446);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(13,4.503745);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(14,2.846714);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(15,4.120243);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(16,6.067138);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(17,2.140425);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(18,2.792105);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(19,0.6666646);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(20,0.925549);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(21,2.31318);
   VH_tagOnly_2b1c_Sphericity__3312->SetBinError(22,0.1352812);
   VH_tagOnly_2b1c_Sphericity__3312->SetEntries(93281);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3312->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3312->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3312->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3312->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3312->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3312->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3312->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3312->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3312->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3312->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3312->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3312->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3312->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3312->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3312->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3312->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_tagOnly_2b1c_18->Modified();
   Sphericity_WJets_tagOnly_2b1c_18->cd();
   Sphericity_WJets_tagOnly_2b1c_18->SetSelected(Sphericity_WJets_tagOnly_2b1c_18);
}
