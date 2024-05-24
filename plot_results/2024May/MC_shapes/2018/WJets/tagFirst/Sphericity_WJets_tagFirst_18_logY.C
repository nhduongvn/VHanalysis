#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_tagFirst_18_logY()
{
//=========Macro generated from canvas: Sphericity_WJets_tagFirst_18/Sphericity_WJets_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_tagFirst_18 = new TCanvas("Sphericity_WJets_tagFirst_18", "Sphericity_WJets_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_tagFirst_18->SetHighLightColor(2);
   Sphericity_WJets_tagFirst_18->Range(-0.2,-1.152479,1.133333,4.557222);
   Sphericity_WJets_tagFirst_18->SetFillColor(0);
   Sphericity_WJets_tagFirst_18->SetFillStyle(4000);
   Sphericity_WJets_tagFirst_18->SetBorderMode(0);
   Sphericity_WJets_tagFirst_18->SetBorderSize(2);
   Sphericity_WJets_tagFirst_18->SetLogy();
   Sphericity_WJets_tagFirst_18->SetLeftMargin(0.15);
   Sphericity_WJets_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_WJets_tagFirst_18->SetFrameBorderMode(0);
   Sphericity_WJets_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_WJets_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__432 = new TH1D("VH_tagFirst_Sphericity__432","",25,0,1);
   VH_tagFirst_Sphericity__432->SetBinContent(1,5113.322);
   VH_tagFirst_Sphericity__432->SetBinContent(2,3446.182);
   VH_tagFirst_Sphericity__432->SetBinContent(3,1905.951);
   VH_tagFirst_Sphericity__432->SetBinContent(4,1319.341);
   VH_tagFirst_Sphericity__432->SetBinContent(5,779.1989);
   VH_tagFirst_Sphericity__432->SetBinContent(6,392.835);
   VH_tagFirst_Sphericity__432->SetBinContent(7,226.3716);
   VH_tagFirst_Sphericity__432->SetBinContent(8,184.993);
   VH_tagFirst_Sphericity__432->SetBinContent(9,84.22332);
   VH_tagFirst_Sphericity__432->SetBinContent(10,93.19441);
   VH_tagFirst_Sphericity__432->SetBinContent(11,38.18306);
   VH_tagFirst_Sphericity__432->SetBinContent(12,38.6405);
   VH_tagFirst_Sphericity__432->SetBinContent(13,27.32322);
   VH_tagFirst_Sphericity__432->SetBinContent(14,14.92806);
   VH_tagFirst_Sphericity__432->SetBinContent(15,14.28307);
   VH_tagFirst_Sphericity__432->SetBinContent(16,16.20022);
   VH_tagFirst_Sphericity__432->SetBinContent(17,7.202432);
   VH_tagFirst_Sphericity__432->SetBinContent(18,6.831726);
   VH_tagFirst_Sphericity__432->SetBinContent(19,1.353708);
   VH_tagFirst_Sphericity__432->SetBinContent(20,0.5242296);
   VH_tagFirst_Sphericity__432->SetBinContent(21,2.31318);
   VH_tagFirst_Sphericity__432->SetBinError(1,140.6916);
   VH_tagFirst_Sphericity__432->SetBinError(2,92.02531);
   VH_tagFirst_Sphericity__432->SetBinError(3,71.91723);
   VH_tagFirst_Sphericity__432->SetBinError(4,61.73903);
   VH_tagFirst_Sphericity__432->SetBinError(5,75.43965);
   VH_tagFirst_Sphericity__432->SetBinError(6,24.159);
   VH_tagFirst_Sphericity__432->SetBinError(7,20.15813);
   VH_tagFirst_Sphericity__432->SetBinError(8,27.74365);
   VH_tagFirst_Sphericity__432->SetBinError(9,15.009);
   VH_tagFirst_Sphericity__432->SetBinError(10,15.49859);
   VH_tagFirst_Sphericity__432->SetBinError(11,4.782337);
   VH_tagFirst_Sphericity__432->SetBinError(12,8.541175);
   VH_tagFirst_Sphericity__432->SetBinError(13,3.757961);
   VH_tagFirst_Sphericity__432->SetBinError(14,2.180713);
   VH_tagFirst_Sphericity__432->SetBinError(15,3.241066);
   VH_tagFirst_Sphericity__432->SetBinError(16,5.88997);
   VH_tagFirst_Sphericity__432->SetBinError(17,1.684339);
   VH_tagFirst_Sphericity__432->SetBinError(18,2.87396);
   VH_tagFirst_Sphericity__432->SetBinError(19,0.6034778);
   VH_tagFirst_Sphericity__432->SetBinError(20,0.3373842);
   VH_tagFirst_Sphericity__432->SetBinError(21,2.31318);
   VH_tagFirst_Sphericity__432->SetEntries(42358);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__432->SetLineColor(ci);
   VH_tagFirst_Sphericity__432->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__432->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__432->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__432->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__432->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__432->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__432->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__432->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__432->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__432->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__432->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__432->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__432->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__432->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__432->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_tagFirst_18->Modified();
   Sphericity_WJets_tagFirst_18->cd();
   Sphericity_WJets_tagFirst_18->SetSelected(Sphericity_WJets_tagFirst_18);
}
