void H_dPhi_tags_16()
{
//=========Macro generated from canvas: H_dPhi_tags_16/H_dPhi_tags_16
//=========  (Thu Aug 10 12:23:20 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_tags_16 = new TCanvas("H_dPhi_tags_16", "H_dPhi_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_16->SetHighLightColor(2);
   H_dPhi_tags_16->Range(-0.8,-0.02130045,4.533333,0.191704);
   H_dPhi_tags_16->SetFillColor(0);
   H_dPhi_tags_16->SetBorderMode(0);
   H_dPhi_tags_16->SetBorderSize(2);
   H_dPhi_tags_16->SetLeftMargin(0.15);
   H_dPhi_tags_16->SetFrameBorderMode(0);
   H_dPhi_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi_stack_6 = new TH1D("VbbHcc_tags_H_dPhi_stack_6","",120,0,4);
   VbbHcc_tags_H_dPhi_stack_6->SetBinContent(0,0.7079393);
   VbbHcc_tags_H_dPhi_stack_6->SetBinContent(5,0.1440206);
   VbbHcc_tags_H_dPhi_stack_6->SetBinContent(8,0.1552273);
   VbbHcc_tags_H_dPhi_stack_6->SetBinContent(11,0.1622891);
   VbbHcc_tags_H_dPhi_stack_6->SetBinContent(47,0.1587488);
   VbbHcc_tags_H_dPhi_stack_6->SetBinContent(54,0.1344897);
   VbbHcc_tags_H_dPhi_stack_6->SetBinContent(89,0.08576627);
   VbbHcc_tags_H_dPhi_stack_6->SetBinError(0,0.3169897);
   VbbHcc_tags_H_dPhi_stack_6->SetBinError(5,0.1440206);
   VbbHcc_tags_H_dPhi_stack_6->SetBinError(8,0.1552273);
   VbbHcc_tags_H_dPhi_stack_6->SetBinError(11,0.1622891);
   VbbHcc_tags_H_dPhi_stack_6->SetBinError(47,0.1587488);
   VbbHcc_tags_H_dPhi_stack_6->SetBinError(54,0.1344897);
   VbbHcc_tags_H_dPhi_stack_6->SetBinError(89,0.08576627);
   VbbHcc_tags_H_dPhi_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dPhi_stack_6->SetFillColor(ci);
   VbbHcc_tags_H_dPhi_stack_6->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_tags_H_dPhi_stack_6->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_H_dPhi_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dPhi_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_tags_16->Modified();
   H_dPhi_tags_16->cd();
   H_dPhi_tags_16->SetSelected(H_dPhi_tags_16);
}
