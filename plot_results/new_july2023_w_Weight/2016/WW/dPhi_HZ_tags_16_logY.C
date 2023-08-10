void dPhi_HZ_tags_16_logY()
{
//=========Macro generated from canvas: dPhi_HZ_tags_16/dPhi_HZ_tags_16
//=========  (Thu Aug 10 12:20:07 2023) by ROOT version 6.14/09
   TCanvas *dPhi_HZ_tags_16 = new TCanvas("dPhi_HZ_tags_16", "dPhi_HZ_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_tags_16->SetHighLightColor(2);
   dPhi_HZ_tags_16->Range(-5.6,-1.474657,5.066667,-0.4052177);
   dPhi_HZ_tags_16->SetFillColor(0);
   dPhi_HZ_tags_16->SetBorderMode(0);
   dPhi_HZ_tags_16->SetBorderSize(2);
   dPhi_HZ_tags_16->SetLogy();
   dPhi_HZ_tags_16->SetLeftMargin(0.15);
   dPhi_HZ_tags_16->SetFrameBorderMode(0);
   dPhi_HZ_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dPhi_HZ_stack_6 = new TH1D("VbbHcc_tags_dPhi_HZ_stack_6","",480,-4,4);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(84,0.1552273);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(148,0.1333553);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(179,0.08576627);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(186,0.1368996);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(251,0.1587488);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(272,0.139529);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(290,0.1440206);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(294,0.1535887);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(303,0.1445668);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(392,0.1622891);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(407,0.1344897);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(84,0.1552273);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(148,0.1333553);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(179,0.08576627);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(186,0.1368996);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(251,0.1587488);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(272,0.139529);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(290,0.1440206);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(294,0.1535887);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(303,0.1445668);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(392,0.1622891);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(407,0.1344897);
   VbbHcc_tags_dPhi_HZ_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_dPhi_HZ_stack_6->SetFillColor(ci);
   VbbHcc_tags_dPhi_HZ_stack_6->GetXaxis()->SetTitle("#Delta#Phi_{ZH}");
   VbbHcc_tags_dPhi_HZ_stack_6->GetXaxis()->SetRange(1,480);
   VbbHcc_tags_dPhi_HZ_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dPhi_HZ_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dPhi_HZ_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dPhi_HZ_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dPhi_HZ_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dPhi_HZ_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dPhi_HZ_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dPhi_HZ_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_dPhi_HZ_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dPhi_HZ_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dPhi_HZ_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dPhi_HZ_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dPhi_HZ_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dPhi_HZ_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_tags_16->Modified();
   dPhi_HZ_tags_16->cd();
   dPhi_HZ_tags_16->SetSelected(dPhi_HZ_tags_16);
}
