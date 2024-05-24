#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: Sphericity_ZHcc_tagOnly_2b1c_16/Sphericity_ZHcc_tagOnly_2b1c_16
//=========  (Fri May 24 12:42:54 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_tagOnly_2b1c_16 = new TCanvas("Sphericity_ZHcc_tagOnly_2b1c_16", "Sphericity_ZHcc_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_tagOnly_2b1c_16->SetHighLightColor(2);
   Sphericity_ZHcc_tagOnly_2b1c_16->Range(-0.2,-0.2350161,1.133333,2.115145);
   Sphericity_ZHcc_tagOnly_2b1c_16->SetFillColor(0);
   Sphericity_ZHcc_tagOnly_2b1c_16->SetFillStyle(4000);
   Sphericity_ZHcc_tagOnly_2b1c_16->SetBorderMode(0);
   Sphericity_ZHcc_tagOnly_2b1c_16->SetBorderSize(2);
   Sphericity_ZHcc_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Sphericity_ZHcc_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Sphericity_ZHcc_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3301 = new TH1D("VH_tagOnly_2b1c_Sphericity__3301","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(1,1.790599);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(2,1.547238);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(3,0.8961856);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(4,0.5522799);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(5,0.3607894);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(6,0.2239048);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(7,0.08000102);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(8,0.0426958);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(9,0.02314254);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(10,0.01018297);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(11,0.01170075);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(12,0.01988791);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(13,0.01098263);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(14,0.008396521);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(15,0.002196602);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(16,0.001026924);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(17,0.000865385);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(18,0.0004514806);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(20,0.002410462);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinContent(21,0.0002917857);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(1,0.05131745);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(2,0.04650651);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(3,0.03611213);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(4,0.02829313);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(5,0.02377661);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(6,0.0190755);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(7,0.01123248);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(8,0.007825404);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(9,0.005629717);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(10,0.003301172);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(11,0.003745866);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(12,0.005912966);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(13,0.004193098);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(14,0.003496016);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(15,0.0008657791);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(16,0.0005356617);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(17,0.0005055334);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(18,0.0003249433);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(20,0.002271559);
   VH_tagOnly_2b1c_Sphericity__3301->SetBinError(21,0.0002917857);
   VH_tagOnly_2b1c_Sphericity__3301->SetEntries(8571);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3301->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3301->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3301->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3301->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3301->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3301->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3301->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3301->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3301->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3301->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3301->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3301->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3301->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3301->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3301->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3301->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_tagOnly_2b1c_16->Modified();
   Sphericity_ZHcc_tagOnly_2b1c_16->cd();
   Sphericity_ZHcc_tagOnly_2b1c_16->SetSelected(Sphericity_ZHcc_tagOnly_2b1c_16);
}
