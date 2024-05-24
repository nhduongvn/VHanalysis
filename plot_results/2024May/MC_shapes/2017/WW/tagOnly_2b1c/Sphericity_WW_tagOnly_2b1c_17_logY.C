#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_tagOnly_2b1c_17_logY()
{
//=========Macro generated from canvas: Sphericity_WW_tagOnly_2b1c_17/Sphericity_WW_tagOnly_2b1c_17
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_tagOnly_2b1c_17 = new TCanvas("Sphericity_WW_tagOnly_2b1c_17", "Sphericity_WW_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_tagOnly_2b1c_17->SetHighLightColor(2);
   Sphericity_WW_tagOnly_2b1c_17->Range(-0.2,-1.444595,1.133333,2.260416);
   Sphericity_WW_tagOnly_2b1c_17->SetFillColor(0);
   Sphericity_WW_tagOnly_2b1c_17->SetFillStyle(4000);
   Sphericity_WW_tagOnly_2b1c_17->SetBorderMode(0);
   Sphericity_WW_tagOnly_2b1c_17->SetBorderSize(2);
   Sphericity_WW_tagOnly_2b1c_17->SetLogy();
   Sphericity_WW_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Sphericity_WW_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WW_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Sphericity_WW_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WW_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3323 = new TH1D("VH_tagOnly_2b1c_Sphericity__3323","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinContent(1,40.9606);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinContent(2,33.32079);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinContent(3,19.62135);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinContent(4,11.40331);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinContent(5,8.193728);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinContent(6,4.711694);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinContent(7,1.743027);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinContent(8,1.510272);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinContent(9,0.2344543);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinContent(11,0.380366);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinContent(13,0.2611829);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinContent(15,0.1686304);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinError(1,3.819091);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinError(2,3.343492);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinError(3,2.564793);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinError(4,2.020197);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinError(5,1.659163);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinError(6,1.277134);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinError(7,0.8502948);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinError(8,0.7064099);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinError(9,0.2344543);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinError(11,0.380366);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinError(13,0.2611829);
   VH_tagOnly_2b1c_Sphericity__3323->SetBinError(15,0.1686304);
   VH_tagOnly_2b1c_Sphericity__3323->SetEntries(429);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3323->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3323->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3323->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3323->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3323->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3323->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3323->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3323->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3323->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3323->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3323->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3323->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3323->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3323->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3323->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3323->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_tagOnly_2b1c_17->Modified();
   Sphericity_WW_tagOnly_2b1c_17->cd();
   Sphericity_WW_tagOnly_2b1c_17->SetSelected(Sphericity_WW_tagOnly_2b1c_17);
}
