#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_tagOnly_17_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_tagOnly_17/Aplanarity_ZHbb_tagOnly_17
//=========  (Thu May 23 20:48:41 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_tagOnly_17 = new TCanvas("Aplanarity_ZHbb_tagOnly_17", "Aplanarity_ZHbb_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_tagOnly_17->SetHighLightColor(2);
   Aplanarity_ZHbb_tagOnly_17->Range(-0.2,-4.503377,1.133333,2.939434);
   Aplanarity_ZHbb_tagOnly_17->SetFillColor(0);
   Aplanarity_ZHbb_tagOnly_17->SetFillStyle(4000);
   Aplanarity_ZHbb_tagOnly_17->SetBorderMode(0);
   Aplanarity_ZHbb_tagOnly_17->SetBorderSize(2);
   Aplanarity_ZHbb_tagOnly_17->SetLogy();
   Aplanarity_ZHbb_tagOnly_17->SetLeftMargin(0.15);
   Aplanarity_ZHbb_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagOnly_17->SetFrameBorderMode(0);
   Aplanarity_ZHbb_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1175 = new TH1D("VH_tagOnly_Aplanarity__1175","",50,0,1);
   VH_tagOnly_Aplanarity__1175->SetBinContent(1,82.71868);
   VH_tagOnly_Aplanarity__1175->SetBinContent(2,8.39619);
   VH_tagOnly_Aplanarity__1175->SetBinContent(3,1.968282);
   VH_tagOnly_Aplanarity__1175->SetBinContent(4,0.6443908);
   VH_tagOnly_Aplanarity__1175->SetBinContent(5,0.3217125);
   VH_tagOnly_Aplanarity__1175->SetBinContent(6,0.1193489);
   VH_tagOnly_Aplanarity__1175->SetBinContent(7,0.09864716);
   VH_tagOnly_Aplanarity__1175->SetBinContent(8,0.03296077);
   VH_tagOnly_Aplanarity__1175->SetBinContent(9,0.02727682);
   VH_tagOnly_Aplanarity__1175->SetBinContent(10,0.02659147);
   VH_tagOnly_Aplanarity__1175->SetBinContent(11,0.007094814);
   VH_tagOnly_Aplanarity__1175->SetBinContent(12,0.008117321);
   VH_tagOnly_Aplanarity__1175->SetBinContent(13,0.005018707);
   VH_tagOnly_Aplanarity__1175->SetBinContent(14,0.001720403);
   VH_tagOnly_Aplanarity__1175->SetBinContent(16,0.0005089974);
   VH_tagOnly_Aplanarity__1175->SetBinContent(17,0.0003482848);
   VH_tagOnly_Aplanarity__1175->SetBinContent(19,0.00593932);
   VH_tagOnly_Aplanarity__1175->SetBinContent(21,0.0003700873);
   VH_tagOnly_Aplanarity__1175->SetBinError(1,0.3341194);
   VH_tagOnly_Aplanarity__1175->SetBinError(2,0.103023);
   VH_tagOnly_Aplanarity__1175->SetBinError(3,0.05122849);
   VH_tagOnly_Aplanarity__1175->SetBinError(4,0.02895088);
   VH_tagOnly_Aplanarity__1175->SetBinError(5,0.02028987);
   VH_tagOnly_Aplanarity__1175->SetBinError(6,0.01180876);
   VH_tagOnly_Aplanarity__1175->SetBinError(7,0.01220772);
   VH_tagOnly_Aplanarity__1175->SetBinError(8,0.005021396);
   VH_tagOnly_Aplanarity__1175->SetBinError(9,0.005513482);
   VH_tagOnly_Aplanarity__1175->SetBinError(10,0.009713367);
   VH_tagOnly_Aplanarity__1175->SetBinError(11,0.00190421);
   VH_tagOnly_Aplanarity__1175->SetBinError(12,0.002759048);
   VH_tagOnly_Aplanarity__1175->SetBinError(13,0.002596138);
   VH_tagOnly_Aplanarity__1175->SetBinError(14,0.0007734416);
   VH_tagOnly_Aplanarity__1175->SetBinError(16,0.0003700688);
   VH_tagOnly_Aplanarity__1175->SetBinError(17,0.0003482848);
   VH_tagOnly_Aplanarity__1175->SetBinError(19,0.003568771);
   VH_tagOnly_Aplanarity__1175->SetBinError(21,0.0003700873);
   VH_tagOnly_Aplanarity__1175->SetEntries(157489);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1175->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1175->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1175->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1175->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1175->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1175->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1175->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1175->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1175->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1175->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1175->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1175->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1175->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1175->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1175->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1175->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_tagOnly_17->Modified();
   Aplanarity_ZHbb_tagOnly_17->cd();
   Aplanarity_ZHbb_tagOnly_17->SetSelected(Aplanarity_ZHbb_tagOnly_17);
}
