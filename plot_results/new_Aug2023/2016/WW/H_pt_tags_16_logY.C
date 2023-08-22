void H_pt_tags_16_logY()
{
//=========Macro generated from canvas: H_pt_tags_16/H_pt_tags_16
//=========  (Tue Aug 22 09:15:59 2023) by ROOT version 6.14/09
   TCanvas *H_pt_tags_16 = new TCanvas("H_pt_tags_16", "H_pt_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_tags_16->SetHighLightColor(2);
   H_pt_tags_16->Range(-400,-1.51026,2266.667,-0.4953302);
   H_pt_tags_16->SetFillColor(0);
   H_pt_tags_16->SetBorderMode(0);
   H_pt_tags_16->SetBorderSize(2);
   H_pt_tags_16->SetLogy();
   H_pt_tags_16->SetLeftMargin(0.15);
   H_pt_tags_16->SetFrameBorderMode(0);
   H_pt_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_pt_stack_6 = new TH1D("VbbHcc_tags_H_pt_stack_6","",1000,0,2000);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(31,0.1173155);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(46,0.1152503);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(70,0.1294336);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(106,0.1142782);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(147,0.1195687);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(151,0.1297649);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(159,0.1234178);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(201,0.1243737);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(203,0.1335451);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(239,0.07803031);
   VbbHcc_tags_H_pt_stack_6->SetBinError(31,0.1173155);
   VbbHcc_tags_H_pt_stack_6->SetBinError(46,0.1152503);
   VbbHcc_tags_H_pt_stack_6->SetBinError(70,0.1294336);
   VbbHcc_tags_H_pt_stack_6->SetBinError(106,0.1142782);
   VbbHcc_tags_H_pt_stack_6->SetBinError(147,0.1195687);
   VbbHcc_tags_H_pt_stack_6->SetBinError(151,0.1297649);
   VbbHcc_tags_H_pt_stack_6->SetBinError(159,0.1234178);
   VbbHcc_tags_H_pt_stack_6->SetBinError(201,0.1243737);
   VbbHcc_tags_H_pt_stack_6->SetBinError(203,0.1335451);
   VbbHcc_tags_H_pt_stack_6->SetBinError(239,0.07803031);
   VbbHcc_tags_H_pt_stack_6->SetEntries(10);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_16->Modified();
   H_pt_tags_16->cd();
   H_pt_tags_16->SetSelected(H_pt_tags_16);
}
