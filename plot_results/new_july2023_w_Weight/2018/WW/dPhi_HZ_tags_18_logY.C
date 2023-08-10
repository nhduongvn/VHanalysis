void dPhi_HZ_tags_18_logY()
{
//=========Macro generated from canvas: dPhi_HZ_tags_18/dPhi_HZ_tags_18
//=========  (Thu Aug 10 12:20:09 2023) by ROOT version 6.14/09
   TCanvas *dPhi_HZ_tags_18 = new TCanvas("dPhi_HZ_tags_18", "dPhi_HZ_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_tags_18->SetHighLightColor(2);
   dPhi_HZ_tags_18->Range(-5.6,-0.830895,5.066667,0.2001845);
   dPhi_HZ_tags_18->SetFillColor(0);
   dPhi_HZ_tags_18->SetBorderMode(0);
   dPhi_HZ_tags_18->SetBorderSize(2);
   dPhi_HZ_tags_18->SetLogy();
   dPhi_HZ_tags_18->SetLeftMargin(0.15);
   dPhi_HZ_tags_18->SetFrameBorderMode(0);
   dPhi_HZ_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dPhi_HZ_stack_6 = new TH1D("VbbHcc_tags_dPhi_HZ_stack_6","",480,-4,4);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(104,0.4921557);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(208,0.5029805);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(225,0.6599753);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(381,0.3743199);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(104,0.4921557);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(208,0.5029805);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(225,0.6599753);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(381,0.3743199);
   VbbHcc_tags_dPhi_HZ_stack_6->SetEntries(4);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_tags_18->Modified();
   dPhi_HZ_tags_18->cd();
   dPhi_HZ_tags_18->SetSelected(dPhi_HZ_tags_18);
}
