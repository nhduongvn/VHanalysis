void dR_HZ_tags_18_logY()
{
//=========Macro generated from canvas: dR_HZ_tags_18/dR_HZ_tags_18
//=========  (Thu Aug 10 12:20:10 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_tags_18 = new TCanvas("dR_HZ_tags_18", "dR_HZ_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tags_18->SetHighLightColor(2);
   dR_HZ_tags_18->Range(-1.2,-0.830895,6.8,0.2001845);
   dR_HZ_tags_18->SetFillColor(0);
   dR_HZ_tags_18->SetBorderMode(0);
   dR_HZ_tags_18->SetBorderSize(2);
   dR_HZ_tags_18->SetLogy();
   dR_HZ_tags_18->SetLeftMargin(0.15);
   dR_HZ_tags_18->SetFrameBorderMode(0);
   dR_HZ_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dR_HZ_stack_6 = new TH1D("VbbHcc_tags_dR_HZ_stack_6","",60,0,6);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(31,0.4921557);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(33,0.6599753);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(35,0.5029805);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(59,0.3743199);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(31,0.4921557);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(33,0.6599753);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(35,0.5029805);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(59,0.3743199);
   VbbHcc_tags_dR_HZ_stack_6->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_dR_HZ_stack_6->SetFillColor(ci);
   VbbHcc_tags_dR_HZ_stack_6->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_tags_dR_HZ_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_dR_HZ_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_dR_HZ_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_tags_18->Modified();
   dR_HZ_tags_18->cd();
   dR_HZ_tags_18->SetSelected(dR_HZ_tags_18);
}
