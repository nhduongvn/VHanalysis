#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity()
{
//=========Macro generated from canvas: Sphericity/Sphericity
//=========  (Tue Mar 26 15:28:34 2024) by ROOT version 6.28/10
   TCanvas *Sphericity = new TCanvas("Sphericity", "Sphericity",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity->SetHighLightColor(2);
   Sphericity->Range(-0.2,-6.167611,1.133333,55.5085);
   Sphericity->SetFillColor(0);
   Sphericity->SetBorderMode(0);
   Sphericity->SetBorderSize(2);
   Sphericity->SetLeftMargin(0.15);
   Sphericity->SetFrameBorderMode(0);
   Sphericity->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__15 = new TH1D("VH_tagFirst_Sphericity__15","",25,0,1);
   VH_tagFirst_Sphericity__15->SetBinContent(1,45.19998);
   VH_tagFirst_Sphericity__15->SetBinContent(2,46.99132);
   VH_tagFirst_Sphericity__15->SetBinContent(3,24.46885);
   VH_tagFirst_Sphericity__15->SetBinContent(4,20.86393);
   VH_tagFirst_Sphericity__15->SetBinContent(5,22.22769);
   VH_tagFirst_Sphericity__15->SetBinContent(6,5.984457);
   VH_tagFirst_Sphericity__15->SetBinContent(7,1.998731);
   VH_tagFirst_Sphericity__15->SetBinContent(8,1.135862);
   VH_tagFirst_Sphericity__15->SetBinContent(10,1.561446);
   VH_tagFirst_Sphericity__15->SetBinError(1,7.803852);
   VH_tagFirst_Sphericity__15->SetBinError(2,8.652829);
   VH_tagFirst_Sphericity__15->SetBinError(3,6.053274);
   VH_tagFirst_Sphericity__15->SetBinError(4,6.352638);
   VH_tagFirst_Sphericity__15->SetBinError(5,6.328836);
   VH_tagFirst_Sphericity__15->SetBinError(6,2.692677);
   VH_tagFirst_Sphericity__15->SetBinError(7,1.998731);
   VH_tagFirst_Sphericity__15->SetBinError(8,1.135862);
   VH_tagFirst_Sphericity__15->SetBinError(10,1.561446);
   VH_tagFirst_Sphericity__15->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VH_tagFirst_Sphericity__15->SetFillColor(ci);
   VH_tagFirst_Sphericity__15->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__15->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Sphericity__15->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__15->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__15->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__15->GetYaxis()->SetTitle("Events/4 GeV");
   VH_tagFirst_Sphericity__15->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__15->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__15->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__15->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__15->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__15->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, lumi fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity->Modified();
   Sphericity->cd();
   Sphericity->SetSelected(Sphericity);
}
