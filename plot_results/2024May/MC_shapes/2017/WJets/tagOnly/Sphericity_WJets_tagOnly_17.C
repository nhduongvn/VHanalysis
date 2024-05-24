#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_tagOnly_17()
{
//=========Macro generated from canvas: Sphericity_WJets_tagOnly_17/Sphericity_WJets_tagOnly_17
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_tagOnly_17 = new TCanvas("Sphericity_WJets_tagOnly_17", "Sphericity_WJets_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_tagOnly_17->SetHighLightColor(2);
   Sphericity_WJets_tagOnly_17->Range(-0.2,-305.3561,1.133333,2748.205);
   Sphericity_WJets_tagOnly_17->SetFillColor(0);
   Sphericity_WJets_tagOnly_17->SetFillStyle(4000);
   Sphericity_WJets_tagOnly_17->SetBorderMode(0);
   Sphericity_WJets_tagOnly_17->SetBorderSize(2);
   Sphericity_WJets_tagOnly_17->SetLeftMargin(0.15);
   Sphericity_WJets_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_WJets_tagOnly_17->SetFrameBorderMode(0);
   Sphericity_WJets_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_WJets_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1151 = new TH1D("VH_tagOnly_Sphericity__1151","",25,0,1);
   VH_tagOnly_Sphericity__1151->SetBinContent(1,2326.522);
   VH_tagOnly_Sphericity__1151->SetBinContent(2,1592.438);
   VH_tagOnly_Sphericity__1151->SetBinContent(3,945.3779);
   VH_tagOnly_Sphericity__1151->SetBinContent(4,557.8354);
   VH_tagOnly_Sphericity__1151->SetBinContent(5,332.4829);
   VH_tagOnly_Sphericity__1151->SetBinContent(6,190.2011);
   VH_tagOnly_Sphericity__1151->SetBinContent(7,91.08708);
   VH_tagOnly_Sphericity__1151->SetBinContent(8,53.18651);
   VH_tagOnly_Sphericity__1151->SetBinContent(9,47.05353);
   VH_tagOnly_Sphericity__1151->SetBinContent(10,23.72977);
   VH_tagOnly_Sphericity__1151->SetBinContent(11,16.83044);
   VH_tagOnly_Sphericity__1151->SetBinContent(12,20.26251);
   VH_tagOnly_Sphericity__1151->SetBinContent(13,14.49372);
   VH_tagOnly_Sphericity__1151->SetBinContent(14,14.23137);
   VH_tagOnly_Sphericity__1151->SetBinContent(15,3.932127);
   VH_tagOnly_Sphericity__1151->SetBinContent(16,4.254805);
   VH_tagOnly_Sphericity__1151->SetBinContent(17,2.458296);
   VH_tagOnly_Sphericity__1151->SetBinContent(18,2.738701);
   VH_tagOnly_Sphericity__1151->SetBinContent(19,0.9642602);
   VH_tagOnly_Sphericity__1151->SetBinContent(20,0.05672097);
   VH_tagOnly_Sphericity__1151->SetBinError(1,51.22575);
   VH_tagOnly_Sphericity__1151->SetBinError(2,43.89214);
   VH_tagOnly_Sphericity__1151->SetBinError(3,35.94438);
   VH_tagOnly_Sphericity__1151->SetBinError(4,22.46472);
   VH_tagOnly_Sphericity__1151->SetBinError(5,21.36937);
   VH_tagOnly_Sphericity__1151->SetBinError(6,11.89006);
   VH_tagOnly_Sphericity__1151->SetBinError(7,7.134508);
   VH_tagOnly_Sphericity__1151->SetBinError(8,5.318585);
   VH_tagOnly_Sphericity__1151->SetBinError(9,7.936978);
   VH_tagOnly_Sphericity__1151->SetBinError(10,2.983127);
   VH_tagOnly_Sphericity__1151->SetBinError(11,1.980026);
   VH_tagOnly_Sphericity__1151->SetBinError(12,5.16671);
   VH_tagOnly_Sphericity__1151->SetBinError(13,4.126914);
   VH_tagOnly_Sphericity__1151->SetBinError(14,6.389058);
   VH_tagOnly_Sphericity__1151->SetBinError(15,0.6374905);
   VH_tagOnly_Sphericity__1151->SetBinError(16,0.7492073);
   VH_tagOnly_Sphericity__1151->SetBinError(17,0.5617796);
   VH_tagOnly_Sphericity__1151->SetBinError(18,0.7339197);
   VH_tagOnly_Sphericity__1151->SetBinError(19,0.301317);
   VH_tagOnly_Sphericity__1151->SetBinError(20,0.04736711);
   VH_tagOnly_Sphericity__1151->SetEntries(42681);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1151->SetLineColor(ci);
   VH_tagOnly_Sphericity__1151->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1151->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1151->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1151->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1151->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1151->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1151->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1151->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1151->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1151->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1151->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1151->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1151->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1151->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1151->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_tagOnly_17->Modified();
   Sphericity_WJets_tagOnly_17->cd();
   Sphericity_WJets_tagOnly_17->SetSelected(Sphericity_WJets_tagOnly_17);
}
