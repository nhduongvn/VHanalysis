void Z_jetmass_noJEC_both_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_16/Z_jetmass_noJEC_both_16
//=========  (Thu Aug 10 12:22:07 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_16 = new TCanvas("Z_jetmass_noJEC_both_16", "Z_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_16->SetHighLightColor(2);
   Z_jetmass_noJEC_both_16->Range(-60,-3.097723,340,-1.056684);
   Z_jetmass_noJEC_both_16->SetFillColor(0);
   Z_jetmass_noJEC_both_16->SetBorderMode(0);
   Z_jetmass_noJEC_both_16->SetBorderSize(2);
   Z_jetmass_noJEC_both_16->SetLogy();
   Z_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(4,0.00899818);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(5,0.01962373);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(6,0.02895098);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(7,0.01742636);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(8,0.006035873);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(9,0.002909221);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(10,0.00601761);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(11,0.003125658);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(13,0.00612492);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(23,0.002928512);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(37,0.002555119);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(4,0.005206249);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(5,0.007452142);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(6,0.009167755);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(7,0.007115176);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(8,0.004277377);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(9,0.002909221);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(10,0.004256267);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(11,0.003125658);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(13,0.004336391);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(23,0.002928512);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(37,0.002555119);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_16->Modified();
   Z_jetmass_noJEC_both_16->cd();
   Z_jetmass_noJEC_both_16->SetSelected(Z_jetmass_noJEC_both_16);
}
