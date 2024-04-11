#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tagFirst_18()
{
//=========Macro generated from canvas: Sphericity_tagFirst_18/Sphericity_tagFirst_18
//=========  (Thu Apr 11 14:04:08 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_tagFirst_18 = new TCanvas("Sphericity_tagFirst_18", "Sphericity_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tagFirst_18->SetHighLightColor(2);
   Sphericity_tagFirst_18->Range(-0.2,-203834,1.133333,1834506);
   Sphericity_tagFirst_18->SetFillColor(0);
   Sphericity_tagFirst_18->SetFillStyle(4000);
   Sphericity_tagFirst_18->SetBorderMode(0);
   Sphericity_tagFirst_18->SetBorderSize(2);
   Sphericity_tagFirst_18->SetLeftMargin(0.15);
   Sphericity_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_tagFirst_18->SetFrameBorderMode(0);
   Sphericity_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__15 = new TH1D("VH_tagFirst_Sphericity__15","",25,0,1);
   VH_tagFirst_Sphericity__15->SetBinContent(1,1553021);
   VH_tagFirst_Sphericity__15->SetBinContent(2,890013.8);
   VH_tagFirst_Sphericity__15->SetBinContent(3,752350.8);
   VH_tagFirst_Sphericity__15->SetBinContent(4,193099.1);
   VH_tagFirst_Sphericity__15->SetBinContent(5,108740.9);
   VH_tagFirst_Sphericity__15->SetBinContent(6,37387.44);
   VH_tagFirst_Sphericity__15->SetBinContent(7,11988.41);
   VH_tagFirst_Sphericity__15->SetBinContent(8,2687.569);
   VH_tagFirst_Sphericity__15->SetBinContent(9,15759.94);
   VH_tagFirst_Sphericity__15->SetBinContent(10,1862.63);
   VH_tagFirst_Sphericity__15->SetBinContent(11,18327.48);
   VH_tagFirst_Sphericity__15->SetBinContent(12,4259.438);
   VH_tagFirst_Sphericity__15->SetBinContent(14,936.5998);
   VH_tagFirst_Sphericity__15->SetBinContent(15,683.0913);
   VH_tagFirst_Sphericity__15->SetBinContent(17,1232.925);
   VH_tagFirst_Sphericity__15->SetBinError(1,394109.9);
   VH_tagFirst_Sphericity__15->SetBinError(2,315952.7);
   VH_tagFirst_Sphericity__15->SetBinError(3,312467.4);
   VH_tagFirst_Sphericity__15->SetBinError(4,59927.99);
   VH_tagFirst_Sphericity__15->SetBinError(5,45593.18);
   VH_tagFirst_Sphericity__15->SetBinError(6,15298.92);
   VH_tagFirst_Sphericity__15->SetBinError(7,5001.878);
   VH_tagFirst_Sphericity__15->SetBinError(8,1593.529);
   VH_tagFirst_Sphericity__15->SetBinError(9,10574.11);
   VH_tagFirst_Sphericity__15->SetBinError(10,962.6137);
   VH_tagFirst_Sphericity__15->SetBinError(11,15254.8);
   VH_tagFirst_Sphericity__15->SetBinError(12,2538.59);
   VH_tagFirst_Sphericity__15->SetBinError(14,665.8272);
   VH_tagFirst_Sphericity__15->SetBinError(15,683.0913);
   VH_tagFirst_Sphericity__15->SetBinError(17,1232.925);
   VH_tagFirst_Sphericity__15->SetEntries(846);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__15->SetLineColor(ci);
   VH_tagFirst_Sphericity__15->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__15->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__15->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__15->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__15->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__15->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__15->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__15->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__15->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__15->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__15->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__15->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__15->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__15->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__15->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tagFirst_18->Modified();
   Sphericity_tagFirst_18->cd();
   Sphericity_tagFirst_18->SetSelected(Sphericity_tagFirst_18);
}
