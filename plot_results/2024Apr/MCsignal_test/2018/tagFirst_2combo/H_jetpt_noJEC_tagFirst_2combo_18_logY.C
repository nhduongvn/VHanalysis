#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_noJEC_tagFirst_2combo_18_logY()
{
//=========Macro generated from canvas: H_jetpt_noJEC_tagFirst_2combo_18/H_jetpt_noJEC_tagFirst_2combo_18
//=========  (Thu Apr 11 14:04:10 2024) by ROOT version 6.28/10
   TCanvas *H_jetpt_noJEC_tagFirst_2combo_18 = new TCanvas("H_jetpt_noJEC_tagFirst_2combo_18", "H_jetpt_noJEC_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_noJEC_tagFirst_2combo_18->SetHighLightColor(2);
   H_jetpt_noJEC_tagFirst_2combo_18->Range(-60,-0.13125,340,1.18125);
   H_jetpt_noJEC_tagFirst_2combo_18->SetFillColor(0);
   H_jetpt_noJEC_tagFirst_2combo_18->SetFillStyle(4000);
   H_jetpt_noJEC_tagFirst_2combo_18->SetBorderMode(0);
   H_jetpt_noJEC_tagFirst_2combo_18->SetBorderSize(2);
   H_jetpt_noJEC_tagFirst_2combo_18->SetLeftMargin(0.15);
   H_jetpt_noJEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_jetpt_noJEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   H_jetpt_noJEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_jetpt_noJEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_H_jetpt_noJEC__113 = new TH1D("VH_tagFirst_2combo_H_jetpt_noJEC__113","",75,0,300);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(76,2195.916);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(76,1185.998);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetLineColor(ci);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetXaxis()->SetTitle("c-jet p_{T} [GeV]");
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetXaxis()->SetRange(1,75);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_noJEC_tagFirst_2combo_18->Modified();
   H_jetpt_noJEC_tagFirst_2combo_18->cd();
   H_jetpt_noJEC_tagFirst_2combo_18->SetSelected(H_jetpt_noJEC_tagFirst_2combo_18);
}
