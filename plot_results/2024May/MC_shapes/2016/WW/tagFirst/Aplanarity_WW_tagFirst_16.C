#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_tagFirst_16()
{
//=========Macro generated from canvas: Aplanarity_WW_tagFirst_16/Aplanarity_WW_tagFirst_16
//=========  (Fri May 24 12:42:12 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_tagFirst_16 = new TCanvas("Aplanarity_WW_tagFirst_16", "Aplanarity_WW_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_tagFirst_16->SetHighLightColor(2);
   Aplanarity_WW_tagFirst_16->Range(-0.2,-10.18913,1.133333,91.70214);
   Aplanarity_WW_tagFirst_16->SetFillColor(0);
   Aplanarity_WW_tagFirst_16->SetFillStyle(4000);
   Aplanarity_WW_tagFirst_16->SetBorderMode(0);
   Aplanarity_WW_tagFirst_16->SetBorderSize(2);
   Aplanarity_WW_tagFirst_16->SetLeftMargin(0.15);
   Aplanarity_WW_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_WW_tagFirst_16->SetFrameBorderMode(0);
   Aplanarity_WW_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_WW_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__472 = new TH1D("VH_tagFirst_Aplanarity__472","",50,0,1);
   VH_tagFirst_Aplanarity__472->SetBinContent(1,77.63144);
   VH_tagFirst_Aplanarity__472->SetBinContent(2,7.605058);
   VH_tagFirst_Aplanarity__472->SetBinContent(3,2.109508);
   VH_tagFirst_Aplanarity__472->SetBinContent(4,0.7492838);
   VH_tagFirst_Aplanarity__472->SetBinContent(5,0.6278226);
   VH_tagFirst_Aplanarity__472->SetBinContent(6,0.1080637);
   VH_tagFirst_Aplanarity__472->SetBinContent(7,0.1969203);
   VH_tagFirst_Aplanarity__472->SetBinError(1,3.074493);
   VH_tagFirst_Aplanarity__472->SetBinError(2,0.9266675);
   VH_tagFirst_Aplanarity__472->SetBinError(3,0.4778257);
   VH_tagFirst_Aplanarity__472->SetBinError(4,0.3097005);
   VH_tagFirst_Aplanarity__472->SetBinError(5,0.2875252);
   VH_tagFirst_Aplanarity__472->SetBinError(6,0.1080637);
   VH_tagFirst_Aplanarity__472->SetBinError(7,0.1392489);
   VH_tagFirst_Aplanarity__472->SetEntries(777);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__472->SetLineColor(ci);
   VH_tagFirst_Aplanarity__472->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__472->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__472->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__472->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__472->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__472->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__472->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__472->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__472->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__472->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__472->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__472->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__472->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__472->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__472->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_tagFirst_16->Modified();
   Aplanarity_WW_tagFirst_16->cd();
   Aplanarity_WW_tagFirst_16->SetSelected(Aplanarity_WW_tagFirst_16);
}
