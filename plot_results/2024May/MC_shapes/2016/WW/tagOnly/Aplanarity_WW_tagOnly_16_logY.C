#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_tagOnly_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WW_tagOnly_16/Aplanarity_WW_tagOnly_16
//=========  (Thu May 23 20:48:42 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_tagOnly_16 = new TCanvas("Aplanarity_WW_tagOnly_16", "Aplanarity_WW_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_tagOnly_16->SetHighLightColor(2);
   Aplanarity_WW_tagOnly_16->Range(-0.2,-1.69577,1.133333,2.588429);
   Aplanarity_WW_tagOnly_16->SetFillColor(0);
   Aplanarity_WW_tagOnly_16->SetFillStyle(4000);
   Aplanarity_WW_tagOnly_16->SetBorderMode(0);
   Aplanarity_WW_tagOnly_16->SetBorderSize(2);
   Aplanarity_WW_tagOnly_16->SetLogy();
   Aplanarity_WW_tagOnly_16->SetLeftMargin(0.15);
   Aplanarity_WW_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_WW_tagOnly_16->SetFrameBorderMode(0);
   Aplanarity_WW_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_WW_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1192 = new TH1D("VH_tagOnly_Aplanarity__1192","",50,0,1);
   VH_tagOnly_Aplanarity__1192->SetBinContent(1,76.28871);
   VH_tagOnly_Aplanarity__1192->SetBinContent(2,7.704682);
   VH_tagOnly_Aplanarity__1192->SetBinContent(3,1.876927);
   VH_tagOnly_Aplanarity__1192->SetBinContent(4,0.7492838);
   VH_tagOnly_Aplanarity__1192->SetBinContent(5,0.6278226);
   VH_tagOnly_Aplanarity__1192->SetBinContent(6,0.1080637);
   VH_tagOnly_Aplanarity__1192->SetBinContent(7,0.1969203);
   VH_tagOnly_Aplanarity__1192->SetBinError(1,3.040422);
   VH_tagOnly_Aplanarity__1192->SetBinError(2,0.9320073);
   VH_tagOnly_Aplanarity__1192->SetBinError(3,0.4480539);
   VH_tagOnly_Aplanarity__1192->SetBinError(4,0.3097005);
   VH_tagOnly_Aplanarity__1192->SetBinError(5,0.2875252);
   VH_tagOnly_Aplanarity__1192->SetBinError(6,0.1080637);
   VH_tagOnly_Aplanarity__1192->SetBinError(7,0.1392489);
   VH_tagOnly_Aplanarity__1192->SetEntries(766);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1192->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1192->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1192->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1192->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1192->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1192->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1192->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1192->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1192->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1192->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1192->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1192->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1192->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1192->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1192->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1192->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_tagOnly_16->Modified();
   Aplanarity_WW_tagOnly_16->cd();
   Aplanarity_WW_tagOnly_16->SetSelected(Aplanarity_WW_tagOnly_16);
}
