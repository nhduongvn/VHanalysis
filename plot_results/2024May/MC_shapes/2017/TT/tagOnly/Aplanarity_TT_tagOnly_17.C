#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_TT_tagOnly_17()
{
//=========Macro generated from canvas: Aplanarity_TT_tagOnly_17/Aplanarity_TT_tagOnly_17
//=========  (Fri May 24 12:42:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_TT_tagOnly_17 = new TCanvas("Aplanarity_TT_tagOnly_17", "Aplanarity_TT_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_TT_tagOnly_17->SetHighLightColor(2);
   Aplanarity_TT_tagOnly_17->Range(-0.2,-30491.04,1.133333,274419.4);
   Aplanarity_TT_tagOnly_17->SetFillColor(0);
   Aplanarity_TT_tagOnly_17->SetFillStyle(4000);
   Aplanarity_TT_tagOnly_17->SetBorderMode(0);
   Aplanarity_TT_tagOnly_17->SetBorderSize(2);
   Aplanarity_TT_tagOnly_17->SetLeftMargin(0.15);
   Aplanarity_TT_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_TT_tagOnly_17->SetFrameBorderMode(0);
   Aplanarity_TT_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_TT_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1187 = new TH1D("VH_tagOnly_Aplanarity__1187","",50,0,1);
   VH_tagOnly_Aplanarity__1187->SetBinContent(0,0.06949146);
   VH_tagOnly_Aplanarity__1187->SetBinContent(1,232312.7);
   VH_tagOnly_Aplanarity__1187->SetBinContent(2,31742.9);
   VH_tagOnly_Aplanarity__1187->SetBinContent(3,8278.695);
   VH_tagOnly_Aplanarity__1187->SetBinContent(4,3011.893);
   VH_tagOnly_Aplanarity__1187->SetBinContent(5,1353.06);
   VH_tagOnly_Aplanarity__1187->SetBinContent(6,697.1592);
   VH_tagOnly_Aplanarity__1187->SetBinContent(7,387.1598);
   VH_tagOnly_Aplanarity__1187->SetBinContent(8,231.636);
   VH_tagOnly_Aplanarity__1187->SetBinContent(9,142.4839);
   VH_tagOnly_Aplanarity__1187->SetBinContent(10,93.94717);
   VH_tagOnly_Aplanarity__1187->SetBinContent(11,58.47026);
   VH_tagOnly_Aplanarity__1187->SetBinContent(12,36.95818);
   VH_tagOnly_Aplanarity__1187->SetBinContent(13,26.13508);
   VH_tagOnly_Aplanarity__1187->SetBinContent(14,16.15312);
   VH_tagOnly_Aplanarity__1187->SetBinContent(15,10.31597);
   VH_tagOnly_Aplanarity__1187->SetBinContent(16,5.477259);
   VH_tagOnly_Aplanarity__1187->SetBinContent(17,3.565031);
   VH_tagOnly_Aplanarity__1187->SetBinContent(18,1.521411);
   VH_tagOnly_Aplanarity__1187->SetBinContent(19,0.7504878);
   VH_tagOnly_Aplanarity__1187->SetBinContent(20,0.5949118);
   VH_tagOnly_Aplanarity__1187->SetBinContent(21,0.2052921);
   VH_tagOnly_Aplanarity__1187->SetBinContent(22,0.3021764);
   VH_tagOnly_Aplanarity__1187->SetBinError(0,0.06949146);
   VH_tagOnly_Aplanarity__1187->SetBinError(1,148.802);
   VH_tagOnly_Aplanarity__1187->SetBinError(2,54.36577);
   VH_tagOnly_Aplanarity__1187->SetBinError(3,27.91154);
   VH_tagOnly_Aplanarity__1187->SetBinError(4,16.87028);
   VH_tagOnly_Aplanarity__1187->SetBinError(5,11.36223);
   VH_tagOnly_Aplanarity__1187->SetBinError(6,8.203986);
   VH_tagOnly_Aplanarity__1187->SetBinError(7,6.010603);
   VH_tagOnly_Aplanarity__1187->SetBinError(8,4.849967);
   VH_tagOnly_Aplanarity__1187->SetBinError(9,3.82153);
   VH_tagOnly_Aplanarity__1187->SetBinError(10,3.098674);
   VH_tagOnly_Aplanarity__1187->SetBinError(11,2.284946);
   VH_tagOnly_Aplanarity__1187->SetBinError(12,1.8951);
   VH_tagOnly_Aplanarity__1187->SetBinError(13,1.665844);
   VH_tagOnly_Aplanarity__1187->SetBinError(14,1.249728);
   VH_tagOnly_Aplanarity__1187->SetBinError(15,1.03064);
   VH_tagOnly_Aplanarity__1187->SetBinError(16,0.6717269);
   VH_tagOnly_Aplanarity__1187->SetBinError(17,0.5922985);
   VH_tagOnly_Aplanarity__1187->SetBinError(18,0.3244399);
   VH_tagOnly_Aplanarity__1187->SetBinError(19,0.2177242);
   VH_tagOnly_Aplanarity__1187->SetBinError(20,0.1876252);
   VH_tagOnly_Aplanarity__1187->SetBinError(21,0.1062246);
   VH_tagOnly_Aplanarity__1187->SetBinError(22,0.2150108);
   VH_tagOnly_Aplanarity__1187->SetEntries(4125860);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1187->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1187->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1187->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1187->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1187->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1187->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1187->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1187->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1187->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1187->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1187->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1187->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1187->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1187->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1187->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1187->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_TT_tagOnly_17->Modified();
   Aplanarity_TT_tagOnly_17->cd();
   Aplanarity_TT_tagOnly_17->SetSelected(Aplanarity_TT_tagOnly_17);
}
