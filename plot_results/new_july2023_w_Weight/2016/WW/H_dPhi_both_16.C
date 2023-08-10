void H_dPhi_both_16()
{
//=========Macro generated from canvas: H_dPhi_both_16/H_dPhi_both_16
//=========  (Thu Aug 10 12:24:51 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_both_16 = new TCanvas("H_dPhi_both_16", "H_dPhi_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_both_16->SetHighLightColor(2);
   H_dPhi_both_16->Range(-0.8,-0.02130045,4.533333,0.191704);
   H_dPhi_both_16->SetFillColor(0);
   H_dPhi_both_16->SetBorderMode(0);
   H_dPhi_both_16->SetBorderSize(2);
   H_dPhi_both_16->SetLeftMargin(0.15);
   H_dPhi_both_16->SetFrameBorderMode(0);
   H_dPhi_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dPhi_stack_6 = new TH1D("VbbHcc_both_H_dPhi_stack_6","",120,0,4);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(0,0.3642765);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(26,0.139529);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(27,0.1368996);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(37,0.1535887);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(47,0.1445668);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(58,0.1552273);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(69,0.1333553);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(90,0.1622891);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(92,0.1587488);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(0,0.2149076);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(26,0.139529);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(27,0.1368996);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(37,0.1535887);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(47,0.1445668);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(58,0.1552273);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(69,0.1333553);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(90,0.1622891);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(92,0.1587488);
   VbbHcc_both_H_dPhi_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dPhi_stack_6->SetFillColor(ci);
   VbbHcc_both_H_dPhi_stack_6->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_both_H_dPhi_stack_6->GetXaxis()->SetRange(1,120);
   VbbHcc_both_H_dPhi_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dPhi_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_both_16->Modified();
   H_dPhi_both_16->cd();
   H_dPhi_both_16->SetSelected(H_dPhi_both_16);
}
