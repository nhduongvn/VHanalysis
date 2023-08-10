void H_dR_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Thu Aug 10 12:20:03 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.2,-1.291563,6.8,-0.1361325);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLogy();
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,0.139529);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(6,0.1552273);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(9,0.1445668);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(12,0.1344897);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(13,0.1333553);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(15,0.2480554);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(16,0.2956484);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,0.1440206);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(20,0.1535887);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,0.139529);
   VbbHcc_tags_H_dR_stack_6->SetBinError(6,0.1552273);
   VbbHcc_tags_H_dR_stack_6->SetBinError(9,0.1445668);
   VbbHcc_tags_H_dR_stack_6->SetBinError(12,0.1344897);
   VbbHcc_tags_H_dR_stack_6->SetBinError(13,0.1333553);
   VbbHcc_tags_H_dR_stack_6->SetBinError(15,0.1835582);
   VbbHcc_tags_H_dR_stack_6->SetBinError(16,0.2096251);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,0.1440206);
   VbbHcc_tags_H_dR_stack_6->SetBinError(20,0.1535887);
   VbbHcc_tags_H_dR_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
