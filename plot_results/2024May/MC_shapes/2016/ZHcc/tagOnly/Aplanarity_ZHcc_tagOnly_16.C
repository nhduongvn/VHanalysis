#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_tagOnly_16()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_tagOnly_16/Aplanarity_ZHcc_tagOnly_16
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_tagOnly_16 = new TCanvas("Aplanarity_ZHcc_tagOnly_16", "Aplanarity_ZHcc_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_tagOnly_16->SetHighLightColor(2);
   Aplanarity_ZHcc_tagOnly_16->Range(-0.2,-0.3032887,1.133333,2.729598);
   Aplanarity_ZHcc_tagOnly_16->SetFillColor(0);
   Aplanarity_ZHcc_tagOnly_16->SetFillStyle(4000);
   Aplanarity_ZHcc_tagOnly_16->SetBorderMode(0);
   Aplanarity_ZHcc_tagOnly_16->SetBorderSize(2);
   Aplanarity_ZHcc_tagOnly_16->SetLeftMargin(0.15);
   Aplanarity_ZHcc_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagOnly_16->SetFrameBorderMode(0);
   Aplanarity_ZHcc_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1171 = new TH1D("VH_tagOnly_Aplanarity__1171","",50,0,1);
   VH_tagOnly_Aplanarity__1171->SetBinContent(1,2.310771);
   VH_tagOnly_Aplanarity__1171->SetBinContent(2,0.2254008);
   VH_tagOnly_Aplanarity__1171->SetBinContent(3,0.05316461);
   VH_tagOnly_Aplanarity__1171->SetBinContent(4,0.0198299);
   VH_tagOnly_Aplanarity__1171->SetBinContent(5,0.002633383);
   VH_tagOnly_Aplanarity__1171->SetBinContent(6,0.002682947);
   VH_tagOnly_Aplanarity__1171->SetBinContent(7,0.0006445096);
   VH_tagOnly_Aplanarity__1171->SetBinContent(8,0.001458604);
   VH_tagOnly_Aplanarity__1171->SetBinContent(9,0.0004297189);
   VH_tagOnly_Aplanarity__1171->SetBinContent(17,0.0002685819);
   VH_tagOnly_Aplanarity__1171->SetBinError(1,0.05865497);
   VH_tagOnly_Aplanarity__1171->SetBinError(2,0.01800449);
   VH_tagOnly_Aplanarity__1171->SetBinError(3,0.008372349);
   VH_tagOnly_Aplanarity__1171->SetBinError(4,0.005440769);
   VH_tagOnly_Aplanarity__1171->SetBinError(5,0.0008911909);
   VH_tagOnly_Aplanarity__1171->SetBinError(6,0.00180278);
   VH_tagOnly_Aplanarity__1171->SetBinError(7,0.0004612644);
   VH_tagOnly_Aplanarity__1171->SetBinError(8,0.0006179336);
   VH_tagOnly_Aplanarity__1171->SetBinError(9,0.0004297189);
   VH_tagOnly_Aplanarity__1171->SetBinError(17,0.0002685819);
   VH_tagOnly_Aplanarity__1171->SetEntries(3969);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1171->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1171->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1171->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1171->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1171->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1171->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1171->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1171->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1171->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1171->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1171->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1171->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1171->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1171->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1171->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1171->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_tagOnly_16->Modified();
   Aplanarity_ZHcc_tagOnly_16->cd();
   Aplanarity_ZHcc_tagOnly_16->SetSelected(Aplanarity_ZHcc_tagOnly_16);
}
