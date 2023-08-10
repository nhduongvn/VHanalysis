void Z_pt_both_18_logY()
{
//=========Macro generated from canvas: Z_pt_both_18/Z_pt_both_18
//=========  (Thu Aug 10 10:42:57 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_both_18 = new TCanvas("Z_pt_both_18", "Z_pt_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_both_18->SetHighLightColor(2);
   Z_pt_both_18->Range(-400,-1.029476,2266.667,0.222249);
   Z_pt_both_18->SetFillColor(0);
   Z_pt_both_18->SetBorderMode(0);
   Z_pt_both_18->SetBorderSize(2);
   Z_pt_both_18->SetLogy();
   Z_pt_both_18->SetLeftMargin(0.15);
   Z_pt_both_18->SetFrameBorderMode(0);
   Z_pt_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_pt_stack_6 = new TH1D("VbbHcc_both_Z_pt_stack_6","",1000,0,2000);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(72,0.3743199);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(73,0.2493026);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(88,0.6599753);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(95,0.5029805);
   VbbHcc_both_Z_pt_stack_6->SetBinContent(164,0.4921557);
   VbbHcc_both_Z_pt_stack_6->SetBinError(72,0.3743199);
   VbbHcc_both_Z_pt_stack_6->SetBinError(73,0.2493026);
   VbbHcc_both_Z_pt_stack_6->SetBinError(88,0.6599753);
   VbbHcc_both_Z_pt_stack_6->SetBinError(95,0.5029805);
   VbbHcc_both_Z_pt_stack_6->SetBinError(164,0.4921557);
   VbbHcc_both_Z_pt_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_pt_stack_6->SetFillColor(ci);
   VbbHcc_both_Z_pt_stack_6->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VbbHcc_both_Z_pt_stack_6->GetXaxis()->SetRange(1,1000);
   VbbHcc_both_Z_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_18->Modified();
   Z_pt_both_18->cd();
   Z_pt_both_18->SetSelected(Z_pt_both_18);
}
