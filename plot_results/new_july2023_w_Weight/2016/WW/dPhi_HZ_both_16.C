void dPhi_HZ_both_16()
{
//=========Macro generated from canvas: dPhi_HZ_both_16/dPhi_HZ_both_16
//=========  (Thu Aug 10 12:24:53 2023) by ROOT version 6.14/09
   TCanvas *dPhi_HZ_both_16 = new TCanvas("dPhi_HZ_both_16", "dPhi_HZ_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_both_16->SetHighLightColor(2);
   dPhi_HZ_both_16->Range(-5.6,-0.02130045,5.066667,0.191704);
   dPhi_HZ_both_16->SetFillColor(0);
   dPhi_HZ_both_16->SetBorderMode(0);
   dPhi_HZ_both_16->SetBorderSize(2);
   dPhi_HZ_both_16->SetLeftMargin(0.15);
   dPhi_HZ_both_16->SetFrameBorderMode(0);
   dPhi_HZ_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dPhi_HZ_stack_6 = new TH1D("VbbHcc_both_dPhi_HZ_stack_6","",480,-4,4);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(66,0.1344897);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(125,0.1535887);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(184,0.1587488);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(203,0.1368996);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(235,0.1552273);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(281,0.1440206);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(290,0.1622891);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(339,0.139529);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(342,0.08576627);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(355,0.1333553);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(399,0.1445668);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(66,0.1344897);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(125,0.1535887);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(184,0.1587488);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(203,0.1368996);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(235,0.1552273);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(281,0.1440206);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(290,0.1622891);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(339,0.139529);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(342,0.08576627);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(355,0.1333553);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(399,0.1445668);
   VbbHcc_both_dPhi_HZ_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_dPhi_HZ_stack_6->SetFillColor(ci);
   VbbHcc_both_dPhi_HZ_stack_6->GetXaxis()->SetTitle("#Delta#Phi_{ZH}");
   VbbHcc_both_dPhi_HZ_stack_6->GetXaxis()->SetRange(1,480);
   VbbHcc_both_dPhi_HZ_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dPhi_HZ_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_dPhi_HZ_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_dPhi_HZ_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dPhi_HZ_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dPhi_HZ_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_dPhi_HZ_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_dPhi_HZ_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_dPhi_HZ_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dPhi_HZ_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dPhi_HZ_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_dPhi_HZ_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_dPhi_HZ_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dPhi_HZ_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_both_16->Modified();
   dPhi_HZ_both_16->cd();
   dPhi_HZ_both_16->SetSelected(dPhi_HZ_both_16);
}
