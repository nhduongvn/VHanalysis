void Z_pt_tags_17()
{
//=========Macro generated from canvas: Z_pt_tags_17/Z_pt_tags_17
//=========  (Thu Aug 10 12:27:32 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_tags_17 = new TCanvas("Z_pt_tags_17", "Z_pt_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_tags_17->SetHighLightColor(2);
   Z_pt_tags_17->Range(-400,-0.0413839,2266.667,0.3724551);
   Z_pt_tags_17->SetFillColor(0);
   Z_pt_tags_17->SetBorderMode(0);
   Z_pt_tags_17->SetBorderSize(2);
   Z_pt_tags_17->SetLeftMargin(0.15);
   Z_pt_tags_17->SetFrameBorderMode(0);
   Z_pt_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_pt_stack_6 = new TH1D("VbbHcc_tags_Z_pt_stack_6","",1000,0,2000);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(40,0.3153059);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(56,0.3153059);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(97,0.3153059);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(99,0.3153059);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(212,0.3153059);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(40,0.3153059);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(56,0.3153059);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(97,0.3153059);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(99,0.3153059);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(212,0.3153059);
   VbbHcc_tags_Z_pt_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_pt_stack_6->SetFillColor(ci);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetRange(1,1000);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_17->Modified();
   Z_pt_tags_17->cd();
   Z_pt_tags_17->SetSelected(Z_pt_tags_17);
}
