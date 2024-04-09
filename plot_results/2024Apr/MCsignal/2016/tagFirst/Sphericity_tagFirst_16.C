#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tagFirst_16()
{
//=========Macro generated from canvas: Sphericity_tagFirst_16/Sphericity_tagFirst_16
//=========  (Mon Apr  8 11:27:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_tagFirst_16 = new TCanvas("Sphericity_tagFirst_16", "Sphericity_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tagFirst_16->SetHighLightColor(2);
   Sphericity_tagFirst_16->Range(-0.2,-0.0766716,1.133333,0.6900444);
   Sphericity_tagFirst_16->SetFillColor(0);
   Sphericity_tagFirst_16->SetFillStyle(4000);
   Sphericity_tagFirst_16->SetBorderMode(0);
   Sphericity_tagFirst_16->SetBorderSize(2);
   Sphericity_tagFirst_16->SetLeftMargin(0.15);
   Sphericity_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_tagFirst_16->SetFrameBorderMode(0);
   Sphericity_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__43 = new TH1D("VH_tagFirst_Sphericity__43","",25,0,1);
   VH_tagFirst_Sphericity__43->SetBinContent(1,0.5841645);
   VH_tagFirst_Sphericity__43->SetBinContent(2,0.5035246);
   VH_tagFirst_Sphericity__43->SetBinContent(3,0.2799065);
   VH_tagFirst_Sphericity__43->SetBinContent(4,0.1717085);
   VH_tagFirst_Sphericity__43->SetBinContent(5,0.114291);
   VH_tagFirst_Sphericity__43->SetBinContent(6,0.07623998);
   VH_tagFirst_Sphericity__43->SetBinContent(7,0.02934745);
   VH_tagFirst_Sphericity__43->SetBinContent(8,0.01510973);
   VH_tagFirst_Sphericity__43->SetBinContent(9,0.009589851);
   VH_tagFirst_Sphericity__43->SetBinContent(10,0.00215821);
   VH_tagFirst_Sphericity__43->SetBinContent(11,0.006835611);
   VH_tagFirst_Sphericity__43->SetBinContent(12,0.003752943);
   VH_tagFirst_Sphericity__43->SetBinContent(13,0.004643131);
   VH_tagFirst_Sphericity__43->SetBinContent(14,0.001984084);
   VH_tagFirst_Sphericity__43->SetBinError(1,0.03487846);
   VH_tagFirst_Sphericity__43->SetBinError(2,0.03185574);
   VH_tagFirst_Sphericity__43->SetBinError(3,0.02415268);
   VH_tagFirst_Sphericity__43->SetBinError(4,0.01879977);
   VH_tagFirst_Sphericity__43->SetBinError(5,0.01522377);
   VH_tagFirst_Sphericity__43->SetBinError(6,0.01288909);
   VH_tagFirst_Sphericity__43->SetBinError(7,0.007952337);
   VH_tagFirst_Sphericity__43->SetBinError(8,0.005594273);
   VH_tagFirst_Sphericity__43->SetBinError(9,0.004831372);
   VH_tagFirst_Sphericity__43->SetBinError(10,0.00215821);
   VH_tagFirst_Sphericity__43->SetBinError(11,0.004000508);
   VH_tagFirst_Sphericity__43->SetBinError(12,0.002673177);
   VH_tagFirst_Sphericity__43->SetBinError(13,0.003346908);
   VH_tagFirst_Sphericity__43->SetBinError(14,0.001984084);
   VH_tagFirst_Sphericity__43->SetEntries(910);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__43->SetLineColor(ci);
   VH_tagFirst_Sphericity__43->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__43->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__43->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__43->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__43->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__43->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__43->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__43->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__43->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__43->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__43->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__43->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__43->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__43->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__43->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tagFirst_16->Modified();
   Sphericity_tagFirst_16->cd();
   Sphericity_tagFirst_16->SetSelected(Sphericity_tagFirst_16);
}
