void Z_jetmass_noJEC_both_17_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_17/Z_jetmass_noJEC_both_17
//=========  (Tue Aug 22 09:19:12 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_17 = new TCanvas("Z_jetmass_noJEC_both_17", "Z_jetmass_noJEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_17->SetHighLightColor(2);
   Z_jetmass_noJEC_both_17->Range(-60,-3.495717,340,-1.070183);
   Z_jetmass_noJEC_both_17->SetFillColor(0);
   Z_jetmass_noJEC_both_17->SetBorderMode(0);
   Z_jetmass_noJEC_both_17->SetBorderSize(2);
   Z_jetmass_noJEC_both_17->SetLogy();
   Z_jetmass_noJEC_both_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(3,0.001602781);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(4,0.01217085);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(5,0.02438046);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(6,0.02568707);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(7,0.02447866);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(8,0.01723151);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(9,0.01040557);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(10,0.005216311);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(11,0.001144273);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(12,0.006052829);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(13,0.001535121);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(15,0.003820023);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(17,0.00111652);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(18,0.002933097);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(19,0.00174143);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(21,0.001421741);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(25,0.00162484);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(26,0.002176473);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(28,0.001898466);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(3,0.001602781);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(4,0.004323247);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(5,0.006159666);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(6,0.00628753);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(7,0.006267098);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(8,0.005407121);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(9,0.004148421);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(10,0.003020962);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(11,0.001144273);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(12,0.003070727);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(13,0.001535121);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(15,0.002721198);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(17,0.00111652);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(18,0.002142305);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(19,0.00174143);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(21,0.001421741);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(25,0.00162484);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(26,0.002176473);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(28,0.001898466);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetEntries(95);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_17->Modified();
   Z_jetmass_noJEC_both_17->cd();
   Z_jetmass_noJEC_both_17->SetSelected(Z_jetmass_noJEC_both_17);
}
