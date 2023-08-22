void Z_jetmass_JEC_both_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_18/Z_jetmass_JEC_both_18
//=========  (Tue Aug 22 09:23:50 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_18 = new TCanvas("Z_jetmass_JEC_both_18", "Z_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_18->SetHighLightColor(2);
   Z_jetmass_JEC_both_18->Range(-60,-0.002567486,340,0.02310737);
   Z_jetmass_JEC_both_18->SetFillColor(0);
   Z_jetmass_JEC_both_18->SetBorderMode(0);
   Z_jetmass_JEC_both_18->SetBorderSize(2);
   Z_jetmass_JEC_both_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(3,0.0006110697);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(4,0.003068417);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(5,0.01527994);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(6,0.0195618);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(7,0.01692643);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(8,0.01331374);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(9,0.01069501);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(10,0.009298989);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(11,0.003027789);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(12,0.003036559);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(13,0.00136307);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(14,0.001319082);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(15,0.001568672);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(16,0.0002955286);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(17,0.0007985744);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(18,0.0002955286);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(19,0.0006852623);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(20,0.0002063381);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0006485962);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(24,0.0003077663);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(27,0.0002942409);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(3,0.0006110697);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(4,0.001038304);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(5,0.002268454);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(6,0.002543254);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(7,0.002331252);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(8,0.00200766);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(9,0.001879853);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(10,0.001746031);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(11,0.0009750223);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(12,0.000982305);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(13,0.0006127193);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(14,0.00066456);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(15,0.0007113909);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(16,0.0002955286);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(17,0.0005646843);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(18,0.0002955286);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(19,0.0004891639);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(20,0.0002063381);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(21,0.0004608173);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(24,0.0003077663);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(27,0.0002942409);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetEntries(330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_18->Modified();
   Z_jetmass_JEC_both_18->cd();
   Z_jetmass_JEC_both_18->SetSelected(Z_jetmass_JEC_both_18);
}
