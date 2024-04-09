#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_16()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_16/Aplanarity_tagOnly_16
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_16 = new TCanvas("Aplanarity_tagOnly_16", "Aplanarity_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tagOnly_16->SetHighLightColor(2);
   Aplanarity_tagOnly_16->Range(-0.2,-0.2052899,1.133333,1.847609);
   Aplanarity_tagOnly_16->SetFillColor(0);
   Aplanarity_tagOnly_16->SetFillStyle(4000);
   Aplanarity_tagOnly_16->SetBorderMode(0);
   Aplanarity_tagOnly_16->SetBorderSize(2);
   Aplanarity_tagOnly_16->SetLeftMargin(0.15);
   Aplanarity_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_16->SetFrameBorderMode(0);
   Aplanarity_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__118 = new TH1D("VH_tagOnly_Aplanarity__118","",50,0,1);
   VH_tagOnly_Aplanarity__118->SetBinContent(1,1.564113);
   VH_tagOnly_Aplanarity__118->SetBinContent(2,0.1446119);
   VH_tagOnly_Aplanarity__118->SetBinContent(3,0.03251455);
   VH_tagOnly_Aplanarity__118->SetBinContent(4,0.01257971);
   VH_tagOnly_Aplanarity__118->SetBinContent(6,0.001736123);
   VH_tagOnly_Aplanarity__118->SetBinError(1,0.0567808);
   VH_tagOnly_Aplanarity__118->SetBinError(2,0.0173493);
   VH_tagOnly_Aplanarity__118->SetBinError(3,0.008012246);
   VH_tagOnly_Aplanarity__118->SetBinError(4,0.005226104);
   VH_tagOnly_Aplanarity__118->SetBinError(6,0.001736123);
   VH_tagOnly_Aplanarity__118->SetEntries(888);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__118->SetLineColor(ci);
   VH_tagOnly_Aplanarity__118->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__118->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__118->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__118->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__118->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__118->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__118->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__118->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__118->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__118->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__118->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__118->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__118->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__118->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__118->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tagOnly_16->Modified();
   Aplanarity_tagOnly_16->cd();
   Aplanarity_tagOnly_16->SetSelected(Aplanarity_tagOnly_16);
}
