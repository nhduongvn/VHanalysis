void dR_HZ_both_18_logY()
{
//=========Macro generated from canvas: dR_HZ_both_18/dR_HZ_both_18
//=========  (Tue Aug 22 09:18:32 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_both_18 = new TCanvas("dR_HZ_both_18", "dR_HZ_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_18->SetHighLightColor(2);
   dR_HZ_both_18->Range(-1.2,-0.762415,6.8,0.1644159);
   dR_HZ_both_18->SetFillColor(0);
   dR_HZ_both_18->SetBorderMode(0);
   dR_HZ_both_18->SetBorderSize(2);
   dR_HZ_both_18->SetLogy();
   dR_HZ_both_18->SetLeftMargin(0.15);
   dR_HZ_both_18->SetFrameBorderMode(0);
   dR_HZ_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ_stack_6 = new TH1D("VbbHcc_both_dR_HZ_stack_6","",60,0,6);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(31,0.6225638);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(40,0.4278565);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(31,0.6225638);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(40,0.4278565);
   VbbHcc_both_dR_HZ_stack_6->SetEntries(2);

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
