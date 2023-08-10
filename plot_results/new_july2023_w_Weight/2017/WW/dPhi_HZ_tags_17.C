void dPhi_HZ_tags_17()
{
//=========Macro generated from canvas: dPhi_HZ_tags_17/dPhi_HZ_tags_17
//=========  (Thu Aug 10 12:23:22 2023) by ROOT version 6.14/09
   TCanvas *dPhi_HZ_tags_17 = new TCanvas("dPhi_HZ_tags_17", "dPhi_HZ_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_tags_17->SetHighLightColor(2);
   dPhi_HZ_tags_17->Range(-5.6,-0.05228626,5.066667,0.4705763);
   dPhi_HZ_tags_17->SetFillColor(0);
   dPhi_HZ_tags_17->SetBorderMode(0);
   dPhi_HZ_tags_17->SetBorderSize(2);
   dPhi_HZ_tags_17->SetLeftMargin(0.15);
   dPhi_HZ_tags_17->SetFrameBorderMode(0);
   dPhi_HZ_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dPhi_HZ_stack_6 = new TH1D("VbbHcc_tags_dPhi_HZ_stack_6","",480,-4,4);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(207,0.3983715);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(214,0.268632);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(231,0.2466832);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(264,0.3402984);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinContent(359,0.3608682);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(207,0.3983715);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(214,0.268632);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(231,0.2466832);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(264,0.3402984);
   VbbHcc_tags_dPhi_HZ_stack_6->SetBinError(359,0.3608682);
   VbbHcc_tags_dPhi_HZ_stack_6->SetEntries(5);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_tags_17->Modified();
   dPhi_HZ_tags_17->cd();
   dPhi_HZ_tags_17->SetSelected(dPhi_HZ_tags_17);
}
