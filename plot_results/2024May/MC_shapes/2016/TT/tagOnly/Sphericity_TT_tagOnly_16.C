#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_tagOnly_16()
{
//=========Macro generated from canvas: Sphericity_TT_tagOnly_16/Sphericity_TT_tagOnly_16
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_tagOnly_16 = new TCanvas("Sphericity_TT_tagOnly_16", "Sphericity_TT_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_tagOnly_16->SetHighLightColor(2);
   Sphericity_TT_tagOnly_16->Range(-0.2,-16588.13,1.133333,149293.2);
   Sphericity_TT_tagOnly_16->SetFillColor(0);
   Sphericity_TT_tagOnly_16->SetFillStyle(4000);
   Sphericity_TT_tagOnly_16->SetBorderMode(0);
   Sphericity_TT_tagOnly_16->SetBorderSize(2);
   Sphericity_TT_tagOnly_16->SetLeftMargin(0.15);
   Sphericity_TT_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_TT_tagOnly_16->SetFrameBorderMode(0);
   Sphericity_TT_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_TT_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1156 = new TH1D("VH_tagOnly_Sphericity__1156","",25,0,1);
   VH_tagOnly_Sphericity__1156->SetBinContent(1,126385.8);
   VH_tagOnly_Sphericity__1156->SetBinContent(2,113226.9);
   VH_tagOnly_Sphericity__1156->SetBinContent(3,62530.43);
   VH_tagOnly_Sphericity__1156->SetBinContent(4,35526.91);
   VH_tagOnly_Sphericity__1156->SetBinContent(5,20389.57);
   VH_tagOnly_Sphericity__1156->SetBinContent(6,11568.76);
   VH_tagOnly_Sphericity__1156->SetBinContent(7,6613.093);
   VH_tagOnly_Sphericity__1156->SetBinContent(8,3984.534);
   VH_tagOnly_Sphericity__1156->SetBinContent(9,2570.077);
   VH_tagOnly_Sphericity__1156->SetBinContent(10,1746.593);
   VH_tagOnly_Sphericity__1156->SetBinContent(11,1238.541);
   VH_tagOnly_Sphericity__1156->SetBinContent(12,910.094);
   VH_tagOnly_Sphericity__1156->SetBinContent(13,672.6924);
   VH_tagOnly_Sphericity__1156->SetBinContent(14,506.5763);
   VH_tagOnly_Sphericity__1156->SetBinContent(15,394.1086);
   VH_tagOnly_Sphericity__1156->SetBinContent(16,286.6382);
   VH_tagOnly_Sphericity__1156->SetBinContent(17,207.7475);
   VH_tagOnly_Sphericity__1156->SetBinContent(18,136.1353);
   VH_tagOnly_Sphericity__1156->SetBinContent(19,76.08088);
   VH_tagOnly_Sphericity__1156->SetBinContent(20,32.4772);
   VH_tagOnly_Sphericity__1156->SetBinContent(21,12.95915);
   VH_tagOnly_Sphericity__1156->SetBinContent(22,3.61668);
   VH_tagOnly_Sphericity__1156->SetBinContent(23,0.6761033);
   VH_tagOnly_Sphericity__1156->SetBinContent(24,0.0640309);
   VH_tagOnly_Sphericity__1156->SetBinError(1,90.65579);
   VH_tagOnly_Sphericity__1156->SetBinError(2,85.08594);
   VH_tagOnly_Sphericity__1156->SetBinError(3,63.41827);
   VH_tagOnly_Sphericity__1156->SetBinError(4,48.00603);
   VH_tagOnly_Sphericity__1156->SetBinError(5,36.51491);
   VH_tagOnly_Sphericity__1156->SetBinError(6,27.56852);
   VH_tagOnly_Sphericity__1156->SetBinError(7,20.8458);
   VH_tagOnly_Sphericity__1156->SetBinError(8,16.19466);
   VH_tagOnly_Sphericity__1156->SetBinError(9,13.02614);
   VH_tagOnly_Sphericity__1156->SetBinError(10,10.75124);
   VH_tagOnly_Sphericity__1156->SetBinError(11,9.069066);
   VH_tagOnly_Sphericity__1156->SetBinError(12,7.795122);
   VH_tagOnly_Sphericity__1156->SetBinError(13,6.714154);
   VH_tagOnly_Sphericity__1156->SetBinError(14,5.842647);
   VH_tagOnly_Sphericity__1156->SetBinError(15,5.139395);
   VH_tagOnly_Sphericity__1156->SetBinError(16,4.393969);
   VH_tagOnly_Sphericity__1156->SetBinError(17,3.726583);
   VH_tagOnly_Sphericity__1156->SetBinError(18,3.030762);
   VH_tagOnly_Sphericity__1156->SetBinError(19,2.248378);
   VH_tagOnly_Sphericity__1156->SetBinError(20,1.462009);
   VH_tagOnly_Sphericity__1156->SetBinError(21,0.935636);
   VH_tagOnly_Sphericity__1156->SetBinError(22,0.5036008);
   VH_tagOnly_Sphericity__1156->SetBinError(23,0.2111951);
   VH_tagOnly_Sphericity__1156->SetBinError(24,0.0640309);
   VH_tagOnly_Sphericity__1156->SetEntries(6624793);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1156->SetLineColor(ci);
   VH_tagOnly_Sphericity__1156->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1156->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1156->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1156->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1156->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1156->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1156->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1156->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1156->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1156->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1156->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1156->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1156->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1156->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1156->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_tagOnly_16->Modified();
   Sphericity_TT_tagOnly_16->cd();
   Sphericity_TT_tagOnly_16->SetSelected(Sphericity_TT_tagOnly_16);
}
