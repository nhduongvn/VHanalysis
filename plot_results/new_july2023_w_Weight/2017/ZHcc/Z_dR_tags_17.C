void Z_dR_tags_17()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Thu Aug 10 12:23:16 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.2,-0.004720908,6.8,0.04248817);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLeftMargin(0.15);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.01927856);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.01475258);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.03596882);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.01650264);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.007448782);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.009467138);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.00469513);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.00200821);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.01499839);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.003149461);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.001550858);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.00397434);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.002939898);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.001918637);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.002008212);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.001696335);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.0004027325);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.001999969);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(25,0.001948216);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(26,0.004058264);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.001355193);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(28,0.002416403);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(31,0.001370852);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.005874906);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.005312084);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.008328396);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.005558325);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.003438879);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.004280197);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.002773748);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.00200821);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.005346875);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.002275106);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.001550858);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.002833667);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.002103791);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.001918637);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.002008212);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.001696335);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.0004027325);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.001999969);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(25,0.001948216);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(26,0.002872144);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.001355193);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(28,0.002416403);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(31,0.001370852);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(87);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
