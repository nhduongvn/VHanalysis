#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_both_16()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_16/H_jetpt_JEC_both_16
//=========  (Fri Sep  1 13:23:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetpt_JEC_both_16 = new TCanvas("H_jetpt_JEC_both_16", "H_jetpt_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_16->SetHighLightColor(2);
   H_jetpt_JEC_both_16->Range(-60,-0.254774,340,2.292965);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC__985 = new TH1D("VbbHcc_both_H_jetpt_JEC__985","",150,0,300);
   VbbHcc_both_H_jetpt_JEC__985->SetBinContent(0,2.554433);
   VbbHcc_both_H_jetpt_JEC__985->SetBinContent(1,0.08569184);
   VbbHcc_both_H_jetpt_JEC__985->SetBinContent(2,1.941135);
   VbbHcc_both_H_jetpt_JEC__985->SetBinContent(3,0.3084913);
   VbbHcc_both_H_jetpt_JEC__985->SetBinError(0,0.5031801);
   VbbHcc_both_H_jetpt_JEC__985->SetBinError(1,0.08569184);
   VbbHcc_both_H_jetpt_JEC__985->SetBinError(2,0.4346688);
   VbbHcc_both_H_jetpt_JEC__985->SetBinError(3,0.1798142);
   VbbHcc_both_H_jetpt_JEC__985->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_jetpt_JEC__985->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC__985->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC__985->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC__985->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__985->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC__985->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__985->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__985->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__985->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__985->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC__985->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__985->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_both_16->Modified();
   H_jetpt_JEC_both_16->cd();
   H_jetpt_JEC_both_16->SetSelected(H_jetpt_JEC_both_16);
}
