#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tagOnly_16()
{
//=========Macro generated from canvas: Sphericity_tagOnly_16/Sphericity_tagOnly_16
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_tagOnly_16 = new TCanvas("Sphericity_tagOnly_16", "Sphericity_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tagOnly_16->SetHighLightColor(2);
   Sphericity_tagOnly_16->Range(-0.2,-0.07481192,1.133333,0.6733073);
   Sphericity_tagOnly_16->SetFillColor(0);
   Sphericity_tagOnly_16->SetFillStyle(4000);
   Sphericity_tagOnly_16->SetBorderMode(0);
   Sphericity_tagOnly_16->SetBorderSize(2);
   Sphericity_tagOnly_16->SetLeftMargin(0.15);
   Sphericity_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_tagOnly_16->SetFrameBorderMode(0);
   Sphericity_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__115 = new TH1D("VH_tagOnly_Sphericity__115","",25,0,1);
   VH_tagOnly_Sphericity__115->SetBinContent(1,0.5699956);
   VH_tagOnly_Sphericity__115->SetBinContent(2,0.4906908);
   VH_tagOnly_Sphericity__115->SetBinContent(3,0.2624845);
   VH_tagOnly_Sphericity__115->SetBinContent(4,0.1675312);
   VH_tagOnly_Sphericity__115->SetBinContent(5,0.1137829);
   VH_tagOnly_Sphericity__115->SetBinContent(6,0.07847384);
   VH_tagOnly_Sphericity__115->SetBinContent(7,0.02934745);
   VH_tagOnly_Sphericity__115->SetBinContent(8,0.01510973);
   VH_tagOnly_Sphericity__115->SetBinContent(9,0.009589851);
   VH_tagOnly_Sphericity__115->SetBinContent(10,0.00215821);
   VH_tagOnly_Sphericity__115->SetBinContent(11,0.004028807);
   VH_tagOnly_Sphericity__115->SetBinContent(12,0.003752943);
   VH_tagOnly_Sphericity__115->SetBinContent(13,0.004643131);
   VH_tagOnly_Sphericity__115->SetBinContent(14,0.003966741);
   VH_tagOnly_Sphericity__115->SetBinError(1,0.0344557);
   VH_tagOnly_Sphericity__115->SetBinError(2,0.03141157);
   VH_tagOnly_Sphericity__115->SetBinError(3,0.02332383);
   VH_tagOnly_Sphericity__115->SetBinError(4,0.01856278);
   VH_tagOnly_Sphericity__115->SetBinError(5,0.01513684);
   VH_tagOnly_Sphericity__115->SetBinError(6,0.01308124);
   VH_tagOnly_Sphericity__115->SetBinError(7,0.007952337);
   VH_tagOnly_Sphericity__115->SetBinError(8,0.005594273);
   VH_tagOnly_Sphericity__115->SetBinError(9,0.004831372);
   VH_tagOnly_Sphericity__115->SetBinError(10,0.00215821);
   VH_tagOnly_Sphericity__115->SetBinError(11,0.0028506);
   VH_tagOnly_Sphericity__115->SetBinError(12,0.002673177);
   VH_tagOnly_Sphericity__115->SetBinError(13,0.003346908);
   VH_tagOnly_Sphericity__115->SetBinError(14,0.00280491);
   VH_tagOnly_Sphericity__115->SetEntries(888);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__115->SetLineColor(ci);
   VH_tagOnly_Sphericity__115->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__115->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__115->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__115->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__115->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__115->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__115->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__115->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__115->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__115->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__115->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__115->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__115->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__115->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__115->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tagOnly_16->Modified();
   Sphericity_tagOnly_16->cd();
   Sphericity_tagOnly_16->SetSelected(Sphericity_tagOnly_16);
}
