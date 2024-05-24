#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_tagFirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Sphericity_ZZ_tagFirst_2b1c_17/Sphericity_ZZ_tagFirst_2b1c_17
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_tagFirst_2b1c_17 = new TCanvas("Sphericity_ZZ_tagFirst_2b1c_17", "Sphericity_ZZ_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_tagFirst_2b1c_17->SetHighLightColor(2);
   Sphericity_ZZ_tagFirst_2b1c_17->Range(-0.2,-1.265678,1.133333,2.59429);
   Sphericity_ZZ_tagFirst_2b1c_17->SetFillColor(0);
   Sphericity_ZZ_tagFirst_2b1c_17->SetFillStyle(4000);
   Sphericity_ZZ_tagFirst_2b1c_17->SetBorderMode(0);
   Sphericity_ZZ_tagFirst_2b1c_17->SetBorderSize(2);
   Sphericity_ZZ_tagFirst_2b1c_17->SetLogy();
   Sphericity_ZZ_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_ZZ_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_ZZ_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2609 = new TH1D("VH_tagFirst_2b1c_Sphericity__2609","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(1,85.25984);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(2,69.11286);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(3,40.56336);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(4,25.96968);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(5,18.27329);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(6,8.808471);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(7,4.02822);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(8,3.143166);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(9,1.612819);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(10,0.4835649);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(12,0.5173631);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(13,0.2638448);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinContent(15,0.447703);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(1,5.26383);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(2,4.956701);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(3,4.079997);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(4,3.328738);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(5,2.60482);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(6,1.577421);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(7,1.288263);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(8,1.192196);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(9,0.8658803);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(10,0.2945497);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(12,0.299228);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(13,0.2638448);
   VH_tagFirst_2b1c_Sphericity__2609->SetBinError(15,0.316602);
   VH_tagFirst_2b1c_Sphericity__2609->SetEntries(992);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2609->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2609->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2609->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2609->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2609->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2609->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2609->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2609->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2609->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2609->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2609->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2609->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2609->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2609->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2609->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2609->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_tagFirst_2b1c_17->Modified();
   Sphericity_ZZ_tagFirst_2b1c_17->cd();
   Sphericity_ZZ_tagFirst_2b1c_17->SetSelected(Sphericity_ZZ_tagFirst_2b1c_17);
}
