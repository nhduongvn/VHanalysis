void dR_HZ_both_16_logY()
{
//=========Macro generated from canvas: dR_HZ_both_16/dR_HZ_both_16
//=========  (Thu Aug 10 12:21:41 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_both_16 = new TCanvas("dR_HZ_both_16", "dR_HZ_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_16->SetHighLightColor(2);
   dR_HZ_both_16->Range(-1.2,-1.507425,6.8,-0.1103063);
   dR_HZ_both_16->SetFillColor(0);
   dR_HZ_both_16->SetBorderMode(0);
   dR_HZ_both_16->SetBorderSize(2);
   dR_HZ_both_16->SetLogy();
   dR_HZ_both_16->SetLeftMargin(0.15);
   dR_HZ_both_16->SetFrameBorderMode(0);
   dR_HZ_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ_stack_6 = new TH1D("VbbHcc_both_dR_HZ_stack_6","",60,0,6);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(18,0.1587488);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(20,0.08576627);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(24,0.1535887);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(28,0.139529);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(29,0.1445668);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(32,0.1368996);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(42,0.1440206);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(45,0.1552273);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(47,0.1333553);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(60,0.2967788);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(18,0.1587488);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(20,0.08576627);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(24,0.1535887);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(28,0.139529);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(29,0.1445668);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(32,0.1368996);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(42,0.1440206);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(45,0.1552273);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(47,0.1333553);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(60,0.2107729);
   VbbHcc_both_dR_HZ_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_dR_HZ_stack_6->SetFillColor(ci);
   VbbHcc_both_dR_HZ_stack_6->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_both_dR_HZ_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_dR_HZ_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_dR_HZ_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_both_16->Modified();
   dR_HZ_both_16->cd();
   dR_HZ_both_16->SetSelected(dR_HZ_both_16);
}
