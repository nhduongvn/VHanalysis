void H_pt_tags_18_logY()
{
//=========Macro generated from canvas: H_pt_tags_18/H_pt_tags_18
//=========  (Thu Aug 10 12:20:00 2023) by ROOT version 6.14/09
   TCanvas *H_pt_tags_18 = new TCanvas("H_pt_tags_18", "H_pt_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_tags_18->SetHighLightColor(2);
   H_pt_tags_18->Range(-400,-0.8616495,2266.667,0.4769745);
   H_pt_tags_18->SetFillColor(0);
   H_pt_tags_18->SetBorderMode(0);
   H_pt_tags_18->SetBorderSize(2);
   H_pt_tags_18->SetLogy();
   H_pt_tags_18->SetLeftMargin(0.15);
   H_pt_tags_18->SetFrameBorderMode(0);
   H_pt_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_pt_stack_6 = new TH1D("VbbHcc_tags_H_pt_stack_6","",1000,0,2000);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(89,1.162956);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(90,0.3743199);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(116,0.4921557);
   VbbHcc_tags_H_pt_stack_6->SetBinError(89,0.8297932);
   VbbHcc_tags_H_pt_stack_6->SetBinError(90,0.3743199);
   VbbHcc_tags_H_pt_stack_6->SetBinError(116,0.4921557);
   VbbHcc_tags_H_pt_stack_6->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_pt_stack_6->SetFillColor(ci);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetRange(1,1000);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_18->Modified();
   H_pt_tags_18->cd();
   H_pt_tags_18->SetSelected(H_pt_tags_18);
}
