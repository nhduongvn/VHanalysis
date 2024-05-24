#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: Sphericity_ZJets_tagOnly_2b1c_18/Sphericity_ZJets_tagOnly_2b1c_18
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_tagOnly_2b1c_18 = new TCanvas("Sphericity_ZJets_tagOnly_2b1c_18", "Sphericity_ZJets_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_tagOnly_2b1c_18->SetHighLightColor(2);
   Sphericity_ZJets_tagOnly_2b1c_18->Range(-0.2,-3056.42,1.133333,27507.77);
   Sphericity_ZJets_tagOnly_2b1c_18->SetFillColor(0);
   Sphericity_ZJets_tagOnly_2b1c_18->SetFillStyle(4000);
   Sphericity_ZJets_tagOnly_2b1c_18->SetBorderMode(0);
   Sphericity_ZJets_tagOnly_2b1c_18->SetBorderSize(2);
   Sphericity_ZJets_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Sphericity_ZJets_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Sphericity_ZJets_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3315 = new TH1D("VH_tagOnly_2b1c_Sphericity__3315","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(1,23287);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(2,18293.03);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(3,10917.46);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(4,6436.153);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(5,3735.965);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(6,1846.992);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(7,919.3151);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(8,510.2934);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(9,320.9845);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(10,235.9217);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(11,163.5799);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(12,112.6265);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(13,90.75738);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(14,60.44419);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(15,47.32396);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(16,38.83595);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(17,29.56996);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(18,17.38343);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(19,7.639166);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(20,6.183178);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(21,3.018578);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(22,0.2806584);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinContent(23,1.364529);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(1,143.8511);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(2,141.6418);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(3,129.8948);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(4,76.27985);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(5,57.61847);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(6,40.97791);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(7,28.2175);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(8,21.37659);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(9,13.31434);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(10,19.22507);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(11,9.195408);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(12,6.048678);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(13,7.760518);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(14,4.704915);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(15,3.650306);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(16,4.652657);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(17,3.555909);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(18,2.742824);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(19,1.974167);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(20,3.374348);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(21,1.455999);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(22,0.1988437);
   VH_tagOnly_2b1c_Sphericity__3315->SetBinError(23,1.364529);
   VH_tagOnly_2b1c_Sphericity__3315->SetEntries(242281);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3315->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3315->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3315->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3315->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3315->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3315->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3315->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3315->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3315->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3315->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3315->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3315->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3315->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3315->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3315->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3315->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_tagOnly_2b1c_18->Modified();
   Sphericity_ZJets_tagOnly_2b1c_18->cd();
   Sphericity_ZJets_tagOnly_2b1c_18->SetSelected(Sphericity_ZJets_tagOnly_2b1c_18);
}
