#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_tagOnly_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WW_tagOnly_2b1c_16/Aplanarity_WW_tagOnly_2b1c_16
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_tagOnly_2b1c_16 = new TCanvas("Aplanarity_WW_tagOnly_2b1c_16", "Aplanarity_WW_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_tagOnly_2b1c_16->SetHighLightColor(2);
   Aplanarity_WW_tagOnly_2b1c_16->Range(-0.2,-1.23298,1.133333,3.035671);
   Aplanarity_WW_tagOnly_2b1c_16->SetFillColor(0);
   Aplanarity_WW_tagOnly_2b1c_16->SetFillStyle(4000);
   Aplanarity_WW_tagOnly_2b1c_16->SetBorderMode(0);
   Aplanarity_WW_tagOnly_2b1c_16->SetBorderSize(2);
   Aplanarity_WW_tagOnly_2b1c_16->SetLogy();
   Aplanarity_WW_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_WW_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WW_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_WW_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WW_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3352 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3352","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinContent(1,214.4157);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinContent(2,25.86459);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinContent(3,7.056393);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinContent(4,2.153793);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinContent(5,1.233276);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinContent(6,0.4783506);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinContent(7,0.3125466);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinError(1,4.98062);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinError(2,1.703785);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinError(3,0.8848259);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinError(4,0.4954197);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinError(5,0.3796397);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinError(6,0.2225379);
   VH_tagOnly_2b1c_Aplanarity__3352->SetBinError(7,0.1809964);
   VH_tagOnly_2b1c_Aplanarity__3352->SetEntries(2285);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3352->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3352->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3352->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3352->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3352->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3352->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3352->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3352->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3352->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3352->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3352->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3352->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3352->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3352->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3352->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3352->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_tagOnly_2b1c_16->Modified();
   Aplanarity_WW_tagOnly_2b1c_16->cd();
   Aplanarity_WW_tagOnly_2b1c_16->SetSelected(Aplanarity_WW_tagOnly_2b1c_16);
}
