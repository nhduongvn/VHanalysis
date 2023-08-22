void dR_HZ_both_18_logY()
{
//=========Macro generated from canvas: dR_HZ_both_18/dR_HZ_both_18
//=========  (Tue Aug 22 09:18:32 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_both_18 = new TCanvas("dR_HZ_both_18", "dR_HZ_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_18->SetHighLightColor(2);
   dR_HZ_both_18->Range(-1.2,-1.51948,6.8,0.6495587);
   dR_HZ_both_18->SetFillColor(0);
   dR_HZ_both_18->SetBorderMode(0);
   dR_HZ_both_18->SetBorderSize(2);
   dR_HZ_both_18->SetLogy();
   dR_HZ_both_18->SetLeftMargin(0.15);
   dR_HZ_both_18->SetFrameBorderMode(0);
   dR_HZ_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ_stack_7 = new TH1D("VbbHcc_both_dR_HZ_stack_7","",60,0,6);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(11,0.4346562);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(13,0.4722652);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(16,0.893704);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(17,0.8145801);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(18,0.3410058);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(20,0.879735);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(21,0.3690103);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(22,0.5876132);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(24,0.09964461);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(25,1.322796);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(27,1.429242);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(28,0.6808577);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(30,0.4394432);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(31,1.16121);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(32,0.8119523);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(33,0.8911893);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(34,0.4536609);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(38,0.8119958);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(39,0.2680755);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(52,0.4671207);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(11,0.4346562);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(13,0.4722652);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(16,0.64837);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(17,0.5828272);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(18,0.3410058);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(20,0.6285919);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(21,0.3690103);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(22,0.4212682);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(24,0.09964461);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(25,0.7945646);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(27,1.070238);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(28,0.4814903);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(30,0.4394432);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(31,0.6772849);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(32,0.5807092);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(33,0.6302692);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(34,0.4536609);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(38,0.5746521);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(39,0.2680755);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(52,0.4671207);
   VbbHcc_both_dR_HZ_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_dR_HZ_stack_7->SetFillColor(ci);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_both_18->Modified();
   dR_HZ_both_18->cd();
   dR_HZ_both_18->SetSelected(dR_HZ_both_18);
}
